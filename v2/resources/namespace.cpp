namespace system {
    namespace console::out {
        void func_printf() {}
        void func_print(int n) {}
        void func_println() {}
    }
}

namespace security {
    sealed int password = 123456789;
}

class Object {
    namespace data {
        int x, y, z;
    }
}

namespace one::two {
    namespace three {}
}

using system;

using system::console::out::func_printf;
using system::console::out::{func_print, func_println};

init {
    using security::password;
    using Object::data;
    
    func_print(password);
    func_print(x);
    func_print(y);
    func_print(z);
}

// при встрече "::" компилятор начинает искать с глобального окружения
init {
    ::system::console::out::println();
}

// использование и псевдонимы
namespace sco = system::console::out;
using printText = system::console::out::print;
