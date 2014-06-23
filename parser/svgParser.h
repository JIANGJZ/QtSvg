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
    svg_t *svg;
    __uint32_t unknow_element_depth;
    svg_status_t status;
};

}
#endif // SVGPARSER_H
