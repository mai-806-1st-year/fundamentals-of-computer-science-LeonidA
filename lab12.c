#include <stdio.h>
#include <conio.h>
#include <string.h>

void main() {
    char symbol, number[12] = "";
    symbol = getchar();

    while (symbol != EOF)
    {
        strncat(number, &symbol, 1);
        symbol = getchar();
    }
    int size = strlen(number);
    
    if (number[0] == 45) {
        size -= 1;
        if (size % 2 != 1)
    {
        size = size / 2;
        memmove(&number[size], &number[size + 1], strlen(number) - size);
    }
    
    printf("%s", number);

    }
    
    else {
    if (size % 2 != 1)
    
    {
    size = (size / 2) - 1;
    memmove(&number[size], &number[size + 1], strlen(number) - size);
    }
    
    printf("%s", number);
    };
    getch();
}