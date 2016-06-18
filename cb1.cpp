/* C program to display all prime numbers between Two interval entered by user. */
#include <stdio.h>
int main()
{
  int t,count;
 int n1, n2, i, j, flag;

  scanf("%d",&t);
  while(t--){
    count=0;
  scanf("%d %d", &n1, &n2);
  for(i=n1; i<=n2; i++)
  {
      flag=0;
      for(j=2; j<=i/2; ++j)
      {
        if(i%j==0)
        {
          flag=1;
          break;
        }
      }
      if(flag==0)
        count++;
  }
    printf("%d\n",count);
  }
  
  return 0;
}