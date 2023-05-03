#include "Dll.h"
#include <cstdio>

//----------------------------------------------------------------
int main(int argc, char**argv){
    printf("%s() %s(%d)\n", __FUNCTION__, __FILE__, __LINE__);

    Dll_cdeclFunc(1);
    Dll_stdcallFunc(1.5);

    cdeclFunc(2);
    stdcallFunc(2);
    return 0;
}