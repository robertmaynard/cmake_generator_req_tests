

#ifdef IS_NOT_E
#error "IS_NOT_E define past to wrong file"
#endif

#ifndef IS_E
#error "IS_E not passed"
#endif

#if __cplusplus != 201103L
#error "correct set of compile flags not passed"
#endif


int e() { return 0; }
