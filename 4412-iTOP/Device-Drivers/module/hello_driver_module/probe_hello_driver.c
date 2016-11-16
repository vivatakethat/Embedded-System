#include<linux/init.h>
/*包含初始化宏定义的头文件，代码中的Module_init和module_exit在此文件中*/
#include<linux/module.h>
/*包含初始化加载模块的头文件，代码中的MODULE_LICENSE在此头文件中*/

/*驱动注册的头文件，包含驱动的结构体和注册和卸载的函数*/
#include <linux/platform_device.h>

#define DRIVER_NAME "hello_ctl"


MODULE_LICENSE("Dual BSD/GPL");  //GPL:声明开源;        Dual BSD:没有版本限制
MODULE_AUTHOR("takethat");      //声明作者信息

static int hello_probe(struct platform_device *pdv){
	
	printk(KERN_EMERG "\tinitialized\n");
	
	return 0;
}


static int hello_remove(struct platform_device *pdv){
	return 0;
}

static void hello_shutdown(struct platform_device *pdv){
;
}

static int hello_suspend(struct platform_device *pdv){
return 0;
}

static int hello_resume(struct platform_device *pdv){
	
	return 0;
}

struct platform_driver hello_driver = {
	.probe = hello_probe,
	.remove = hello_remove,
	.shutdown = hello_shutdown,
	.suspend = hello_suspend,
	.resume = hello_resume,
	.driver = {
		.name = DRIVER_NAME,
		.owner = THIS_MODULE,
	}
};

static  int hello_init(void)
{
	int DriverState;
        printk(KERN_EMERG "HELLO WORLD takethat,Enter that!\n");        //KERN_EMERG 表示紧急的信息,无论你是什么权限都可以打印出来.
	DriverState = platform_driver_register(&hello_driver);
printk(KERN_EMERG "\tDriverState is %d\n",DriverState);
        return 0;
}

static void hello_exit(void)
{
        printk(KERN_EMERG "So,let's exit !Good bye~\n");
	platform_driver_unregister(&hello_driver);
}
module_init(hello_init);
/* 初始化函数 */
module_exit(hello_exit);
/* 卸载函数 */
