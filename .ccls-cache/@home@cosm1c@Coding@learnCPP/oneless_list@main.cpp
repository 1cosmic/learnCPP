#include <iostream>

template<typename T>
class List {
    public:
        List();
        ~List();
    
    private:
        template<typename T1>
            class Node {
                T1 data;
                Node *pNext;

                Node(T1 data = T1(), Node *pNext = nullptr) {
                    this -> data = data;
                    this -> pNext = pNext;

                }

            };

        int counter;
};

int main() {
    return 0;
}
