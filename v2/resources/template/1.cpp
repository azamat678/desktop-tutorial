// шаблон на класс
template <typename T, int N>
class ClassTemp {}

// шаблон на функцию
template <typename T>
void function(T v) {}

init {
    ClassTemp<int, 0> x = ClassTemp<int, 0>();
    function<int>(0);
}

init {
    ClassTemp<int, 0> x = {};
    function(0);
}
