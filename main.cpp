#include <iostream>


template<typename MyType>
class SmartPointer {
public:
    SmartPointer(int* variable) {
        resource = variable;
    }

    ~SmartPointer() {
        std::cout << "The heap is clean" << std::endl;
        delete[] resource;
    }

private:
    MyType resource;

};

void foo() {
    int size;
    std::cout << "Enter size" << std::endl;
    std::cin >> size ;
    int* ptr = new int(size);
    SmartPointer<int*> myObj(ptr);
}

int main() {
    foo();
    return 0;
}

