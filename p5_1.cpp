#include<iostream>
#define pi 3.141 
using namespace std;
class area
{
    int r;
    static int n;

public:
~area() {
        cout<<"one object is deleted \n";
        n--;
        cout<<"total object are : "<<n<<endl;
        

    } 
    area()
    {
        r = 1;
        cout << "circle with radius " << r << " has area :" << pi * r * r << endl;
        n++;
    }
    area(int a) // parameterized constructor
    {
        r = a;
        cout << "circle with radius " << a << " has area :" << pi * a * a << endl;
        n++;
    }
    area(area &obj) // copy constructor
    {
        cout << "circle with radius " << obj.r << " has area :" << pi * obj.r * obj.r << endl;
        n++;
    }
    
};
int area ::n;
int main()
{

    area obj1;
    area obj2(20);
    area obj3(obj1);
    area *obj5 = new area;
    delete obj5;
    // obj5->~area();



    
}