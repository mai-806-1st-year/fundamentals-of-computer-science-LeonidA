#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int sign(int num) {
    
    if (num < 0) {
        return -1;
        }
        else if (num > 0) 
        {
            return 1;
            }
            else 
            {
                return 0;
                }
}

void main()
{   
    struct lab9
        {
            int count, i0, j0, l0, i, j, step, frst, seck, lenght;
        };

    
    struct lab9 A;
    A.count = 50, A.i0 = 18, A.j0 = -9, A.l0 = 5, A.i = 10, A.j = 10, A.step = 1;
    

    for (; A.step <= A.count; A.step++)
    {
        printf("number of step %d\n", A.step);

        A.frst = (A.i - A.i0) * (A.i - A.i0), A.seck = (A.j - A.j0) * (A.j - A.j0);
        A.lenght = A.frst + A.seck;

        if (A.lenght <= 100)
        {
            char ans = (A.lenght <= 25 ? 1 : 0);
            if (ans == 1)
            {
                printf("Hit 1 circle\n");
            }

            else 
            {
                printf("Hit 2 circle\n");
            }
        }

        else
        {

            printf("\n");
        }
    A.i0 = (int)fmod(A.i0 * fmax(A.j0, A.l0), 30) + (int)fmod(A.j0 * fmin(A.i0, A.l0), 20) + A.step;
    A.j0 = fmin(A.i0, fmax(A.j0, fmin(A.l0, fmax(A.i0 - A.l0, A.j0 - A.l0))));
    A.l0 = sign(A.step - 10) * abs(A.i0 - A.j0 + A.l0 - A.step);
    }
    printf("%d %d %d\n", A.i0, A.j0, A.l0);
    getch();
}
    

