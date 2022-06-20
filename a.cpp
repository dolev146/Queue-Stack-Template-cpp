#include <iostream>
#include "QueueT.hpp"
#include "StackT.hpp"


int main(){
    // test queue
    QueueT<int> q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);

    q.print();

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    q.print();

    // test stack
    StackT<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);


    s.print();

    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();

    s.print();
    
    
    
    return 0;
}