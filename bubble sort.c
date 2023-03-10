#include <stdio.h>


void sort(int arr[] ,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if (arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void print(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    } printf("\n");
}

int main()
{
    int arr[]={5,4,3,2,1};
    print(arr,5);

    sort(arr,5);

    print(arr,5);

    return 0;
}