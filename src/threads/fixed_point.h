#ifndef THREADS_FIXED_POINT_H
#define THREADS_FIXED_POINT_H

#include <stdint.h>

/* Fator de conversão (2^14) */
#define F (1 << 14)

// Macros para operações matemáticas 
#define INT_TO_FLOAT(n) ((n) * (F))
#define FLOAT_TO_INT_ZERO(x) ((x) / (F))
#define FLOAT_TO_INT_NEAREST(x) ((x) >= 0 ? (((x) + (F) / 2) / (F)) : (((x) - (F) / 2) / (F)))
#define ADD_FLOAT(x, y) ((x) + (y))
#define SUB_FLOAT(x, y) ((x) - (y))
#define ADD_FLOAT_INT(x, n) ((x) + (n) * (F))
#define SUB_FLOAT_INT(x, n) ((x) - (n) * (F))
#define MULT_FLOAT(x, y) (((int64_t)(x)) * (y) / (F))
#define MULT_FLOAT_INT(x, n) ((x) * (n))
#define DIV_FLOAT(x, y) (((int64_t)(x)) * (F) / (y))
#define DIV_FLOAT_INT(x, n) ((x) / (n))

#endif /* threads/fixed_point.h */