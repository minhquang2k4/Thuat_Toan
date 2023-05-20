#include <bits/stdc++.h>
using namespace std ;

int n , a[100] ;
bool stop = false ;

void in()
{
    for (int i = 0 ; i < n ; i++)
    {
        cout << a[i] ;
    }
    cout << endl ; 
}

void khoitao()
{
    for(int i = 0 ; i < n ; i++)
    {
        a[i] = 0 ;
    }
}

void sinh ()
{
    int i = n -1 ;
    while (i >= 0 && a[i] == 1)
    { 
        a[i] = 0 ; 
        i-- ;
    }
    if (i == -1)
    {
        stop = true ;
    }else a[i] = 1 ;
}

void ctrinh()
{ 
    while (!stop)
    {
        in();
        sinh();
    }
}

int main() 
{
    cin >> n ;
    khoitao(); 
    ctrinh();
    return 0;
} 
