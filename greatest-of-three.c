#include <stdio.h>
int main() {
    int x,y,z;
    printf("enter first number:");
    scanf("%d",&x);
    printf("enter second number:");
    scanf("%d",&y);
    printf("enter third number:");
    scanf("%d",&z);
    
    if(x>y){
        if(y>=z){
            printf("first number is gratest ");
        }
        else if (x==z) {printf("first and third number are equal and grater then tird number");
        }  
         else{
             printf("third number is gratest");
         }
    }
    else if (x==y){
     if(y>z){
         printf("first and second numbers are equal and grater then third number ");
     }
     else if(y==z){
         printf("all numbers are equal ");
     }
     else{
         printf("third number is gratest ");
     }
    }
    if (x<y){
        if(y<z){printf("third number is gratest");}

        else if(y==z){printf("second and third numbers are equal and grater then first number ");
        }
        else{printf("second number is gratest");}

    }
    
     
      return 0; }