#include <stdio.h>

int B_Search(int a[],int low,int high,int key)
{
   
    while (low<=high)
    {
        int mid = (low + high) / 2;
        if (a[mid]==key)
        {
            return mid;
        }
        else if (a[mid]<key)
        { 
            low=mid+1;
        }
        else 
        {
            high=mid-1;
        }
    }
     return -1;
}

int main()
{
    int a[] = {12, 13, 21, 36, 40};
    int key;

    int n = sizeof(a) / sizeof(int);
    int high=n-1;
    int low=0;
    printf("Enter the number to be searched ");
    scanf("%d", &key);
    int ans = B_Search(a,low,high,key);
    if(ans==-1)
        printf("Element not found!");
    else
        printf("Element found ");

return 0;

}