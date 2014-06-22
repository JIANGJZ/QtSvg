#ifndef SVG_H
#define SVG_H
#include <QString>
#include <QFile>

#include "parser/svgParser.h"
#include "render/svgRenderEngine.h"

typedef enum svg_status {
    SVG_STATUS_SUCCEES = 0,
    SVG_STATUS_NO_MEMORY,
    SVG_STATUS_IO_ERROR,
    SVG_STATUS_INVALID_VALUE,
    SVG_STATUS_INVALID_CALL,
    SVG_STATUS_PARSE_ERROR
}svg_status_t;

typedef __uint64_t  size_t;
typedef Svg svg_t;
typedef SVG_P::SvgParser svg_parser_t;
typedef SVG_R::SvgRenderEngine svg_render_engine_t;

class Svg {
public:
    svg_status_t svg_create(svg_t *&svg);
    svg_status_t svg_destroy(svg_t *svg);
    svg_status_t svg_parse(const QString file_name);
    svg_status_t svg_parse_file(QFile *file);
    svg_status_t svg_parse_buffer(const QString buf, size_t count);
    svg_status_t svg_parse_chunk_begin();
    svg_status_t svg_parse_chunk(const QString buf, size_t count);
    svg_status_t svg_parse_chunk_end();
private:
    svg_status_t _svg_init(svg_t* svg);
    svg_status_t _svg_deinit(svg_t* svg);
    QString m_dir_name;
    svg_parser_t parser;
    svg_render_engine_t *engine;
};

#endif // SVG_H
