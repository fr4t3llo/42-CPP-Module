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
        int i = start;
        int j = mid + 1;
        int k = 0;
        while (i <= mid && j <= end)
        {
            if (vec[i] <= vec[j])
                temp[k++] = vec[i++];
            else
                temp[k++] = vec[j++];
        }
        while (i <= mid)
            temp[k++] = vec[i++];
        while (j <= end)
            temp[k++] = vec[j++];
        for (int p = start; p <= end; p++) 
            vec[p] = temp[p - start];
    }
}

