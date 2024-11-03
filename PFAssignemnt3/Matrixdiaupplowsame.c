#include<stdio.h>

int main(){
    int n;//number of rows;
    printf("enter the range: ");
    scanf("%d", &n);

    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i<=j)
                printf("%d\t",j-i);
            else   
                printf("%d\t",i-j);
        }
        printf("\n");
    }
    
    return 0;
}