#include<stdio.h>
int main()
{
  int i = 50;
  ami:
  if(i>=1){ 
    printf("%d \n",i);
	i--;
	goto ami;
  }
  
}




/*
D:\c>gcc pet.c -o pet

D:\c>pet
50
49
48
47
46
45
44
43
42
41
40
39
38
37
36
35
34
33
32
31
30
29
28
27
26
25
24
23
22
21
20
19
18
17
16
15
14
13
12
11
10
9
8
7
6
5
4
3
2
1
*/