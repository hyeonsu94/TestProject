#include"module.hpp"

double Cal_module::Get_result(){

    switch(operating){

    }
}

Cal_module& Cal_module::Set_val(int num1,int num2,char operating){
    Cal_module(num1,num2,operating);
    return *this;
}

