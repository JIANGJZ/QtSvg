#ifndef SVGHASH_H
#define SVGHASH_H

struct SvgHashItem {
    const char* key;
    const void* item;
    __int64_t next;
};

struct SvgArray {
    __int64_t size;
    __int64_t max;
    __int64_t esize;
    char ary[];
};


class SvgXmlHashTable {
public:
    SvgXmlHashTable* svg_xml_hash_create(__uint64_t size);
    void svg_xml_hash_free();
    void svg_xml_hash_lookup();
    void svg_xml_hash_add_entry();
private:
    void* svg_hash_ary_alloc(__int64_t element_size);
    void* svg_hash_ary_alloc_size(__int64_t element_size, __uint64_t size);
    void  svg_hash_ary_free();
    int   svg_hash_ary_reserve(__int64_t max);
    int   svg_hash_ary_resize(__int64_t size);
    int   svg_hash_ary_append(const void* element);

    __int64_t svg_hash_next_prime(__int64_t size);
    __int64_t svg_hash_str_hash(const char* s);
    bool svg_hash_streq(const char* s1, const char* s2);

    int svg_hash_table_realloc(__int64_t size);
    int svg_hash_instert_new(const char* key, const void* item, __int64_t hash);

    SvgArray* m_ary;
    SvgHashItem* m_items;
    __int64_t m_deleted;
    __int64_t m_hash_tbl;
    static const __uint64_t hash_primelist[];
};


#endif // SVGHASH_H
