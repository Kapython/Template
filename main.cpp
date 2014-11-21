#include "main.h"
#include "template.h"


int main() {
    int choise = 0;
    while (choise != 5){
        choise = toMakeChoice();
        switch (choise){
            case 1: {
                printf("Выбор пал на первый пункт\n\n");

                std::cout << "Введите число: ";
                int number;
                std::cin >> number;
                Value<int> lists;
                lists.addToHead(number);
                break;
                }
            case 2:{
                printf("Выбор пал на второй пункт\n");
                break;
                }
            case 5:{
                printf("Спасибо\n\n");
                break;
                }
            default:{
                printf("Введите коректное значение\n");
                break;
                }
        }
    }
    return 0;
}