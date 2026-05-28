# ₊˚⊹ conditional statements & loops ⊹˚₊

## ╭┈ ✦ conditional statements

conditional statements are used when we want the program to make decisions based on conditions.

---

## ⟡ if - else statement

### syntax

```cpp
if(condition) {
    // executes when condition is true
}
else {
    // executes when condition is false
}
```

---

### example

```cpp
#include <iostream>
using namespace std;

int main() {

    int age = 20;

    if(age >= 18) {
        cout << "adult";
    }
    else {
        cout << "minor";
    }

    return 0;
}
```

---

## ⟡ note

if there is only one statement, curly braces `{}` can be omitted.

example:

```cpp
if(age >= 18)
    cout << "adult";
```

but using braces is cleaner and avoids mistakes later.

---

## ⟡ else-if ladder

used when checking multiple conditions.

### syntax

```cpp
if(condition1) {

}
else if(condition2) {

}
else {

}
```

---

## ╭┈ ✦ practice problem : uppercase or lowercase

---

### ⟡ method 1 — my first logic using ASCII values

when i first solved this, i manually checked ASCII ranges using explicit type casting.

logic:

```text
A → Z = 65 → 90
a → z = 97 → 122
```

so:

* if character lies between `65-90` → uppercase
* if character lies between `97-122` → lowercase

---

### code

```cpp
#include <iostream>
using namespace std;

int main() {

    char alphabet;
    cin >> alphabet;

    if((int)alphabet >= 65 && (int)alphabet <= 90) {
        cout << "uppercase";
    }

    else if((int)alphabet >= 97 && (int)alphabet <= 122) {
        cout << "lowercase";
    }

    else {
        cout << "character or number";
    }

    return 0;
}
```

---

## ⟡ then i realized this also works

instead of manually type casting:

```cpp
(int)alphabet
```

i found out we can directly compare characters:

```cpp
if(ch >= 'A' && ch <= 'Z')
```

and:

```cpp
if(ch >= 'a' && ch <= 'z')
```

---

## ⟡ why does this work?

because c++ automatically converts characters into ASCII internally.

this is called:

```text
implicit type conversion
```

so internally:

```cpp
'A'
```

behaves like:

```text
65
```

---

## ⟡ method 2 — cleaner approach

```cpp
#include <iostream>
using namespace std;

int main() {

    char ch;
    cin >> ch;

    if(ch >= 'A' && ch <= 'Z') {
        cout << "uppercase";
    }

    else if(ch >= 'a' && ch <= 'z') {
        cout << "lowercase";
    }

    else {
        cout << "not an alphabet";
    }

    return 0;
}
```

---

## ⟡ better solution?

method 2 is better because:

* more readable
* shorter
* cleaner
* easier to understand

---

## ╭┈ ✦ ternary operator

short form of if-else.

### syntax

```cpp
condition ? trueStatement : falseStatement;
```

---

### example

```cpp
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    n >= 0 ? cout << "positive" : cout << "negative";

    return 0;
}
```

---

# ₊˚⊹ loops ⊹˚₊

loops are used to repeat a block of code multiple times.

---

## ⟡ while loop

### syntax

```cpp
while(condition) {

}
```

---

### example

```cpp
#include <iostream>
using namespace std;

int main() {

    int i = 1;

    while(i <= 5) {
        cout << i << endl;
        i++;
    }

    return 0;
}
```

---

## ⟡ infinite loop

infinite loop happens when condition never becomes false.

example:

```cpp
while(i <= 5) {
    cout << i;
}
```

here:

* `i` never changes
* condition always stays true

---

## ⟡ side note

camelCase variables improve readability.

example:

```cpp
studentMarks
isPrime
totalSum
```

---

## ⟡ for loop

### syntax

```cpp
for(initialization; condition; updation) {

}
```

---

### example

```cpp
for(int i = 1; i <= 5; i++) {
    cout << i << endl;
}
```

---

## ╭┈ ✦ practice problem : sum of numbers from 1 to n

---

### ⟡ method 1 — using for loop

logic:

* input `n`
* start loop from `1`
* keep adding numbers till `n`

---

### code

```cpp
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int sum = 0;

    for(int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << sum;

    return 0;
}
```

---

## ⟡ method 2 — using while loop

same logic using while loop.

```cpp
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int i = 1;
    int sum = 0;

    while(i <= n) {
        sum += i;
        i++;
    }

    cout << sum;

    return 0;
}
```

---

## ⟡ better solution?

both work correctly.

but:

* `for loop` feels cleaner when number of iterations is known
* `while loop` is useful when iterations depend on condition

---

## ⟡ break keyword

used to immediately exit loop.

```cpp
break;
```

`break` is a keyword.

keywords are reserved words in c++.

---

## ╭┈ ✦ practice problem : sum of odd numbers from 1 to n

```cpp
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int sum = 0;

    for(int i = 1; i <= n; i++) {

        if(i % 2 != 0) {
            sum += i;
        }

    }

    cout << sum;

    return 0;
}
```

---

## ⟡ do-while loop

### syntax

```cpp
do {

} while(condition);
```

---

### example

```cpp
#include <iostream>
using namespace std;

int main() {

    int i = 1;

    do {
        cout << i << endl;
        i++;
    }

    while(i <= 5);

    return 0;
}
```

---

## ⟡ difference between while & do-while

### while loop

* checks condition first
* may execute zero times

---

### do-while loop

* executes at least once
* checks condition later

---

## ╭┈ ✦ practice problem : check whether number is prime or not

---

## ⟡ method 1 — basic approach

logic:

* if number divisible by anything except:

  ```text
  1 and itself
  ```

  then it is not prime.

---

### code

```cpp
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    bool isPrime = true;

    for(int i = 2; i <= n - 1; i++) {

        if(n % i == 0) {
            isPrime = false;
            break;
        }

    }

    if(isPrime == true) {
        cout << "prime";
    }

    else {
        cout << "non-prime";
    }

    return 0;
}
```

---

## ⟡ why use break?

once divisor is found:

* no point checking further
* loop exits immediately
* slightly more efficient

---

## ⟡ then i noticed a pattern

example:

```text
12

1 × 12
2 × 6
3 × 4
4 × 3
6 × 2
12 × 1
```

factors repeat after square root.

so:
we don’t need to check till `n-1`.

we only check till:

```text
√n
```

---

## ⟡ optimized approach

instead of:

```cpp
i <= n - 1
```

use:

```cpp
i * i <= n
```

---

## ⟡ optimized code

```cpp
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    bool isPrime = true;

    for(int i = 2; i * i <= n; i++) {

        if(n % i == 0) {
            isPrime = false;
            break;
        }

    }

    if(isPrime) {
        cout << "prime";
    }

    else {
        cout << "non-prime";
    }

    return 0;
}
```

---

## ⟡ best solution?

optimized approach is better because:

```text
basic approach  → O(n)
optimized       → O(√n)
```

much faster for larger numbers.

---

## ⟡ nested loops

nested loop means:

```text
loop inside another loop
```

---

### example

```cpp
for(int i = 1; i <= 3; i++) {

    for(int j = 1; j <= 3; j++) {
        cout << "* ";
    }

    cout << endl;
}
```

output:

```text
* * *
* * *
* * *
```
