#include <stdio.h>

int main(){
	int numberInt;
	char letterChar;
	double valueDouble;
	short smallNumber;

	printf("Please check the sizes of the data types...\n");
    	
	printf("Size of the integer (int) -> %zu bytes\n", sizeof(numberInt));
    	
	printf("Size of the character (char) -> %zu bytes\n", sizeof(letterChar));
    
	printf("Size of the double -> %zu bytes\n", sizeof(valueDouble));
    
	printf("Size of the short -> %zu bytes\n", sizeof(smallNumber));

	printf("\nHere are the memory addresses...\n");
    
	printf("Address of the integer -> %p\n", (void *)&numberInt);
    
	printf("Address of character -> %p\n", (void *)&letterChar);
    
	printf("Address of double -> %p\n", (void *)&valueDouble);
    
	printf("Address of short -> %p\n", (void *)&smallNumber);

    return 0;

}
