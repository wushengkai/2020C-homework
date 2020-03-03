#include "stdio.h" 
int main()
{    int a,b;
     printf("请输入真分数的分子分母");
     scanf("%d%d",&a,&b);
     int m=a;
     if(a<b)
	 m=b;

	 for(int k=m;k>=1;k--)
	 {   if(a%k==0&&b%k==0)
            {  
			 int i=a/k;
	         int j=b/k;printf("%d/%d",i,j);
	          break;
				 }	 
	 }  

     
	  } 
