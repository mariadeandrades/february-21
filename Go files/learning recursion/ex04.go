package main

import "fmt"

func invert(a []string, inicio int, fim int) {
	if inicio >= fim{
		return 
	}
	a[inicio], a[fim] = a[fim], a[inicio]
	invert(a, inicio+1, fim-1)
}

func main() {
	var n int
	fmt.Println("--ESTE PROGRAMA INVERTE STRINGS--")
	fmt.Println("Quantas letras tem sua string?")
	fmt.Scan(&n)
	a := make([]string, n)
	fmt.Println("Digite as letras da string que deseja inverter, letra por letra:")
	for i := 0; i < n; i ++{
		fmt.Printf("Letra %v", i + 1)
		fmt.Scan(&a[i])
	}
	invert(a, 0, len(a)-1)
	fmt.Printf("%s", a)
}