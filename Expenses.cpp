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
class Food{
    public:
    int exp2;
    void add_expenseB(){
        printf("\nEnter food Costs :- ");
        cin >> exp2;
    }
};
class Transport{
    public:
    int exp3;
    void add_expenseC(){
        printf("Enter Transport Expenses :- ");
        cin >> exp3;
        //printf("\nSecond Category of Expenses :- %d", exp2);
    }
};
class CLothing{
    public:
    int exp4;
    void add_expenseD(){
        printf("Enter Clothing Expenses :- ");
        cin >> exp4;
        //printf("\nSecond Category of Expenses :- %d", exp2);
    }
};
class Maintenance{
    public:
    int exp5;
    void add_expenseE(){
        printf("Enter Maintenance Expenses :- ");
        cin >> exp5;
        //printf("\nSecond Category of Expenses :- %d", exp2);
    }
};
class Total: public Education, public Food, public Transport, public CLothing, public Maintenance{
    public:
    void displayTotalExpense(){
        int sum = exp1 + exp2 + exp3 + exp4 + exp5;
        printf("Total Expense is :- %d\n", sum);
    }
};
int main(){
    Total t;
    t.add_expenseA();
    t.add_expenseB();
    t.add_expenseC();
    t.add_expenseD();
    t.add_expenseE();

    t.displayTotalExpense();
    
}
