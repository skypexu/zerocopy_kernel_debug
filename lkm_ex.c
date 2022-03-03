#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/netdevice.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Robert W. Oliver II");
MODULE_DESCRIPTION("A simple example Linux module.");
MODULE_VERSION("0.01");
static int __init lkm_example_init(void) {
 printk(KERN_INFO "Hello, World!\n");
 printk(KERN_INFO "%ld\n", offsetof(struct net_device, ptype_all));
 printk(KERN_INFO "%ld\n", offsetof(struct packet_type, list));
 return 0;
}
static void __exit lkm_example_exit(void) {
 printk(KERN_INFO "Goodbye, World!\n");
}
module_init(lkm_example_init);
module_exit(lkm_example_exit);
