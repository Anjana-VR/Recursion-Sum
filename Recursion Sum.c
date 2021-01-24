#include <stdio.h>
#include<conio.h>

int add(int n)
{
   if (n <= 0)
    {
        return 0;
    }
   return ( n%10) + add( n/10);
}

void main()
{
  int n,ans;
  printf ("Input number : ");
  scanf ("%d", &n);
  ans = add(n);
  printf("Sum of digits : %d",ans);
}
