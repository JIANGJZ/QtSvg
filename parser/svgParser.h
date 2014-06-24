#ifndef SVGPARSER_H
#define SVGPARSER_H
#include <QString>
#include "svg.h"
namespace  SVG_P {

class SvgParser {
public:
    svg_status_t svg_parser_init();
    svg_status_t svg_parser_deinit();
    svg_status_t svg_parser_begin();
    svg_status_t svg_parser_parse_chunk();
    svg_status_t svg_parser_end();
private:
    void _svg_parser_sax_start_element(void *closure, const QString name, const QString attr);
    void _svg_parser_sax_end_element(void *closure, const QString name);
    void _svg_parser_sax_character(void *closure, const QString ch, __uint32_t len);

    svg_status_t _svg_parser_parse_svg(const QString *attribute, svg_element_t *&root_element);
    svg_status_t _svg_parser_parse_defs(const QString *attribute, svg_element_t *&defs_element);
    svg_status_t _svg_parser_parse_use(const QString *attribute, svg_element_t *&use_element);
    svg_status_t _svg_parser_parse_symbol(const QString *attribute, svg_element_t *&symbol_element);
    svg_status_t _svg_parser_parse_group(const QString *attribute, svg_element_t *&group_element);
    svg_status_t _svg_parser_parse_path(const QString *attribute, svg_element_t *&path_element);
    svg_status_t _svg_parser_parse_line(const QString *attribute, svg_element_t *&line_element);
    svg_status_t _svg_parser_parse_rect(const QString *attribute, svg_element_t *&rect_element);
    svg_status_t _svg_parser_parse_circle(const QString *attribute, svg_element_t *&circle_element);
    svg_status_t _svg_parser_parse_ellipse(const QString *attribute, svg_element_t *&ellipse_element);
    svg_status_t _svg_parser_parse_polygon(const QString *attribute, svg_element_t *&polygon_element);
    svg_status_t _svg_parser_parse_polyline(const QString *attribute, svg_element_t *&polyline_element);
    svg_status_t _svg_parser_parse_text(const QString *attribute, svg_element_t *&text_element);
    svg_status_t _svg_parser_parse_image(const QString *attribute, svg_element_t *&group_element);
    svg_status_t _svg_parser_parse_linear_gradient(const QString *attribute, svg_element_t *&linear_gradient_element);
    svg_status_t _svg_parser_parse_radial_gradient(const QString *attribute, svg_element_t *&radial_gradient_element);
    svg_status_t _svg_parser_parse_gradient_stop(const QString *attribute, svg_element_t *&gradient_stop_element);
    svg_status_t _svg_parser_parse_pattern(const QString *attribute, svg_element_t *&pattern_element);
    svg_status_t _svg_parser_parse_text_characters (const QString ch, __uint32_t len);


    svg_status_t _svg_parser_new_root_element(svg_element_t *&svg_root);
    svg_status_t _svg_parser_new_group_element(svg_element_t *&group_element, svg_element_type_t type);
    svg_status_t _svg_parser_new_leaf_element(svg_element_t *&child_element, svg_element_type_t type);
    svg_t *svg;
    __uint32_t unknow_element_depth;
    svg_status_t status;

    typedef svg_status_t (svg_parser_parse_element_t) (const QString *&attribute, svg_element_t *&element_ret);
    typedef svg_status_t (svg_parser_parse_characters_t) (const QString ch, __uint32_t len);

    typedef struct svg_parser_cb {
        svg_parser_parse_element_t *parse_element;
        svg_parser_parse_characters_t *parse_character;
    }svg_parser_cb_t;



};

}
#endif // SVGPARSER_H
