#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <conio.h>
#include <string.h>

#define VOWELS (1u<<('a'-'a') | 1u<<('e'-'a') | 1u<<('i'-'a') | 1u<<('o'-'a') | 1u<<('u'-'a'))

typedef unsigned int uint;

uint char_to_set(char c)
{
    c = tolower(c);
    if(c < 'a' || c > 'z')
    {
        return 0;
    }else{
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            return 1u<<(c-'a');
        } else{
            return 0;
        }
    }
}

bool logic(char * word){
    
    bool flag = false;
    uint set_word_vowels = 0, letter;
    int a = 0;
    
    while(word[a] != 49){
        
        // printf("%d", word[a]);
        letter = char_to_set(word[a]);
        
        if ((VOWELS & ~letter) != VOWELS && (set_word_vowels & ~letter) != set_word_vowels){
            flag = false;
            break;
        }
        
        set_word_vowels = set_word_vowels | letter;
        if (set_word_vowels != 0) {
            flag = true;
            }
        a++;
    }
    return flag;
}

void main()
{   
    bool flag = false;
    char symbol, word[30] = "";
    symbol = getchar();
    strncat(word, &symbol, 1);
    
    while (symbol != EOF) {
        
        if((symbol == 32 || symbol == 10 || symbol == 44 || symbol == 9) && word[0] != 0 && word[0] != 32 && word[0] != 10 && word[0] != 44 && word[0] != 9 )
        {
            strcat(word, "1");
            flag = logic(word);
            if (flag == true){
                break;
            }
            memset(word, 0, 30);
            symbol = getchar();
        }
        
        else {
            if (word[0] == 0 || word[0] == 32 || word[0] == 10 || word[0] == 44 || word[0] == 9)
            {
                memset(word, 0, 30);
            }
            
            symbol = getchar();
            strncat(word, &symbol, 1);
        }
    }
    if (flag == true) {
        printf("word was found\n");
        printf("%s", word);
    }

    if (flag == false) {
        printf("word wasn't found\n");
    }
    
    getch();
}
