#include <bits/stdc++.h>
using namespace std;
using ll = long long ;

int  n , MIN = 99999 ;
bool chuaxet[1000] ;
int  a[100][100] ;
int x[1000] ;

// mảng x là thứ tự các thành phố đi qua 
// sẽ sinh tất cả các trường hợp đi từ thành phố đầu tiên ( x[1] luôn = 1) đến thành phố thứ n 
// tính chi phí xem cái nào nhỏ nhất thì in ra 

void khoitao()
{ 
    for (int i = 1 ; i <= n ; i++)
    { 
        chuaxet[i] = 1 ;
    } 
} 

void nhap()
{
    for (int i = 1 ; i <= n ; i++)
    for (int j = 1 ; j <= n ; j++)
    {
        cin >> a[i][j] ;
    }
}

void kt()
{
    ll chiphi = a[x[n]][x[1]] ;
    for ( int i = 2 ; i <=n ; i++)
    {
        chiphi += a[x[i-1]][x[i]] ;
    }
    if ( chiphi < MIN ) MIN = chiphi ; 
}

void Try(int i)
{ 
    for (int j = 2 ; j <= n ; j++) 
        if ( chuaxet[j] )
        {
            x[i] = j ;
            chuaxet[j] = false ;

            if ( i == n) kt() ;
            else Try (i+1) ;

            chuaxet[j] = true ;
        }
} 



int main () 
{ 
    cin >> n ; 
    x[1] = 1 ; 
    nhap() ; 
    khoitao() ; 
    Try (2) ; 
    cout << MIN ;
} 
