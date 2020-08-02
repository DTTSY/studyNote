package main

import "fmt"

//变量声明
/*
 *var name1 string
 *var age1 int    
 *var isOK1 bool  
*/

//批量声明
var (
	name string// ""
	age int// 0
	isOK bool//false
)
//常量
const pi = 3.1415926
//批量声明
const (
	notFound = 404
	ok = 200
)

const (
	n1=10
	n2	//10
	n3	//10
)
const (
	a1 = iota //0
	a2		  //1
	a3		  //2
	_		  //3
	a4        //4
	a5=100
	a6=iota   //6
)
func main () {
	name = "limimi"
	age = 10
	isOK = true
	//var ha = "jjjjj"
	//GO语言函数内变量必须使用
	var s string = "hello!"
	var s1 = "world!"//自动推导类型
	s2 := ":=赋值"
	fmt.Print(isOK)
	fmt.Println()
	fmt.Printf("name: %s\n",name)
	fmt.Println("my age:",age,"!")
	fmt.Println(s)
	fmt.Println(s1)
	fmt.Println(s2)
	fmt.Println(pi)
	fmt.Println(ok)
	fmt.Println(n3)
	fmt.Println(a3)
	fmt.Println(a6)
}
