#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<conio.h>
int main(){
    int st,ed,count = 0, sum = 0,odd[100];
    printf("Enter The Starting : ");
    scanf("%d", &st);
    printf("\nEnter The Ending : ");
    scanf("%d", &ed);
    if( st > ed || (ed-st)>100){
        sleep(1000);
        exit(0);
    }
    if(st%2==0)
        st++;
        int num = st;
    for(int i = 0; i < 100;i++){
        if(num>=ed)
            break;
        odd[i]=num;
        sum+=odd[i];
        num+=2;
        count++;
    }
    for(int i = 0; i < count;i++){
            printf("%d ", odd[i]);
    printf("\n");
    }
printf("\nThe sum is %d", sum);
printf("\nThe Avg is %.2f", (float)sum/count);

    return 0;
}