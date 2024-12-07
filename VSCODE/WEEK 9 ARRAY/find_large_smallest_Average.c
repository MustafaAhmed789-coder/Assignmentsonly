#include<stdio.h>
int main(){
int A[100],largest = 0,count = 0,indexes = 0,sum = 0,smallest = 9999;
printf("Enter The Elements : \n");
while(count!=100){
    scanf("%d", &A[indexes]);
    if(A[indexes]==-1)
        break;
    else if(A[indexes]<0){
        continue;
        if(count > 1)
            count--;
    }
    
    if(A[indexes]>largest)
        largest = A[indexes];
    if(A[indexes]<smallest)
        smallest = A[indexes];
    sum+=A[indexes];   
    indexes++;
    count++;
}
printf("\t\t===========ARRAY==========\n");
for(int i = 0; i < count; i++){
    printf("%d ", A[i]);
}
printf("\nTHE LARGEST NUMBER IS %d\n", largest);
printf("THE SMALLEST NUMBER IS %d\n", smallest);
float avg = (float)sum/count;
printf("The Average of the Number is %.2f\n", avg);
return 0;
}