#ifdef fp64_h
#error Already included.
#else
#define fp64_h

using fp64 = double;
static_assert(sizeof(fp64) == 8U);

#endif
