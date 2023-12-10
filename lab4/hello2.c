#include <hello1.h>

MODULE_AUTHOR("Kseniia Lokhanko IO-11");
MODULE_DESCRIPTION("Labwork4 Module hello2.c");
MODULE_LICENSE("Dual BSD/GPL");
static uint param = 1;
// 0444 = S_IRUGO - прапор дозволу на читання параметра
module_param(param, uint,
0444);
MODULE_PARM_DESC(param,"Number of times 'Hello, World!' string will print");
static int __init

hello2_init(void) {
    pr_emerg("Calling print_hello() from hello2...\n");
    print_hello(param);
    return 0;
}

static void __exit

hello2_exit(void) {
}

module_init(hello2_init);
module_exit(hello2_exit);

