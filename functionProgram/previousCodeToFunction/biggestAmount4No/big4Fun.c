#include<stdio.h>
void big(void);
int main(){
   big();
   return 0;
}
void big(void){
   int n1 = 3;
   int n2 = 6;
   int n3 = 2;
   int n4 = 6;
   if (n1 < n2){
     if(n1 < n3){
       if(n1 < n4){
          printf("%d is small", n1);
       }
     }
   }
   if(n2 < n1){
      if (n2 < n3){
        if (n2 < n4){
           printf("%d is small", n2);
        }
      }
   }
   if(n3 < n1){
     if(n3 < n2){
       if(n3 < n4){
          printf("%d is small", n3);
       }
     }
   }
   if(n4 < n1){
     if(n4 < n2){
       if(n4 < n3){
          printf("%d is small", n4);
       }
     }
   }
}