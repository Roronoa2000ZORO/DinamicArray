#include "DinamicArray.hpp"


int main(){
    DinamicArray dinArray = Сreate(5);
    FillArray(dinArray);

    Print(dinArray);
    Sorting(dinArray);
    Print(dinArray);

    if (Find(dinArray, 5) == 0) {
        cout << "No value found!\n";
    }
    else {
        cout << "Your value was found at - " << Find(dinArray, 5) << endl;
    }
    cout << "Adding an element to the end of an array\n";
    dinArray.data = AddingToTheEnd(dinArray, 10);
    Print(dinArray);
    cout << "Array sort\n";
    Sorting(dinArray);
    Print(dinArray);
    cout << "Removing an element from the end of an array after sorting it\n";
    dinArray.data = RemovalFromTheEnd(dinArray);
    Print(dinArray);
    cout << "Adding an element to the desired position in the array\n";
    dinArray.data = AddingOnRequired(dinArray, 1, 2);
    Print(dinArray);
    cout << "Array sort\n";
    Sorting(dinArray);
    Print(dinArray);
    cout << "Removing an element from a desired position in an array after sorting it\n";
    dinArray.data = RemovalFromRequired(dinArray, 2);
    Print(dinArray);

    //dinArray = DeleteArray(); // Способ №1
    DeleteArray(dinArray); // Способ №2

    return 0;
}