#include<stdio.h>
int main() {
int i=0,j=0;
for(int i=7;i>=1;i--) {
  for(int j=1;j<=i;j++) { 
    if(j==1||j==i||i==7||j==7) {

    printf("*");
    } else 
    printf(" ");
  }
  
 printf("\n");
}
return 0;
}
