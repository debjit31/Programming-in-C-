/*Multi Level Inheritance in C++*/
#include<iostream>
using namespace std;
class A{
	private:
		int x;
		//String y;
	public:
		void input(){
			printf("In Class A.....\n");
			printf("Enter a value :- ");
			cin >> x;
			/*printf("Enter a name :- ");
			cin >> y;*/
			printf("Value of x :- %d\n", x);
		}
		int getdata(){
			return x;
			//return y;
		}
};
class B: public A{
	private:
		int y;
	public:
		void input1(){
			printf("In Class B....\n");
			printf("Enter a number :- ");
			cin >> y;
			printf("Value of y is :- %d\n", y);
			
		}
};
class C: public B{
	private:
		int z;
	public:
		void input2(){
			printf("In Class C.....\n");
			printf("Enter the value :- ");
			cin >> z;
			printf("Value of z is : - %d\n", z);
		}
};
int main(){
	B b;
	b.input();
	b.input1();
	C c;
	c.input();
	c.input1();
	c.input2();
}
