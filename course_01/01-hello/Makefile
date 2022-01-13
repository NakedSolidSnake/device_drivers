obj-m += hello.o 
all:
	make -C /lib/modules/`uname -r`/build M=$(PWD) modules
clean:
	rm -rf *.o *.ko *.mod.c .an* .lab* .tmp_versions Module.symvers Module.makers module.order .*.cmd *.mod