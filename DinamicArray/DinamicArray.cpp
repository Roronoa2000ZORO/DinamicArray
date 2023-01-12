#include"DinamicArray.hpp"
//задание
// создвать массив
// вывод на экран
// сортировка (реализовать не с помощью пузырьковой сортировки)
// поиск элемента в массиве
// добавление элемента в конец массива
// удаление  элемента из конца массива
// добавление элемента на позицию в массиве
// удаление элемента на определённой позиции из массива
// уничтожение массива

DinamicArray Сreate(int size) {
    DinamicArray result;
    result.size = size;
    result.data = new int[size] {};
    return result;
}

int MyRandom(int a, int b) {

    static mt19937 gen(random_device{}());
    uniform_real_distribution<> dis(a, b);
    return dis(gen);
}

void FillArray(DinamicArray& arr) {
    for (size_t i = 0; i < arr.size; i++) {
        arr.data[i] = MyRandom(1, 50);
    }
    cout << endl;
}


void Print(const DinamicArray& arr) {
    for (size_t i = 0; i < arr.size; i++) {
        cout << arr.data[i] << ' ';
    }
    cout << endl;
}

void Sorting(DinamicArray& arr) {
    int Right = arr.size - 1, Left = 0, tmp;
    while (Left <= Right) {
        for (size_t i = Right; i > Left; --i) {
            if (arr.data[i - 1] > arr.data[i]) {
                tmp = arr.data[i - 1];
                arr.data[i - 1] = arr.data[i];
                arr.data[i] = tmp;
            }
        }
        Left++;
        for (size_t i = Left; i < Right; ++i) {
            if (arr.data[i] > arr.data[i + 1]) {
                tmp = arr.data[i];
                arr.data[i] = arr.data[i + 1];
                arr.data[i + 1] = tmp;
            }
        }
        Right--;
    }
}

int* Find(const DinamicArray& arr, int value) {
    for (int i = 0; i < arr.size; i++) {
        if (arr.data[i] == value) {
            return &arr.data[i];
        }
    }
    return 0;
}

int* AddingToTheEnd(DinamicArray& arr, int value) {
    arr.size = arr.size + 1;
    int* tmp = new int[arr.size]{};
    for (int i = 0; i < arr.size; i++) {
        if (i == arr.size - 1) {
            tmp[i] = value;
        }
        else {
            tmp[i] = arr.data[i];
        }
    }
    int* holder = tmp;
    tmp = arr.data;
    arr.data = holder;
    delete[] tmp;
    tmp = nullptr;
    return arr.data;
}

int* RemovalFromTheEnd(DinamicArray& arr) {
    arr.size = arr.size - 1;
    int* tmp = new int[arr.size]{};
    for (int i = 0; i < arr.size; i++) {
        tmp[i] = arr.data[i];
    }
    int* holder = tmp;
    tmp = arr.data;
    arr.data = holder;
    delete[] tmp;
    tmp = nullptr;
    return arr.data;
}

int* AddingOnRequired(DinamicArray& arr, int value, int position) {
    arr.size = arr.size + 1;
    int* tmp = new int[arr.size]{};
    for (int i = 0, j = 0; i < arr.size; i++) {
        if (i == position - 1) {
            tmp[i] = value;
            j++;
        }
        else {
            tmp[i] = arr.data[i - j];
        }
    }
    int* holder = tmp;
    tmp = arr.data;
    arr.data = holder;
    delete[] tmp;
    tmp = nullptr;
    return arr.data;
}

int* RemovalFromRequired(DinamicArray& arr, int position) {
    arr.size = arr.size - 1;
    int* tmp = new int[arr.size]{};
    for (int i = 0, j = 0; i < arr.size; i++) {
        if (i == position - 1) {
            j++;
        }
        tmp[i] = arr.data[i + j];
    }
    int* holder = tmp;
    tmp = arr.data;
    arr.data = holder;
    delete[] tmp;
    tmp = nullptr;
    return arr.data;
}

void DeleteArray(DinamicArray& arr) {
    arr.size = 0;
    delete[] arr.data;
    arr.data = nullptr;
}