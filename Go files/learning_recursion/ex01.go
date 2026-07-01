package main

import "fmt"

func recursao(n int) int {
	if n == 0 {
		return 1
	}
	return n * recursao(n-1)
}

func main() {
	var n int
	fmt.Println("Digite um número para o cálculo do fatorial:")
	fmt.Scan(&n)
	for n < 0 {
		fmt.Println("Digite somente valores positivos para n:")
		fmt.Scan(&n)
	}
	resultado := recursao(n)
	fmt.Printf("%v! = %v", n, resultado)
}
