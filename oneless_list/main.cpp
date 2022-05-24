#include <iostream>

template<typename T>
class List {

    public:
        List();
        ~List();
    
    private:
        template<typename T1>
        class Node {

            public:
                T1 data;
                Node *pNext;

                Node(T1 data = T1(), Node *pNext = nullptr) {
                    this -> data = data;
                    this -> pNext = pNext;
                }

        };

        int counter;
        Node<T> *head;
};

int main() {
    return 0;
}
