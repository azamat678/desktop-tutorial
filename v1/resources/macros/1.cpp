// макросы не имеют ключевые слова внутри себя, иначе ошибка

namespace ns {
    inline size { 42 };
    inline func(x) { x + x };
}

namespace ns {
    inline snake_case {};
    inline SNAKE_CASE {};
}

class fmt {
    inline endl { '\n' };
    
    namespace constant {
        inline pi { 3.14 };
    }
}

using system::console::out::println;
using fmt::constant;

init {
    println(fmt::endl);
    println(pi);
    println(fmt::constant::pi);
}
