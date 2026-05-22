package main

import "fmt"

func main() {
	slice := []string {"banana", "jaca", "maçã", "uva"}
	for i, valor := range slice {
		fmt.Println("No índice", i ,"a fruta é", valor)
	}
	slice[3] = "melancia" //se eu n add mais uma fruta no slice antes de tentar substituir, vai dar index out of range pq o slice é sobre arrays, e ele tem tamanho 3
	for i, valor := range slice{
		fmt.Println("No índice", i ,"a fruta é", valor)
	}
	slicinho := []int {20, 24, 32, 12}
	soma := 0
	for _, valor := range slicinho{
		soma += valor
	}
	fmt.Printf("A soma do slicinho é %v", soma)
}
//a função range serve para perocorrer o slice todo