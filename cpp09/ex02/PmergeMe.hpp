# ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <fstream>
#include <vector>

void mergeSort(std::vector<int>& vec, int start, int end, int threshold);
void insertionSort(std::vector<int>& vec, int start, int end);
bool isDigitsOnly(std::string str);


#endif