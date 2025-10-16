#include <iostream>
using namespace std;

int main() {
    // 使用for迴圈列印星號三角形
    cout << "Star Triangle Pattern (using for loop):\n";
    for (int i = 1; i <= 6; ++i) {  // 外層迴圈，控制列數
        for (int j = 1; j <= i; ++j) {  // 內層迴圈，控制每列的星號數量
            cout << "*";  // 印出一顆星號
        }
        cout << endl;  // 換行
    }

    cout << "\nMultiplication Table (using while loop):\n";
    // 使用while迴圈列印九九乘法表
    int i = 1;
    while (i <= 9) {  // 外層迴圈控制行數
        int j = 1;
        while (j <= 9) {  // 內層迴圈控制列數
            cout << i << " * " << j << " = " << i * j << "\t";  // 印出乘法表的一行
            j++;  // j自增
        }
        cout << endl;  // 換行
        i++;  // i自增
    }

    return 0;
}
