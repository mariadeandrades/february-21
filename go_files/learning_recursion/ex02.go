package main

import "fmt"

func soma(n int) int {
	if n == 1 {
		return 1
	}
	return n + soma(n-1)
}

func main() {
	var n int
	fmt.Println("--ESTE PROGRAMA RECEBE UM NÚMERO n E SOMA TODOS OS NÚMEROS DE 1 A n--")
	fmt.Println("Digite um número positivo qualquer:")
	fmt.Scan(&n)
	for n < 0 {
		fmt.Println("Por favor, escolha somente valores positivos:")
		fmt.Scan(&n)
	}
	resultado := soma(n)
	fmt.Printf("O resultado é %v.", resultado)
}
