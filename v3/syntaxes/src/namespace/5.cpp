sealed using clang = std.system.clang;
using sys = std.system.process;


init {
    int length = clang.strlen('Characters Array');
    sys.exit(0);
}