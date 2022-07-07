// g++ std-atoi.cpp -o a.out
#include <stdio.h>
#include <cstdlib>

int main() {
    char buffer[4] = "987";
    int integer = std::atoi(buffer);
    printf("str to int: %d\n",integer);
    return 0;
}
