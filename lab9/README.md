# Отчёт по лабораторной работе №9 по курсу “Фундаментальная информатика”

Студент группы: М80-108Б-22 Анциборко Леонид Витальевич, № по списку 1 

Контакты e-mail: anciborko04@mail.ru

Работа выполнена: «7» ноября 2022 г.

Преподаватель: асп. каф. 806 Сахарин Никита Александрович

Входной контроль знаний с оценкой _______________________

Отчет сдан «8» ноября 2022 г., итоговая оценка ______

Подпись преподавателя ___________


## 1. Тема
Програмирование на языке С
## 2. Цель работы
Составить и отладить простейшую программу на языке C итеративного характера.
## 3. Задание (вариант № 4)
Кольцо, ограниченное двумя окружностями с центром в точке (10. 10), радиус внутренней окружности равен 5, а радиус внешней равен 10
## 4. Оборудование:
## 5. Программное обеспечение:
Операционная система семейства: Windows
Система программирования: Visual Studio Code 
## 6. Идея, метод, алгоритм решения задачи (в формах: словесной, псевдокода, графической [блок-схема, диаграмма, рисунок, таблица] или формальные спецификации с пред- и постусловиями)

## 7. Сценарий выполнения работы [план работы, первоначальный текст программы в черновике (можно на отдельном листе) и тесты либо соображения по тестированию]. 
• Разобраться с поставленной задачей
• Найти решение с помощью программы на языке С
•Скомпилировать программу
•Запустить программу
```
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int sign(int num) {
    
    if (num < 0) {return -1;}
        else if (num > 0) {return 1;}
            else {return 0;}
}

int main()
{
    
    int count = 50, i0 = 18, j0 = -9, l0 = 5, i = 10, j = 10, step = 1;
    float frst, seck, lenght;

    for (; step<=count; step++)
    {
        printf("number of step %d\n", step);

        frst = powl((long double)(i - i0), 2), seck = powl((long double)(j - j0), 2);
        lenght = sqrtl(frst + seck);

        if (lenght <= 10.0)
        {

            printf("second circle\n");
        }
        else
        {

            if (lenght <= 5.0)
            {

                printf("first circle\n");
                printf("success on %d step", step);
            }
            else
            {

                printf("\n");
            }
        }
        
        i0 = (int)fmod(i0 * fmax(j0, l0), 30) + (int)fmod(j0 * fmin(i0, l0), 20) + step;
        j0 = fmin(i0, fmax(j0, fmin(l0, fmax(i0 - l0, j0 - l0))));
        l0 = sign(step - 10) * abs(i0 - j0 + l0 - step);
    }
getch();
return 0;
}

```
Пункты 1-7 отчета составляются сторого до начала лабораторной работы.
Допущен к выполнению работы.  
Подпись преподавателя _____________________
## 8. Распечатка протокола 
```

```
## 9. Дневник отладки должен содержать дату и время сеансов отладки и основные события (ошибки в сценарии и программе, нестандартные ситуации) и краткие комментарии к ним. В дневнике отладки приводятся сведения об использовании других ЭВМ, существенном участии преподавателя и других лиц в написании и отладке программы.

| № |  Лаб. или дом. | Дата | Время | Событие | Действие по исправлению | Примечание |
| ------ | ------ | ------ | ------ | ------ | ------ | ------ |
| 1 | дом. | 09.10.22 | 13:00 | Выполнение лабораторной работы | - | - |
## 10. Замечания автора по существу работы — Написание команд для отработки навыков работы в ОС UNIX.
```
Запуск сборки…
C:/MinGW/bin/gcc.exe -fdiagnostics-color=always -g C:\Users\leoan\OneDrive\Документы\lab9\lab9.c -o C:\Users\leoan\OneDrive\Документы\lab9\lab9.exe 
number of step 1

number of step 2

number of step 3

number of step 4

number of step 5

number of step 6

number of step 7

number of step 8

number of step 9

number of step 10

number of step 11
second circle
number of step 12

number of step 13

number of step 14

number of step 15

number of step 16

number of step 17

number of step 18

number of step 19

number of step 20

number of step 21

number of step 22

number of step 23

number of step 24

number of step 25

number of step 26

number of step 27

number of step 28

number of step 29

number of step 30

number of step 31

number of step 32

number of step 33

number of step 34

number of step 35

number of step 36

number of step 37

number of step 38

number of step 39

number of step 40

number of step 41

number of step 42

number of step 43

number of step 44

number of step 45

number of step 46

number of step 47

number of step 48

number of step 49

number of step 50
```
## 11. Выводы
Была решена задача итеративного характера на языке си. Были изучены новые методы, функции, операторы языка

Недочёты при выполнении задания могут быть устранены следующим образом: —

Подпись студента _________________


