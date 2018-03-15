#include<iostream>
#include"module.hpp"
using namespace std;

int main(){
    class Cal_module cm(15,10,'+');
    cout << cm.Get_result() << endl;
    cout << cm.Set_val(15,10,'-').Get_result()<<endl;

    cout << cm.Get_result() << endl;
    cout << cm.Set_val(15,10,'*').Get_result()<<endl;

    cout << cm.Get_result() << endl;
    cout << cm.Set_val(15,10,'/').Get_result()<<endl;
    
    
    //cout<<"Cout test!"<<endl;
    return 0;
}
