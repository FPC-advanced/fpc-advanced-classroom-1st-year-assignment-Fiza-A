#include<stdio.h>
#include<math.h>
void input(float *base, float *height){
    printf("Enter base of the triangle:");
    scanf("%f", base);
    printf("Enter height of the triangle:");
    scanf("%f", height);
}
void find_area(float base , float height, float *area){
    *area=0.5*base*height;
}
void output(float base, float height, float area){
    if(base<0){
        printf("Please enter positive base!");
    }
    if(height<0){
        printf("Please enter positive height!");
    }
    printf("Area of the triangle with base %.2f and height %.2f is %.2f", base, height, area);
}
int main(){
    float base, height, area;
    input(&base, &height);
    find_area(base, height, &area);
    output(base, height, area);
    return 0;
}