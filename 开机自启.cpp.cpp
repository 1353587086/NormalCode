#include<iostream>
#include<windows.h>
using namespace std;
int main(){
HKEY hKey; 
LPCTSTR lpRun = "Software\\Microsoft\\Windows\\CurrentVersion\\Run"; 
long lRet = RegOpenKeyEx(HKEY_LOCAL_MACHINE, lpRun, 0, KEY_WRITE, &hKey); 
if(lRet == ERROR_SUCCESS) 
{ 
char pFileName[MAX_PATH] = {0}; 
DWORD dwRet = GetModuleFileName(NULL, pFileName, MAX_PATH); 
lRet = RegSetValueEx(hKey, "getip", 0, REG_SZ, (BYTE *)pFileName, dwRet);
RegCloseKey(hKey); 
if(lRet != ERROR_SUCCESS) 
{ 
AfxMessageBox("系统参数错误,不能随系统启动"); 
} 
}
cout<<"hello!";
}
