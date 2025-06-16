
 #include <stdio.h>
 int ret_max(int a, int b){
 int max;
 if (a > b )
 max = a;
 else
 max = b;
 return max;
 }
 int main(void){
  
 int num1;
 int num2;
 
 printf("Ingrese 2 numeros\n");
 printf("Ingrese 1°numero: ");
 scanf("%d",&num1);
 printf("Ingrese 2°numero: ");
 scanf("%d",&num2);
 
   printf("%d",ret_max(num1, num2));
   
 return 0;
 }
