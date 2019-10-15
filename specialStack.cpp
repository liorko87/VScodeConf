#include <stack> 

using namespace std;

class SpecialStack
{
public:
    int push(int element);
    int pop();
    bool isEmpty(); 
    bool isFull();
private:
    stack<int> s;
};

int SpecialStack::push(int element) {s.push(element);}