package main

import "fmt"

func main() {
	for i := 10; i <= 100; i++ {
		switch {
		case i%2 == 0:
			{
				fmt.Println("par ->", i)
			}
		case i%2 != 0:
			{
				fmt.Println("impar ->", i)
			}
		}
	}
}