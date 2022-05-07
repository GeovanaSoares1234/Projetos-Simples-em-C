#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3;
    printf("Insira o valor de N1:\n");
    scanf("%d",&n1);

    printf("Insira o valor de N2:\n");
    scanf("%d",&n2);

    printf("Insira o valor de N3:\n");
    scanf("%d",&n3);

    if((n1>n2)&&(n1>n3)){
        printf("O n1 e o maior, N1:%d",n1);
    }
    if((n2>n1)&&(n2>n3)){
        printf("O n2 e o maior, N2:%d",n2);
    }
     if((n3>n1)&&(n3>n2)){
        printf("O n3 e o maior, N3:%d",n3);
    }
    return 0;
}
