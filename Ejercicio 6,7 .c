  #include <stdio.h>
 int numerospares(int num);
 int numerosimpares(int num);
 int main(void)
 {
 int num;
 printf("Ingrese un numero: ");
 scanf("%d", &num);
 printf("---------Numeros pares--------------------\n");
  numerospares(num);
 printf("---------Numeros Impares--------------------\n");
  numerosimpares(num);
 
 return 0;
 }
 
 int numerospares(int num){
  
  for(int i= 1;i<num;i++){
   if(i%2 == 0){
    printf("%d\n",i);
   }
   else{
    printf("\n");
   }
  }
  
 }
 
 int numerosimpares(int num){
  
  for(int i= 1;i<num;i++){
   if(i%2 == 0){
    printf("\n");
   }
   else{
    printf("%d\n",i);
   }
  }
 }
 
