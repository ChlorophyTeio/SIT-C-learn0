#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <windows.h>
#define LOWERCASE_TO_UPPERCASE_ADD 32

/**
 * 将大写字母转换为小写字母
 * @param usr_input 传递输入的字符
 * @return 返回小写字母或报错信息
 */
char* Uppercase_To_Lowercase(const char usr_input) {
  static char result[10]; // 静态数组用于存储结果

  // 判断输入是否为大写字母
  usr_input >= 'A' && usr_input <= 'Z'
    ? snprintf(result, sizeof(result), "%c => %c", usr_input, usr_input + LOWERCASE_TO_UPPERCASE_ADD)
    : snprintf(result, sizeof(result), "Error: Please enter uppercase English letters A-Z.\n"); // 返回错误消息

  return result;
}

/**
 * 计算三角形面积
 * @param a 传递边AB的长度
 * @param b 传递边BC的长度
 * @param c 传递边AC的长度
 * @return 返回三角形面积
 */
float Area_Triangle(const float a, const float b, const float c) {
  const float p = (a + b + c) / 2;
  return sqrt(p * (p - a) * (p - b) * (p - c));
}

/**
 * 交换整数 a、b 的值
 * @param a 传递指针
 * @param b 传递指针
 */
void Swap_Places(int* a, int* b) {
  const int temp = *a;
  *a = *b;
  *b = temp;
}

/**
 * 讨论 i++ 和 ++i
 */
void autoIncrementOperatorTest() {
  int i = 0;

  // Test i++
  printf("Testing postfix increment operator (i++):\n");
  printf("Initial value of i: %d\n", i);
  printf("Value of i after i++: %d\n", i++);
  printf("Value of i after statement: %d\n\n", i);

  // Reset i to 0
  i = 0;

  // Test ++i
  printf("Testing prefix increment operator (++i):\n");
  printf("Initial value of i: %d\n", i);
  printf("Value of i after ++i: %d\n", ++i);
  printf("Value of i after statement: %d\n", i);
}

int main(void) {
  char usr_input0;
  float triangle_a, triangle_b, triangle_c;
  int old_a, old_b;

  printf(
    "==================================\n"
    "0. Uppercase to lowercase letters.\n"
    "1. Calculate the triangle area.\n"
    "2. Swap two digital positions.\n"
    "3. Test the results of i++, ++i.\n"
    "Please select an option (0/1/2/3):\n\n"
  );
  const char choice = _getch();

  switch (choice) {
    case '0':
      printf("Enter an uppercase letter: ");
      scanf(" %c", &usr_input0);
      printf("%s\n", Uppercase_To_Lowercase(usr_input0));
      break;

    case '1':
      printf("Enter the lengths of the three sides of the triangle (AB, BC, AC): ");
      scanf("%f %f %f", &triangle_c, &triangle_a, &triangle_b);
      printf(
        "AB = %.2f,\nBC = %.2f,\nAC = %.2f,\nS△ABC = %.2f\n",
        triangle_c, triangle_a, triangle_b, Area_Triangle(triangle_c, triangle_a, triangle_b)
      );
      break;

    case '2':
      printf("Enter the integer to be swapped (a, b): ");
      scanf("%d %d", &old_a, &old_b);
      printf("old:\n\t-a: %d -b: %d\n", old_a, old_b);
      Swap_Places(&old_a, &old_b);
      printf("new:\n\t-a: %d -b: %d\n", old_a, old_b);
      break;

    case '3':
      autoIncrementOperatorTest();
      printf("\n总结：\ni++ 是先赋值，然后再自增，++i 是先自增，然后再赋值\n"
        "i++ 不能作为左值（即不能出现在赋值语句的左边），++i 可以作为左值\n"
        "在自定义类等情况下，++i 的效率更高，i++ 需要调用两次拷贝构造函数和析构函数，而 ++i 不需要生成临时变量\n");
      break;

    default:
      printf("\nInvalid option...\n");
      break;
  }

  system("pause");
  return 0;
}
