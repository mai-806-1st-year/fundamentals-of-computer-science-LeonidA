#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

typedef struct
{
    int code;
    bool condition;
} Tuple;

typedef enum 
{
    SPACE = 1,
    SIGN,
    END,
    NEW_STRING
} Way;

Tuple logic(char symbol, bool condition)
{   
    Way way;
    char new_symbol, func_symbol = symbol;
    Tuple result;
    bool func_condition = condition;
    
    if (func_symbol == 32){ // пробел
        way = SPACE;
    }

    if (func_symbol == 47){ // знак /
        way = SIGN;
    }

    if (func_symbol == EOF){
        way = END;
    }

    if (func_symbol == 10){ // знак n
        way = NEW_STRING;
    }
    
    switch (way)
    {
    case SPACE:
        if (func_condition == true){
            result.code = 1;
            result.condition = true;
            return result;
        }
        
        result.code = 0;
        result.condition = false;
        return result;
    
    case SIGN:
        new_symbol = getchar();
        if (new_symbol == 47) {
            result.code = 1;
            result.condition = true;
            return result;
        }
    
        result.code = 0;
        result.condition = false;
        return result;
    
    case END:
        result.code = 2;
        result.condition = false;
        return result;
    
    case NEW_STRING:
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
