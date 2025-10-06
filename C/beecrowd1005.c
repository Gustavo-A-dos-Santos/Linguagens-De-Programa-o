#include<stdlib.h>
#include<stdio.h>
int main(){
    double a, b, media;
    scanf("$dl $dl", &a, &b);
    a = a *3.5;
    b = b *7.5;
    media = (a+b)/11;
    printf("MEDIA = $dl;", media);
}
