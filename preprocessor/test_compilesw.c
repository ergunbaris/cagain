#include <stdio.h>

#if defined(__LP64__) || defined(_LP64)
typedef unsigned long long ull_t;
#define ULL_FORMAT_SPECIFIER "llu"
#else
typedef unsigned int ull_t;
#define ULL_FORMAT_SPECIFIER "u"
#endif

int main()
{
    ull_t sample = 4000;
    printf("number is %" ULL_FORMAT_SPECIFIER " sizeof=%lu\n",sample,sizeof(sample));
    return 0;
}
