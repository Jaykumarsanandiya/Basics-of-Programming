
#include <iostream>

using namespace std;

int main()
{
    int t ;
    cin >> t ;
    while(t--){
        int  x ,n,count=0;
        cin >> x ;
        n = x;
         while(n){
          n = n & (n-1);
            count++;
        } 
    

        cout << count <<endl;

    }
    
    
   

    return 0;
}
