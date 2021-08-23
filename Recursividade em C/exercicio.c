#include <stdio.h>

int Fatorial(int n){

 

if(n>1){

return n*Fatorial(n-1);

}else{

return 1;

}

 

}

 int main(void){
      int n=3;

   int result=Fatorial(n);
  printf("o valor é %d", result);
 }

double Fun(int n){

if(n > 1){

 

int aux = 0;

if(n%2){

aux += Fatorial(n);

}else{

aux-= Fatorial(n);

}

 

return Fun(n-1) + 1.0/aux ;

}else{

return 1.0;

}
}
