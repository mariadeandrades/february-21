soma1 = 0
soma2 = 0
partidas = int(input("Quantas partidas deseja contabilizar?"))
for i in range(partidas):
    ponto = int(input("Qual foi a pontuação?"))
    time = str(input("Qual o time que pontuou?"))
    if time == 1:
        soma1 += ponto
    elif time == 2:
        soma2 += ponto
print(soma1 ," X ", soma2)