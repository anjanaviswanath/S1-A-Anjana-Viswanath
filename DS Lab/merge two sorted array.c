#include <stdio.h>

int main()
{
    int a1[10],a2[10],a3[10];
    int m,n,i,j,k;
    printf("enter number of elements in 1st array:\n");
    scanf("%d",&m);
    printf("enter array elements are:\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("enter number of elements in 2nd array:\n");
    scanf("%d",&n);
    printf("enter array elements are:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a2[i]);
    }
    
    i=j=k=0;
    
    while(i<m && j<n)
    { 
        if(a1[i]>a2[j])
        {
            a3[k++]=a2[j++];
        }
        else
        {
            a3[k++]=a1[i++];
        }
    }
    while(i<m)
    {
        a3[k++]=a1[i++];
    }
    while(j<n)
    {
        a3[k++]=a2[j++];
    }
    
    printf("1st array:\n");
    for(i=0;i<m;i++)
    {
        printf("%d",a1[i]);
    }
    printf("\n 2nd array:");
    for(i=0;i<n;i++)
    {
        printf("%d",a2[i]);
    }
    printf("\n merged array:");
    for(i=0;i<m+n;i++)
    {
        printf("%d",a3[i]);
    }
    return 0;
}



output:
--------
enter number of elements in 1st array:
4
enter array elements are:
10
20
30
40
enter number of elements in 2nd array:
3
enter array elements are:
5
15
25
1st array:
10203040
 2nd array:51525
 merged array:5101520253040


