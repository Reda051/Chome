# 2024/11/22

## C语言中的类型

在C语言中，所有的类型可以分为两种：**函数类型**和**对象类型**。

### 对象类型

**对象**是指一块存储区域，用于表示值。变量有一个声明类型，该类型可以告诉你该变量的值所代表的对象种类。

- **基本类型**：
    - 布尔类型（`_Bool`）：只能存储0或1，是C99中引入的。建议使用`bool`类型名，来自于`<stdbool.h>`，以与未来的C语言发展方向保持一致。
    - 字符类型：`char`、`signed char`、`unsigned char`。`char`类型必须能够表示执行环境所要求的最小字符集。
    - 数值类型：
        - 有符号整数类型：`signed char`、`short int`、`int`、`long int`、`long long int`。`int`可以在其他有符号整数类型中省略。
        - 无符号整数类型：`unsigned char`、`unsigned short int`、`unsigned int`、`unsigned long int`、`unsigned long long int`。
        - 宽字符类型：`wchar_t`，用于表示更大的字符集。
        - 最大整数类型：`intmax_t`和`uintmax_t`是可用的最宽整数类型的类型定义，来自于`<stdint.h>`或`<inttypes.h>`。

- **派生类型**：
    - 枚举（`enum`）：如果没有为第一个枚举器指定值，则其值为0，之后每个枚举器的值加1。枚举常量必须能以`int`类型表示。
    - 浮点类型：`float`、`double`、`long double`。浮点算术类似于实数算术。
    - `void`类型：`void`本身表示不含有任何值，`void*`表示指针可以引用任意对象。
    - 函数类型：由返回值类型以及参数的数量和类型派生而来。
    - 指针类型：从函数或对象类型派生，指向函数或对象的地址。
    - 数组类型：可以是一维或多维数组（矩阵）。
    - 类型定义（`typedef`）：创建现有类型的别名，但不创造新类型。
    - 结构体（`struct`）：包含顺序分配的成员对象，成员类型可能不一致。
    - 联合类型（`union`）：类似于结构体，但成员对象共享相同的内存区域。

### 结构体（struct）

**结构体**允许将不同类型的数据组合成一个单一的复合数据类型。

#### 1. 定义结构体

```c
struct Person {
    char name[50];
    int age;
    float height;
};
```

#### 2. 声明结构体变量

```c
struct Person person1;
struct Person person2;
```

#### 3. 初始化结构体变量

```c
struct Person person1 = {"Alice", 25, 1.75};
```

或逐个成员初始化：

```c
struct Person person2;
strcpy(person2.name, "Bob");
person2.age = 30;
person2.height = 1.80;
```

#### 4. 访问结构体成员

```c
printf("Name: %s\n", person1.name);
printf("Age: %d\n", person1.age);
printf("Height: %.2f\n", person1.height);
```

#### 5. 结构体数组

```c
struct Person persons[100];
```

访问数组中的结构体成员：

```c
strcpy(persons[0].name, "Charlie");
persons[0].age = 22;
persons[0].height = 1.70;
```

#### 6. 结构体指针

```c
struct Person *pPerson;
pPerson = &person1;
```

访问指针指向的结构体成员：

```c
printf("Name: %s\n", pPerson->name); // 等同于 (*pPerson).name
```

#### 7. 结构体中的结构体

```c
struct Address {
    char street[100];
    char city[50];
    char state[20];
    int zip;
};

struct Person {
    char name[50];
    int age;
    float height;
    struct Address address; // 嵌套结构体
};
```

#### 8. 结构体大小

```c
printf("Size of struct Person: %zu bytes\n", sizeof(struct Person));
```

#### 9. 结构体对齐

结构体成员会自动对齐到其类型所需的边界，以提高内存访问效率。可以使用`#pragma pack`或`__attribute__((__packed__))`来控制对齐方式。

#### 10. 结构体与函数

```c
void printPerson(struct Person p) {
    printf("Name: %s, Age: %d, Height: %.2f\n", p.name, p.age, p.height);
}

struct Person getPerson() {
    struct Person p = {"David", 35, 1.75};
    return p;
}
```

### 结构体指针运算符

**结构体指针运算符**有两种：

1. **点号操作符（`.`）**：用于直接访问结构体变量的成员。
    - 语法：`结构体变量名.成员名`

2. **箭头操作符（`->`）**：用于访问通过指针指向的结构体成员。
    - 语法：`结构体指针名->成员名`

`->` 操作符等同于先解引用指针，然后使用点号操作符访问成员：

```c
(*结构体指针名).成员名
```

### 函数类型

函数类型属于派生类型，由返回值类型以及参数的数量和类型决定。

- 函数的返回类型不能是数组类型。
- 建议在声明函数时提供参数类型列表（函数原型），以便编译器进行类型检查。

### 类型限定符

- **`const`**：声明对象无法被修改。
- **`volatile`**：用于内存映射I/O端口模型，表示对象的值可能会被硬件或其他线程意外改变。
- **`restrict`**：用于优化，通过限制指针别名，编译器可以进行更激进的优化。
### 对齐方式（Alignment）
对齐描述了为给定对象分配的连续地址之间的字节数，影响CPU访问数据时的效率。可以通过`#pragma pack`或`__attribute__((__packed__))`来指定对齐方式。
### 内存分配与生命期
- 局部变量具有自动存储期，当所在的语句块结束时被销毁。
- 通过`malloc`动态分配的内存需要手动管理。
- 静态对象具有静态存储期，生命期是程序的整个执行期间。
### 类型定义
`typedef`用于创建类型别名，不会创造新类型。
### 联合（Union）
联合类型与结构体类似，但其成员共享相同的内存区域。
### 标签（Tag）
标签用于结构、联合和枚举的命名，不用于声明变量。
### 常见问题解答
- **解引用**：指通过指针获取其指向的实际数据值的操作。
- **对齐方式**：数据在内存中存储的方式，影响访问效率和内存使用。
- **联合**：成员对象共享内存空间，适用于节省内存的情况。
- **volatile**：用于处理可能被硬件或其他线程改变的变量。
- **restrict**：限制指针别名以优化代码。
---
# 2024/11/23
## 对象类型
- **布尔类型**：`bool`类型是在C99中引入的，`bool`类型的对象只能存储0或1。
- **字符类型**：包括`char`、`signed char`、`unsigned char`。`char`类型必须能表示基本执行字符集。
- **数值类型**：
    - 有符号整数类型：`signed char`、`short`、`int`、`long`、`long long`。
    - 无符号整数类型：`unsigned char`、`unsigned short`、`unsigned int`、`unsigned long`、`unsigned long long`。
    - 最大整数类型：`intmax_t`和`uintmax_t`。
### 常见问题解答
- **Q: `long int`和`int`有什么区别？**  
  A: `long int`通常比`int`占用更多的字节，具体大小由实现定义，但至少和`int`一样大。在大多数现代系统中，`int`通常是32位，而`long int`可以是32位或64位。
- **Q: 这个对齐方式没明白什么意思呢？**  
  A: 对齐是指在内存中数据的存储方式，影响数据访问的效率和内存的使用。不同类型的数据可能有不同的对齐要求，以确保高效的内存访问。
## 函数类型
函数类型由返回值类型和参数列表决定，参数列表可以省略，但不推荐。
## 派生类型
包括指针、数组、类型定义、结构和联合。
### 结构体（struct）
结构体允许组合不同类型的数据，形成复合数据类型。
### 结构体指针
- 使用箭头操作符（`->`）访问指针指向的结构体成员。
- 箭头操作符等同于先解引用指针，然后使用点号操作符访问成员。
### 联合（union）
联合类型类似于结构体，但成员共享相同的内存区域。
### 标签（tag）
用于结构、联合和枚举的命名机制，不用于声明变量。
### 类型限定符
- **`const`**：对象无法被修改。
- **`volatile`**：对象的值可能被硬件或其他线程意外改变。
- **`restrict`**：限制指针别名，优化代码。
### 对齐方式（Alignment）
对齐描述了为给定对象分配的连续地址之间的字节数，影响CPU访问数据时的效率。
### 内存分配与生命期
- 局部变量具有自动存储期，语句块结束时销毁。
- 静态对象具有静态存储期，生命期是程序的整个执行期间。
### 类型定义
`typedef`用于创建类型别名，不会创造新类型。
### 常见问题解答
- **Q: 这个联合我还真不太明白。**  
  A: 联合类型是多个不同类型的变量共享同一块内存空间的结构。访问联合中的成员时，只能访问其中一个成员，其他成员的值将被覆盖。
- **Q: 是不是就是说可以访问const指针来修改非限定型的变量?**  
  A: 不能。`const`指针指向的变量是不可修改的，但可以通过`const`指针访问非`const`变量来读取其值。
- **Q: volatile好像这个是一个用起来很高难度的？目前看起来好像用不到这个呢**  
  A: `volatile`用于处理可能被硬件或其他线程改变的变量，比如内存映射I/O端口或实时时钟等。
- **Q: Restrict这个怎么用???**  
  A: `restrict`限定符用于告知编译器指针指向的对象不会通过其他指针被访问或修改，从而允许编译器进行更激进的优化。使用时需要确保指针确实没有别名。