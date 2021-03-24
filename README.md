# cplus2-adsd
example script, for Algoritma & Struktur Data

#The -lstdc++ flag tells the linker to include the C++ Standard Library
gcc -lstdc++ hello.cpp -o hello
#cygwin
gcc -g -o hello lat1.cpp -lstdc++

## seting cpp plugin biar include gak error di intellisens
{
    "C_Cpp.default.forcedInclude": [
        "${default}"
    ],
    "C_Cpp.default.includePath": [
        "${default}"
    ],
    "C_Cpp.default.systemIncludePath": [
        "${default}"
    ],
    "C_Cpp.errorSquiggles": "Disabled"
}

