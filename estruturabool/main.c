#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

bool imparouPar(int numeroum){
	bool r = true;
	if(numeroum%2==1){
		r = false;
	}
	return r;
}
int main()
{
    bool a;
    int num;

	printf("Insira um numero:\t\n");
	scanf("%d", &num);

	a = imparouPar(num);

	if(a==true){
		printf("O numero %d e PAR", num);
	}
	else{
		printf("O numero %d e IMPAR", num);
	}
    return 0;
}
