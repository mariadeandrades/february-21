sexo = input("Digite seu sexo biológico (feminino ou masculino):")
altura = float(input("Digite sua altura, em metros (use um ponto para separar as casas decimais):"))
if sexo == "feminino":
  peso_ideal_feminino = (62.1*altura)-44.7
  print("Seu peso ideal é:", peso_ideal_feminino)
elif sexo == "masculino":
  peso_ideal_masculino = (72.7*altura)-58
  print("Seu peso ideal é:", peso_ideal_masculino)

#esta calculadora foi configurada baseando-se na fórmula de Lorentz 
#para homens: peso ideal = (h-100)-[(h-150)/4]
#para mulheres: peso ideal = (h-100)-[(h-150)/2]
