
#if (__PIE__ != 2)
# error wrong pie level set
#endif

int shared_f();

int main() { return shared_f(); }
