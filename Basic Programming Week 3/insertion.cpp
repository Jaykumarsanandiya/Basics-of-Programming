
#include <bits/stdc++.h>

using namespace std;

int main()
{
 
    int N ;
    cin >> N ;

    int arr[N] , sorArr[N] ;

    for(int i=0 ; i <N ;i++){
        cin >> arr[i] ;
        sorArr[i] = arr[i] ;
    }
    sort(sorArr,sorArr+N) ;
    


    for(int i=0 ; i<N ;i++){
       for(int j=0 ; j<N ;j++){
           if(arr[i] == sorArr[j]){
               cout << (j+1) << " " ;
           }
       }
    }


    return 0;
}
