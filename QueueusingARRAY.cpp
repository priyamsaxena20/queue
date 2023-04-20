#include <bits/stdc++.h> 
class Queue {
    int *arr;
    int qfront;
    int rear;
    int size;

public:
    Queue() {
       size=100001;
       arr= new int[size];
        qfront=0;
        rear=0;

    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(qfront==rear){
            return true;
        }
        else{
            return false;
        }
    }

    void enqueue(int data) {
        // check full
        if(rear==size){
            cout<<"full"<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }

    }

    int dequeue() {
        // formt se popo hogi
        // emty chek karenge
        if(qfront==rear){
            return -1;
        }
        else{
            int ans=arr[qfront];
            arr[qfront]=-1;
            
            qfornt++;
            if(qfront==rear){
                qfront=0;
                rear=0;
            }
            return ans;
        }
       


    }

    int front() {
        // Implement the front() function
        if(qfront==rear){
            return -1;

        }
        else{
            return arr[qfront];
        }

    }
};
