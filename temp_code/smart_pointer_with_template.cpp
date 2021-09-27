#include <iostream>
using namespace std;
 
//especially used for management of resources like file handling, network sockets
template <class T>
class SmartPtr {
    T* ptr; // pointer 
public:
   
    explicit SmartPtr(T* p = NULL) { ptr = p; }
 
  
    ~SmartPtr() { delete (ptr); }
 
    // Overloading dereferncing operator
    T& operator*() { return *ptr; }
 
    // Overloading arrow operator    
    T* operator->() { return ptr; }
};
 
int main()
{
    SmartPtr<int> ptr(new int());
    *ptr = 20;
    cout << *ptr;
    return 0;
}