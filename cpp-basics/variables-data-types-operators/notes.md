# variables, data types & operators in c++

## boilerplate code

every c++ program starts with a basic structure called boilerplate code.

```cpp
#include <iostream>
using namespace std;

int main() {

    return 0;
}
```

---

## understanding the boilerplate

### `#include <iostream>`

```cpp
#include <iostream>
```

- `#include` is a preprocessor directive
- it tells the compiler to include the `iostream` library
- `iostream` is used for:
  - input (`cin`)
  - output (`cout`)

without it:

```cpp
cout << "hello";
```

will give an error.

---

### `using namespace std;`

```cpp
using namespace std;
```

- `std` stands for standard namespace
- allows us to write:

```cpp
cout
cin
endl
```

instead of:

```cpp
std::cout
std::cin
std::endl
```

---

### `int main()`

```cpp
int main()
```

- execution of program starts from `main()`
- `int` means the function returns an integer value

---

### `return 0;`

```cpp
return 0;
```

- indicates successful execution of program
- `0` means no error

---

# how c++ files work

```text
filename.cpp → compiler → executable file (.exe)
```

- `.cpp` → c++ source code file
- compiler converts code into machine executable program

---

# terminal commands

## compile code

```bash
g++ -o code filename.cpp
```

example:

```bash
g++ -o hello hello.cpp
```

- `g++` → c++ compiler
- `-o hello` → output executable file name
- `hello.cpp` → source file

---

## run executable

windows:

```bash
hello.exe
```

linux/codespaces:

```bash
./hello
```

---

## compile and run together

```bash
g++ -o code filename.cpp && code.exe
```

---

# output in c++

## cout

used to display output on screen.

```cpp
cout << "Hello World";
```

output:

```text
Hello World
```

---

## multiple outputs

```cpp
cout << "Dhvani";
cout << " learns C++";
```

output:

```text
Dhvani learns C++
```

---

## endl

used for new line.

```cpp
cout << "hello" << endl;
cout << "world";
```

output:

```text
hello
world
```

---

## \n

another way to create new line.

```cpp
cout << "hello\n";
cout << "world";
```

output:

```text
hello
world
```

---

# comments

comments are ignored by compiler.

used to explain code.

```cpp
// single line comment
```

example:

```cpp
// this program prints hello world
cout << "hello world";
```

---

# variables

variables are containers used to store data.

---

## syntax

```cpp
datatype variableName = value;
```

example:

```cpp
int age = 18;
char grade = 'A';
float cgpa = 9.1;
```

---

## examples

```cpp
int age = 25;
char grade = 'A';
string name = "Dhvani";
```

---

## variables are stored in memory

when variables are created, memory is allocated to them.

example:

```cpp
int age = 18;
```

computer stores:
- variable name
- value
- memory location

---

# identifiers

names of variables/functions are called identifiers.

---

## rules for identifiers

identifiers:
- can contain letters, digits and `_`
- cannot start with number
- cannot contain spaces
- cannot use keywords

valid:

```cpp
age
student_name
marks1
```

invalid:

```cpp
1age
student name
int
```

---

# primitive data types

primitive data types are basic built-in data types in c++.

| data type | size | example |
|---|---|---|
| int | 4 bytes | `int age = 18;` |
| char | 1 byte | `char grade = 'A';` |
| float | 4 bytes | `float pi = 3.14f;` |
| bool | 1 byte | `bool isPassed = true;` |
| double | 8 bytes | `double price = 999.99;` |

---

# int

stores whole numbers.

```cpp
int age = 18;
```

---

# char

stores single character.

```cpp
char grade = 'A';
```

characters use single quotes.

---

# float

stores decimal numbers.

```cpp
float pi = 3.14f;
```

- `f` is written to indicate float
- otherwise compiler treats decimal as `double`

---

# double

stores larger decimal values with more precision.

```cpp
double salary = 99999.999;
```

---

# bool

stores:
- `true`
- `false`

internally:
- true = 1
- false = 0

example:

```cpp
bool isCodingFun = true;
```

---

# sizeof()

used to return size of variable or datatype.

example:

```cpp
cout << sizeof(int);
```

possible output:

```text
4
```

---

# type casting

converting data from one datatype to another.

---

# implicit conversion

automatic conversion done by compiler.

usually:
```text
small → big
```

example:

```cpp
char grade = 'A';
int value = grade;

cout << value;
```

output:

```text
65
```

because:
- computer stores characters using ASCII values
- ASCII value of `A` = 65

---

# explicit casting

manual conversion done by programmer.

usually:
```text
big → small
```

example:

```cpp
double price = 100.99;

int newPrice = (int)price;

cout << newPrice;
```

output:

```text
100
```

decimal part gets removed.

---

# input in c++

## cin

used to take input from user.

syntax:

```cpp
cin >> variable;
```

---

## example

```cpp
int age;

cout << "Enter age: ";
cin >> age;

cout << "Your age is: " << age;
```

input:

```text
18
```

output:

```text
Your age is: 18
```

---

# garbage values

uninitialized variables may contain garbage values.

example:

```cpp
int age;

cout << age;
```

possible output:

```text
-842150451
```

random value depends on memory.

---

# operators

operators are symbols used to perform operations.

---

# arithmetic operators

| operator | operation |
|---|---|
| + | addition |
| - | subtraction |
| * | multiplication |
| / | division |
| % | modulus |

---

## example

```cpp
int a = 10;
int b = 5;

cout << a + b << endl;
cout << a - b << endl;
cout << a * b << endl;
cout << a / b << endl;
```

output:

```text
15
5
50
2
```

---

# modulus operator

returns remainder.

```cpp
cout << 10 % 3;
```

output:

```text
1
```

---

# integer division

```cpp
cout << 5 / 2;
```

output:

```text
2
```

because:
```text
int / int = int
```

decimal part gets removed.

---

# floating point division

```cpp
cout << 5 / (double)2;
```

output:

```text
2.5
```

---

# relational operators

used to compare values.

| operator | meaning |
|---|---|
| < | less than |
| <= | less than equal to |
| > | greater than |
| >= | greater than equal to |
| == | equal to |
| != | not equal to |

---

## example

```cpp
int a = 10;
int b = 5;

cout << (a > b);
```

output:

```text
1
```

because condition is true.

---

# logical operators

| operator | meaning |
|---|---|
| && | AND |
| \|\| | OR |
| ! | NOT |

---

## logical AND

```cpp
cout << (5 > 2 && 10 > 3);
```

output:

```text
1
```

both conditions are true.

---

## logical OR

```cpp
cout << (5 > 10 || 10 > 3);
```

output:

```text
1
```

one condition is true.

---

## logical NOT

```cpp
cout << !(5 > 2);
```

output:

```text
0
```

because:
```text
!(true) = false
```

---

# unary operators

unary operators work on single operand.

```cpp
++
--
```

---

# increment operator

increases value by 1.

```cpp
int a = 5;
a++;

cout << a;
```

output:

```text
6
```

---

# decrement operator

decreases value by 1.

```cpp
int a = 5;
a--;

cout << a;
```

output:

```text
4
```

---

# post increment

updates later.

```cpp
int a = 5;

cout << a++;
```

output:

```text
5
```

after execution:
```text
a = 6
```

---

# pre increment

updates first.

```cpp
int a = 5;

cout << ++a;
```

output:

```text
6
```

---