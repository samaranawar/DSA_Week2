#include<stdio.h>
#include<stdlib.h>

int SIZE,LEN=0;

int* DeleteAllOccurence(int *a, int k)
{
    if(LEN==0)
    {
        printf("Array empty\n");
        
    }
    else if(LEN<=SIZE)
    {
        for(int i=0; i<LEN; i++)
        {
            if(a[i]==k)
        {
            for(int j=i; j<LEN-1; j++)
            {
                a[j]=a[j+1];
            }
            LEN--;  
            i--;
        }

        }  
        
        
    }
    if(LEN<SIZE/2)
    {
        SIZE=SIZE/2;
        a=realloc(a, sizeof(int)*SIZE);
        
    }
    ///WRITE YOUR CODE HERE
    return a;
}

void printDynamicArray(int a[])
{
    for(int i=0;i<LEN;i++)
    {
        printf("%d ",a[i]);
    }
}

int main()
{
    SIZE=9;
    int* a = (int*)malloc(sizeof(int)*SIZE);
    a[0]=3; a[1]=2; a[2]=2; a[3]=3; a[4]=2; a[5]=1; a[6]=3; a[7]=3; a[8]=3; ///{3,2,2,3,2,1,3,3,3}
    LEN=SIZE;

    ///WRITE YOUR CODE HERE
    int n;
    scanf("%d", &n);
    
    DeleteAllOccurence(a,n);
    printDynamicArray(a);
    free(a);
}


