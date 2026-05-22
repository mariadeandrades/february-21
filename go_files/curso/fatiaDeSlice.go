package main

import "fmt"

func main() {
	slice := []string {"mozzarella", "pepperoni", "marguerita", "abacaxi", "quatroqueijos"}
	fatia := slice[0:2] //isso significa q a  fatia do slice conterá dois elementos, a partir do índice 0, ou seja, índides 0 e 1
	fatia2 := slice[0:len(slice)] //útil para quando não sei o tamanho do slice
	fmt.Println(fatia, fatia2)
	for i := 0; i < len(slice); i ++{
		fmt.Println(slice[i])
	}
	sabores := append(slice[0:2], slice[3:]...) //excluindo marguerita
	fmt.Println(sabores)
}