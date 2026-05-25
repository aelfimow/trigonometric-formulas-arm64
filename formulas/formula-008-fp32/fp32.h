#ifdef fp32_h
#error Already included.
#else
#define fp32_h

using fp32 = float;
static_assert(sizeof(fp32) == 4U);

#endif
