algoritmo "semnome"
// Função :
// Autor :
// Data : 21/03/2019
// Seção de Declarações 
var
dep, vhr, hrt, brt, liq: real
inicio
// Seção de Comandos
escreval("Quantos dependentes você possui?")
leia(dep)
escreval("Quanto você recebe por hora?")
leia(vhr)
escreval("Quantas horas você trabalhou no mês?")
leia(hrt)
brt <- vhr * hrt
liq <- dep * 300 + brt
escreval("Seu salário bruto é: ", brt)
escreval("Seu salário liquido é: ", liq)
fimalgoritmo
