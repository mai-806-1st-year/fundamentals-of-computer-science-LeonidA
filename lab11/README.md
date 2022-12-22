Отчёт по лабораторной работе №11 по курсу "Фундаментальная информатика"
Студент группы: М80-108Б-22 Анциборко Л. В., № по списку 1

Контакты e-mail: anciborko04@mail.ru

Работа выполнена: «3» декабря 2022 г.

Преподаватель: асп. каф. 806 Сахарин Никита Александрович

Входной контроль знаний с оценкой: 4 (хорошо)

Отчет сдан «3» октября 2022 г., итоговая оценка 4 (хорошо)

Подпись преподавателя: ________________

1. Тема
Обработка последовательности литер входного текстового файла. Простейшие приёмы лексического анализа. Диаграммы состояний переходов.

2. Цель работы
Составить программу на языке Си, выполняющую анализ и обработку вводимого текста.

3. Задание (вариант № 1)
Подсчитать число слов в однострочных комментариях в программе на Си.

5. Программное обеспечение:
Операционная система семейства: Windows

Интерпретатор команд: Visual Studio Code

Система программирования: -

Утилиты операционной системы: -

Прикладные системы и программы: gcc


6. Идея, метод, алгоритм решения задачи (в формах: словесной, псевдокода, графической [блок-схема, диаграмма, рисунок, таблица] или формальные спецификации с пред- и постусловиями)
с использованием парадигмы конечных автоматов посчитать количество пробелов после разделителей

7. Сценарий выполнения работы [план работы, первоначальный текст программы в черновике (можно на отдельном листе) и тесты либо соображения по тестированию].
``` c
  #include <stdio.h>
  #include <conio.h>
  #include <stdbool.h>

  typedef struct
  {
      int code;
      bool condition;
  } Tuple;

  typedef enum 
  {
      SPACE = 1,
      SIGN,
      END,
      NEW_STRING
  } Way;

  Tuple logic(char symbol, bool condition)
  {   
      Way way;
      char new_symbol, func_symbol = symbol;
      Tuple result;
      bool func_condition = condition;

      if (func_symbol == 32){ // пробел
          way = SPACE;
      }

      if (func_symbol == 47){ // знак /
          way = SIGN;
      }

      if (func_symbol == EOF){
          way = END;
      }

      if (func_symbol == 10){ // знак n
          way = NEW_STRING;
      }

      switch (way)
      {
      case SPACE:
          if (func_condition == true){
              result.code = 1;
              result.condition = true;
              return result;
          }

          result.code = 0;
          result.condition = false;
          return result;

      case SIGN:
          new_symbol = getchar();
          if (new_symbol == 47) {
              result.code = 1;
              result.condition = true;
              return result;
          }

          result.code = 0;
          result.condition = false;
          return result;

      case END:
          result.code = 2;
          result.condition = false;
          return result;

      case NEW_STRING:
          result.code = 0;
          result.condition = false;
          return result;

      default:
          result.code = 0;
          result.condition = condition;
          return result;
      }
  }

  void main()
  {   
      Tuple res;
      char symbol;
      bool condition = false;
      int counter = 0;

      while (true)
      {
          symbol = getchar();

          res = logic(symbol, condition);

          condition = res.condition;

          if (res.code == 1){
              counter ++;
          }

          else if (res.code == 2){
              break;
          }

      }
      printf("%d", counter);
      getch();
  }
```
Пункты 1-7 отчета составляются сторого до начала лабораторной работы. Допущен к выполнению работы.
Подпись преподавателя: ________________

8. Распечатка протокола
PS D:\c_labs\lab11> gcc -o lab11.exe lab11.c
PS D:\c_labs\lab11> Get-Content f.txt | .\lab11.exe
8

f.txt:
//asdads asdasdad
uyfuyfjky ufiufiu yuyif uiyf 
sf sf dsf sf 

            asdasdad
asdasdasdasddas
dsaasdads //asdads  asdasdasdasddas
/ / / / / / / /
// 
das//abc

9. Дневник отладки должен содержать дату и время сеансов отладки и основные события (ошибки в сценарии и программе, нестандартные ситуации) и краткие комментарии к ним. В дневнике отладки приводятся сведения об использовании других ЭВМ, существенном участии преподавателя и других лиц в написании и отладке программы.
№	Лаб. или дом.	Дата	Время	Событие	Действие по исправлению	Примечание
1	дом.	29.10.22	13:00	Выполнение лабораторной работы	-	-
10. Замечания автора по существу работы — Написание команд для отработки навыков работы в ОС UNIX.
Защита была проведена без замечаний.

11. Выводы
Была написана программа на языке на Си, выполняющая анализ и обработку текста. В результате выполнения работы, были приобретены навыки для работы с текстовыми входными данными и машинами состояний.

Недочёты при выполнении задания могут быть устранены следующим образом: —

Подпись студента: ____________________
