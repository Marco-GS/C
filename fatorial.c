#include  <stdio.h>
#include  <conio.h>

long  fact(int  n)
{
    if(n==0)
        return 1 ;
    else
        return ( n * fact(n-1) ) ;
}

void main()
{
    int  n ;
    clrscr() ;
    printf("Enter n:") ;
    scanf("%d", &n) ;
    printf("Factorial of %d is %ld", n, fact(n) ) ;
    getch() ;
}
