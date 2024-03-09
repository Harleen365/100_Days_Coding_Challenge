int isSorted(int n, vector<int> a) {
    if (n <= 1) {
        return 1;
    }

    if (a[n - 2] > a[n - 1]) {
        return 0;
    }

    return isSorted(n - 1, a);
}
