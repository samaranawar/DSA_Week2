// #include<stdio.h>
// #include<stdlib.h>

// void selection_sort(int* arr, int size) {
//     for (int i = 0; i < size-1; i++) {
//         int minIndex = i;
//         for (int j = i+1; j < size; j++) {
//             if (arr[j] < arr[minIndex]) {
//                 minIndex = j;
//             }
//         }

//         int t = arr[i];
//         arr[i] = arr[minIndex];
//         arr[minIndex] = t;
//     }
// }

// // void insertion_sort(int *arr, int size)
// // {
// //     for (int i = 1; i < size; i++) {
// //         int key = arr[i];
// //         int j = i-1;

// //         while (j >= 0 && arr[j] > key) {
// //             arr[j+1] = arr[j];
// //             j--;
// //         }

// //         arr[j+1] = key; 
// //     }
    
// // }

// void print(int *a,int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         printf("%d ", a[i]);
//     }
// }


// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int *a=(int*)malloc(sizeof(int)*n);

//     for(int i=0; i<n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     selection_sort(a,n);
//     print(a,n);
//     free(a);


// }


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
    for(int i=0; i<n; i++)
    {
        printf("%.2f ", a[i]);
    }

    if(n%2==0)
    {
        x=(a[(n+1)/2]+a[n/2])/2;
        
    }
    else
    {
        median=(n+1)/2;  
        x=a[median];

    }
    printf("\n median = %f ", x);
    // int p;
    // scanf("%d", &p);
}