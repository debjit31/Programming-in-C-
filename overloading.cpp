#include<iostream>
#include<math.h>
using namespace std;
class Overloading{
    public:
    void area(int x)
    {
        printf("Area of Square :- %d\n", (x*x));
    }
    void area(int x, int y)
    {
        printf("Area of Rectangle :- %d\n", (2*(x+y)));
    }
    void area(int x, int y, int z)
    {
        double s = (x+y+z)/2;
        double area = sqrt(s*(s-x)*(s-y)*(s-z));
        cout<<"Area of Triangle is :- "<<area;
    }
};
int main(){
    Overloading ov;
    ov.area(4);
    ov.area(4,5);
    ov.area(11,10,13);
}