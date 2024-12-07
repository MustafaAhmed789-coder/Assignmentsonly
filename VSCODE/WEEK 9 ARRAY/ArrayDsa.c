#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int Cap;
int count = 0;
int A[999];
void Print(int A[]);//Traversal
void Input(int A[]);
int Insert(int A[], int index, int num);
void Delete(int A[], int index);
int Append(int A[], int num);

void Print(int A[]){
    for(int i = 0; i< count; i++){
        printf("%d\t",A[i]);
    }
}

void Input(int A[]){
    for(int i = 0; i<Cap; i++){
        printf("\nEnter The Element in %d index: ", i);
        scanf("%d", &A[i]);
        if(A[i] == -1) break;
        count ++;
    }
}

int Insert(int A[], int index, int num){
    if(count>=Cap || index > count || index < 0){
        printf("\nInsertion Failed\n");
        return -1;
    }
    for (int i = count - 1; i >= index ; i--)
    {
       A[i+1]=A[i];
    }
    A[index]=num;
    count++;
    return 0;
}

void Delete(int A[], int index){
    if(index>=count  || index < 0){
        printf("Invalid Index");
        exit(0);
    }

    for(int i = index ; i < count ;i++){
        A[i] = A[i + 1];
    }

    
    count--;
}
int Append(int A[], int num){
    if(count>Cap) return -1;
    A[count] = num;
    count++;
    return 0;
}

 
int main(){
printf("Enter The Capacity: ");
scanf("%d", &Cap);


if(Cap>999 || Cap<=0 )
{
 printf("Invalid Capacity");
 return 1;
}


    Input(A);
    
    printf("\n\nBefore Insertion\n");
    Print(A);//Travversal


    int ind = 2;
    int val = 10;
    
    if(Insert(A, ind, val) == 0){
        printf("\n\nAfter The Insertion the Value At %d is %d", ind,val);
    }
    printf("\nAfter Insertion\n");
    Print(A);

    Delete(A, 0);

    printf("\n\nAfter Deletion\n");
    Print(A);

    int valu = 90;
    if(Append(A, valu)==0){

        printf("\n\nThe Array After Append\n\n");
        Print(A);
    }

    return 0;
}