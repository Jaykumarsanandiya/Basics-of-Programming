#include <iostream>

using namespace std;

int main()
{
   
     int N ; 
     cin >> N ;
     int arr[N]   ;
        int hsh[101]={0} ;
     for(int i=0 ; i< N ;i++){
         cin >> arr[i] ;    
     }
        for(int i=0 ; i<N ;i++){
            hsh[arr[i]]++ ;

        }
    for(int i = 0 ; i<101 ;i++){
         if(hsh[i]!=0){
             cout << i << " " << hsh[i] << endl ;
         }
    }
    return 0;
}
