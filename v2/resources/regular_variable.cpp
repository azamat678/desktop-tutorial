const int runtime_const1 = 0;
const int runtime_const2 = 0;

constexpr int compiletime_const1 = 0;
constexpr int compiletime_const2 = 0;

init {
    {
        int a, b, c;
        a = b = c = 0;
    }
    {
        int a = 1, b = 2, c = 3;
    }
}

init {
    int n = 0;
    {
        int n = n; // n указывает на себя
    }
}
