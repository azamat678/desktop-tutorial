namespace vars
{
    int x = 0;
}

class cls {
    namespace ns {
        int num = 0;
    }
}

namespace usings
{
    using vars.x;
    using vars;
    using cls.ns.num;
}