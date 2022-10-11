#include <stdio.h>
#include <stdint.h>

int main() {
    // Integer
    // Could separate to "short, int, long, long long"
    // On different compiler, the capacity are not the same. For example, on Windows's MinGW-w64 "int and long" are 4 bytes. On Ubuntu's gcc "int and long" are 8 bytes.
    // In C11 standard, it is recommands to inlcude "<stdint.h>" headfile, using "int8_t, int16_t, int32_t, int64_t, uint8_t, uint16_t, uint32_t, uint64_t" to avoid the dependency of OS.
    printf("The size of \t(bytes)\n");
    printf("int\t\t%lu\n", sizeof(int));
    printf("uint8_t\t\t%lu\n", sizeof(uint8_t));
    printf("uint32_t\t%lu\n", sizeof(uint32_t));
    printf("uint_64_t\t%lu\n", sizeof(uint64_t));
    printf("long\t\t%lu\n", sizeof(long int));
    printf("long long\t%lu\n\n", sizeof(long long int));


    // Float
    // Could separate to "float, double, long double"
    printf("float\t\t%lu\n", sizeof(float));
    printf("double\t\t%lu\n", sizeof(double));
    printf("long double\t%lu\n\n", sizeof(long double));

    // Char
    // 限定sizeof(char) 要是1，但沒有規定什麼是字元資料，因此小範圍的整數也可以
    // C89's "wchar_t", C11's "char16_t, char32_t" are define in "<unchar.h>". They are related with char type
    printf("char\t\t%lu\n\n", sizeof(char));


    // To know the size of any data type, we could use the function "sizeof(datatype)".



    return 0;
}