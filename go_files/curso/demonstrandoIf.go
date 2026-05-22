package main

import "fmt"

func main() {
	var cargo string
	fmt.Println("Qual o seu cargo na empresa?")
	fmt.Scan(&cargo)
	if cargo == "diretor"{
		fmt.Println("Seja bem-vindo diretor!")
	}else if cargo == "presidente"{
		fmt.Println("Seja bem-vindo presdidente!")
	}
}