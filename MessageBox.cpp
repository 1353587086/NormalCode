#include <windows.h>
const char* title="ȫ����Ϣ";
const char* info="�Ű�6���6��\n2014301500374\t��Ρ\n2014311500074\t�̽�";
int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPre,PSTR szCmdLine, int iCmdShow){

MessageBox(NULL,TEXT(info),TEXT(title),0);//TEXT����MFC�г��õ�_T()һ��,��ʾunicode�ַ�

return 0;

}
