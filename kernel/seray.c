#include <linux/kernel.h>

asmlinkage long sys_seray(const char *str)
{
	printk("Seray %s string\n", str);
	return 0;
}
