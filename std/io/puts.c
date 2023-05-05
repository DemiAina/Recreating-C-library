#include <stdio.h>

void custom_puts(const char*);

int main(){
    
    char string[] = "Hello World";
    char string2[] = "Please";
    custom_puts(string);
    custom_puts(string2);
}

void custom_puts(const char *string) {
    
    while(*string != '\0'){
        putchar(*string);
        string++;
    }
    putchar('\n');
} 
