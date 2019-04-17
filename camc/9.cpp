#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int senha;
    printf("Digite a senha: ");

    scanf("%d",&senha);
    if (senha == 12345) {
    	printf("Senha valida.");
	}
    else {
    	printf("Senha invalida, tente novamente.");
	}
}
