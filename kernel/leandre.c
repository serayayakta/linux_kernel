#include <linux/kernel.h>

asmlinkage long sys_leandre(void)
{
  printk("Prout\n");
  return 0;
}
