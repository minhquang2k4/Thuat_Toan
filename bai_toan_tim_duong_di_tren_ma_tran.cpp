#include <bits/stdc++.h>
using namespace std;
using ll = long long ;

int m , n ;
bool x[1000] ;
int  a[100][100] ;

void khoiTao()
{
    for (int i = 0; i <= m + n - 2 ; i++)
    {
        x[i] = 0 ;
    }
}

void nhap () 
{
    cin >> m >> n ; 
    for ( int i = 1 ; i <= m ; i ++ )
        for ( int j = 1 ; j <= n ; j ++ )
            cin >> a[i][j] ;
}


void kt()
{ 
    bool ok = true ;
    int h = 1 , c = 1 ;
    for ( int i = 1 ; i <= m + n - 2 ; i++ )
    {
        if ( x[i] == 0) h += 1 ;
        else c += 1 ;
        if ( a[h][c] == 0 || h > m || c >> n )
        {
        ok = false ;
        break;
        }
    } 
    if ( ok ) 
    {
        for ( int i = 1 ; i <= m + n -2 ; i++)
        {
            if ( x[i] == 0) cout << "D" ;
            else cout << "R" ;
        } cout << endl ;
    }
 
 
}


void in()
{
    for (int i = 1 ; i <= m + n - 2 ; i++)
    {
        cout << x[i];
    } cout << endl ;
}

 void Try(int i)
{
    for (int j = 0; j <=1  ; j++)
    {
        x[i] = j ;
        if (i == m + n - 2 ) kt() ;
        else Try (i+1) ; 
    }
}

int main () 
{ 

    nhap() ; 
    khoiTao () ; 
    Try (1) ; 
    return 0 ; 
} 
