#include<iostream>
using namespace std;

class Customer
{
private:
    /* data */
public:
    int age, balance;
    string name;
    Customer(/* args */);
    ~Customer();
};

Customer::Customer(/* args */)
{
}

Customer::~Customer()
{
}


int main(){
    Customer *c1 = new Customer();
    c1->name = "Abir";

    return 0;
}