// режим доступа локальный и глобальный
inline LOCAL {};
global inline GLOBAL {};

// приоритет определяется по стеку, последний пришел, первый вышел
init {
    inline three { two };
    inline two { one };
    inline one { 42 };
}

// встроенные макросы
init {
    const char* file = __FILE__;
    int line = __LINE__;
}

// макрос функция != макрос переменная
init {
    inline num { 0 };
    inline num() { 0 };
    
    int x = num;
    int y = num();
}

// перегрузка макрос-функции происходит по количество параметров
init {
    inline function() {};
    inline function(x) {};
    inline function(x, y) {};
}

// макросы с одинаковым именем нельзя
init {
    inline num { 42 };
    //inline num { 84 }; // ошибка
    
    inline fx() { 42 };
    //inline fx() { 84 }; // ошибка
}
