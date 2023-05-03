#if 0
- extern "C" is mandatory for portability across compilers/compiler versions
- __cdecl & __stdcall work only for x86 (not x64)
- extern "C" +  __cdecl  => unmangled function name
- extern "C" + __stdcall => _funcName@nn
- a function can be exported using both __declspec(dllexport) and .DEF approach but .DEF has priority
#endif

#pragma once

#ifdef __cplusplus
extern "C"{
#endif

#ifdef Dll_EXPORTS
#   define DLL_API __declspec(dllexport)
#else
#   define DLL_API __declspec(dllimport)
#endif

//functions exported using __declspec(dllexport)
DLL_API void __cdecl   Dll_cdeclFunc(int i);
DLL_API void __stdcall Dll_stdcallFunc(double d);

//functions exported using .DEF
void __cdecl cdeclFunc(int i);
void __stdcall stdcallFunc(int i);

#ifdef __cplusplus
} //extern "C"
#endif