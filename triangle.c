#include<stdio.h>
int main(){
    float a, b, c;
    printf("enter the first side of the triangle= ");
    scanf("%d",&a);
    printf("enter the second side of the triangle= ");
    scanf("%d",&b);
    printf("enter the third side of the triangle= ");
    scanf("%d",&c);
    if(a==b&&b==c&&c==a)
    printf("this is an equlateral triangle");
    else if(a==b||b==c||c==a)
    printf("this is a isoscelese triangle");
    else
    printf("this is a scalen triangle");
    return 0;
}