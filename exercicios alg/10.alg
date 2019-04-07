algoritmo "semnome"
// Função :
// Autor :
// Data : 21/03/2019
// Seção de Declarações 
var
n1, n2, n3, n4, soma:real
nome:caractere
inicio
// Seção de Comandos
escreval("Soma da média anual.")
escreval("Digite o seu nome:")
leia(nome)
escreval("Digite sua nota do 1º bimestre")
leia(n1)
escreval("Digite sua nota do 2º bimestre")
leia(n2)
escreval("Digite sua nota do 3º bimestre")
leia(n3)
escreval("Digite sua nota do 4º bimestre")
leia(n4)
soma <- (n1 + n2 + n3 + n4) / 4
escreval(nome + " sua media anual é", soma)
fimalgoritmo
