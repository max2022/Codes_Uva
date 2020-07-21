#include<stdio.h>
int main()
{
   int k;
   int arr[10]={1,4,3,5,4,9,2,3,6,6};
   //printf("%d",arr[2]);
   int sum =0;
   for(int i=0;i<10;i++)
   {
      sum = sum+arr[i];
   }
   int divide;
   int m=0;
   //printf("%d\n",sum);
   if(sum%3==0)
   {
       printf("");
   }
   else
   {
   for(int i=9;i>0;i--)
   {

       divide = sum-arr[i];
       sum = divide;
       //printf("value of divide %d\n",divide);
       if(divide %3 ==0)
       {
           m++;
           break;
       }
       m++;
      // printf("value of m %d\n",m);
   }
   }
   int length;
   length = 10-m;
   printf("%d\n",length);
    return 0;
}
