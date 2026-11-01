// строгий, только по типу обращаемся
enum Type { X, Y, Z }

// не строгий, следует указанному типу, если число, ведет себя как число
enum BitMask : int
{
    ONE = 1,
    TWO = 2,
    THREE = 4
}


init {
    Type t = Type.X;
    BitMask bm = BitMask.ONE + 100;
}