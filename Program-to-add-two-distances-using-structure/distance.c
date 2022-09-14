// Program to add two distance using structure
#include <stdio.h>
typedef struct Distance {
   int km;
   float m;
} distance;

int main()
 {
 	distance d1, d2, result;
   printf("Enter the first distance\n");
   printf("Enter Km: ");
   scanf("%d", &d1.km);
   printf("Enter meter: ");
   scanf("%f", &d1.m);
   printf("\nEnter the second distance\n");
   printf("Enter Km: ");
   scanf("%d", &d2.km);
   printf("Enter meter: ");
   scanf("%f", &d2.m);
   result.km=d1.km+d2.km;
   result.m=d1.m+d2.m;
   printf("\nSum of distances = %d Km and %.1f m", result.km, result.m);
   return 0;
}