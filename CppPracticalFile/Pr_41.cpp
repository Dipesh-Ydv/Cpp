// Name : Dipesh Yadav
// Roll no : 210011015012
#include <iostream>
using namespace std;

template<class T1, class T2>  
class A {  
    T1 a;  
    T2 b;  
    public:  
        A(T1 x,T2 y){  
            a = x;  
            b = y;  
        }  
        void display() {  
            cout << "Values of a and b are : " 
            << a << " & " << b << endl;  
        }  
};  

int main()  
{  
    A<int,float> d(5,6.5);  
    d.display();  

    return 0;  
}  