 #include <bits/stdc++.h>
 
using namespace std;

int binarySearch (int arr[] , int value , int left , int right)
{
    while (left <= right)
    { 
      int middel = (left + right) / 2 ;
      if (arr[middel] == value)
       {
          return middel;
       }else if (arr[middel] > value) 
       {
          right = middel - 1;
       }else if (arr[middel] < value)
        {
         left = middel + 1;
        }
    } 
    return -1 ;
}
int main ()  
{
    int n , m ;
    cin >> n >> m ;
    int a [n+1] ;
    int b[m+1] ;
    // nhập mảng a và sắp xếp
    for ( int i = 1 ; i <= n ; i++ )
    {
        cin >> a [ i ] ;
    }
    sort ( a + 1 , a + n + 1 ) ;


    // nhập mảng b 
    for (int i = 1 ; i <= m ; i++ )
    {
        cin >> b [ i ] ;
        cout << binarySearch(a , b[i] , 1 , n) << endl;
    }
} 

