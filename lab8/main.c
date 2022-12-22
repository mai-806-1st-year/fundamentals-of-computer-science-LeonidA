#include <stdio.h>
#include <conio.h>

int main() {
    int x , y, type;
    long int test;
    printf("%d\n", sizeof(test));
    
    printf("first: ");
    scanf("%d",&x);
    
    printf("second: ");
    scanf("%d",&y);
    
    printf("+:(1), -:(2), *:(3), /:(4): ");
    scanf("%d",&type);
    
    if(type==1)
        printf("%d + %d = %d \n", x, y, x + y);
    
    if(type==2)
        printf("%d - %d = %d \n", x, y, x - y);
    
    if(type==3){
        long int res;
        res=x*y;
        printf("%d * %d = %d \n", x, y, res);
    }
    
    if(type==4){
        double fr, sc, res;
        fr = x, sc = y;
        res = fr /sc;
        printf("%f./%f. = %f \n", fr, sc, res);
    }
    getch();
    return 0;
}
