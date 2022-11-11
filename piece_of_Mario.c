#define __KERNEL__
#define MODULE

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Andreyanov Nikita | M30-424B-19");
MODULE_DESCRIPTION("It's Mario module");

int __init Mario_in(void){
 printk("It's me, Mario!\n");
 return 0;
}

void __exit Mario_out(void){
 printk("Mario go to sleep...\n");
 return;
}
module_init(Mario_in);
module_exit(Mario_out);
