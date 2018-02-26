#include <windows.h>
const char* title="全组信息";
const char* info="信安6班第6组\n2014301500374\t张巍\n2014311500074\t蔡金宝";
int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPre,PSTR szCmdLine, int iCmdShow){

MessageBox(NULL,TEXT(info),TEXT(title),0);//TEXT跟在MFC中常用的_T()一样,表示unicode字符

return 0;

}
