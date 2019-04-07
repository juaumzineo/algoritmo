algoritmo "semnome"
// Função :
// Autor :
// Data : 26/03/2019
// Seção de Declarações
var
a, b, c, delta: inteiro
x1, x2: real

inicio
// Seção de Comandos

escreval("Digite o valor de A: ")
leia(a)

escreval("Digite o valor de B: ")
leia(b)

escreval("Digite o valor de C: ")
leia(c)

delta <- (b * b) - 4 * a * c

x1 <- (- b) + RaizQ(abs(delta)))
x2 <- (- b) - RaizQ(abs(delta)))

x1 <- x1 / (2 * a)
x2 <- x2 / (2 * a)
escreval(x1)
escreval(x2)
fimalgoritmo
