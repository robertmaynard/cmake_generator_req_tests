
#ifndef IS_NOT_E
#error "IS_NOT_E define past to wrong file"
#endif

#ifdef IS_E
#error "IS_E not passed"
#endif

#if __cplusplus != 199711L
#error "correct set of compile flags not passed"
#endif

int e();
int main() { return e(); }
