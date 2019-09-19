
ifneq ($(KERNELRELEASE),) #test if run in the kernel Makefile 
  
obj-m := scull_driver.o  
  
else  
#KDIR := /home/xueqing/Documents/kernel/linux-4.19 
KDIR := /usr/src/linux-headers-4.19.0-5-amd64
all:  
	echo "compiling..."
#make -C $(KDIR) M=$(PWD) modules ARCH=arm CROSS_COMPILE=arm-eabi-  
	make -C $(KDIR) M=$(PWD) modules  
clean:  
	rm -f *.ko *.o *.mod.o *.mod.c *.symvers *.order 
  
endif 
