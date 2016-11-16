

# 4412最小驱动模块
4412最小驱动模块，参考[博文][]
[博文] :http://vivatakethat.com/2016/11/02/%E6%9C%80%E5%B0%8FLinux%E9%A9%B1%E5%8A%A8-4412/
# 操作
执行make
```
root@ubuntu:~/mini_linux_module# make
make -C /root/iTop4412_Kernel_3.0 M=/root/mini_linux_module modules
make[1]: Entering directory `/root/iTop4412_Kernel_3.0'
  CC [M]  /root/mini_linux_module/first_linux_driver.o
  Building modules, stage 2.
  MODPOST 1 modules
  CC      /root/mini_linux_module/first_linux_driver.mod.o
  LD [M]  /root/mini_linux_module/first_linux_driver.ko
make[1]: Leaving directory `/root/iTop4412_Kernel_3.0'
```


在4412目标板子上加载模块
```
[root@iTOP-4412]# insmod first_linux_driver.ko 
[  607.854481] HELLO WORLD ,Enter that!
```

查看模块
```
[root@iTOP-4412]# lsmod
first_linux_driver 716 0 - Live 0xbf000000
```

卸载modules
```
[root@iTOP-4412]# rmmod first_linux_driver
[ 7691.052385] So,let's exit !Good bye~
```

## 无法卸载modules
+ 报错
1.  '/lib/modules': No such file or directory
```
[root@iTOP-4412]# rmmod first_linux_driver
rmmod: can't change directory to '/lib/modules': No such file or directory
```

解决方法
```
mkdir /lib/modules
```

2. '3.0.15': No such file or directory
解决方法
```
mkdir /lib/modules/3.0.15
```


### 环境
+ 开发环境
Ubuntu12.04
+ 交叉工具链
    arm-2009q3.tar.bz2


