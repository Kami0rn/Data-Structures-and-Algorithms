#include<stdio.h>

int main (void)
{
    int arr[] = {2,4,6,4,7,7,10,10,10,10,11,12,12,12,13,13,14,14,15,17,18,19,20,20,20,22,23,24,25,25,26,26,27,27,30,32,33,37,37,38,39,40,40,42,42,42,44,46,46,46,47,49,50,51,52,52,53,55,56,59,60,61,63,63,64,64,65,67,68,69,69,71,72,73,74,78,80,81,82,82,83,84,84,86,86,89,90,90,91,92,92,93,93,93,93,94,94,96,97,99};
    int cnt=0,cnt2=0, n=100 ,i, j  ;
    int max_diff = arr[1] - arr [0];
    for (i = 0; i < n; i++)
    {
    for (j = i+1; j < n; j++)
        {        
            if (arr[j] - arr[i] > max_diff)   
                max_diff = arr[j] - arr[i];
        
                cnt += 1 ;
        }
    cnt2 += 1;    
    }       


    printf("Maximum difference is %d",max_diff  );
    printf ("\nIt replace loop for %d time ",cnt) ;
    printf ("\nIt loop for %d time ",cnt2) ;
    return 0;
}
