#include<linux/init.h>
/*包含初始化宏定义的头文件，代码中的Module_init和module_exit在此文件中*/
#include<linux/module.h>
/*包含初始化加载模块的头文件，代码中的MODULE_LICENSE在此头文件中*/

MODULE_LICENSE("Dual BSD/GPL");  //GPL:声明开源;        Dual BSD:没有版本限制
MODULE_AUTHOR("takethat");      //声明作者信息


static  int hello_init(void)
{
        printk(KERN_EMERG "HELLO WORLD ,Enter that!\n");        //KERN_EMERG 表示紧急的信息,无论你是什么权限都可以打印出来.
        return 0;
}

static void hello_exit(void)
{
        printk(KERN_EMERG "So,let's exit !Good bye~\n");
}
module_init(hello_init);
/* 初始化函数 */
module_exit(hello_exit);
/* 卸载函数 */