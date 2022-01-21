#include <bits/stdc++.h>

using namespace std;



int main()
{

    long N ,q;
    cin >> N ;
    long arr[N] ;
    for(long i=0 ; i<N ;i++){
        cin >> arr[i] ;
    }
   cin >> q ;
    long len = sizeof(arr) / sizeof(arr[0]);
    sort(arr , arr+len);

   for(long i=0 ; i<q;i++){
       long index ; 
       cin >> index ;
       cout << arr[index-1] << endl;


   }
    return 0;
}
