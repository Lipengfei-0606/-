# -
C++调用函数
main.cpp是主文件

test.cpp是调用的文件

test.h是调用文件的头文件

调用文件里，用到了main.cpp里面的变量str1，需要在test.cpp文件里使用声明extern string str1;

main.cpp文件里用到了test.cpp里面的变量num，需要在main.cpp文件里使用声明extern int num;

test.h头文件中必须包含test.cpp里使用的除test.h的所有头文件，必须对test.cpp文件中的函数声明
