
#if MODE==1

int mode_1() { return 0; }
#endif

#if MODE==2

int mode_1();
int main() { return mode_1(); }

#endif
