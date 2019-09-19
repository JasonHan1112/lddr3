#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("Dual BSD/GPL");
static int scull_driver_init(void)
{
    printk(KERN_ALERT "Hello, world\n");
    return 0;
}
static void scull_driver_exit(void)
{
    printk(KERN_ALERT "Goodbye, cruel world\n");
}
module_init(scull_driver_init);
module_exit(scull_driver_exit);
