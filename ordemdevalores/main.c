#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val1,val2,val3;

    printf("Insira o valor um:\t");
    scanf("%d",&val1);

    printf("Insira o valor dois:\t");
    scanf("%d",&val2);

    print("Insira o valor tres:\t");
    scanf("%d",&val3);

    if((val1<=val2)&&(val1<=val3)){
        printf("Sua ordem e: %d %d %d\t",val1,val2,val3);
    }
    if((val1<=val3)&&(val3<=val2)){
        printf("Sua ordem e: %d %d %d\t",val1,val2,val3);
    }
    if((val2<=val1)&&(val1<=val3)){
        printf("Sua ordem e: %d %d %d\t",val1,val2,val3);
    }
    if((val2<=val3)&&(val3<=val1)){
        printf("Sua ordem e: %d %d %d\t",val1,val2,val3);
    }
    if((val3<=val1)&&(val1<=val2)){
        printf("Sua ordem e: %d %d %d\t",val1,val2,val3);
    }
    else{
        printf("Sua ordem e: %d %d %d\t",val1,val2,val3);
    }

    return 0;
}
