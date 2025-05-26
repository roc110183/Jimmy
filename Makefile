ifdef CROSS_COMPILE
	KERNELDIR := /home/jimmy/kernel
else
	KERNELDIR := /lib/modules/$(shell uname -r)/build
endif

obj-m += test_module.o

all:
	make -C $(KERNELDIR) M=$(PWD) modules
clean:
	make -C $(KERNELDIR) M=$(PWD) clean
