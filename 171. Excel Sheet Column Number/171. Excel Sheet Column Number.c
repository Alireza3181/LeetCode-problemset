int titleToNumber(char* columnTitle) {
    int res = 0;
    while (*columnTitle) 
    {
    res = res * 26 + (*columnTitle -'A' +1);
    columnTitle++;
    }
    return res;
}
