#include<stdio.h>
#include<stdlib.h>
int main()
{
        int n;
        scanf("%d",&n);
          int a=0;
          int i,j; 
              for(i=1;i<n;++i)
			  {
                     for(j=i+1;j<n;j++) 
                {
				int sum=(i+j)*(j-i+1)/2;
             if(sum==n)
               {
			   a=1;
             for(int m=i;m<=j;j++)
                
				printf("%d ",m);
               printf("\n");
              
              }
          } 
		  }
        if(a==0)
		{
          printf("NONE\n" );
                }
          return 0;
}
