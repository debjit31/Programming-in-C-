#include<iostream>
using namespace std;
class Education{
    public:
    int exp1;
    void add_expenseA(){
        printf("Enter Eduation Expenses :- ");
        cin >> exp1;
        //printf("\nFirst Expense : %d",exp1);
    }
};
class Others{
    public:
    int exp2;
    void add_expenseB(){
        printf("Enter Other Expenses :- ");
        cin >> exp2;;
        //printf("\nSecond Category of Expenses :- %d", exp2);
    }
};
class Total: public Education, public Others{
    public:
    void displayTotalExpense(){
        int sum = exp1 + exp2;
        printf("Total Expense is :- %d\n", sum);
    }
};
int main(){
    Total t;
    t.add_expenseA();
    t.add_expenseB();
    t.displayTotalExpense();
    
}
