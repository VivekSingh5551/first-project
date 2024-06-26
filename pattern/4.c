// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num;
    printf("Enter Any Number : ");
    scanf("%d", &num);
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=num+1-i;j++)
        {
            printf("%d",j);
        }printf("\n");
    }

    return 0;
}