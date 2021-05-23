#include <iostream>
#include "view.h"
#include <windows.h>
using namespace std;

void view::CTFMON(){
    system("start \"\" \"C:\\Windows\\System32\\ctfmon.exe\"");
    system("echo CTFMON ejecutado");
}
