#include "PmergeMe.hpp"

bool isDigitsOnly(std::string str)
{
    for (size_t i = 0; i < str.length(); ++i)
    {
        if (!std::isdigit(str[i]))
            return false;
    }
    return true;
}

void insertionSort(std::vector<int>& vec, int start, int end)
{
    for (int i = start + 1; i <= end; i++) 
    {
        int key = vec[i];
        int j = i - 1;
        while (j >= start && vec[j] > key) 
        {
            vec[j + 1] = vec[j];
            j--;
        }
        vec[j + 1] = key;
    }
}

void mergeSort(std::vector<int>& vec, int start, int end, int limit) 
{
    if (start >= end) 
        return;
    int mid = (start + end) / 2;
    if (end - start + 1 <= limit) 
        insertionSort(vec, start, end);
    else
    {
        mergeSort(vec, start, mid, limit);
        mergeSort(vec, mid + 1, end, limit);
        std::vector<int> temp(end - start + 1);
        std::merge(vec.begin() + start, vec.begin() + mid + 1, vec.begin() + mid + 1, vec.begin() + end + 1, temp.begin());
        for (int p = start; p <= end; p++) 
            vec[p] = temp[p - start];
    }
}

void insertionSortdeq(std::deque<int>& deq, int start, int end)
{
    for (int i = start + 1; i <= end; i++) 
    {
        int key = deq[i];
        int j = i - 1;
        while (j >= start && deq[j] > key) 
        {
            deq[j + 1] = deq[j];
            j--;
        }
        deq[j + 1] = key;
    }
}

void mergeSortdeq(std::deque<int>& deq, int start, int end, int limit) 
{
    if (start >= end) 
        return;
    int mid = (start + end) / 2;
    if (end - start + 1 <= limit) 
        insertionSortdeq(deq, start, end);
    else
    {
        mergeSortdeq(deq, start, mid, limit);
        mergeSortdeq(deq, mid + 1, end, limit);
        std::deque<int> temp(end - start + 1);
        std::merge(deq.begin() + start, deq.begin() + mid + 1, deq.begin() + mid + 1, deq.begin() + end + 1, temp.begin());
        for (int p = start; p <= end; p++) 
            deq[p] = temp[p - start];
    }
}