#include <stdio.h>
#include <stdlib.h>
int main()
{
 int a,b,i,j,k,s1=0,s2=0,t1,t2,d,u,n;
 int a1[10],b1[10],c1[10],d1[10],e1[10],f1[10],g1[10];

 for(i=0;i<10;i++)
 {
 a1[i]=0;
 f1[i]=0;
 b1[i]=0;
 g1[i]=0;
 c1[i]=0;
 e1[i]=0;
 }
 printf("enter the first number : ");
 scanf("%d",&a);
 t1=a;
 for(i=0;a!=0;i++)
 {
 k=a%2;
 a1[i]=k;
 a=a/2;
 s1=s1+1;
 }
 
 printf("\nenter the second number : ");
 scanf("%d",&b);
 t2=b;
 for(i=0;b!=0;i++)
 {
 k=b%2;
 b1[i]=k;
 b=b/2;
 s2=s2+1;
 }

 if(s1!=s2)
 {
 printf("bits are not of same size");
 exit (0);
 }

 printf("\nBinary number for %d : ",t1);
 for(i=(s1-1),j=0;i>=0;i--,j++)
 {
 printf("%d",a1[i]);
 f1[j]=a1[i];
 }

 printf("\nBinary number for %d : ",t2);
 for(i=(s1-1),j=0;i>=0;i--,j++)
 {
 printf("%d",b1[i]);
 g1[j]=b1[i];

 }

 n=t1&t2;
 u=t1|t2;
 d=t1^t2;

 for(i=0;i<s1;i++)
 {
 c1[i]=f1[i]&g1[i];
 d1[i]=f1[i]|g1[i];
 e1[i]=f1[i]^g1[i];
 }

 printf("\nResult of Intersection : ");
 for(i=0;i<s1;i++)
 {
 printf("%d",c1[i]);
 }

 printf("\nResult of Union : ");
 for(i=0;i<s1;i++)
 {
 printf("%d",d1[i]);
 }
 printf("\nResult of Difference : %d",d);
 printf("\nResult of Difference : ");
 for(i=0;i<s1;i++)
 {
 printf("%d",e1[i]);
 }
}