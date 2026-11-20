#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void heapify(vector<int>& values, int heapSize, int root) {
        int largest = root;
        int left = 2 * root + 1;
        int right = 2 * root + 2;

        if (left < heapSize && values[left] > values[largest])
            largest = left;
        if (right < heapSize && values[right] > values[largest])
            largest = right;

        if (largest != root) {
            swap(values[root], values[largest]);
            heapify(values, heapSize, largest);
        }
    }

    vector<string> findRelativeRanks(vector<int>& scores) {
        int n = scores.size();
        unordered_map<int, int> originalIndex;

        for (int i = 0; i < n; ++i) // store indices of elements
            originalIndex[scores[i]] = i;

        for (int i = n / 2 - 1; i >= 0; --i) // build heap
            heapify(scores, n, i);

        vector<string> result(n);

// run the loop until every element of PQ is placed
        for (int i = n - 1; i >= 0; --i) {
            int rank = n - i;
            int index = originalIndex[scores[0]]; // get the index of highest element

            if (rank == 1)
                result[index] = "Gold Medal";
            else if (rank == 2)
                result[index] = "Silver Medal";
            else if (rank == 3)
                result[index] = "Bronze Medal";
            else
                result[index] = to_string(rank);

            swap(scores[0], scores[i]); // push to highest element to end
            heapify(scores, i, 0); // heapify to get the next greatest elem
        }

        // result[originalIndex[scores[0]]] = to_string(n); // add the smallest element's rank for (i == 0)
        return result;
}
};