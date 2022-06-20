#pragma once


template <typename T>
class QueueT
{
private:
    T *arr;
    int size;
    int front;
    int rear;

    void resize(){
        T *temp = new T[size * 2];
        for(int i = 0; i < size; i++){
            temp[i] = arr[(front + i) % size];
        }
        delete[] arr;
        arr = temp;
        front = 0;
        rear = size - 1;
        size *= 2;
    }


public:
    QueueT(){
        size = 10;
        front = 0;
        rear = -1;
        arr = new T[size];
    };
    ~QueueT(){
        delete[] arr;
    };
    void enqueue(T data){
        if(rear == size - 1){
            resize();
        }
        rear++;
        arr[rear] = data;
    };

    T dequeue(){
        if(front == rear + 1){
            std::cout << "Queue is empty" << std::endl;
            return 0;
        }
        T data = arr[front];
        front++;
        return data;
    };

    T peek(){
        if(front == rear + 1){
            std::cout << "Queue is empty" << std::endl;
            return 0;
        }
        return arr[front];
    };

    bool isEmpty(){
        if(front == rear + 1){
            return true;
        }
        return false;
    };

    void print(){
        if(front == rear + 1){
            std::cout << "Queue is empty" << std::endl;
            return;
        }
        for(int i = front; i <= rear; i++){
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    };

    void printReverse(){
        if(front == rear + 1){
            std::cout << "Queue is empty" << std::endl;
            return;
        }
        for(int i = rear; i >= front; i--){
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    };

    void clear(){
        front = 0;
        rear = -1;
    };

    int getSize(){
        return size;
    };

};

