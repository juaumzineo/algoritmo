algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 21/03/2019
// Se��o de Declara��es 
var
ppc, juros, trms :real
inicio
escreval("Conta poupan�a")
escreval("Qual quantia foi depositada?")
leia(ppc)
escreval("Qual a taxa de juros ao m�s?")
leia(juros)
trms <- ppc + ((ppc/100) * juros)
trms <- trms + ((trms / 100) * juros)
trms <- trms + ((trms / 100) * juros)
escreval("Ap�s tr�s meses o saldo virou R$", trms)
fimalgoritmo
