#include <stdio.h>

void custom_printf(const char*, ...);

int main() {
    char string[] = "Hello world";
    custom_printf(string);
}

void custom_printf(const char* string, ...) {
    
    while(*string != '\0'){
        putchar(*string);
        string++;
    }

}


