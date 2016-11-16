![4412](http://7xsic8.com1.z0.glb.clouddn.com/4412%E7%B2%BE%E8%8B%B1%E7%89%88-POP%E6%A0%B8%E5%BF%83%E6%9D%BF.jpg "4412")


# Device-Drivers目录
设备驱动程序（Device Driver），简称驱动程序(Driver)。它是一个允许计算机软件与硬件交互的程序。
>相当于硬件的接口


+ module
>模块机制




## 4412精英版-POP核心板参数

尺寸	60mm*70mm
高度	连同连接器在内0.26cm
CPU	Exynos4412，四核Cortex-A9，主频为1.4GHz-1.6GHz
内存	1GB 双通道 DDR3(2GB 可选)
存储	4GB EMMC(16GB 可选)
电源管理	低功耗动态三星S5M8767电源管理，最优架构！
工作电压	2.65V--5.5V (推荐4.0V）
系统支持	Linux-QT/Android4.2/Ubuntu操作系统
USB HOST	板载USB3503，引出高性能HSIC，实现2路USB HOST输出
引角扩展	引出脚多达320个，满足用户各类扩展需求
运行温度	-25度至+80度区间，设备工作正常，运行良好！
底板参数

尺寸	110mm*190mm
SWITCH	电源接口
RESET	1个复位按键
POWER	电直流电源输入接口，5V/2A电源输入
TF Card	1个标准TF卡接口
USB Host	2路USB Host,支持USB2.0协议
USB OTG	1路USB OTG 2.0
以太网口	10M/100M自适应网口
PHONE	支持耳机输出
MIC	支持MIC输入
串口	2路串口
A/D	1路
User Key	5个功能按键
DIP SWITCH	1个
GPIO	20PIN（电源和地）
CAMERA接口	1个（可支持200万和500万摄像头）
WIFI接口	1个
HDMI接口	标准HDMI v1.4，1080p高清分辨率输出
LCD接口	共3个，2个LVDS接口，1个RGB接口
实时时钟	内部实时时钟，带有后备锂电池座，断电后系统时间不丢失
BUZZER	1个蜂鸣器
JTAG接口	1个
串口、矩阵键盘、GPS接口	1个


Android 4.0.3 /Android 4.2.2

Bootloader

u-boot.bin	版本：u-boot-1.3.4	支持Nand Flash擦除、读、写
支持bootm、bootargs设置
支持打印、设置、保存环境变量
支持内存内容显示、对比、修改
支持USB 下载镜像等功能（提供源码)
内核及设备驱动程序

内核:内核版本	linux3.0.15与linux 3.5两种	 
系统时钟	系统主频：1.5GHz	 
内存	1GB  或 2GB	 
显示驱动	
支持4.3寸、7寸、9.7寸等
提供源码
TOUCH	触摸屏驱动	提供源码
HDMI	HDMI v1.4	提供源码
MFC	多媒体硬件编解码驱动	提供源码
ROTATOR	屏幕旋转驱动	提供源码
TF卡接口	1个TF卡接口	提供源码
HSMMC	SD/MMC/SDIO驱动	提供源码
SPI	SPI驱动	提供源码
KEYBD	按键驱动程序	提供源码
AUDIO	音频驱动	提供源码
DMA	DMA驱动	提供源码
RTC	实时时钟驱动	提供源码
JPEG	JPEG硬件编解码驱动	提供源码
2D	2D硬件加速驱动	提供源码
3D	3D硬件加速驱动	提供源码
I2C TP驱动	I2C 电容屏触摸驱动	提供源码
PWM背光驱动	PWM背光驱动	提供源码
USB驱动	USB驱动	提供源码
串口驱动	串口驱动	提供源码
网口驱动	网卡驱动	提供源码
WIFI驱动	WIFI驱动	提供模块
Camera驱动	200万像素摄像头驱动	提供源码
蓝牙驱动	蓝牙模块驱动	提供模块
3G驱动	3G上网卡驱动	提供源码
GPS模块	支持 GNS7560 全球定位	提供源码
交叉编译器

arm-2009q3.tar.bz2	交叉工具链
上层应用程序

Clock	这是Android 下一个闹钟程序，可以设置闹铃时间、铃声选择等
Calculator	计算器
Camera	摄像头应用程序
Phone	Android下的电话拨号软件，有呼叫记录、联系人等功能
Email	收发Email工具
Settings	Android下的各种应用和服务的设置等功能
Browser	Android 下的Brower 功能非常强大，支持网页放大、缩小、跳转、属性设置等
音频播放器	支持专辑分类，艺术家、专辑、歌曲、播放列表、派对随机播放、背景播放、搜索等功能
Messaging	Android下的短信软件
Gallery	图片浏览控件，支持图片放大、缩小、上一张、下一张、幻灯片演示、共享、旋转、裁切、图片信息等
PC端烧写工具

DNW V0.60C	串口调试终端、USB下载镜像工具
Ubuntu12.04

Ubuntu12.04	开发环境
稳定、通用的Linux + Qt操作系统

Bootloader

u-boot.bin	版本：u-boot-1.3.4	支持Nand Flash擦除、读、写
支持bootm、bootargs设置
支持打印、设置、保存环境变量
支持内存内容显示、对比、修改
支持USB 下载镜像等功能（提供源码)
内核及设备驱动程序

内核:内核版本	linux3.0.15与linux 3.5两种	 
系统时钟	系统主频：1.5GHz	 
内存	1GB  或 2GB	 
显示驱动	9.7寸(分辨率1024×768)驱动	提供源码
TOUCH	触摸屏驱动	提供源码
HDMI	HDMI v1.4	提供源码
MFC	多媒体硬件编解码驱动	提供源码
ROTATOR	屏幕旋转驱动	提供源码
TF卡接口	1个TF卡接口	提供源码
HSMMC	SD/MMC/SDIO驱动	提供源码
SPI	SPI驱动	提供源码
KEYBD	按键驱动程序	提供源码
AUDIO	音频驱动	提供源码
DMA	DMA驱动	提供源码
RTC	实时时钟驱动	提供源码
JPEG	JPEG硬件编解码驱动	提供源码
2D	2D硬件加速驱动	提供源码
3D	3D硬件加速驱动	提供源码
I2C TP驱动	I2C 电容屏触摸驱动	提供源码
PWM背光驱动	PWM背光驱动	提供源码
USB驱动	USB驱动	提供源码
串口驱动	串口驱动	提供源码
网口驱动	网卡驱动	提供源码
WIFI驱动	WIFI驱动	提供模块
Camera驱动	200万像素摄像头驱动	提供源码
蓝牙驱动	蓝牙模块驱动	提供模块
3G驱动	3G上网卡驱动	提供源码
GPS模块	支持 GNS7560 全球定位	提供源码
交叉编译器

arm-2009q3.tar.bz2	交叉工具链
PC端烧写工具

DNW V0.60C	串口调试终端、USB下载镜像工具
Ubuntu12.04

Ubuntu12.04	开发环境
