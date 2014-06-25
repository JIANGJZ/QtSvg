#ifndef SVG_ELEMENT_H
#define SVG_ELEMENT_H
#include "svg.h"
#include "render/svgRenderEngine.h"

class Svg;

class SvgTransform {
private:
    double matrix[3][2];
};


class SvgStyle {
private:
    Svg *doc;
};


enum svg_element_type {
    SVG_ELEMENT_TYPE_ROOT,
    SVG_ELEMENT_TYPE_GROUP,
    SVG_ELEMENT_TYPE_DEFS,
    SVG_ELEMENT_TYPE_USE,
    SVG_ELEMENT_TYPE_SYMBOL,
    SVG_ELEMENT_TYPE_PATH,
    SVG_ELEMENT_TYPE_CIRCLE,
    SVG_ELEMENT_TYPE_ELLIPSE,
    SVG_ELEMENT_TYPE_LINE,
    SVG_ELEMENT_TYPE_RECT,
    SVG_ELEMENT_TYPE_TEXT,
    SVG_ELEMENT_TYPE_GRADIENT,
    SVG_ELEMENT_TYPE_GRADIENT_STOP,
    SVG_ELEMENT_TYPE_PATTERN,
    SVG_ELEMENT_TYPE_IMAGE
};
typedef svg_element_type svg_element_type_t;


class SvgElement {
public:
    svg_status_t svg_element_create(SvgElement *&element, svg_element_type type, SvgElement *parent, Svg *doc);
    svg_status_t svg_clone(SvgElement *other);
    svg_status_t svg_element_destroy();
    virtual svg_status_t svg_element_render(SvgRenderEngine *engine, void *closure);
private:
    virtual svg_status_t _svg_element_init(svg_element_type_t type, SvgElement *parent, Svg *doc);
    virtual svg_status_t _svg_element_deinit();
    virtual svg_status_t _svg_element_init_copy(SvgElement *other);
    SvgElement *parent;
    Svg *doc;
    SvgStyle style;
    SvgTransform transform;
    QString id;
    svg_element_type_t type;
};
typedef SvgElement svg_element_t;

#endif // SVG_ELEMENT_H
