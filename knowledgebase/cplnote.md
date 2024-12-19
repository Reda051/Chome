9.double pointers 2024/12/3
int * const ptr,这样是限定ptr不被修改
但是*ptr指向的值是可以修改的
不同符号优先级，相同符号结合律






8.pointers-arrays.2024/11/24
指针的值就是变量的地址。
Pointers and C Strings.
Null-terminated byte strings(NTBS)字节的数组，字符的数组，以\0结束
string.h
strcpy,strcat,strcat........
strcat字符串的拼接
strlen
strcmp比较
strstr字符串的子串
````
str-literals.c
strlen.c
strcmp.c
strcpy.c
strcat.c
````
````
str-literals.c

char msg[]="woc!";字符串 自变量，初始化数组。
//char msg[]={'w','o','c','!'};标准的语法是这样写的
但是上面的也可以.[]就不用写了，要写的话必须得把\0算上，如果不算上的话就要出BUG了...
char *str="";
*str=str[];
 
````
BSS Block started by symbol
Data
Text
Stack
Heap
全局变量没有赋初值，在C语言中默认初始化为0，char初始化\0,指针初始化为空指针。
字符串自变量放在只读区域内，无法修改。
指针指过去只能读取不能修改？！！！
````
STRLEN的三种写法，外带标准。
const char *s.只读.
1.int len = 0;
while(s[len]!='\0'
{len++;}
2.int strlen2(const char *s){
int len = 0; while(s[len++]!='\0');
return 0;
3.int len = -1
while (s[++len]!='\0');
size_t
typedef定义的类别名，实际上是无符号的整型别名。

size_t StrLenStd(const char *s){
const char *sc;
for(sc = s;*sc!='\0';++sc);
return sc-s;

while((dest[i]=src[i])!='\0'{
是先赋值再去判断，所以可以把\0也一起赋值过去。

char没有定义默认有符号还是无符号的，需要定义
strcmp还有额外的要求。




















````
7.pointers
指针与数组关系密切。
pointers and arrays.
memory-stack/heap
栈/堆.
Object 对象.
面对对象编程，清华👊
标识符可以指向函数。
```七句话：
A variable has its type,value,and address.
A variable can be used as a left value or a right value.
A pointer is a variable that contains the address of a variable.
*ptr can occur in any context where var could.
in expressions,the name of an array is a synonym for the address of its first element.
arr[i] is a left value.
but an array name is not a variable.
```
malloc memory allocate.
malloc的返回类型是void*
返回的是内存的地址？
void 空，申请内存。
具体什么类型你得声明吧老弟。
int numbers=malloc (len*sizeof(*numbers));
指向numbers就不用再修改了。如果numbers的类型修改了的话。
如果不成功就会返回一个空指针。
if (numbers==NULL){
exit(1);
}
如果是空指针，就exit。
#define NULL ((void *)0)
malloc申请的内存空间如果不用了就free(numbers);
在malloc上分配的堆的内存空间需要free
栈上的automatic variable是自动回收的。

variable 指代Object.
一个Object地址就是第一个字节的地址..

6.data types.
time_t 是long long int的别名
打印time_t要用%lld.
use char only for representing characters.
do not assume signed char or unsigned char.
overflow 溢出
无符号整数运算中没有溢出，取而代之的是回绕(wrap)现象.
有符号整数运算中溢出，是未定义行为。
implicit conversion隐性转换
算术表达式、逻辑表达式（先做整值提升）
定义初始化、复制（类型转换）
函数调用时（类型转换）
函数返回时（类型转换）
Be careful about narrowing conversions.
 强制类型转换，在变量名前加（），括号内填你想要转换的类型。
低等级——高等级转化/
显式的类型转换。
double pi=3.141592;
double fraction =pi-(int)pi;
转换只需要写一边即可,
float double long double
legendary.
float pi=3.14f
不写f后缀默认是double类型。

ieee754
单精度32双精度64.

printf自动四舍五入
小数点后保留2位：
printf("%.2f\n",x);
小数点后保留3位：
printf("%.3f\n",x);
小数点后保留4位：
printf("%.4f\n",x);
这行代码`if (str[len - 1] == '\n') str[len - 1] = '\0';`的作用是：
### 解释
2. **检查是否以换行符结尾**：
  - `if (str[len - 1] == '\n')` 检查字符串的最后一个字符是否为换行符（`\n`）。这是因为`fgets`函数会将换行符（如果存在）读入到字符串中。
3. **替换换行符为终止符**：
  - 如果字符串确实以换行符结尾，那么将这个换行符替换为字符串的终止字符（`\0`），即`str[len - 1] = '\0';`。
### 目的
- **去除换行符**：`fgets`函数在读取输入时会保留换行符，但通常情况下，我们希望字符串以`\0`结尾而不是`\n`，这样可以更方便地处理字符串。
- **避免后续处理问题**：如果字符串中包含换行符，可能会在后续的字符串处理中导致问题。例如，当使用`printf`输出字符串时，换行符会导致输出不符合预期。
### 注意事项
- 这个操作假设`str`确实包含了换行符，如果`str`中没有换行符（例如，输入的字符串恰好长度等于或大于缓冲区大小），则不会进行替换。
- 如果`str`是一个空字符串（即`len`为0），这行代码不会执行任何操作，因为不会有有效的索引来访问字符串的最后一个字符。
### 示例
假设你输入了字符串`"Hello\n"`，通过`fgets`读取到数组`str`中：
```c
char str[100];
fgets(str, 100, stdin); // 假设输入是 "Hello\n"
int len = strlen(str); // len = 6，包括了换行符
if (str[len - 1] == '\n') str[len - 1] = '\0'; // 现在str变成了"Hello\0"
```
这样处理后，字符串`str`的最后一个字符将是`\0`，而不是`\n`，这使得字符串处理更加标准化和一致。

typedef int (*Func)(int, int);函数指针的定义

需要注意的两点是：
1) 枚举列表中的 Mon、Tues、Wed 这些标识符的作用范围是全局的（严格来说是 main() 函数内部），不能再定义与它们名字相同的变量。
2) Mon、Tues、Wed 等都是常量，不能对它们赋值，只能将它们的值赋给其他的变量。
枚举和宏其实非常类似：宏在预处理阶段将名字替换成对应的值，枚举在编译阶段将名字替换成对应的值。我们可以将枚举理解为编译阶段的宏。

总结：
(1) 枚举型是一个集合，集合中的元素(枚举成员)是一些命名的整型常量，元素之间用逗号,隔开。
(2)DAY是一个标识符，可以看成这个集合的名字，是一个可选项，即是可有可无的项。
(3) 第一个枚举成员的默认值为整型的0，后续枚举成员的值在前一个成员上加1。在当前值没有赋值的情况下，枚举类型的当前值总是前一个值+1.
(4) 可以人为设定枚举成员的值，从而自定义某个范围内的整数。
(5) 枚举型是预处理指令#define的替代。
(6) 类型定义以分号;结束。
#include <unistd.h>
用于Linux和Mac OS，sleep(1000);
[单位是毫秒]
调用函数的时候，传递数组只需要将数组名写入即可,如(arr)

全局变量写在main外,file scope.文件域
#include <windows.h>
Sleep(1);[单位是秒]

system("clear");
#include <stdlib.h>
windows system("cls");
windows缩写.操作系统提供的命令

宏在 C 语言中是一种预处理指令，通过 `#define` 定义，用于定义常量、表达式、甚至复杂的操作。
宏是 C 语言预处理器（preprocessor）在编译之前进行替换的，理解并灵活使用宏可以提升代码的可读性和简洁性。
下面详细介绍宏的使用方法，特别是参数化宏的用法。
### 1. 定义带参数的宏
宏定义的格式如下：
```c
#define 宏名(参数列表) 表达式
宏的参数列表可以让宏接收多个参数，类似于函数调用。例如，我们可以定义一个用于交换两个数的宏，以及计算两个数相除余数的宏：
#### 示例 1：交换两个数的宏
```c
#include <stdio.h>
#define SWAP(a, b) { int temp = a; a = b; b = temp; }
int main() {
    int x = 10, y = 20;
    SWAP(x, y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
```
**解释**：
- 宏 SWAP(a,b)的作用是交换 `a` 和 `b` 的值。
- 使用{}将多条语句组合在一起，确保作为一个整体执行。
**使用方法**
1. 在程序中定义宏SWAP(a, b)。
2. 当你需要交换两个变量时，通过SWAP(x, y);来调用。
3. 宏会替换成int temp = a; a = b; b = temp;达到交换的效果。
#### 示例 2：计算两个数的余数
```c
#include <stdio.h>
#define MOD(a, b) ((a) % (b))
int main() {
    int x = 10, y = 3;
    printf("余数为: %d\n", MOD(x, y));
    return 0;
}
```
**解释**：
- MOD(a, b) 定义了两个参数的余数操作。
- 该宏将 `a` 和 `b` 替换为 `(a) % (b)`，以便计算余数。
**使用方法**：
1.定义宏 `MOD(a, b)`。
2.调用宏 `MOD(x, y);` 就可以获得 `x` 除以 `y` 的余数。
### 2. 扩展：常用的宏实例
除了以上的基础宏定义，宏在 C 语言中还有其他常用的扩展用途。
#### 示例 3：定义最大值和最小值宏
```c

#include <stdio.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
int main() {

    int x = 10, y = 20;
    printf("Max: %d\n", MAX(x, y));
    printf("Min: %d\n", MIN(x, y));
    return 0;
    
}
```
**解释**：
- `MAX(a, b)` 用三元运算符 `((a) > (b) ? (a) : (b))` 计算两者中的较大值。
- `MIN(a, b)` 用类似的方法计算较小值。
**用法**：
- 使用时调用 `MAX(x, y)` 或 `MIN(x, y)`，在任何需要计算最大值或最小值的地方直接替代。
#### 示例 4：绝对值宏
```c
#include <stdio.h>
#define ABS(x) ((x) < 0 ? -(x) : (x))
int main() {
    int num = -5;
    printf("Absolute value of %d is %d\n", num, ABS(num));
    return 0;
}
```
**解释**：
- `ABS(x)` 用三元运算符 `((x) < 0 ? -(x) : (x))` 计算 `x` 的绝对值。
- 如果 `x` 小于 0，则返回 `-x`；否则返回 `x`。
**用法**：
- 需要计算绝对值时，直接调用 `ABS(num)`。
### 3. 宏的优缺点
- **优点**：
    - 提高代码复用性。
    - 代码简洁，减少重复的函数调用。
    - 宏替换在编译前完成，速度快。
- **缺点**：
    - 宏不是函数，没有类型检查，容易出错。
    - 大量使用宏可能降低代码可读性。
### 4. 宏的使用注意事项
1. **多次替换**：宏会进行文本替换，避免使用需要多次求值的表达式，以免产生意外效果。
2. **括号保护**：宏定义中的参数和表达式通常使用括号包围，以避免因操作符优先级造成的错误。
使用宏可以简化代码，但在复杂的逻辑中，要注意维护和调试的难度。如果操作较复杂，建议使用函0数替代宏。



`stdlib.h` 是 C 语言中的一个标准库头文件，提供了许多常用的函数，包括内存管理、随机数生成、转换、排序和搜索等功能。以下是 `stdlib.h` 中一些常用的函数和它们的用途：

### 1. 内存管理
- `malloc`：分配指定字节数的内存，但不会初始化内容。
- `calloc`：分配指定数量和大小的内存块，并将分配的内存初始化为零。
- `realloc`：调整已分配的内存大小，可能会移动数据到新位置。
- `free`：释放先前使用 `malloc`、`calloc` 或 `realloc` 分配的内存，避免内存泄漏。

### 2. 类型转换
- `atoi`：将字符串转换为 `int` 类型。
- `atol`：将字符串转换为 `long` 类型。
- `atof`：将字符串转换为 `float` 类型。
- `strtol`、`strtoll`：将字符串转换为 `long` 或 `long long`，并允许选择进制（如二进制、八进制、十六进制等）。
- `strtod`、`strtof`、`strtold`：将字符串转换为 `double`、`float` 或 `long double` 类型。

### 3. 随机数生成
- `rand`：返回一个范围在 `[0, RAND_MAX]` 之间的伪随机整数。
- `srand`：初始化随机数生成器的种子，通常结合 `rand` 使用。

### 4. 搜索和排序
- `qsort`：快速排序函数，用于对数组或指定范围内的数据进行排序。
- `bsearch`：在已排序的数组中执行二分查找。

### 5. 进程控制
- `exit`：终止程序，释放所有已分配的内存，并返回指定状态码。
- `abort`：立即终止程序，并返回异常状态。
- `system`：执行系统命令（如 `system("cls")` 清屏）。

### 6. 数学相关
- `abs`：求整数的绝对值。
- `labs`、`llabs`：求 `long` 或 `long long` 整数的绝对值。

### 常见应用示例
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    // 生成随机数
    srand(10);  // 初始化随机数种子
    printf("Random number: %d\n", rand());

    // 将字符串转换为整数
    int num = atoi("12345");
    printf("Converted integer: %d\n", num);

    // 动态分配内存
    int *arr = (int *)malloc(5 * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    // 使用 qsort 进行排序
    int numbers[] = {5, 3, 4, 1, 2};
    qsort(numbers, 5, sizeof(int), compare);

    // 释放内存
    free(arr);
    return 0;
}

// 比较函数用于 qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
```

### 总结`stdlib.h`提供了许多基本功能，使得在 C 语言中处理内存、随机数、类型转换等任务更加方便和高效。


