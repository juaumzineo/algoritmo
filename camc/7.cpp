#include <stdio.h>
#include <stdlib.h>

int main()
{
    float alt,altpeso=0.0;
    char Sexo;

    printf("\nDigite a sua altura: ");
    scanf("%f",&alt);

    printf("Digite o seu sexo (M para Masculino e F para Feminino):");
    getchar();
    scanf("%c",&Sexo);

    if(Sexo == 'M'){
        altpeso=((72.7*alt)-58);
        printf("\nO seu peso ideal como homem e: %.3f\n",altpeso);
    }
    else {}
    if(Sexo == 'F'){
    	altpeso=((62.1*alt)-44.7);
        printf("\nO seu peso ideal como mulher e: %.3f\n",altpeso);
	}
	else
	{}
    system("pause");
    return 0;
}
