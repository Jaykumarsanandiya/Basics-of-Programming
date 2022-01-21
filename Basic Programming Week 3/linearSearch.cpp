
#include <iostream>

using namespace std;

int main()
{
    
     int N ;
     cin >> N ;
     
     long arr[N] , M ,found=0;
     cin >> M ;
    for(long i=0 ; i<N ;i++ ){
        cin >> arr[i] ;
    }
     for(long i=N-1 ; i>=0; i-- ){
           if(arr[i] == M){
               cout << i+1 << endl;
               found=1;
               break;
           }
     }
     
     if(found==0){
         cout << -1 << endl;
     }
    return 0;
}
