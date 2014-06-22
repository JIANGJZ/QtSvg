#ifndef SVGPARSER_H
#define SVGPARSER_H
#include "svg.h"
namespace  SVG_P {

class SvgParser {
public:
private:
    svg_t *svg;
    __uint32_t unknow_element_deptpth;
    svg_status_t status;
};

}
#endif // SVGPARSER_H
