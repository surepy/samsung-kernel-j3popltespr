# samsung-kernel-j3popltespr

## notice!

[ORIGINAL DOWNOAD LINK!](https://opensource.samsung.com/reception/receptionSub.do?method=sub&sub=F&searchValue=sm-j327p)

## README_Kernel.txt

################################################################################

1. How to Build
	- get Toolchain
		From android git server , codesourcery and etc ..
		 - arm-eabi-4.8
		
	- edit build_kernel.sh
		edit "CROSS_COMPILE" to set proper toolchain.
		  EX) export CROSS_COMPILE=$(android platform directory)/android/prebuilts/gcc/linux-x86/arm/arm-eabi-4.8/bin/arm-eabi-

	- run build_kernel.sh
      $ ./build_kernel.sh

2. Output files
	- Kernel : output/arch/arm/boot/zImage
	- module : output/drivers/\*/\*.ko

3. How to Clean	
		$ cd output
		$ make clean
################################################################################
