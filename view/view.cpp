#include <iostream>
#include "view.h"
#include <windows.h>
using namespace std;

void view::prueba(){
    cout<<"Hola mundo!"<<endl;
}

void view::ping(){
    system("ping 192.168.0.1 -t");
}
