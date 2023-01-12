#ifndef DINAMICARRAY_HPP
#define DINAMICARRAY_HPP

    #include <iostream>
    #include <random>
    using namespace std;
    
    struct DinamicArray {
        int size;
        int* data;
    };

    // функция рандома
    int MyRandom(int a, int b); 

    // Создание массива
    DinamicArray Сreate(int size); 
    // Заполнение массива
    void FillArray(DinamicArray& arr);
    // Сортировка массива
    void Sorting(DinamicArray& arr);
    // Поиск элемента
    int* Find(const DinamicArray& arr, int value);

    // Вывод на экран
    void Print(const DinamicArray& arr);

    // добавление элемента в конец массива
    int* AddingToTheEnd(DinamicArray& arr, int value);
    // Удаление элемента из конца массива
    int* RemovalFromTheEnd(DinamicArray& arr);

    // Добавление элемента на позицию в массиве
    int* AddingOnRequired(DinamicArray& arr, int value, int position);
    // Удаление элемента на определённой позиции из массива
    int* RemovalFromRequired(DinamicArray& arr, int position);

    // Уничтожение массива
    void DeleteArray(DinamicArray& arr);
#endif // !DINAMICARRAY_HPP