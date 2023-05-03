#include "Dll.h"
#include <cstdio>

//----------------------------------------------------------------
DLL_API void __cdecl Dll_cdeclFunc(int i){
    printf("%s(int=%d) %s(%d)\n", __FUNCTION__, i, __FILE__, __LINE__);
}

//----------------------------------------------------------------
DLL_API void __stdcall Dll_stdcallFunc(double d){
    printf("%s(%lf) %s(%d)\n", __FUNCTION__, d, __FILE__, __LINE__);
}

//----------------------------------------------------------------
void __cdecl cdeclFunc(int i){
    printf("%s(int=%d) %s(%d)\n", __FUNCTION__, i, __FILE__, __LINE__);
}

//----------------------------------------------------------------
void __stdcall stdcallFunc(int i){
    printf("%s(%d) %s(%d)\n", __FUNCTION__, i, __FILE__, __LINE__);
}