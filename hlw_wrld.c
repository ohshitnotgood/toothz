#include <stdio.h>
#include <linux/kernel.h>
#include <linux/printk.h>


int init_module(void) {
    pr_info("Hello World \n");
    return 0;
}

void cleanup_module(void) {
    pr_info("Goodbye Module \n");
}

MODULE_LICENSE("GPL");