//
// Created by Mrigank Anand on 27/04/20.
//

template <typename T>

class Vector {
    // making stl containers
    int current_size;
    int maximum_size;
    T *arr;
public:
    Vector() {
        current_size = 0;
        maximum_size = 1;
        arr = new T[maximum_size];
    }

    void push_back(T x) {
        if (current_size == maximum_size) {
            T *pInt = arr;
            arr = new T[2 * maximum_size];
            maximum_size *= 2;
            for (int i = 0; i < current_size; ++i) {
                arr[i] = pInt[i];
            }
            delete[] pInt;
        }

        arr[current_size] = x;
        current_size++;
    }

    void pop_back() {
        current_size--;
    }

    T front() {
        return arr[0];
    }

    T back() const {
        return arr[current_size - 1];
    }

    bool empty() const {
        return current_size == 0;
    }

    int capacity() const {
        return maximum_size;
    }

    T at(const int i) {
        return arr[i];
    }

    T operator[](const int i) {
        return arr[i];
    }

    int size(){
        return current_size;
    }

};