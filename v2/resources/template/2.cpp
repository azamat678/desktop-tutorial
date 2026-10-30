using system::console::out::print;

template <typename... Args>
void function(Args args) {
    {
        {
            print(args);
            print(", ");
        }
        ...
    }
    print('\n');
}

init {
    function(1, 2, 3);
}

// помни, шаблон это часть мета-программирования, поэтому оно строит из Args функции обычную функции
