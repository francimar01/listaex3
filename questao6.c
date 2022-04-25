#include<stdio.h>
#include <math.h>


int main(){
    int op,a,b,c;
    printf("escolha uma opção;\n1)soma\n2)subtração\n3)divisão\n4)multiplicação\n5)modulo\n6)expoente\n");
    scanf("%d",&op);
    do{
        switch(op){
            case 1: 
            printf("digite um números:");
            scanf("%d",&a);
            printf("digite um número:");
            scanf("%d",&b);
            c=a+b;
            printf("resultado:%d\n",c);
            break;
            case 2:
            printf("digite um número:");
            scanf("%d",&a);
            printf("digite um número:");
            scanf("%d",&b);
            c=a-b;
            printf("resultado: %d\n",c);
            break;
            case 3:
            printf("digite um número:");
            scanf("%d",&a);
            printf("digite um número:");
            scanf("%d",&b);
            c=a/b;
            printf("resultado: %d\n",c);
            break;
            case 4:
            printf("digite um número:");
            scanf("%d",&a);
            printf("digite um número:");
            scanf("%d",&b);
            c=a*b;
            printf("resultado: %d\n",c);
            break;
            case 5:
            printf("digite um número:");
            scanf("%d",&a);
            printf("digite um número:");
            scanf("%d",&b);
            c=a%b;
            printf("resultado: %d\n",c);
            break;
            case 6:
            printf("digite um número:");
            scanf("%d",&a);
            printf("digite um número:");
            scanf("%d",&b);
            c=pow(a,b);
            printf("resultado: %d\n",c);
            break;



   
        }
    }while(op==0);
    return 0;
}