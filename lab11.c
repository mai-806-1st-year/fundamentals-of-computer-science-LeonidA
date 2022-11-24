#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

typedef struct
{
    int code;
    bool condition;
} Tuple;

Tuple logic(char symbol, bool condition)
{   
    int way;
    char new_symbol, func_symbol = symbol;
    Tuple result;
    bool func_condition = condition;
    
    if (func_symbol == 32){ // пробел
        way = 1;
    }

    if (func_symbol == 47){ // знак /
        way = 2;
    }

    if (func_symbol == EOF){
        way = 3;
    }

    if (func_symbol == 10){ // знак n
        way = 4;
    }
    
    switch (way)
    {
    case 1:
        if (func_condition == true){
            result.code = 1;
            result.condition = true;
            return result;
        }
        
        result.code = 0;
        result.condition = false;
        return result;
    
    case 2:
        new_symbol = getchar();
        if (new_symbol == 47) {
            result.code = 1;
            result.condition = true;
            return result;
        }
    
        result.code = 0;
        result.condition = false;
        return result;
    
    case 3:
        result.code = 2;
        result.condition = false;
        return result;
    
    case 4:
        result.code = 0;
        result.condition = false;
        return result;
    
    default:
        result.code = 0;
        result.condition = condition;
        return result;
    }
}

void main()
{   
    Tuple res;
    char symbol;
    bool condition = false;
    int counter = 0;
    
    while (true)
    {
        symbol = getchar();
        
        res = logic(symbol, condition);
        
        condition = res.condition;
        
        if (res.code == 1){
            counter ++;
        }

        else if (res.code == 2){
            break;
        }
        
    }
    printf("%d", counter);
}