#include <stdio.h>
#include <conio.h>
#include <string.h>

void number_print(char number[12]){
    int size = strlen(number);
    
    if (number[0] == 45) {
        size -= 1;
        if (size % 2 == 1)
    {
        size = (size / 2) + 1;
        memmove(&number[size], &number[size + 1], strlen(number) - size);
    }
    
    printf("%s\n", number);

    }
    
    else {
    if (size % 2 == 1)
    
    {
    size = size / 2;
    memmove(&number[size], &number[size + 1], strlen(number) - size);
    }
    
    printf("%s\n", number);
    };
}

void main() {
    char symbol, number[12] = "";
    symbol = getchar();
    strcat(number, &symbol);

    while (symbol != EOF)
    {
        if ((symbol == '\n' || symbol == '\t' || symbol == ' ' || symbol == ',') && number[0] != 0 && number[0] != '\n' && number[0] != '\t' && number[0] != ' ' && number[0] != ',')
        {
            number_print(number);
            memset(number, 0, 12);
        }

        else
        {
            if ((number[0] == '\n' || number[0] == '\t' || number[0] == ' ' || number[0] == ',' || number[0] == 0) && number[0] != '-')
            {
                memset(number, 0, 12);
            }

            symbol = getchar();
            if((symbol != '\n' && symbol != '\t' && symbol != ' ' && symbol != ',')){
                strncat(number, &symbol, 1);
            }
        }
    }
    
    getch();
}