
#include <iostream>

using namespace std;

int main()
{

	int N ,swap=0;
	cin >> N ;
	int arr[N] ;
	for(int i=0 ; i<N;i++){
		cin >> arr[i] ;
	}

	for(int i=0 ; i<N;i++){
		for(int j=0; j <N-i;j++){
			if(arr[j] > arr[j+1]){
				int temp ;
				temp = arr[j+1];
				arr[j+1] = arr[j] ;
				arr[j] = temp;
				swap++;
			}
		}
	}

	cout << swap ;
    return 0;
}
