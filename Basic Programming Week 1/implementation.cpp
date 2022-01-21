
#include <iostream>

using namespace std;

int main()
{
     int hashmap[10]={0};
      string str ;
      cin >> str ;
      for(int i=0 ; i<str.size() ; i++){
           hashmap[str[i]-'0']++;
      }
      for(int i=0 ; i<10 ;i++){
          cout << i << " " <<hashmap[i] << endl ;
      }

    return 0;
}
