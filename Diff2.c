#include<stdio.h>

int main (void)
{
    int arr[] = {1, 2, 90, 10, 100};
    int cnt, n=5 ,i, j  ;
    int max_diff = arr[1] - arr [0];
    for (i = 0; i < n; i++)
    {
    for (j = i+1; j < n; j++)
        {        
            if (arr[j] - arr[i] > max_diff)   
                max_diff = arr[j] - arr[i];
        
                cnt += 1 ;
        }    
    }       


    printf("Maximum difference is %d",max_diff  );
    printf ("\nIt loop for %d time ",cnt) ;
    return 0;
}
