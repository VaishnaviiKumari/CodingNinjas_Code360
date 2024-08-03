//Beautiful String

int makeBeautiful(string str) {
    int n = str.length();
    int count1 = 0, count2 = 0;

    // Pattern starting with '0'
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0 && str[i] != '0') count1++; // Even index should be '0'
        if (i % 2 != 0 && str[i] != '1') count1++; // Odd index should be '1'
    }

    // Pattern starting with '1'
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0 && str[i] != '1') count2++; // Even index should be '1'
        if (i % 2 != 0 && str[i] != '0') count2++; // Odd index should be '0'
    }

    return min(count1, count2);
}
