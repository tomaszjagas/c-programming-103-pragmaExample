#include <stdio.h>

#pragma GCC poison printf
#pragma GCC warning "hello"
#pragma GCC error "what"
#pragma message "ok"

int main() {
    printf("Hello.");

    return 0;
}