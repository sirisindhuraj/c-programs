#include<stdio.h>
#include<string.h>
int main() 
{
    int i,n,s;
    printf("the value of n is\n");
    scanf("%d",&n);
    s=n+n;
    int nums[n],ans[s];
    printf("enter the array elements of nums\n");
    for(i=0;i<n;i++)
    scanf("%d",&nums[i]);
    for(i=0;i<n;i++)
    {
    ans[i]=nums[i];
    ans[i+n]=nums[i];
        }
    for(i=0;i<s;i++)
    {
   printf("%d\n",ans[i]);
   
    }
}