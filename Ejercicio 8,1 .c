//Punteros-Ejercicio 8.1
 #include <stdio.h>  
 
 #define N 3
 
 void validarpositividad ( int *a);
 void validarnoprimo ( int  *a);
 int main (void) {

 int arreglo [N];
 
 for (int i = 0; i < N; i++){
  
 validarpositividad(&arreglo[i]);
 }
for (int i = 0; i < N; i++){
 validarnoprimo(&arreglo[i]);
 }
 for (int i = 0; i < N; i++){
 printf("arreglo[%d]:%d\n",i,arreglo[i]);
 }
 return 0;
 }
 //aca estoy recibiendo el valor i porque a apunta a una direccion de memoria. *a = &arreglo[i] = i modifico el valor
 void validarpositividad(int *a){// *a = arreglos[i] esta apuntando al valor i del arreglo
                                   // osea &arreglos[i] es la direccion de memoria de i, y *a apunta a esa direccion
 int val;                               // que tiene como valor lo del elemento i 
 printf("Ingrese un valor: ");
 scanf("%d",&val);
 
 while(val>99 || val<0){
  printf("Debe estar entre 0 y 99\n");
  printf("Ingrese un valor: ");
 scanf("%d",&val);
  }
  *a=val;
  
 }
 void validarnoprimo ( int *a){
  int val = *a;
  if(val%2==1){
  *a=val+1;
  }
  else{
   *a=val;
  }
  
 }
