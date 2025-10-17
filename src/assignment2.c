#include <stdio.h>

struct OriginalStruct{
    char letterChar;
    int numberInt;
    double valueDouble;
};

struct ReorderedStruct{
    double valueDouble;
    int numberInt;
    char letterChar;
};

int main(){
    struct OriginalStruct original;
    struct ReorderedStruct reordered;

    printf("Please check the sizes and addresses of the structs...\n\n");

    printf("Original Struct (char, int, double):\n");
    
    printf("Size of OriginalStruct -> %zu bytes\n", sizeof(original));
    
    printf("Address of letterChar -> %p\n", (void *)&original.letterChar);
    
    printf("Address of numberInt -> %p\n", (void *)&original.numberInt);
    
    printf("Address of valueDouble -> %p\n", (void *)&original.valueDouble);

    printf("\nReordered Struct (double, int, char):\n");
    
    printf("Size of ReorderedStruct -> %zu bytes\n", sizeof(reordered));
    
    printf("Address of valueDouble -> %p\n", (void *)&reordered.valueDouble);
    
    printf("Address of numberInt -> %p\n", (void *)&reordered.numberInt);
    
    printf("Address of letterChar -> %p\n", (void *)&reordered.letterChar);

    return 0;
}
