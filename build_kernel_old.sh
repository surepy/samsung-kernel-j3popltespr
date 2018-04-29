#!/bin/bash

OUT_DIR=out
COMMON_ARGS="-j8 -C $(pwd) O=$(pwd)/${OUT_DIR} ARCH=arm CROSS_COMPILE=arm-eabi-"

#export PATH=$(pwd)/../PLATFORM/prebuilts/gcc/linux-x86/arm/arm-eabi-4.8/bin:$PATH 
export CROSS_COMPILE=$(pwd)/../PLATFORM/prebuilts/gcc/linux-x86/arm/arm-eabi-4.8/bin/arm-eabi-

[ -d ${OUT_DIR} ] && rm -rf ${OUT_DIR}
mkdir ${OUT_DIR}

make ${COMMON_ARGS} msm8937_sec_defconfig VARIANT_DEFCONFIG=msm8937_sec_j3poplte_usa_spr_defconfig SELINUX_DEFCONFIG=selinux_defconfig
make ${COMMON_ARGS}

cp ${OUT_DIR}/arch/arm/boot/Image $(pwd)/arch/arm/boot/Image

