

# module目录
## 模块机制
模块机制可以在运行时加入内核的代码，这是Linux一个特性。
>这个特性使内核可以很容易扩大或缩小。

Linux内核支持很多种模块，驱动程序就是其中最重要的一种，甚至文件系统也可以写成一个模块，然后加入内核中。每一个模块由编译号的目标代码组成，可以使用**insmod**命令将模块加入正在运行的内核，也可以使用**rmmod**命令将一个未使用的模块从内核中删除。
>试图将一个正在使用的模块删除是不允许的。
>>熟悉Windows的朋友，可以将模块理解为DLL文件

模块在内核启动时装载称为静态装载，在内核已经运行时装载称为动态装载。
一个模块的最基本框架代码如下
```C 
#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/init.h>

int _int xxx_init(void)
{
    /*这里是模块加载时的初始化工作*/
    return 0;
}

void _exit xxx_exit(void)
{
    /*这里是模块卸载时的销毁工作*/
}
module_init(xxx_init);      /*指定模块的初始化函数的宏*/
module_exit(xxx_exit);      /*指定模块的卸载函数的宏*/
```









