#include <stdio.h>
int main()
{ 
    int i=0,j=0;
    for(int i=1;i<=7;i++) {
        for(int j=1;j<=7;j++) {
            if(i==1 && j==1||i==2 && j==2||j==3 && i==3||j==4 && i==4||j==5 && i==5||j==6 && i==6||i==7 && j==7||i==1 && j==7||i==2 && j==6||i==3 && j==5||i==4 && j==4||i==5 && j==3||i==6 && j==2||i==7 && j==1) {
                printf("*");
            } else 
                printf(" ");
            
        }
        printf("\n");
    }
    return 0;
}