//////////////////////////////////////////////////////////////////
//                                                              //
//                                                              //
//                                                              //
//////////////////////////////////////////////////////////////////


#ifndef __TEMPLATE_01__20739D727A0B3EEA090BC800A046CC75_20220302_H__
#define __TEMPLATE_01__20739D727A0B3EEA090BC800A046CC75_20220302_H__

#include <iostream>

template <class T> T sum (T a, T b) {
    return a + b;
}

template <class T> void mySort(T items[], int nSize) {
    int idxMin = 0;

    for (int a = 0; a < (nSize - 1); a++) {
        idxMin = a;
        for (int b = (a + 1); b < nSize; b++) {
            if (items[idxMin] > items[b]) {
                idxMin = b;
            }
        }

        T temp = items[a];
        items[a] = items[idxMin];
        items[idxMin] = temp;
    } 
}

template <class T> void printArray(T arr[], int nSize) {
    std::cout << "\n***** Print array: *****\n";
    for (int i = 0; i < nSize; i++) {
        std::cout << arr[i] << "\n";
    }

    std::cout << "\n********************\n";
}

#endif /* __TEMPLATE_01__20739D727A0B3EEA090BC800A046CC75_20220302_H__ */