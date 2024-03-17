#include<stdio.h>

int q,n, left, right, sum=0;
int ar[100010];

scanf("%d %d", &n, &q);

for( int i=0; i<n; i++)
{
   scanf("%d",&ar[i]);
}


sum[0]=ar[0];
for(i=1;i<n;i++)
	sum[i] = sum[i-1] + ar[i];

for(i=0;i<q;i++)
{
	scanf("%d%d",&left,&right);

    if(left!=0)
  		result = sum[right]-sum[left-1];
  else
  		result = sum[right];

  printf("%d\n",result);
}
