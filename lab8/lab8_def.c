#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

int bin_search(int minim, int maxim)
    {
    minim = minim, maxim = maxim;
    char ans, ans1;
    while (true)
    {
        printf("is your number %d? y/n\n", maxim);
        scanf("%c%*c", &ans);
        
        if (ans == 'y')
        {
            printf("answer is %d", maxim);
            return maxim;
        }

        if (ans == 'n')
        {
            printf("is your number less than %d? y/n\n", maxim);
            

            scanf("%c%*c", &ans1);
            
            if (ans1 == 'y') 
            {
                maxim -= minim;
                minim /= 2;
            }

            if (ans1 == 'n')
            {
                maxim += minim;
                minim /= 2;
            }
            
        }
    }
    }


int main() {
    printf("come up with number less than 4096\n");
    int x = 4096;
    bin_search(x / 4, x / 2);
    getch();
}