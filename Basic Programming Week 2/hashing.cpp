
#include <iostream>
#include <string>
using namespace std;


 string names[100000] ;

int main()
{
   
   
	long N ,q;
	cin >> N ;
	
	 // input taking 
	 for(long i=0 ; i<N;i++){
		 long rollNo ;
		 cin >> rollNo  ;
		 cin >> names[rollNo] ;
	 }
	 // hashmap made

	   cin >> q;
	for(long i=0 ; i<q;i++){
		 long rollNo ;
		 cin >> rollNo ;
		 cout << names[rollNo] << endl ;
	}
    return 0;
}