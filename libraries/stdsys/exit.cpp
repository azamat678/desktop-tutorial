namespace stdsys;


void exit(int code)
{
    goto_in_fn("label_exit", 1);
}


void exit()
{
    exit(0);
}