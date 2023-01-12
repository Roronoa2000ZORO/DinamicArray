#ifndef DINAMICARRAY_HPP
#define DINAMICARRAY_HPP

    #include <iostream>
    #include <random>
    using namespace std;
    
    struct DinamicArray {
        int size;
        int* data;
    };

    // ������� �������
    int MyRandom(int a, int b); 

    // �������� �������
    DinamicArray �reate(int size); 
    // ���������� �������
    void FillArray(DinamicArray& arr);
    // ���������� �������
    void Sorting(DinamicArray& arr);
    // ����� ��������
    int* Find(const DinamicArray& arr, int value);

    // ����� �� �����
    void Print(const DinamicArray& arr);

    // ���������� �������� � ����� �������
    int* AddingToTheEnd(DinamicArray& arr, int value);
    // �������� �������� �� ����� �������
    int* RemovalFromTheEnd(DinamicArray& arr);

    // ���������� �������� �� ������� � �������
    int* AddingOnRequired(DinamicArray& arr, int value, int position);
    // �������� �������� �� ����������� ������� �� �������
    int* RemovalFromRequired(DinamicArray& arr, int position);

    // ����������� �������
    void DeleteArray(DinamicArray& arr);
#endif // !DINAMICARRAY_HPP