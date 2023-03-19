//
//  main.cpp
//  CTDL
//
//  Created by Apple on 11/03/2023.
//

#include <iostream>
using namespace std;
struct Node {
    int value;
    Node* next = nullptr;
    Node(int initValue){
        this->value = initValue;
    }
    Node(){
        this->value = 0;
    }
};

struct LinkedList {
    Node* headNode = nullptr;
    Node* tempNode = nullptr;
    LinkedList(int initValue){
        headNode = new Node(initValue);
        tempNode = headNode;
    };
    void addValueToHead(int Value){
        Node* newNode = new Node(Value);
        newNode->next = headNode;
        headNode = newNode;
    }
    void printAllValue(){
            Node* temp = headNode;
            do {
                std::cout << temp->value << endl;
                temp = temp->next;
            } while (temp !=nullptr);
    };
    void addValueToTail(int Value){
        Node* newNode = new Node(Value);
        tempNode->next = newNode;
        tempNode = newNode;
    };
    Node* searchValue(int value){
        Node* temp = headNode;
        while(temp!= nullptr && temp->value != value){
            temp = temp->next;
        }
        if(temp!= nullptr && temp->value == value){
            return temp;
        }else {
            return nullptr;
        }
        
    }
    void deleteANode(Node* node){
        Node* temp = headNode;
        while(temp != nullptr){
            if(temp->next == node){
                temp->next = node->next;
                delete node;
                break;
            }else{
                temp = temp->next;
            }
        }
    }
    Node* getFinalNode(){
            Node* temp = headNode;
            while(temp->next!= nullptr){
                temp = temp->next;
            }
            return temp;
        }
};


int main(int argc, const char * argv[]) {
    LinkedList *testList = new LinkedList(4);
    testList->addValueToTail(5);
    testList->addValueToHead(3);
    testList->addValueToHead(2);
    testList->addValueToTail(6);
    testList->addValueToHead(1);
    Node* result = testList->searchValue(7);

    
//    int vl  = 4;
//    int* ptr = &vl;
//    int vl2 = 10;
//    std::cout << "dia chi cua ptr - &ptr: " << &ptr << endl;
//    std::cout << "dia chi cua vl &vl: " << &vl << endl;
//    std::cout << "gia tri luu tru cua vl - vl: " << vl << endl;
//    std::cout << "gia tri luu tru cua ptr - ptr: " << ptr << endl;
//    std::cout << "tham chieu gia tri tu ptr: " << *ptr << endl;
//    std::cout << "tham chieu gia tri cua vl tu tham chieu toi o nho cua vl *&vl: " << *&vl << endl;
    
}
