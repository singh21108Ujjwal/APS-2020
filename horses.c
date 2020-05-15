#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int t,n,i,j,min,diff;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d",&n);
    long int a[n];

        {for(i=0;i<n;i++)
          {scanf("%d",&a[i]);

          }
          min=abs(a[0]-a[1]);
          for(i=0;i<n;i++)
          {for(j=i+1;j<n;j++)
              {diff=abs(a[i]-a[j]);
                 if(diff<min)
                    min=diff;
              }
          }
          printf("%d\n",min);

        }
    }
    return 0;
}
