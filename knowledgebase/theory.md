1.Object,对象.是存储数据的区域。
2.变量,variable.
3.int char bool=_Bool double []几种数据类型
4.（unsigned)short(int)
unsigned int
unsigned long(int)
unsigned long long (int)
无符号不可以表示负数，0-2的32次方-1.
有符号的可以,-2的31次方-2的31次方-1.
32bit,the first bit is for sign.
if sign =0,
表示的是正数，如果是1，表示的是负数。
每个类型占多少字节只有相对的要求，没有严格的要求。
不同的平台对应着不同的大小。
sizeof,with variable.
padding 填充用
int8_t,int16_t,int32_t,int64_t符号位。直接当成int用就可以
stdint.h头文件引用之后才可以，no padding，一个符号位，其他的精度位都是确定的.
Be careful when you use signed and unsigned.
size_t=unsigned long long int.
int (signed int)
transfer.
int i = -1.
1*32(2)——bit = unsigned long long int.
111111111111111111111111111111111111111
5
.
-1>5.
be careful.



size_t
__int64 long long
__int32 int
__int16 short字面上的替换。应用的是宏.


typedef_
time_t start=time();
//return the current time in seconds.
time_t end=time();

printf("%lld\n",end-start);
time_t是long long int的别名。
打印time_t所以要用%lld


use char only for representing characters.
do not assume signed char or unsigned char.cc





















































