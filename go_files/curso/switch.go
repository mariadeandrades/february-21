package main

import "fmt"

func main() {
	var pessoa string
	fmt.Println("Quem tá no escritório hoje?")
	fmt.Scan(&pessoa)
	switch pessoa{
	case "Marcos":
		fmt.Println("Marquinhos tá no escritório hoje.")
	case "Aninha":
		fmt.Println("Aninha tá no escritório hoje.")
		fallthrough
	case "Joaozinho":
		fmt.Println("Sempre que Aninha está, Joaozinho está também.")
	}
}