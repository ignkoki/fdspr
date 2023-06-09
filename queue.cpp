#include <iostream>
using namespace std;

#define n 20

class queue{
    int *arr;
    int front;
    int back;
    

    public:
    queue(){
        arr= new int[n];
        front = -1;
        back=-1;
    }

    void enqueue(int x){
        if(back==n-1){
            cout<<"Queue is full"<<endl;
            return;
        }
        cout<<"enqueue : "<<x<<endl;
        back++;
        arr[back]=x;
        
        if(front==-1){
            front++;
        }
    }

    void dequeue(){
        if(front==-1 || front>back){
            cout<<"queue is empty";
            return;
        }
        cout<<"dequeue : "<<arr[front]<<endl;
        front++;
    }
    
   int peek(){
    if(front==-1 || front>back){
        cout<<"Queue is empty";
        return -1;
    }
    cout<<"peek element is : ";
    return arr[front];
   }

   bool empty(){
    if(front==-1 || front>back){
        return true;
    }
    return false;
   }
};

int main(){

    queue q;
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    q.enqueue(20);

    q.dequeue();
    q.dequeue();
    cout<<q.peek()<<endl;
    cout<<q.empty()<<endl;
    q.dequeue();
    q.dequeue();
    cout<<q.empty()<<endl;

    return 0;
}