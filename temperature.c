#include<stdio.h>
int main(){
    float temp;
    printf("enter the temperature= ");
    scanf("%f",&temp);
    if(temp<=0)
    printf("freezing");
    else if(temp>0&&temp<10)
    printf("very cold weather");
    else if(temp>10&&temp<20)
    printf("cold weather");
    else if(temp>20&&temp<30)
    printf("normal temperature");
    else if(temp>30&&temp<40)
    printf("hot weather");
    else if(temp>=40)
    printf("very hot weather");
    return 0;
}