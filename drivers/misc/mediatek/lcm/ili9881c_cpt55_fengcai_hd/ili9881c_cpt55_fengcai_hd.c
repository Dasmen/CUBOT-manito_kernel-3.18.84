/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. and/or its licensors.
 * Without the prior written permission of MediaTek inc. and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 */
/* MediaTek Inc. (C) 2010. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON
 * AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 * NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 * SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 * SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
 * THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
 * THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
 * CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
 * SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
 * CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
 * AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
 * OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
 * MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek Software")
 * have been modified by MediaTek Inc. All revisions are subject to any receiver's
 * applicable license agreements with MediaTek Inc.
 */

/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2008
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

#ifdef BUILD_LK
#include <platform/mt_gpio.h>
#include <platform/mt_pmic.h>
#else
#include <mt-plat/mt_gpio.h>
//#include <mt-plat/upmu_common.h>
#include <linux/string.h>
#include <linux/kernel.h>
#endif
#include "lcm_drv.h"

#if defined(BUILD_LK)
	#define LCM_DEBUG  printf
	#define LCM_FUNC_TRACE() printf("huyl [uboot] %s\n",__func__)
#else
	#define LCM_DEBUG  printk
	#define LCM_FUNC_TRACE() printk("huyl [kernel] %s\n",__func__)
#endif
// ---------------------------------------------------------------------------
//  Local Constants
// ---------------------------------------------------------------------------

#define FRAME_WIDTH  (720)
#define FRAME_HEIGHT (1280)

#define LCM_OTM1287_ID			(0x1287)

#ifndef TRUE
    #define TRUE 1
#endif

#ifndef FALSE
    #define FALSE 0
#endif

static unsigned int lcm_esd_test = FALSE;      ///only for ESD test

// ---------------------------------------------------------------------------
//  Local Variables
// ---------------------------------------------------------------------------

static LCM_UTIL_FUNCS lcm_util = {0};

#define SET_RESET_PIN(v)    (lcm_util.set_reset_pin((v)))

#define UDELAY(n) (lcm_util.udelay(n))
#define MDELAY(n) (lcm_util.mdelay(n))

#define REGFLAG_DELAY             							0XFE
#define REGFLAG_END_OF_TABLE      							0x100   // END OF REGISTERS MARKER

// ---------------------------------------------------------------------------
//  Local Functions
// ---------------------------------------------------------------------------

#define dsi_set_cmdq_V2(cmd, count, ppara, force_update)	        lcm_util.dsi_set_cmdq_V2(cmd, count, ppara, force_update)
#define dsi_set_cmdq(pdata, queue_size, force_update)		lcm_util.dsi_set_cmdq(pdata, queue_size, force_update)
#define wrtie_cmd(cmd)										lcm_util.dsi_write_cmd(cmd)
#define write_regs(addr, pdata, byte_nums)					lcm_util.dsi_write_regs(addr, pdata, byte_nums)
#define read_reg(cmd)											lcm_util.dsi_dcs_read_lcm_reg(cmd)
#define read_reg_v2(cmd, buffer, buffer_size)   				lcm_util.dsi_dcs_read_lcm_reg_v2(cmd, buffer, buffer_size)


struct LCM_setting_table {
    unsigned cmd;
    unsigned char count;
    unsigned char para_list[64];
};

static void lcm_init_power(void)
{
}

static void lcm_suspend_power(void)
{
}

static void lcm_resume_power(void)
{
}

static struct LCM_setting_table lcm_initialization_setting[] = {

{0xFF,3,{0x98,0x81,0x07}},
//GIP_1
{0x03,1,{0x20}},
{0x04,1,{0x06}},
{0x05,1,{0x00}},
{0x06,1,{0x01}},
{0x07,1,{0x00}},
{0x08,1,{0x00}},
{0x09,1,{0x00}},
{0x0A,1,{0x00}},
{0x0B,1,{0x00}},
{0x0C,1,{0x00}},
{0x0D,1,{0x00}},
{0x0E,1,{0x00}},
{0x0F,1,{0x00}},
{0x10,1,{0x44}},
{0x11,1,{0x02}},
{0x12,1,{0x03}},
{0x13,1,{0x00}},
{0x14,1,{0x00}},
{0x15,1,{0x00}},
{0x16,1,{0x2F}},
{0x17,1,{0x2F}},
{0x18,1,{0x00}},
{0x19,1,{0x00}},
{0x1A,1,{0x00}},
{0x1B,1,{0x50}},
{0x1C,1,{0xDB}},     //DB
{0x1D,1,{0x08}},
{0x1E,1,{0x00}},
{0x1F,1,{0x00}},
{0x20,1,{0x00}},
{0x21,1,{0x00}},
{0x22,1,{0x00}},
{0x23,1,{0xC0}},
{0x24,1,{0x30}},
{0x25,1,{0x00}},
{0x26,1,{0x00}},
{0x27,1,{0x03}},

//GIP_2
{0x30,1,{0x01}},
{0x31,1,{0x23}},
{0x32,1,{0x45}},
{0x33,1,{0x67}},
{0x34,1,{0x89}},
{0x35,1,{0xAB}},
{0x36,1,{0x01}},
{0x37,1,{0x23}},
{0x38,1,{0x45}},
{0x39,1,{0x67}},
{0x3A,1,{0x89}},
{0x3B,1,{0xAB}},
{0x3C,1,{0xCD}},
{0x3D,1,{0xEF}},
//GIP_3
{0x50,1,{0x11}},
{0x51,1,{0x08}},
{0x52,1,{0x00}},
{0x53,1,{0x01}},
{0x54,1,{0x02}},
{0x55,1,{0x02}},
{0x56,1,{0x0F}},
{0x57,1,{0x0E}},
{0x58,1,{0x0D}},
{0x59,1,{0x02}},
{0x5A,1,{0x02}},
{0x5B,1,{0x0C}},
{0x5C,1,{0x06}},
{0x5D,1,{0x02}},
{0x5E,1,{0x02}},
{0x5F,1,{0x02}},
{0x60,1,{0x02}},
{0x61,1,{0x02}},
{0x62,1,{0x02}},
{0x63,1,{0x02}},
{0x64,1,{0x02}},
{0x65,1,{0x02}},
{0x66,1,{0x02}},
{0x67,1,{0x06}},
{0x68,1,{0x00}},
{0x69,1,{0x01}},
{0x6A,1,{0x02}},
{0x6B,1,{0x02}},
{0x6C,1,{0x0F}},
{0x6D,1,{0x0E}},
{0x6E,1,{0x0D}},
{0x6F,1,{0x02}},
{0x70,1,{0x02}},
{0x71,1,{0x0C}},
{0x72,1,{0x08}},
{0x73,1,{0x02}},
{0x74,1,{0x02}},
{0x75,1,{0x02}},
{0x76,1,{0x02}},
{0x77,1,{0x02}},
{0x78,1,{0x02}},
{0x79,1,{0x02}},
{0x7A,1,{0x02}},
{0x7B,1,{0x02}},
{0x7C,1,{0x02}},
//CMD_Page 4
{0xFF,3,{0x98,0x81,0x08}},
{0xa3,1,{0x40}},
{0x76,1,{0xD4}},		//VGH pumping ratio 3x
{0x78,1,{0x02}},		//VGL pumping ratio 2x
{0x74,1,{0x2B}},		//VGH clamp 15V
{0x8E,1,{0x15}},		//VGL clamp -10V
{0x40,1,{0x01}},		//POWER SAVING
{0x84,1,{0x81}},		//RF improve
{0xE3,1,{0x44}},		//Performance enhancement
{0x7D,1,{0xCB}},		//Performance enhancement
{0x7E,1,{0x49}},		//Performance enhancement
{0x49,1,{0x10}},		//GIP tie VGH
{0x72,1,{0x25}},		//VCORE=1.6V
//CMD_Page 1
{0xFF,3,{0x98,0x81,0x01}},
{0x22,1,{0x0A}},		//BGR, SS
{0x53,1,{0x65}},		//VCOM1   69
{0x55,1,{0x4D}},		//VCOM2
{0x50,1,{0x95}},       //VREG1OUT=4.6V
{0x51,1,{0x95}},       //VREG2OUT=-4.6V
{0xA0,1,{0x08}},		//VP255	Gamma P

{0xA1,1,{0x1B}},       //VP251
{0xA2,1,{0x28}},       //VP247
{0xA3,1,{0x12}},       //VP243
{0xA4,1,{0x14}},       //VP239
{0xA5,1,{0x26}},       //VP231
{0xA6,1,{0x1B}},       //VP219
{0xA7,1,{0x1D}},       //VP203
{0xA8,1,{0x92}},       //VP175
{0xA9,1,{0x1D}},       //VP144
{0xAA,1,{0x29}},       //VP111
{0xAB,1,{0x8D}},       //VP80
{0xAC,1,{0x1C}},       //VP52
{0xAD,1,{0x1A}},       //VP36
{0xAE,1,{0x4E}},       //VP24
{0xAF,1,{0x21}},       //VP16
{0xB0,1,{0x28}},       //VP12
{0xB1,1,{0x5A}},       //VP8
{0xB2,1,{0x68}},       //VP4
{0xB3,1,{0x39}},       //VP0
                                              
{0xC0,1,{0x08}},		//VN255 GAMMA N
{0xC1,1,{0x1A}},       //VN251
{0xC2,1,{0x27}},       //VN247
{0xC3,1,{0x13}},       //VN243
{0xC4,1,{0x15}},       //VN239
{0xC5,1,{0x26}},       //VN231
{0xC6,1,{0x1B}},       //VN219
{0xC7,1,{0x1D}},       //VN203
{0xC8,1,{0x93}},       //VN175
{0xC9,1,{0x1D}},       //VN144
{0xCA,1,{0x29}},       //VN111
{0xCB,1,{0x8D}},       //VN80
{0xCC,1,{0x1C}},       //VN52
{0xCD,1,{0x1A}},       //VN36
{0xCE,1,{0x4E}},       //VN24
{0xCF,1,{0x21}},       //VN16
{0xD0,1,{0x28}},       //VN12
{0xD1,1,{0x5A}},       //VN8
{0xD2,1,{0x68}},       //VN4
{0xD3,1,{0x39}},       //VN0

//CMD_Page 0
{0xFF,3,{0x98,0x81,0x00}},
{0x36,1,{0x00}},	//Forward
{0x35,1,{0x00}},
//{0x35,1,{0x00}},                                                         
{0x11,1,{0x00}},//SLEEP OUT                                              
{REGFLAG_DELAY,120,{}},                                                                                           
{0x29,1,{0x00}},//Display ON                                             
{REGFLAG_DELAY,20,{}},    
{REGFLAG_END_OF_TABLE, 0x00, {}}

};
static struct LCM_setting_table lcm_sleep_mode_in_setting[] = {
	// Display off sequence
	{0x28, 0, {0x00}},
	{REGFLAG_DELAY, 120, {}},

    // Sleep Mode On
	{0x10, 0, {0x00}},
	{REGFLAG_DELAY, 200, {}},
	{REGFLAG_END_OF_TABLE, 0x00, {}}
};
static struct LCM_setting_table lcm_compare_id_setting[] = {
	// Display off sequence
	{0xF0,	5,	{0x55, 0xaa, 0x52,0x08,0x00}},
	{REGFLAG_DELAY, 10, {}},

	{REGFLAG_END_OF_TABLE, 0x00, {}}
};


static void push_table(struct LCM_setting_table *table, unsigned int count, unsigned char force_update)
{
	unsigned int i;

    for(i = 0; i < count; i++) {

        unsigned cmd;
        cmd = table[i].cmd;

        switch (cmd) {

            case REGFLAG_DELAY :
                MDELAY(table[i].count);
                break;

            case REGFLAG_END_OF_TABLE :
                break;

            default:
				dsi_set_cmdq_V2(cmd, table[i].count, table[i].para_list, force_update);
				//MDELAY(2);
       	}
    }

}

// ---------------------------------------------------------------------------
//  LCM Driver Implementations
// ---------------------------------------------------------------------------

static void lcm_set_util_funcs(const LCM_UTIL_FUNCS *util)
{
    memcpy(&lcm_util, util, sizeof(LCM_UTIL_FUNCS));
}


static void lcm_get_params(LCM_PARAMS *params)
{
	memset(params, 0, sizeof(LCM_PARAMS));

	params->type = LCM_TYPE_DSI;

	params->width = FRAME_WIDTH;
	params->height = FRAME_HEIGHT;

	// enable tearing-free
	params->dbi.te_mode = LCM_DBI_TE_MODE_VSYNC_ONLY;
	params->dbi.te_edge_polarity = LCM_POLARITY_RISING;

	params->dsi.mode   = SYNC_PULSE_VDO_MODE; //SYNC_PULSE_VDO_MODE;//BURST_VDO_MODE;

	// DSI
	/* Command mode setting */
	params->dsi.LANE_NUM = LCM_THREE_LANE;
	//The following defined the fomat for data coming from LCD engine.
	params->dsi.data_format.color_order = LCM_COLOR_ORDER_RGB;
	params->dsi.data_format.trans_seq = LCM_DSI_TRANS_SEQ_MSB_FIRST;
	params->dsi.data_format.padding = LCM_DSI_PADDING_ON_LSB;
	params->dsi.data_format.format = LCM_DSI_FORMAT_RGB888;

	params->dsi.intermediat_buffer_num = 0;	//because DSI/DPI HW design change, this parameters should be 0 when video mode in MT658X; or memory leakage

	params->dsi.PS = LCM_PACKED_PS_24BIT_RGB888;
	params->dsi.word_count = 720 * 3;

    params->dsi.vertical_sync_active                = 6;// 3    2
    params->dsi.vertical_backporch                  = 15;// 20   1
    params->dsi.vertical_frontporch                 = 19; // 1  12
    params->dsi.vertical_active_line                = FRAME_HEIGHT;

    params->dsi.horizontal_sync_active              = 40;// 50  2
    params->dsi.horizontal_backporch                = 120;//90
    params->dsi.horizontal_frontporch               = 80;//90
    params->dsi.horizontal_active_pixel             = FRAME_WIDTH;
/*
    params->dsi.ssc_disable                         = 1;
    params->dsi.ssc_range                         = 4;
    params->dsi.HS_TRAIL                             = 15;
    params->dsi.esd_check_enable = 1;
    params->dsi.customization_esd_check_enable = 0;
    params->dsi.lcm_esd_check_table[0].cmd          = 0x0a;
    params->dsi.lcm_esd_check_table[0].count        = 1;
    params->dsi.lcm_esd_check_table[0].para_list[0] = 0x9c;
*/  
  params->dsi.PLL_CLOCK =240;
}

static void lcm_init(void)
{
  SET_RESET_PIN(1);
  MDELAY(10);
  SET_RESET_PIN(0);
  MDELAY(5);
  SET_RESET_PIN(1);
  MDELAY(120);

  push_table(lcm_initialization_setting, sizeof(lcm_initialization_setting) / sizeof(struct LCM_setting_table), 1);
}


static void lcm_suspend(void)
{
  SET_RESET_PIN(1);
  MDELAY(10);
  SET_RESET_PIN(0);
  MDELAY(5);
  SET_RESET_PIN(1);
  MDELAY(20);
  push_table(lcm_sleep_mode_in_setting, sizeof(lcm_sleep_mode_in_setting) / sizeof(struct LCM_setting_table), 1);
}

static void lcm_resume(void)
{
	lcm_init();
}

static unsigned int lcm_compare_id(void)
{

	int array[4];
	char buffer[3];
	char id_high=0;
	char id_low=0;
	int id=0;

	SET_RESET_PIN(1);
	MDELAY(20);
	SET_RESET_PIN(0);
	MDELAY(20);
	SET_RESET_PIN(1);
	MDELAY(100);

	//{0x39, 0xFF, 5, { 0xFF,0x98,0x06,0x04,0x01}}, // Change to Page 1 CMD
	array[0] = 0x00043902;
	array[1] = 0x018198FF;
	dsi_set_cmdq(array, 2, 1);

	array[0] = 0x00013700;
	dsi_set_cmdq(array, 1, 1);
	read_reg_v2(0x00, &buffer[0], 1);  //0x98

	id = buffer[0];

	return (0x98 == id)?1:0;

}

LCM_DRIVER ili9881c_cpt55_fengcai_hd_lcm_drv =
{
	.name			= "ili9881c_cpt55_fengcai_hd",
	.set_util_funcs = lcm_set_util_funcs,
	.get_params     = lcm_get_params,
	.init           = lcm_init,
	.suspend        = lcm_suspend,
	.resume         = lcm_resume,
	.compare_id     = lcm_compare_id,
    .init_power     = lcm_init_power,
    .resume_power   = lcm_resume_power,
    .suspend_power  = lcm_suspend_power,
	//.esd_check = lcm_esd_check,
	//.esd_recover = lcm_esd_recover,
};

