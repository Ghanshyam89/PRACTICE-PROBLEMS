#include<stdio.h>

int main()
{
    int i, j, n, min, temp;
    
    printf("Enter the number of elements in the Array");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements in the Arrray",n);
    for(i = 0; i < n; i++)
        scanf("%d",&arr[i]);

    for(i = 0; i < n; i++)
    {
        min = i;
        for(j = i+1; j < n; j++)
        {
            if(arr[min] > arr[j])
            {
                min = j;
            }
        }
        if(i != min)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    printf("Elements after sorting using selection in the Arrray");
    for(i = 0; i < n; i++)
        printf("%d",arr[i]);

    return 0;
}
