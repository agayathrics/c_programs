/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   // printf("Hello World");
    int arr[20]={10,10,10,10,10,20,20,20,20,20,30,30,30,7,7,7,7,7,7,9};
    int n=20;
    int i,j,temp,final=0,t1=0,l;
    for(i=0;i<n;i++)
    {
        final=0;
        temp=arr[i];
        for(j=0;j<n;j++)
        {
            if(temp==arr[j])
            {
                final++;
            }
        }
        if(t1<final)
        {
          t1=final;
          l=temp;
        }
    }
    printf("%d",l);
    return 0;
}
