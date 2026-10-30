int n = 0;

int& get() { return n; }

init {
    get() = 42;
}
