#include<stdio.h>
void main()
{
    int n,A[30],key,i,low,high,flag=0,pos,mid;
    printf("Enter no of the element");
    scanf("%d",&n);
    printf("Enter elements");
    for(i=0;i<n;i++)
        {
            scanf("%d",&A[i]);
        }
    printf("enter element to be search");
    scanf("%d",&key);
    low=0,high=n-1;
    while(low<=high)
        {
            mid=(low+high)/2;
            if(A[mid]==key)
            {
                flag=1;
                pos=mid;
                break;
            }
            else if(A[mid]<key)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
            
        }
        if(flag==0)
            {
                printf("Element not found");
            }
            else
            {
                printf("Element found at %d",pos);            }
}