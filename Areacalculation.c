Sheela has three things in her bag. She wants to compute the area of 3 things but 3 things are in different shapes. The three things are in a square shape, rectangular shape, and circular shape respectively. Write a program to help Sheela to calculate the area of different shapes.
Input Format
First input: a side of a square in integer Second input: length of a rectangle in integer Third input: breadth of a rectangle in integer Fourth input: radius of a circle in float
Constraints
1<=side of square <=10*9 1<=length of rectangle<=109 1<=breadth of rectangle<=109 1<=radius<=10*9
Output Format
The first output should be the area of a square in integer The second output should be the area of a rectangle in integer The third output should be the area of a circle in float with 2 decimal places
Sample Input 0
5
5
4
2.0    
Sample Output 0
25
20
12.56
Sample Input 1
10
15
15
4.5
Sample Output 1
100
225
63.58
Sample Input 2
2
3
6
5.0
Sample Output 2
4
18
78.50
source code:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int s,l,b;
    float r,a;
    scanf("%d %d %d %f",&s,&l,&b,&r);
    printf("%d\n",s*s);
    printf("%d\n",l*b);
    a=3.14*r*r;
    printf("%.2f",a);
    return 0;
}
