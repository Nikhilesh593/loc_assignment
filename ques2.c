#include <stdio.h>
int main(){
    int num;
    printf("Enter the number you want to be checked:");
   scanf("%d",&num);
    if(num==0)
    printf("The number is zero.");
    else if(num>=0)
    printf("The number is positive.");
    else
    printf("The number is negative");
    
 return 0;
}