#include<stdio.h>
int main() {
 
   int rad,diameter;
   float PI = 3.14, area, ci;
 
   printf("\nEnter radius of circle: ");
   scanf("%d", &rad);
   diameter=(2*rad); 
   printf("\ndiameter of circle : %d",diameter);
   area = PI * rad * rad;
   printf("\nArea of circle : %f ", area);
 
   ci = 2 * PI * rad;
   printf("\nCircumference : %f ", ci);
 
   return (0);
}