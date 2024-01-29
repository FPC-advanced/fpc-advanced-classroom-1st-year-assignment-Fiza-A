/*07. Write a program to find the area of a triangle.

***Function Declarations***
```c
typedef struct _triangle {
	float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Traingle *t);
void output(Triangle t);*/

#include<stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;
Triangle input_triangle(){
	Triangle t;
	printf("Enter the base of the triangle:\n");
	scanf("%f",&t.base);
	printf("Enter the altitude of the triangle:\n");
	scanf("%f",&t.altitude);
}
void find_area(Triangle *t){
	t->area =(1/2)* t->base * t->altitude;
}
void output(Triangle t){
	printf("The area of the triangle is %.2f \n", t.area);
}
int main(){
	Triangle base, altitude, area;
    base=input_triangle();
	altitude=input_triangle();
    find_area(&area);
    output(area);
    return 0; 
}