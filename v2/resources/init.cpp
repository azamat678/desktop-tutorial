using system::console::out::println;

init {
    println(args[0]);
}

init {
    println(argc);
}

init test {
    println("println работает!");
}

// args и argc только внутри init{}
