#include<stdio.h>
void main(){
    char word;
    printf("enter a charater \n");
    scanf("%c",&word);
    if(word=='a'||word=='e'||word=='i'||word=='o'||word=='u'||word=='A'||word=='E'||word=='I'||word=='O'||word=='U')
    printf("the character is vowel");
    else
    printf("the character is a consonant");
}