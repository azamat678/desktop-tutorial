using system::process::sys;
using system::String;

namespace system {
    namespace time {
        void sleep(double n) {
            sys(String("sleep ") + String(n));
        }
    }
}