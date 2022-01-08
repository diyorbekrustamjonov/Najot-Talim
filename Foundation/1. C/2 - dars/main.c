#include <stdio.h>

int main(){
    char myName[] = "";
    int age;
    float height;
    double weight; 
    char firstCharOfMyName;

    printf("Enter your name: ");
    scanf("%s", &myName);

    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your heigh: ");
    scanf("%f", &height);

    printf("Enter your weigth: ");
    scanf("%lf", &weight);

   //Hozir buyerda char symbol ishlame qoladi chunki tepadagi scanf da enter bosilganini oziga qabul qilib oladi
    //Shunin uchun biz oldida bitta space tashlashimiz kerak
    printf("Enter your first symbol is name: ");
    scanf(" %c", &firstCharOfMyName);



    printf("Your name is: %s; \n", myName);
    printf("Your age: %d; \n", age);
    printf("Your heigh: %.1f; \n", height);
    printf("Your weight is: %.1lf; \n", weight);
    printf("Your first symbols is name: %c; \n", firstCharOfMyName);

    int son1, son2;
    printf("Sonlarni kiriting: ");
    scanf("%d%d", &son1, &son2);
    printf("Son1: %d. Son2: %d; \n", son1, son2);
    printf("Qoshilgan: %d; \n", son1 + son2);


    int mb,kb,byte,bit;
    printf("Mb ni kiriting: ");
    scanf("%d", &mb);
    kb = mb * 1024;
    byte = kb * 1024;
    bit = byte * 8;
    printf("Mb => %d; \nMB to KB: %d; \nKB to BYTE: %d; \nBYTE to BIT: %d\n", mb, kb, byte, bit);

    return 0;
}