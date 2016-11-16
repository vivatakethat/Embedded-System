#!/bin/bash

obj-m +=probe_hello_driver.o
# obj-m 意思是将后面跟的东东编译成内核模块。相对应还有：
# obj-y 编译进内核
# obj-n 不编译

KDIR := /root/iTop4412_Kernel_3.0

PWD ?= $(shell pwd)

all:
	make -C $(KDIR) M=$(PWD) modules
        
        
clean:
	rm -rf *.o
