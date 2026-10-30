namespace system {
    namespace io {
        partial class File {
            static String readText(const char* path) {
                char* text = __system_io_File_readText(path);
                String s = text;
                delete text;
                return s;
            }
        }
    }
}

using system::io::File;

init {
    var text = File::readText(".si.json");
}
