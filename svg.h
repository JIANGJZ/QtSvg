#ifndef SVG_H
#define SVG_H
#include <QString>
#include <QFile>

#include "common.h"
#include "parser/svgParser.h"
#include "render/svgRenderEngine.h"
#include "svgElement.h"

class SvgElement;
class SvgParser;
//typedef in "svg.h"

class Svg {
public:
    svg_status_t svg_create(Svg *&svg);
    svg_status_t svg_destroy(Svg *svg);
    svg_status_t svg_parse(const QString file_name);
private:
    svg_status_t _svg_parse_file(QFile *file);
    svg_status_t _svg_parse_buffer(const QString buf, size_t count);
    svg_status_t _svg_parse_chunk_begin();
    svg_status_t _svg_parse_chunk(const QString buf, size_t count);
    svg_status_t _svg_parse_chunk_end();
    svg_status_t _svg_init(Svg* svg);
    svg_status_t _svg_deinit(Svg* svg);

    QString m_dir_name;
    SvgParser *parser;
    SvgRenderEngine *engine;
    SvgElement *root_element;
};
typedef Svg svg_t;

#endif // SVG_H
