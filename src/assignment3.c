#include <stdio.h>

#pragma pack(push, 0)

struct DefaultStruct{
    char letterChar;
    int numberInt;
    double valueDouble;
};

#pragma pack(pop)

#pragma pack(push, 1)

struct PackedStructOne{
    char letterChar;
    int numberInt;
    double valueDouble;
};

#pragma pack(pop)

#pragma pack(push, 2)

struct PackedStructTwo{
    char letterChar;
    int numberInt;
    double valueDouble;
};

#pragma pack(pop)

#pragma pack(push, 4)

struct PackedStructFour{
    char letterChar;
    int numberInt;
    double valueDouble;
};

#pragma pack(pop)

int main(){
    struct DefaultStruct defaultStruct;
    struct PackedStructOne packedOne;
    struct PackedStructTwo packedTwo;
    struct PackedStructFour packedFour;

    printf("Please check the sizes and addresses of the structs...\n\n");

    printf("Default Alignment (No #pragma pack):\n");
    printf("Size of DefaultStruct -> %zu bytes\n", sizeof(defaultStruct));
    printf("Address of letterChar -> %p\n", (void *)&defaultStruct.letterChar);
    printf("Address of numberInt -> %p\n", (void *)&defaultStruct.numberInt);
    printf("Address of valueDouble -> %p\n", (void *)&defaultStruct.valueDouble);

    printf("\n#With pragma pack(1):\n");
    printf("The size of PackedStructOne -> %zu bytes\n", sizeof(packedOne));
    printf("The address of letterChar -> %p\n", (void *)&packedOne.letterChar);
    printf("The address of numberInt -> %p\n", (void *)&packedOne.numberInt);
    printf("The address of valueDouble -> %p\n", (void *)&packedOne.valueDouble);

    printf("\n#With pragma pack(2):\n");
    printf("The size of PackedStructTwo -> %zu bytes\n", sizeof(packedTwo));
    printf("Address of letterChar -> %p\n", (void *)&packedTwo.letterChar);
    printf("Address of numberInt -> %p\n", (void *)&packedTwo.numberInt);
    printf("Address of valueDouble -> %p\n", (void *)&packedTwo.valueDouble);

    printf("\n#With #pragma pack(4):\n");
    printf("The size of PackedStructFour -> %zu bytes\n", sizeof(packedFour));
    printf("The address of letterChar -> %p\n", (void *)&packedFour.letterChar);
    printf("The address of numberInt -> %p\n", (void *)&packedFour.numberInt);
    printf("The address of valueDouble -> %p\n", (void *)&packedFour.valueDouble);

    return 0;
}
