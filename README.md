# CppExports
Tests for C++ exports, calling conventions, .DEF, __declspec(dllexport)

Facts:
- `extern "C"` is mandatory for portability across compilers/compiler versions
- `__cdecl` & `__stdcall` work only for x86 (not x64)
- `extern "C" +   __cdecl` => unmangled function name
- `extern "C" + __stdcall` => `_`funcName`@nn`
- a function can be exported using both `__declspec(dllexport)` and `.DEF` approach but `.DEF` has priority regarding calling convention

Best Practices:
- use `__declspec(dllexport)` approach where possible instead `.DEF`
- use `.DEF` approach only for special cases (e.g. export by ordinal, ...)

ToDo:
- multi platform & compiler (see https://gcc.gnu.org/wiki/Visibility)
