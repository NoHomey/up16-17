### Зад.0
Да се състави програма, която изчислява сумата от цифрите на всички естествени 2-цифрени числа до въведено от клавиатурата 2-цифрено число. 

### Зад.1
Да се състави програма, която извежда всички естествени трицифрени числа, които нямат еднакви цифри т.е. 100 и 101 не се извеждат.

### Зад.2
Едно число X е палиндром, ако числото N написано с цифрите на X, но в обратен ред е равно на числото X 
Да се състави програма, която проверява дали въведеното число е палиндром. 

### Зад.3
Да се състави програма, която по дадено естествено число от интервала [100 - 30000] намира най-голямата, най-малката от цифрите му и тяхната средна стойност (на цифрите). 

### Зад.4
Една жаба живеела на дъното на кладенец. Гледайки непрекъснато светлото петно над себе си решила да се покачи и да го разгледа Всеки ден тя се изкачвала по 2 метра нагоре, но през нощта се разколебавала и слизала по 1 метър надолу. 
Да се състави програма, която чрез цикъл while описва движението на жабата. Дълбочината на кладенеца се въвежда от клавиатурата. 
Пример: при 20 метра дълбочина на кладенеца жабата се изкачва на 19-тия ден.

### Зад.5
Да се състави програма, в която се генерира произволно число[0,100] от компютъра, а трябва до го познае. При въвеждане на по- молко или по- голямо число да се извежда подходящо съобщение. Програмата приключва, когато потребителят познае числото. Да се изведе на екрана броят опити неоходими за пазнаване на числото.

За целта include-нете следните библиотеки: stdlib.h и time.h

За да гонерирате произволно число в интервала от 1 до 10 ползвайте следния код:

### srand (time(NULL));
### random_number = rand() % 10 + 1;
