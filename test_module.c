#include <linux/init.h>
#include <linux/module.h>

static int __init hello_test_module(void){
	pr_info("...\n..\n.\n");
	pr_info("The test module is installed\n");
	return 0;
}

static void __exit goodbye_test_module(void){
	pr_info("...\n..\n.\n");
	pr_info("The test module is removed\n");
}

module_init(hello_test_module);
module_exit(goodbye_test_module);
MODULE_LICENSE("GPL");
