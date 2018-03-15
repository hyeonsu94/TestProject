#include<iostream>

class Cal_module{

private:
    int num1,num2;
    char operating;
public:
    Cal_module(int num1,int num2,char operating){
        this->num1 = num1;
        this->num2 = num2;
        this->operating = operating;
    }
    double Get_result();
    Cal_module& Set_val(int num1,int num2,char operating);
};
