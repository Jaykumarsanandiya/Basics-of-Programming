#include <iostream>

using namespace std;

int main()
{
    int x,y ;
    cin >> x >> y ;
    int arr[x][y] ;
    for(int i=0 ; i<x;i++){
        for(int j=0 ; j<y;j++){
        cin >> arr[i][j] ;
        }
    }
    
    // array made and values inserted

    for(int i=0 ; i <y;i++){
        for(int j=0 ; j <x;j++){
            cout << arr[j][i] << " " ;
        }
        cout << endl;
    }
    return 0;
}
