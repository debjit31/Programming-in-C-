/*Multiple Inheritance in C++*/
#include<iostream>
using namespace std;
class A{
	private:
		int x;
	public:
		void input(){
			printf("\nIn Class A.....\n");
			x=0;
			printf("Value  of x :- %d\n", x);
		}
};
class B: public virtual A{
	private:
		int y;
	public:
		void input1(){
			printf("\nIn Class B.....\n");
			y = 15;
			printf("value of y = %d\n", y);
			
		}
};
class C: public virtual A{
	private:
		int z;
	public:
		void input2(){
			printf("\nIn Class C.....\n");
			z = 2;
			printf("Value of z :- %d\n", z);
		}
};
class D: public B, public C{
	private:
		int f;
	public:
		void show(){
			printf("In Class D......\n");
			f=2;
			printf("\nValue of f :- %d", f);
		}
};
int main(){
	
	D d;
	d.input();
	d.input1();
	d.input2();
	d.show();
	//D arr[100];
	
	
}
