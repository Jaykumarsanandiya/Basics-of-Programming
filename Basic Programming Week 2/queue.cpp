/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here


#include <iostream>

using namespace std;

int front=0,rear=0 ;

void enqueue(int q[],int number){
    // overflow
    if(rear==149){
       cout<< "overflow" << endl; 
    }else{
        q[rear]=number;
        rear++;

    }

}

int dequeue(int q[]){
    int delNum;
    if(rear==front){
       
        return -1 ;
    }else{
        delNum = q[front];
        front++;
        return delNum;
    }
}

int sizeQueue(int front , int rear){
    return (rear - front) ;
}


int main()
{
   
    int queue[150];
    int N;
    cin >> N;
    
    for(int i=0 ; i<N;i++){
        char ch ;
        cin >> ch ;
        if(ch == 'E'){
            int number ;
            cin >> number ;
            enqueue(queue,number);
            cout << sizeQueue(front , rear) << endl;
        }else{
            cout << dequeue(queue) << " "<< sizeQueue(front,rear) << endl;

        }
    }


    return 0;
}
