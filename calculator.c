
#include <stdio.h>

int main() {
  
  int num1;
  int num2;
   printf("ENTER FIRST NUMBER :");
   scanf("%d",&num1);
   printf("ENTER SSECOND NUMBER :");
   scanf("%d",&num2);
   int o;
   printf(" SELECT A OPERTION 1=addition 2= substraction 3=multiplicition 4= division 5=reminder:");
   
  
   scanf("%d",&o); 
   if(o ==1) { 
       int c;
       c= num1+num2;
       printf("%d",c);
   }
   
   if(o==2) {
       int c;
      c= num1-num2;
      printf("%d",c);
       }
       
   if(o==3) {
         int c;
      c= num1*num2;
      printf("%d",c);
       }
       
   if(o==4) {
            int c;
      c= num1/num2;
      printf("%d",c);
       }
       
   if(o==5) {int c;
      c= num1/num2;
      printf("%d",c);
       }
       
   if(o>5) {
           printf(" please enter a valid operation ");
       }

    return 0;
}
