package main

import "fmt"

func array(arr []int) int {
	if len(arr) == 0 {
		return 0
	}
	return arr[0] + array(arr[1:]) //soma o número com o próximo
}

func main() {
	var n int
	fmt.Println("Quantos números você deseja somar?")
	fmt.Scan(&n)
	for n <= 0 {
		fmt.Println("A quantidade de números deve ser um valor positivo não-nulo:")
		fmt.Scan(&n)
	}
	arr := make([]int, n)
	fmt.Println("Digite, a seguir, os", n, "números:")
	for i := 0; i < n; i++ {
		fmt.Scan(&arr[i])
	}
	soma := array(arr)
	fmt.Printf("A soma é %v.", soma)
}
