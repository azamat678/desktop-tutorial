namespace __const__ {
    int x;
    int y = 0;
    const int z = y;
    const int& w = y;
    const int* o = &y;
    const int* t = &z;
    const int* s = &w;
}