
#include <iostream>

using namespace std;

int main()
{
     long long costOnline=0 , costClassic=0 ;

     long long  D, Oc , Of,Od, Cs ,Cb ,Cm , Cd ;
     cin >> D >> Oc >> Of >> Od >> Cs >> Cb >> Cm >> Cd  ;
     costOnline =  Oc +(D-Of)*Od ;  // online cost
     if(costOnline <Oc)
       costOnline = Oc ;
     costClassic = Cb + Cd*D + (D/Cs)*Cm ; // classic cost


    if( costOnline <=costClassic){
        cout << "Online Taxi" << endl ;
    }else{
        cout << "Classic Taxi" << endl ;
    }

    return 0;
}
