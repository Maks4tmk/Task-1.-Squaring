// Задача 1. Возведение в квадрат.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

template<class T>
T squaring(T num) {
    return num * num;
}

template<class T>
std::vector<T> squaring(std::vector<T> arr) {
    for (int i = 0; i < arr.size(); i++) {
        arr[i] *= arr[i];
    }
    return arr;
}

template<class T>
void print_squaring(T num) {
    std::cout << "[IN]: " << num << "\n";
    std::cout << "[OUT]: " << squaring(num) << std::endl;
}

template<class T>
void print_squaring(std::vector<T> arr) {
    std::cout << "[IN]: ";
    for (T n : arr) {
        std::cout << n << " ";
    }
    std::cout << "\n[OUT]: ";
    squaring(arr);
    for (T n : squaring(arr)) {
        std::cout << n << " ";
    }
}

int main()
{
    int num = 4;
    std::vector<int> arr {-1, 4, 8};

    print_squaring(num);
    print_squaring(arr);

}

