#include<bits/stdc++.h>

using namespace std;

void quickSort (long long arr[], int left, int right)
{
    int i = left , j =right ;
    int tmp ;
    int pivot = arr[(left + right) / 2] ;

    while (i <= j)
    { 

         while (arr[i] < pivot)
            i++ ; 

         while (arr[j] > pivot)
            j-- ;
            
         if (i <= j) 
         {  
            swap(arr[i], arr[j]) ;
            i++ ;
            j-- ; 
         }
    } ; 
    
    if (left < j)
    quickSort(arr, left, j) ;
    if (i < right) 
    quickSort(arr, i, right) ;
}


int main()
{
    long long n , k ;
    cin >> n >> k ;
    long long arr[n] ;
    for (int i = 0 ; i < n ; i++)
    {
        cin >> arr[i] ;
    }
    quickSort(arr, 1, n - 1) ; 

    long long kq = arr[0] ;

    long long x = n - 1 - k ;
    long long z = 0 ;

    for ( long long i = 1 ; i < n ; i++)
    {
        if (i <= x)  
        { 
            kq -= arr[i] ;   
        }else kq += arr[i] ;
    }

    cout << kq << endl ;
}