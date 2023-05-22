 #include <bits/stdc++.h>
 
using namespace std;
using ll = long long ;

ll giaiThua(int n )
{
    if ( n == 0) return 1 ;
    return n*giaiThua(n-1) ; 
}

ll luyThuaNhiPhan ( int a , int b )
{
    if ( b == 0) return 1 ;
    int tmp = luyThuaNhiPhan(a, b/2) ;
    if (b % 2 == 0) return tmp * tmp ;
    else return tmp * tmp * a ;
}



ll FiBo(int n)
{
    if ( n == 0) return 0 ;
    if ( n == 1) return 1 ;
    return ( FiBo(n-1) % 1000000007 + FiBo(n-2) % 1000000007 ) % 1000000007 ;
}

int main ()
{

    return 0;
}