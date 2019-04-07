algoritmo "semnome"
// Função :
// Autor :
// Data : 21/03/2019
// Seção de Declarações 
var
ppc, juros, trms :real
inicio
escreval("Conta poupança")
escreval("Qual quantia foi depositada?")
leia(ppc)
escreval("Qual a taxa de juros ao mês?")
leia(juros)
trms <- ppc + ((ppc/100) * juros)
trms <- trms + ((trms / 100) * juros)
trms <- trms + ((trms / 100) * juros)
escreval("Após três meses o saldo virou R$", trms)
fimalgoritmo
