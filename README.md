# C语言实验 Readme

## 目的及要求

1. 熟悉C语言运行环境；
2. 掌握C语言程序的书写格式和C语言程序的结构；
3. 掌握C语言上机步骤，了解运行一个C程序的方法；
4. 编写简单的C语言代码，实现一定功能。

## 实验准备

### 环境准备

- 系统：Windows 11 LTSC 23H2
- 编译器：gcc version 8.1.0 (x86_64-win32-seh-rev0, Built by MinGW-W64 project)
- IDE：JetBrains Clion
- Git仓库：[https://github.com/ChlorophyTeio/SIT-C-learn0.git](https://github.com/ChlorophyTeio/SIT-C-learn0.git)

### 程序目标

- 将大写字母转换为小写字母;
- 计算三角形的面积;
- 交换两个整数的值;
- 测试 i++ 和 ++i 自增运算符的效果;
- 附加：改编程序。

### 程序逻辑

主函数显示功能选项菜单，并提示用户选择。根据用户选择，执行相应的功能：

- 选项 0：调用 Uppercase_To_Lowercase 函数将大写字母转换为小写字母，并输出结果。
- 选项 1：调用 Area_Triangle 函数计算三角形的面积，并输出结果。
- 选项 2：调用 Swap_Places 函数交换两个整数的值，并输出结果。
- 选项 3：调用 autoIncrementOperatorTest 函数测试自增运算符的效果，并输出测试结果和结论。

用户可以通过按下任意键继续，程序结束。
