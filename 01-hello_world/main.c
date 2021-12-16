#include <linux/init.h>
#include <linux/module.h>

static int hello_init (void)
{
    printk (KERN_ALERT "Test: Hello World, this is hello module\n");
    return 0;
}

static void hello_exit (void)
{
    printk (KERN_ALERT "Test: Good bye, from hello module\n");
}

module_init (hello_init);
module_exit (hello_exit);

MODULE_AUTHOR ("Solidcris");
MODULE_DESCRIPTION ("Device Driver Demonstration");
MODULE_LICENSE ("MIT");