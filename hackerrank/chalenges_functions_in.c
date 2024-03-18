//Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.
#include<stdio.h>
#include<string.h>
int max(int a,int b)
{
    if (a>b)
      return a;
    else 
      return b;
        
}

int main() {

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max(a, b);
    int ans1=max(c,d);
    int ans2=max(ans,ans1);
    printf("%d", ans2);
    
    return 0;
}
