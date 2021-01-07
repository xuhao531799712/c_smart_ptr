#ifndef BERT_CLEANUP_H
#define BERT_CLEANUP_H

#define on_destroy(T, _cleanup)  __attribute__((cleanup(_cleanup))) T
// __attribute__((cleanup(...)))，用于修饰一个变量，在它的作用域结束时可以自动执行一个指定的方法。
// 而且，cleanup是先于这个对象的dealloc调用的。

#endif
