# ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>

void mergeSort(std::vector<int>& vec, int start, int end, int threshold);
void insertionSort(std::vector<int>& vec, int start, int end);
void mergeSortdeq(std::deque<int>& deq, int start, int end, int limit);
void insertionSortdeq(std::deque<int>& deq, int start, int end);
bool isDigitsOnly(std::string str);


#endif