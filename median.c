#include<stdio.h>

void selection_sort(float* arr, int size) {
    for (int i = 0; i < size-1; i++) {
        int minIndex = i;
        for (int j = i+1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        int t = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = t;
    }
}


int main()
{
    int n;
    scanf("%d", &n);
    int median;
    float x;

    float a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%f", &a[i]);
    }
    selection_sort(a,n);

    if(n%2==0)
    {
        median=(n+1)/2;  
        x=a[median];
    }
    else
    {
        x=(a[(n+1)/2]+a[n/2])/2;

    }
    printf("median = %d ", x);
    // int p;
    // scanf("%d", &p);
}