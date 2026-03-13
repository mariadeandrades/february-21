tarefas = []
while True:
  print("""
  1- Adicionar
  2- Atualizar
  3- Excluir
  4- Encerrar
  """)

  escolha = int(input("Escolha uma opção:").strip())
  if escolha == 1:
    Item = str(input("Item:")).strip()
    tarefas.append(Item)
    print(tarefas)

    continuar = str(input("Deseja continuar? S/N\n")).strip().upper()
    if continuar == "N":
      break
    elif continuar == "S":
      continue
    else:
      print("Digite uma opção válida.")
      continue

  elif escolha == 2:
      while True:

       posicao = int(input("Posição do item a ser atualizado:").strip())
       item_novo = str(input("Item novo a ser inserido:")).strip()
       tarefas[posicao] = item_novo
       print(tarefas)
       continuar = str(input("Deseja continuar atualizando os itens da sua lista? S/N \n")).strip().upper()

       if continuar == "N":
         break
       elif continuar == "S":
         continue
       else:
         print("Digite uma opção válida.")
         continue

  elif escolha == 3:
    while True:
      posicao = int(input("Qual a posição do item que deseja excluir?").strip())
      tarefas.pop(posicao)
      print(tarefas)

      continuar = str(input("Deseja continuar excluindo itens da sua lista? S/N \n")).strip().upper()
      if continuar == "N":
         break
      elif continuar == "S":
         continue
      else:
         print("Digite uma opção válida.")
         continue
  elif escolha == 4:
         break

contador = 0
for Item in tarefas:
  print("\n", contador, Item, "\n")
  contador += 1

  #melhorias possíveis: índice de tarefas q fique visível p usuário e comece em 1
  #usar switch case ao invés de if/elif/else