#pragma once

template <typename T>
class StackT
{
private:
    T *arr;
    int size;
    int top;

public:
    StackT(){
        size = 10;
        top = -1;
        arr = new T[size];
    };
    ~StackT(){
        delete[] arr;
    };
    void push(T data){
        if(top == size - 1){
            std::cout << "Stack is full" << std::endl;
            return;
        }
        top++;
        arr[top] = data;
    };

    T pop(){
        if(top == -1){
            std::cout << "Stack is empty" << std::endl;
            return 0;
        }
        T data = arr[top];
        top--;
        return data;
    };
    
    T peek(){
        if(top == -1){
            std::cout << "Stack is empty" << std::endl;
            return 0;
        }
        return arr[top];
    };
    

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        return false;
    };

    bool isFull(){
        if(top == size - 1){
            return true;
        }
        return false;
    };

    void print(){
        if(top == -1){
            std::cout << "Stack is empty" << std::endl;
            return;
        }
        for(int i = top; i >= 0; i--){
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    };

    void clear(){
        top = -1;
    };


    

    int getSize(){
        return size;
    };
    




    void printReverse(){
        if(top == -1){
            std::cout << "Stack is empty" << std::endl;
            return;
        }
        for(int i = top; i >= 0; i--){
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    };
    
};