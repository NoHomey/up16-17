### Зад.0
Напишете програма, която приема числа от клавиатурата, докато не срещне 0 и отпечатва сумата и произведението им.

### Зад.1
Напишете програма, която приема цяло число `n`, след което приема `n` на брой цели числа и отпечатва средноартиметичното им.

### Зад.2
Едно число е Мерсеново, ако се представя във вида 2<sup>p</sup> - 1. Напишете пргорама, която приема цяло положително число `n` и намира всички Мерсенови числа по-малки от `n`.

### Зад.3
Напишете програма, която приема цяло число и намира броя на цифрите му.

### Зад.4
Напишете програма, която приема цяло число `n` и намира `n!`
 * програмата да се промени, така че да пресмята `(2n)!!`
 * програмата да се промени, така че да пресмята `(2n-1)!!`

### Зад.5
Напишете програма, която определя дали дадено число е просто.

### Зад.6
Напишете програма, която по въведени от клавиатурата цели числа `x` и `p` намира и извежда на екрана `p`-тата цифра на `x`
* броейки отзад напред.
* броейки отпред назад.

### Зад.7
Напишете програма, която по въведени от клавиатурата цели числа `x` и `n` и цифра `digit` заменя `n`-тата цифра на `x` с `digit`.

### Зад.8
Напишете програма която намира [най-големия общ делител](https://en.wikipedia.org/wiki/Greatest_common_divisor) на две числа.

### Зад.9
Напишете програма която намира [най-малкото общо кратно](https://en.wikipedia.org/wiki/Least_common_multiple) на две числа.

### Зад.10
Напишете програма която приема число `n`, и отпечтва `n`-тото [число на Фибоначи](https://en.wikipedia.org/wiki/Fibonacci_number).

### Зад.11
Дадени са положителни, цели числа `p` и `q`. Напишете програма, която намира всички [перфектни числа](https://en.wikipedia.org/wiki/Perfect_number) в интрвала `[p, q]`.

### Зад.12
Напишете програма, която проверява дали дадено число е [автоморфно](https://en.wikipedia.org/wiki/Automorphic_number).

### Зад.13
Да се напише програма, която приема цяло число и намира симетричното му.

	Например: 12861 -> 16821

### Зад.14
Да се напише програма, която проверява дали дадено число е палиндром.

### Зад.15
Напишете програма, която приема цяло число `search` и цифра `digit` и проверява дали `digit` е цифра на `search`.

### Зад.16
Напишете програма, която приема две цели числа `search` и `find` и проверява дали `find` се съдържа във `search`.

### Зад.17
Да се напише програма, която приема цяло положително число и извежда на екрана разлагането му като произведение на прости делтители.

	Например: 2520 = 2*2*2*3*3*5*7

### Зад.18
Да се напише програма, която пресмята корен квадратен от цяло число `n` със зададена точност `ε` като използва итеративния метод на Нютон:

	1. Прави се първоначално предположение за корена `y`
	2. Формулата y' = average(y, n/y) подобрява предположението, т.е. y' е по-близко до коренът на числото от y
	3. Подобряваме предположението, докато не стане достатъчно добро


Пример: Искаме да сметнем корен квадратен от 7, с точност 0.1 (10<sup>-2</sup>)
1. Правим първоначалното предположение, че коренът е 1
2. Подобряваме предположението си като премятаме средното аритметично на 1 и 7/1, което е 4
3. Вече предположението ни е 4 и отново го подобряваме като пресмятаме средното аритметично на 4 и 7/4, което е 2.875
4. Отново подобряваме предположението и получаваме (2.875 + 7/2.875) / 2 = 2.65489130435
5. 2.65489130435<sup>2</sup> - 7 = 0.04844783791, което е по-малко от исканата точност 0.1 => приключваме пресмятането с резултат 2.65489130435

### Зад.19
Нека имаме n-цифрено число, чиито цифри са означени с d1, d2, d3 ... dn. Числото ще наричаме шантаво, ако отговаря на условието dn > dn-1 < dn-2 > ... d1 (знаците се сменят алтернативно)

	Например, 1324 е шантаво, защото 1 < 3 > 2 < 4.

Дадени са положителни, цели числа `start` и `end`. Напишете програма, която намира всички шантави числа в интрвала `[start, end]`.
