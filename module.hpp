#include<iostream>

class Cal_module{

private:
    int num1,num2;
    char operating;
public:
    Cal_module(int num1,int num2,char operating){
        Set_val(num1,num2,operating);
    }
    double Get_result();
    Cal_module& Set_val(int num1,int num2,char operating);
};
