/*************************************************
  Copyright (c), 2015-2020, SkyLight Ltd 
  File name   : vendors\skl_a12platform\inc\skl_a12_plat.h
  Author      : xiangyang   version:v1.0.00.000    Date 2015-12-25
  Description : The head of platform module debug switch
  Others:	   
  History:	    
*************************************************/

#ifndef _SKL_A12_PLAT_H_
#define _SKL_A12_PLAT_H_

/** 
* Apollo  enable 
*
* This add by liuhang at 2016-12-28
*/
#define APOLLO_ENABLE

/**
* fw upgrade
*
* This add by qiangfeili at 2016-09-19
*/
#define SKL_FW_UPGRADE

/**
* fw nand  upgrade
*
* This add by liuqingsong at 2016-12-9
*/
#define SKL_NAND_FW_UPDATE

/**
* remove dialog when fw upgrage
*
* This add by qiangfeili at 2016-10-14
*/
#define SKL_FW_UPGRADE_REMOVE_DIALOG

/**
* usb simple support
*
* This add by qiangfeili at 2016-07-25
*/
#define APP_USB_SIMPLE_ENABLE 

/**
* set audio data, pcm 
*
* This add by qiangfeili at 2016-10-14
*/
#define USB_SIMPLE_AUDIO_PCM_ENABLE

/**
* implement iap2
*
* This add by liuhang at 2016-12-20
*/

#define AE_ADJUST_TEST
/**
*
* This add by liuqingsong at 2017-4-12
*/
#define APP_IQ_CALIBRATION

/**
* implement iap2
*
* This add by liuqingsong at 2017-4-12
*/
#define APP_PRODUCT_TEST


/**
* app uart1 enable
*
* This add by qiangfeili at 2017-4-26
*/
#define APP_UART1_ENABLE


/**
* a12 to mcu heart beat
*
* This add by qiangfeili at 2017-5-12
*/
//#define UART1_HEART_BEAT_ENABLE


/** 
* write file test
*
* This add by qiangfeili at 2016-10-29
*/
//#define WRITE_FILE_TEST


/** 
* Apollo  enable 
*
* This add by liuhang at 2016-12-28
*/

/* 
* enable logging feature
*/
//#define SKL_LOGGING
/* 

* enable get lens CV
*
* This add by liuqingsong at 2017-05-13
*/

//#define ENABLE_GET_CV


/* 
*  enable usb simple reset
*
* This add by qiangfeili at 2017-06-30
*/

#define ENABLE_USB_SIMPLE_RESET


/* 
*  enable check and format a
*
* This add by qiangfeili at 2017-07-25
*/
//#define ENABLE_CHECK_FORMAT

/* 
*  enable erase a when wrire .elf file to nandflash
*
* This add by liuqingsong at 2017-08-30
*/
//#define ENABLE_DIRECT_USB_ERASE_A


#endif // _SKL_A12_PLAT_H_

