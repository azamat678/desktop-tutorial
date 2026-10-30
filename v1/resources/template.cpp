// шаблон на класс
template <typename T, int N>
class ClassTemp {}

// шаблон на функцию
template <typename T>
void function(T v) {}

init {
    ClassTemp<int, 0> x = ClassTemp<int, 0>();
    ClassTemp<int, 0> y = {};
    
    function<int>(0);
}
