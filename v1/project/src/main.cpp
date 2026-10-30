using system::clang::strlen;
using system::clang::strcmp;

using system::process::exit;
using system::process::sys;

using system::String;
using system::io::File;

class Module {
    String path;
    String text;
    
    Module(String path) : path(path) {
        text = File::readText(path);
    }
}

init {
    
}