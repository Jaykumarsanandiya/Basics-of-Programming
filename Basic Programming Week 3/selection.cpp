#include <iostream>

using namespace std;

int main()
{
  
	int N , step;
	 cin >> N ;
	 int arr[N] ;
	  cin >> step ;
    for(int i=0 ; i<N;i++){
        cin >> arr[i] ;
    }
	  for(int i=0 ; i<step ; i++){
		   int min=arr[i];
		   int loc = i ;
		 for(int j=i ; j <N;j++){
			 if(min > arr[j]){
				 min = arr[j] ;
				 loc =j ;
			 }
		 }
		    int temp ;
			 temp = arr[loc] ;
			 arr[loc] = arr[i] ;
			 arr[i] = temp ;
			 
	  }
	  for(int i= 0 ; i<N ;i++){
		  cout << arr[i] << " " ;
	  }
    return 0;
}