algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 21/03/2019
// Se��o de Declara��es 
var
n1, n2, n3, n4, soma:real
nome:caractere
inicio
// Se��o de Comandos
escreval("Soma da m�dia anual.")
escreval("Digite o seu nome:")
leia(nome)
escreval("Digite sua nota do 1� bimestre")
leia(n1)
escreval("Digite sua nota do 2� bimestre")
leia(n2)
escreval("Digite sua nota do 3� bimestre")
leia(n3)
escreval("Digite sua nota do 4� bimestre")
leia(n4)
soma <- (n1 + n2 + n3 + n4) / 4
escreval(nome + " sua media anual �", soma)
fimalgoritmo
