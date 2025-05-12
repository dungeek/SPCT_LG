// RL
int binarySearch(vector<int>& arr, int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] <= x) // Check for valid subsequence sum
            l = m + 1;  // Search in the right half
        else
            r = m - 1;  // Search in the left half
    }
    return l; // l is the correct size of the subsequence
}


int binarySearch(int arr[], int l, int r, int x)
	{
		while (l <= r) {
			int m = l + (r - l) / 2;
			if (arr[m] == x)
				return m;
			if (arr[m] < x)
				l = m + 1;
			else
				r = m - 1;
		}
		return -1;
	}

    int binary_search(int A[], int sizeA, int target) {
        int lo = 1, hi = sizeA;
        while (lo <= hi) {
            int mid = lo + (hi - lo)/2;
            if (A[mid] == target)
                return mid;
            else if (A[mid] < target)
                lo = mid+1;
            else
                hi = mid-1;
        }
        // không tìm thấy giá trị target trong mảng A
        return -1;
    }