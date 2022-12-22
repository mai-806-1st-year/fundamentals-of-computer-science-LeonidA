Отчёт по лабораторной работе №14 по курсу "Фундаментальная информатика"
Студент группы: М80-108Б-22 Анциборко Леонид Витальевич, № по списку 1

Контакты e-mail: anciborko04@mail.ru

Работа выполнена: 03.12.2022

Преподаватель: асп. каф. 806 Сахарин Никита Александрович

Входной контроль знаний с оценкой: 4 (хорошо)

Отчет сдан 22.12.2022, итоговая оценка 4 (хорошо)

Подпись преподавателя: ________________

1. Тема
Вложенные циклы с параметрами. Обход и линеаризация матриц.

2. Цель работы
Составить программу ввода квадратной матрицы и печати в строку всех её элементов в заданном ниже порядке следования (обхода) с помощью вложенных циклов с переменными границами.

3. Задание 
Печать элементов матрицы против часовой стрелки, начиная с 15:00

5. Программное обеспечение:
Операционная система семейства: Windows

Интерпретатор команд: Visual Studio Code

Система программирования: -

Утилиты операционной системы: -

Прикладные системы и программы: gcc

6. Идея, метод, алгоритм решения задачи (в формах: словесной, псевдокода, графической [блок-схема, диаграмма, рисунок, таблица] или формальные спецификации с пред- и постусловиями)
Ввод размера матрицы;
Создание матрицы;
Циклы для прохода по матрице;
Вывод ответа.
7. Сценарий выполнения работы [план работы, первоначальный текст программы в черновике (можно на отдельном листе) и тесты либо соображения по тестированию].

``` c
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void create_matrix(int st, int col, int matrix[st][col]);
void print_right_center(int st, int col, int matrix[st][col]);

void print_right_right_up(int st, int col, int matrix[st][col]);

void print_right_up(int st, int col, int matrix[st][col]);

void print_right_up_up(int st, int col, int matrix[st][col]);

void print_center_up(int st, int col, int matrix[st][col]);

void print_left_up_up(int st, int col, int matrix[st][col]);

void print_left_up(int st, int col, int matrix[st][col]);

void print_left_left_up(int st, int col, int matrix[st][col]);

void print_left_center(int st, int col, int matrix[st][col]);

void print_left_left_down(int st, int col, int matrix[st][col]);

void print_left_down(int st, int col, int matrix[st][col]);

void print_left_down_down(int st, int col, int matrix[st][col]);

void print_center_down(int st, int col, int matrix[st][col]);

void print_right_down_down(int st, int col, int matrix[st][col]);

void print_right_down(int st, int col, int matrix[st][col]);

void print_right_right_down(int st, int col, int matrix[st][col]);

void main() {
    int size;
    scanf("%d", &size);
    int matrix[size][size];
    create_matrix(size, size, matrix);
    print_right_center(size, size, matrix);

    print_right_right_up(size, size, matrix);

    print_right_up(size, size, matrix);

    print_right_up_up(size, size, matrix);

    print_center_up(size, size, matrix);

    print_left_up_up(size, size, matrix);

    print_left_up(size, size, matrix);

    print_left_left_up(size, size, matrix);

    print_left_center(size, size, matrix);

    print_left_left_down(size, size, matrix);

    print_left_down(size, size, matrix);

    print_left_down_down(size, size, matrix);

    print_center_down(size, size, matrix);

    print_right_down_down(size, size, matrix);

    print_right_down(size, size, matrix);

    print_right_right_down(size, size, matrix);
    
    getch();
}

void create_matrix(int st, int col, int matrix[st][col]){
    int num, size = st;
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
}

void print_right_center(int st, int col, int matrix[st][col]){
    int height = (st - 1) / 2, width = (st - 1) / 2;
    for(width; width < col; width++){
        printf("%d ", matrix[height][width]);
    }
    printf("\n");
}

void print_right_right_up(int st, int col, int matrix[st][col]){
    int height = (st - 1) / 2 - 1, width = st - 1, center = (st - 1) / 2;
    while (height != 0)
    {
        if (abs(center - height) != abs(center - width))
        {
            printf("%d ", matrix[height][width]);
            width--;
        }
        else
        { 
            height-- ;
            width = st - 1;
        }
    }
    printf("\n");
}

void print_right_up(int st, int col, int matrix[st][col]){
    int height = (st - 1) / 2, width = (st - 1) / 2;
    for(width; width < col; width++){
        printf("%d ", matrix[height][width]);
        height--;
    }
    printf("\n");
}

void print_right_up_up(int st, int col, int matrix[st][col]){
    int height = 0, i = 0, width = st - 2, center = (st - 1) / 2;
    while (st - 2 - i != center)
    {
        if (width != center)
        {
            printf("%d ", matrix[height][width]);
            width--;
            height++;
        }
        else
        { 
            height = 0 ;
            i++;
            width = st - 2 - i;
        }
    }
    printf("\n");
}

void print_center_up(int st, int col, int matrix[st][col]){
    int height = (st - 1) / 2, width = (st - 1) / 2;
    for(height; height >= 0; height--){
        printf("%d ", matrix[height][width]);
    }
    printf("\n");
}

void print_left_up_up(int st, int col, int matrix[st][col]){
    int height = 0, width = (st - 1) / 2 - 1, center = (st - 1) / 2;
    while (width != 0)
    {
        if (abs(center - height) != abs(center - width))
        {
            printf("%d ", matrix[height][width]);
            height++;
        }
        else
        { 
            height = 0 ;
            width--;
        }
    }
    printf("\n");
}

void print_left_up(int st, int col, int matrix[st][col]){
    int height = (st - 1) / 2, width = (st - 1) / 2;
    for(width; width >= 0; width--){
        printf("%d ", matrix[height][width]);
        height--;
    }
    printf("\n");
}

void print_left_left_up(int st, int col, int matrix[st][col]){
    int height = 1, width = 0, center = (st - 1) / 2, i = 1;
    while (i != center)
    {
        if (height != center)
        {
            printf("%d ", matrix[height][width]);
            width++;
            height++;
        }
        else
        { 
            width = 0;
            i++;
            height = i;
        }
    }
    printf("\n");
}

void print_left_center(int st, int col, int matrix[st][col]){
    int height = (st - 1) / 2, width = (st - 1) / 2;
    for(width; width >= 0; width--){
        printf("%d ", matrix[height][width]);
    }
    printf("\n");
}

void print_left_left_down(int st, int col, int matrix[st][col]){
    int height = (st - 1) / 2 + 1, width = 0, center = (st - 1) / 2, i = center + 1;
    while (i != st - 1)
    {
        if (abs(center - height) != abs(center - width))
        {
            printf("%d ", matrix[height][width]);
            width++;
        }
        else
        { 
            width = 0;
            i++;
            height = i;
        }
    }
    printf("\n");
}


void print_left_down(int st, int col, int matrix[st][col]){
    int height = (st - 1) / 2, width = (st - 1) / 2;
    for(width; width >= 0; width--){
        printf("%d ", matrix[height][width]);
        height++;
    }
    printf("\n");
}

void print_left_down_down(int st, int col, int matrix[st][col]){
    int height = st - 1, i = 1, width = 1, center = (st - 1) / 2;
    while (i != center)
    {
        if (width != center)
        {
            printf("%d ", matrix[height][width]);
            width++;
            height--;
        }
        else
        { 
            height = st - 1 ;
            i++;
            width = i;
        }
    }
    printf("\n");
}

void print_center_down(int st, int col, int matrix[st][col]){
    int height = (st - 1) / 2, width = (st - 1) / 2;
    for(height; height < st; height++){
        printf("%d ", matrix[height][width]);
    }
    printf("\n");
}

void print_right_down_down(int st, int col, int matrix[st][col]){
    int height = st - 1, width = (st - 1) / 2 + 1, center = (st - 1) / 2;
    while (width != st - 1)
    {
        if (abs(center - height) != abs(center - width))
        {
            printf("%d ", matrix[height][width]);
            height--;
        }
        else
        { 
            height = st - 1 ;
            width++;
        }
    }
    printf("\n");
}

void print_right_down(int st, int col, int matrix[st][col]){
    int height = (st - 1) / 2, width = (st - 1) / 2;
    for(width; width < col; width++){
        printf("%d ", matrix[height][width]);
        height++;
    }
    printf("\n");
}

void print_right_right_down(int st, int col, int matrix[st][col]){
    int height = st - 2, width = st - 1, center = (st - 1) / 2, i = st - 2;
    while (i != center)
    {
        if (height != center)
        {
            printf("%d ", matrix[height][width]);
            width--;
            height--;
        }
        else
        { 
            width = st - 1;
            i--;
            height = i;
        }
    }
    printf("\n");
}
```

Пункты 1-7 отчета составляются сторого до начала лабораторной работы. Допущен к выполнению работы.
Подпись преподавателя: ________________

8. Распечатка протокола
9. 
```
PS D:\c_labs\lab14> Get-Content f1.txt | .\lab14.exe
13 14 15
10
13 9 5
13 8 3
2
13 7 1
6
13 12 11
16
13 17 21
22
13 18 23
24
13 19 25
20
PS D:\c_labs\lab14> Get-Content f2.txt | .\lab14.exe
25 26 27 28
21 20 14
25 19 13 7
6 12 5
25 18 11 4
3 10 2
25 17 9 1
8 16 15
25 24 23 22
29 30 36
25 31 37 43
44 38 45
25 32 39 46
47 40 48
25 33 41 49
42 34 35
PS D:\c_labs\lab14> Get-Content f3.txt | .\lab14.exe
41 42 43 44 45 
36 35 34 27 26 18
41 33 25 17 9
8 16 24 7 15 6
41 32 23 14 5
4 13 22 3 12 2
41 31 21 11 1
10 20 30 19 29 28
41 40 39 38 37
46 47 48 55 56 64
41 49 57 65 73
74 66 58 75 67 76
41 50 59 68 77
78 69 60 79 70 80
41 51 61 71 81
72 62 52 63 53 54

f1.txt: 
5
1  2  3  4  5
6  7  8  9  10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25

f2.txt:
7
1  2  3  4  5  6  7
8  9  10 11 12 13 14
15 16 17 18 19 20 21
22 23 24 25 26 27 28
29 30 31 32 33 34 35
36 37 38 39 40 41 42
43 44 45 46 47 48 49

f3.txt:
9
1  2  3  4  5  6  7  8  9
10 11 12 13 14 15 16 17 18
19 20 21 22 23 24 25 26 27
28 29 30 31 32 33 34 35 36
37 38 39 40 41 42 43 44 45
46 47 48 49 50 51 52 53 54
55 56 57 58 59 60 61 62 63
64 65 66 67 68 69 70 71 72
73 74 75 76 77 78 79 80 81
```

9. Дневник отладки должен содержать дату и время сеансов отладки и основные события (ошибки в сценарии и программе, нестандартные ситуации) и краткие комментарии к ним. В дневнике отладки приводятся сведения об использовании других ЭВМ, существенном участии преподавателя и других лиц в написании и отладке программы.
№	Лаб. или дом.	Дата	Время	Событие	Действие по исправлению	Примечание
1	дом.	26.11.22	13:00	Выполнение лабораторной работы	-	-
10. Замечания автора по существу работы — Написание команд для отработки навыков работы в ОС UNIX.

11. Выводы
Была написана программа на языке на Си, выполняющая указанное вариантом действие над квадратной матрицей. В результате выполнения работы, были приобретены навыки для работы с квадратными матрицами и печати в строку всех их элементов.

Недочёты при выполнении задания могут быть устранены следующим образом: —

Подпись студента: ____________________
