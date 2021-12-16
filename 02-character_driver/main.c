#include <linux/kernel.h> 
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kdev_t.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/device.h>
#include <linux/slab.h>
#include <linux/uaccess.h>

static int __init chr_driver_init (void);
static void __exit chr_driver_exit (void);


static int __init chr_driver_init (void)
{
    /* Allocating Major number */
    if ((alloc_chrdev_region (&dev, 0, 1, "my_Dev")) < 0)
    {
        printk (KERN_INFO "Cannot allocate the major number\n");
        return -1;
    }
}

static void __exit chr_driver_exit (void)
{

}