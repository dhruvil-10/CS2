#include <iostream>
#define pi 3.141 
using namespace std;
class area
{
    int r;
    static int n;

public:
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
    ~area() {
        cout<<"one object is deleted \n";
        n--;
        cout<<"total object are : "<<n<<endl;

    } 
};

int main()

{
//int area ::n;
    area obj1;
    area obj2(10);
    area obj3 (obj1);
    //obj1 = new area();
    //delete obj1;
    //obj2 = new area (56);
    //delete obj2;

    
}