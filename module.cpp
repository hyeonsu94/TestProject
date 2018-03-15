#include"module.hpp"

double Cal_module::Get_result(){
    double result = 0;
    switch(operating){
        case '+':
            result = num1+num2;
            break;

        case '-':
            result = num1-num2;
            break;        
    }
    return result;
}

Cal_module& Cal_module::Set_val(int num1,int num2,char operating){
    this->num1 = num1;
    this->num2 = num2;
    this->operating = operating;

    return *this;
}

