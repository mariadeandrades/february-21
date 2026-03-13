num1 = int(input("Digite o primeiro número:"))
num2 = int(input("Digite o segundo número:"))
operacao = input("Digite a operação desejada (adicao, subtracao, multiplicacao ou divisao):")

def adicao(num1, num2):  # definição da função adição que soma dois números
   return num1 + num2

def subtracao(num1,
              num2):  # definição da função subtração que subtrai dois números
   return num1 - num2

def multiplicacao(num1, num2):  # definição da função multiplicação que multiplica dois nímeros
   return num1 * num2

def divisao(num1, num2):  # definição da função divisão que divide dois números
   if num2 == 0:
      return "ERRO: não é possível dividir por zero."
   return num1 / num2



if operacao == "adicao":
   print("O resultado é:", adicao(num1, num2))
elif operacao == "subtracao":
   print("O resultado é:", subtracao(num1, num2))
elif operacao == "multiplicacao":
   print("O resultado é:", multiplicacao(num1, num2))
else:
   print("O resultado é:", divisao(num1, num2))
         