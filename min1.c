#include <stdio.h>
int main(void)
{
	int t,n,m,i,j,k,rs=5,r,min=0;
	scanf("%d",&t);
	if(t>=1&&t<=200)
	{
		for (k = 0; k <t; ++k)
		{


		scanf("%d%d",&n,&m);
		if(n>=1&&m>=1&&n<=100&&m<=100)
		{
			int A[n][m];
			for (i = 0; i < n; ++i)
			{
				for ( j = 0; j < m; ++j)
				{
					scanf("%d",&A[i][j]);
					if(A[i][j]==1)
						++min;
				}
				if(min<rs)
				{
					rs=min;
					r=i;
					min=0;
				}
			}
		}
		if (rs==0)

		printf("-1\n");
	else
	printf("%d\n", r);
     rs=5;
     min=0;
 }
	}

return 0;
}
