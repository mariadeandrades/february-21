package main

import "fmt"

func fibonacci(t int) int{
	if t <= 1{
		return t
	}
	return fibonacci(t-1) + fibonacci(t-2)
}


func main() {
	var t int
	//seq de fibonacci: 1 1 2 3 5 8 13 ...
	fmt.Println("--ESTE PROGRAMA RETORNA O ENÉSIMO TERMO DA SEQUÊNCIA DE FIBONACCI--")
	fmt.Println("Digite a posição (1°, 2°, 3° ...) do termo que deseja:")
	fmt.Scan(&t)
	result := fibonacci(t)
	fmt.Printf("O %v° termo da sequência de Fibonacci é %v.", t, result)
}