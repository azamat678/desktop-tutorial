namespace system {
    namespace console {
        namespace out {
            void func_printf() {}
            void func_print(int n) {}
            void func_println() {}
        }
    }
}

global using system;
global using system::clang;

using system::console::out::func_printf;
using system::console::out::{func_print, func_println};

// при встрече "::" компилятор начинает искать с глобального окружения
init {
    ::system::console::out::println();
}
