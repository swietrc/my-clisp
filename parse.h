#ifdef PARSE_H
#error parse.h already defined
#else
#define PARSE_H
#endif

typedef struct {
    enum { CONSTANT, OPERATOR } 
    typedef union {
        int i;
        char c;
    } Value;
} Token;
