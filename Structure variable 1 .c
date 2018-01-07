#include <stdio.h>
int main()
{   int m,n,i,k,l,t,j;int s[100];
	struct studentthpe 
	{
		  int f;
		  int p;
		  int b;		  
	} a[100];
 scanf("%d",&n);
for(i=0;i<n;i++)
  {
  	scanf("%d",&a[i].f);
  	scanf(" %d",&a[i].p);
  	scanf(" %d",&a[i].b); 
	s[i]=(a[i].p+a[i].b+a[i].f);  
  }
  t=s[0];
 for(i=0;i<n;i++)
 if(t<s[i])
  t=s[i];
  printf("%d",t);
 	
	
	
	return 0;
}
