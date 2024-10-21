#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <stdexcept>

using namespace std;

template <typename T>
class VectorStack
{
    private:
        std::vector<T> vec;

    public:
        //add to queue by push_back
        void push(const T& element)
        {
            vec.push_back(element);
        }

        //pop end by pop_back and return new top
        T pop()
        {
            if(isEmpty()){throw std::runtime_error("Stack underflow");}
            T topElement = vec.back();
            vec.pop_back();
            return topElement;
        }

        //isEmpty
        bool isEmpty()
        {
            return vec.empty();
        }

        //return top
        T top()
        {
            if(isEmpty()) {throw runtime_error("Stack underflow");}
            return vec.back();
        }
};

int main()
{
    VectorStack<int> stack1;

    //push elements
    stack1.push(13);
    stack1.push(153);
    stack1.push(11233);
    cout << "The top element is " << stack1.top() << endl;

    cout << "The top element after popping 1 element" << stack1.top() << endl;

    if(stack1.isEmpty())
    {
        cout << "The stack is empty" << endl;
    }
    else
    {
        stack1.pop();
        cout << "The top element after popping 1 element" << stack1.top() << endl;
    }


}