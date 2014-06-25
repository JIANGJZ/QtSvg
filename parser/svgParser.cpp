#include "svgParser.h"

const SvgParser::svg_parser_map_t SvgParser::SVG_PARSER_MAP[ ] = {
    {"a",   {SvgParser::_svg_parser_parse_anchor, NULL}},
    {"svg", {SvgParser::_svg_parser_parse_svg, NULL}},
    {"defs", {SvgParser::_svg_parser_parse_defs, NULL}},
    {"use", {SvgParser::_svg_parser_parse_use, NULL}},
    {"symbol", {SvgParser::_svg_parser_parse_symbol, NULL}},
    {"group", {SvgParser::_svg_parser_parse_group, NULL}},
    {"path", {SvgParser::_svg_parser_parse_path, NULL}},
    {"line", {SvgParser::_svg_parser_parse_line, NULL}},
    {"rect", {SvgParser::_svg_parser_parse_rect, NULL}},
    {"circle", {SvgParser::_svg_parser_parse_circle, NULL}},
    {"ellipse", {SvgParser::_svg_parser_parse_ellipse, NULL}},
    {"polygon", {SvgParser::_svg_parser_parse_polygon, NULL}},
    {"polyline", {SvgParser::_svg_parser_parse_polyline, NULL}},
    {"text", {SvgParser::_svg_parser_parse_text, SvgParser::_svg_parser_parse_text_characters}},
    {"image", {SvgParser::_svg_parser_parse_image, NULL}},
    {"linearGradient", {SvgParser::_svg_parser_parse_linear_gradient, NULL}},
    {"radialGradient", {SvgParser::_svg_parser_parse_radial_gradient, NULL}},
    {"stop", {SvgParser::_svg_parser_parse_gradient_stop, NULL}},
    {"pattern", {SvgParser::_svg_parser_parse_pattern, NULL}}
};

svg_status_t SvgParser::_svg_parser_parse_anchor(const QString *&attribute, svg_element_t *&anchor){
    return SVG_STATUS_SUCCEES;
}

svg_status_t SvgParser::_svg_parser_parse_svg(const QString *&attribute, svg_element_t *&root_element){
    return SVG_STATUS_SUCCEES;
}

svg_status_t SvgParser::_svg_parser_parse_defs(const QString *&attribute, svg_element_t *&defs_element){
    return SVG_STATUS_SUCCEES;
}

svg_status_t SvgParser:: _svg_parser_parse_use(const QString *&attribute, svg_element_t *&use_element){
    return SVG_STATUS_SUCCEES;
}
svg_status_t SvgParser::_svg_parser_parse_symbol(const QString *&attribute, svg_element_t *&symbol_element){
    return SVG_STATUS_SUCCEES;
}

svg_status_t SvgParser::_svg_parser_parse_group(const QString *&attribute, svg_element_t *&group_element){
    return SVG_STATUS_SUCCEES;
}

svg_status_t SvgParser::_svg_parser_parse_path(const QString *&attribute, svg_element_t *&path_element){
    return SVG_STATUS_SUCCEES;
}

svg_status_t SvgParser::_svg_parser_parse_line(const QString *&attribute, svg_element_t *&line_element){
    return SVG_STATUS_SUCCEES;
}

svg_status_t SvgParser::_svg_parser_parse_rect(const QString *&attribute, svg_element_t *&rect_element){
    return SVG_STATUS_SUCCEES;
}

svg_status_t SvgParser::_svg_parser_parse_circle(const QString *&attribute, svg_element_t *&circle_element){
    return SVG_STATUS_SUCCEES;
}

svg_status_t SvgParser::_svg_parser_parse_ellipse(const QString *&attribute, svg_element_t *&ellipse_element){
    return SVG_STATUS_SUCCEES;
}

svg_status_t SvgParser::_svg_parser_parse_polygon(const QString *&attribute, svg_element_t *&polygon_element){
    return SVG_STATUS_SUCCEES;
}

svg_status_t SvgParser::_svg_parser_parse_polyline(const QString *&attribute, svg_element_t *&polyline_element){
    return SVG_STATUS_SUCCEES;
}

svg_status_t SvgParser::_svg_parser_parse_text(const QString *&attribute, svg_element_t *&text_element){
    return SVG_STATUS_SUCCEES;
}

svg_status_t SvgParser::_svg_parser_parse_image(const QString *&attribute, svg_element_t *&group_element){
    return SVG_STATUS_SUCCEES;
}

svg_status_t SvgParser::_svg_parser_parse_linear_gradient(const QString *&attribute, svg_element_t *&linear_gradient_element){
    return SVG_STATUS_SUCCEES;
}

svg_status_t SvgParser::_svg_parser_parse_radial_gradient(const QString *&attribute, svg_element_t *&radial_gradient_element){
    return SVG_STATUS_SUCCEES;
}

svg_status_t SvgParser::_svg_parser_parse_gradient_stop(const QString *&attribute, svg_element_t *&gradient_stop_element){
    return SVG_STATUS_SUCCEES;
}

svg_status_t SvgParser::_svg_parser_parse_pattern(const QString *&attribute, svg_element_t *&pattern_element){
    return SVG_STATUS_SUCCEES;
}

svg_status_t SvgParser::_svg_parser_parse_text_characters (const QString ch, __uint32_t len){
    return SVG_STATUS_SUCCEES;
}

