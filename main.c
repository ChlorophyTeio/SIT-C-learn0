#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <windows.h>
#define LOWERCASE_TO_UPPERCASE_ADD 32

/**
 * ����д��ĸת��ΪСд��ĸ
 * @param usr_input ����������ַ�
 * @return ����Сд��ĸ�򱨴���Ϣ
 */
char* Uppercase_To_Lowercase(const char usr_input) {
  static char result[10]; // ��̬�������ڴ洢���

  // �ж������Ƿ�Ϊ��д��ĸ
  usr_input >= 'A' && usr_input <= 'Z'
    ? snprintf(result, sizeof(result), "%c => %c", usr_input, usr_input + LOWERCASE_TO_UPPERCASE_ADD)
    : snprintf(result, sizeof(result), "Error: Please enter uppercase English letters A-Z.\n"); // ���ش�����Ϣ

  return result;
}

/**
 * �������������
 * @param a ���ݱ�AB�ĳ���
 * @param b ���ݱ�BC�ĳ���
 * @param c ���ݱ�AC�ĳ���
 * @return �������������
 */
float Area_Triangle(const float a, const float b, const float c) {
  const float p = (a + b + c) / 2;
  return sqrt(p * (p - a) * (p - b) * (p - c));
}

/**
 * �������� a��b ��ֵ
 * @param a ����ָ��
 * @param b ����ָ��
 */
void Swap_Places(int* a, int* b) {
  const int temp = *a;
  *a = *b;
  *b = temp;
}

/**
 * ���� i++ �� ++i
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
        "AB = %.2f,\nBC = %.2f,\nAC = %.2f,\nS��ABC = %.2f\n",
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
      printf("\n�ܽ᣺\ni++ ���ȸ�ֵ��Ȼ����������++i ����������Ȼ���ٸ�ֵ\n"
        "i++ ������Ϊ��ֵ�������ܳ����ڸ�ֵ������ߣ���++i ������Ϊ��ֵ\n"
        "���Զ����������£�++i ��Ч�ʸ��ߣ�i++ ��Ҫ�������ο������캯���������������� ++i ����Ҫ������ʱ����\n");
      break;

    default:
      printf("\nInvalid option...\n");
      break;
  }

  system("pause");
  return 0;
}
