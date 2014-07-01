#ifndef COMMON_H
#define COMMON_H

enum svg_status {
    SVG_STATUS_SUCCEES = 0,
    SVG_STATUS_NO_MEMORY,
    SVG_STATUS_IO_ERROR,
    SVG_STATUS_FILE_NOT_FOUND,
    SVG_STATUS_INVALID_VALUE,
    SVG_STATUS_INVALID_CALL,
    SVG_STATUS_PARSE_ERROR
};
typedef svg_status svg_status_t;

const __uint32_t SVG_PARSE_BUFFER_SIZE = 8 * 1024;

#endif // COMMON_H
