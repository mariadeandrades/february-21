package main

import "fmt"

func main() {
	var a int
	fmt.Println("Qual o seu apartamento?")
	fmt.Scan(&a)
	switch a{
	case 01:
		fmt.Println("Contas em dia.")
	case 02:
		fmt.Println("Contas em atraso.")
	}
}