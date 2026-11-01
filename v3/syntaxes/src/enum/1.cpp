enum T1 { ONE, TWO, THREE, }

enum T2 {
    ONE = 0,
    TWO = 1,
    THREE,
}

enum T3 : short {
    ONE,
    TWO,
    THREE,
}

enum T4 : short {
    ONE = 10,
    TWO = 20,
    THREE = 30,
}

enum T5 : char {
    ONE = 'A',
    TWO = 'B',
    THREE = 'C',
}

enum T6 : char* {
    ONE = "One",
    TWO = "Two",
    THREE = "Three",
}

using std.system.String;

enum T7 : String {
    ONE = "One",
    TWO = "Two",
    THREE = "Three",
}

enum T8 : char* {
    ONE,  // "ONE"
    TWO,  // "ONE"
    THREE,  // "ONE"
}

enum T9 : String {
    ONE,  // "ONE"
    TWO,  // "ONE"
    THREE,  // "ONE"
}