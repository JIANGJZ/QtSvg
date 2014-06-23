#ifndef SVG_ELEMENT_H
#define SVG_ELEMENT_H
#include "svg.h"

//typedef in "svgElement.h"
typedef SvgTransform svg_transform_t;
typedef SvgStyle svg_style_t;
typedef SvgElement svg_element_t;

class SvgTransform {
private:
    double matrix[3][2];
};

class SvgStyle {
private:
    svg_t *doc;
};


typedef enum svg_element_type {
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
}svg_element_type_t;


class SvgElement {
public:
    svg_status_t svg_element_create(svg_element_t *&element, svg_element_type_t type, svg_element_t *parent, svg_t *doc);
    svg_status_t svg_clone(svg_element_t *other);
    svg_status_t svg_element_destroy();
    virtual svg_status_t svg_element_render(svg_render_engine_t *engine, void *closure);
private:
    virtual svg_status_t _svg_element_init(svg_element_type_t type, svg_element_t *parent, svg_t *doc);
    virtual svg_status_t _svg_element_deinit();
    virtual svg_status_t _svg_element_init_copy(svg_element_t *other);
    svg_element_t *parent;
    svg_t *doc;
    svg_style_t style;
    svg_transform_t transform;
    QString id;
    svg_element_type_t type;
};

#endif // SVG_ELEMENT_H
