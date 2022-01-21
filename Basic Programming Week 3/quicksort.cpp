#include <bits/stdc++.h>

using namespace std;

int partition ( int A[],int start ,int end) {
    int i = start + 1;
    int piv = A[start] ;           
    for(int j =start + 1; j <= end ; j++ )  {
  
          if ( A[ j ] < piv) {
                 swap (A[ i ],A [ j ]);
            i += 1;
        }
   }
   swap ( A[ start ] ,A[ i-1 ] ) ; 
   return i-1;                      
}


int rand_partition ( int A[ ] , int start , int end ) {
    
     int random = start + rand( )%(end-start +1 ) ;

      swap ( A[random] , A[start]) ;       
     return partition(A,start ,end) ;     
}

void quick_sort ( int A[ ] ,int start , int end ) {
   if( start < end ) {
      
         int pivot = rand_partition (A,start , end ) ;     
         quick_sort (A,start , pivot -1);    
         quick_sort ( A,pivot +1 , end) ; 
   }
}

int main()
{

     int N ;

	 cin >> N ;
	int arr[N] ;
	 for(int i=0; i<N ;i++){
		 cin >> arr[i] ;
	 }

	 quick_sort(arr,0 , N-1) ;

	 for(int i=0; i<N ;i++){
		cout <<  arr[i] << " " ;
	 }

    return 0;
}



