#ifdef fp80_h
#error Already included.
#else
#define fp80_h

using fp80 = long double;
static_assert(sizeof(fp80) == 8U);

#endif
