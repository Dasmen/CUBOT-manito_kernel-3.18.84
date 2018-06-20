#ifndef __MT65XX_LCM_LIST_H__
#define __MT65XX_LCM_LIST_H__

#include <lcm_drv.h>

#if defined(MTK_LCM_DEVICE_TREE_SUPPORT)
extern LCM_DRIVER lcm_common_drv;
#else
extern LCM_DRIVER otm1282a_hd720_dsi_vdo_60hz_lcm_drv;
extern LCM_DRIVER ili9881c_auo55_hongzhan_hd_lcm_drv;
extern LCM_DRIVER ili9881c_boe50_kelai_hd_lcm_drv;
extern LCM_DRIVER ili9881c_boe50_huashi_hd_lcm_drv;
extern LCM_DRIVER ili9881c_auo55_chuanma_hd_lcm_drv;
extern LCM_DRIVER ili9881c_ivo55_jingtai_hd_lcm_drv;
extern LCM_DRIVER ili9881c_ivo50_zgd_hd_lcm_drv;
extern LCM_DRIVER otm1282a_hd720_dsi_vdo_lcm_drv;
extern LCM_DRIVER vvx10f008b00_wuxga_dsi_vdo_lcm_drv;
extern LCM_DRIVER r63319_wqhd_dsi_vdo_truly_lcm_drv;
extern LCM_DRIVER nt35598_wqhd_dsi_vdo_truly_lcm_drv;
extern LCM_DRIVER lp079x01_lcm_drv;
extern LCM_DRIVER hx8369_lcm_drv;
extern LCM_DRIVER hx8369_6575_lcm_drv;
extern LCM_DRIVER hx8363_6575_dsi_lcm_drv;
extern LCM_DRIVER hx8363_6575_dsi_hvga_lcm_drv;
extern LCM_DRIVER hx8363_6575_dsi_qvga_lcm_drv;
extern LCM_DRIVER hx8363b_wvga_dsi_cmd_drv;
extern LCM_DRIVER bm8578_lcm_drv;
extern LCM_DRIVER nt35582_mcu_lcm_drv;
extern LCM_DRIVER nt35582_mcu_6575_lcm_drv;
extern LCM_DRIVER nt35582_rgb_6575_lcm_drv;
extern LCM_DRIVER hx8357b_lcm_drv;
extern LCM_DRIVER hx8357c_hvga_dsi_cmd_drv;
extern LCM_DRIVER hx8369_dsi_lcm_drv;
extern LCM_DRIVER hx8369_dsi_6575_lcm_drv;
extern LCM_DRIVER hx8369_dsi_6575_hvga_lcm_drv;
extern LCM_DRIVER hx8369_dsi_6575_qvga_lcm_drv;
extern LCM_DRIVER hx8369_dsi_vdo_lcm_drv;
extern LCM_DRIVER hx8369b_dsi_vdo_lcm_drv;
extern LCM_DRIVER hx8369b_wvga_dsi_vdo_drv;
extern LCM_DRIVER hx8389b_qhd_dsi_vdo_drv;
extern LCM_DRIVER hx8369_hvga_lcm_drv;
extern LCM_DRIVER ili9481_lcm_drv;
extern LCM_DRIVER nt35582_lcm_drv;
extern LCM_DRIVER s6d0170_lcm_drv;
extern LCM_DRIVER spfd5461a_lcm_drv;
extern LCM_DRIVER ta7601_lcm_drv;
extern LCM_DRIVER tft1p3037_lcm_drv;
extern LCM_DRIVER ha5266_lcm_drv;
extern LCM_DRIVER hsd070idw1_lcm_drv;
extern LCM_DRIVER lg4571_lcm_drv;
extern LCM_DRIVER lg4573b_wvga_dsi_vdo_lh430mv1_drv;
extern LCM_DRIVER lvds_wsvga_lcm_drv;
extern LCM_DRIVER lvds_wsvga_ti_lcm_drv;
extern LCM_DRIVER lvds_wsvga_ti_n_lcm_drv;
extern LCM_DRIVER nt35565_3d_lcm_drv;
extern LCM_DRIVER tm070ddh03_lcm_drv;
extern LCM_DRIVER r61408_lcm_drv;
extern LCM_DRIVER r61408_wvga_dsi_cmd_drv;
extern LCM_DRIVER nt35510_lcm_drv;
extern LCM_DRIVER nt35510_dpi_lcm_drv;
extern LCM_DRIVER nt35510_hvga_lcm_drv;
extern LCM_DRIVER nt35510_qvga_lcm_drv;
extern LCM_DRIVER nt35510_wvga_dsi_cmd_drv;
extern LCM_DRIVER nt35510_6517_lcm_drv;
extern LCM_DRIVER nt35510_dsi_cmd_6572_drv;
extern LCM_DRIVER nt35510_dsi_cmd_6572_hvga_drv;
extern LCM_DRIVER nt35510_dsi_cmd_6572_fwvga_drv;
extern LCM_DRIVER nt35510_dsi_cmd_6572_qvga_drv;
extern LCM_DRIVER nt35510_dsi_vdo_6572_drv;
extern LCM_DRIVER nt35510_dpi_6572_lcm_drv;
extern LCM_DRIVER nt35510_mcu_6572_lcm_drv;
extern LCM_DRIVER nt51012_hd720_dsi_vdo_lcm_drv;
extern LCM_DRIVER r63303_idisplay_lcm_drv;
extern LCM_DRIVER hj080ia_lcm_drv;
extern LCM_DRIVER hj101na02a_lcm_drv;
extern LCM_DRIVER hj101na02a_8135_lcm_drv;
extern LCM_DRIVER hsd070pfw3_lcm_drv;
extern LCM_DRIVER hsd070pfw3_8135_lcm_drv;
extern LCM_DRIVER cm_n070ice_dsi_vdo_lcm_drv;
extern LCM_DRIVER ej101ia_lcm_drv;
extern LCM_DRIVER scf0700m48ggu02_lcm_drv;
extern LCM_DRIVER nt35510_fwvga_lcm_drv;
#if defined(GN_SSD2825_SMD_S6E8AA)
extern LCM_DRIVER gn_ssd2825_smd_s6e8aa;
#endif
extern LCM_DRIVER nt35517_dsi_vdo_lcm_drv;
extern LCM_DRIVER hx8369_dsi_bld_lcm_drv;
extern LCM_DRIVER hx8369_dsi_tm_lcm_drv;
extern LCM_DRIVER otm1280a_hd720_dsi_cmd_drv;
extern LCM_DRIVER otm8018b_dsi_vdo_lcm_drv;
extern LCM_DRIVER otm8018b_dsi_vdo_txd_fwvga_lcm_drv;
extern LCM_DRIVER nt35512_dsi_vdo_lcm_drv;
extern LCM_DRIVER nt35512_wvga_dsi_vdo_boe_drv;
extern LCM_DRIVER hx8369_rgb_6585_fpga_lcm_drv;
extern LCM_DRIVER hx8369_rgb_6572_fpga_lcm_drv;
extern LCM_DRIVER hx8369_mcu_6572_lcm_drv;
extern LCM_DRIVER hx8369a_wvga_dsi_cmd_drv;
extern LCM_DRIVER hx8369a_wvga_dsi_vdo_drv;
extern LCM_DRIVER hx8392a_dsi_cmd_lcm_drv;
extern LCM_DRIVER hx8392a_dsi_cmd_3lane_lcm_drv;
extern LCM_DRIVER hx8392a_dsi_cmd_3lane_qhd_lcm_drv;
extern LCM_DRIVER hx8392a_dsi_cmd_wvga_lcm_drv;
extern LCM_DRIVER hx8392a_dsi_cmd_fwvga_lcm_drv;
extern LCM_DRIVER hx8392a_dsi_cmd_qhd_lcm_drv;
extern LCM_DRIVER hx8392a_dsi_vdo_lcm_drv;
extern LCM_DRIVER hx8392a_dsi_vdo_2lane_lcm_drv;
extern LCM_DRIVER hx8392a_dsi_vdo_3lane_lcm_drv;
extern LCM_DRIVER nt35590_hd720_dsi_vdo_truly_lcm_drv;
extern LCM_DRIVER ssd2075_hd720_dsi_vdo_truly_lcm_drv;
extern LCM_DRIVER nt35590_hd720_dsi_cmd_drv;
extern LCM_DRIVER nt35590_hd720_dsi_cmd_auo_lcm_drv;
extern LCM_DRIVER nt35590_hd720_dsi_cmd_auo_fwvga_lcm_drv;
extern LCM_DRIVER nt35590_hd720_dsi_cmd_auo_wvga_lcm_drv;
extern LCM_DRIVER nt35590_hd720_dsi_cmd_auo_qhd_lcm_drv;
extern LCM_DRIVER nt35590_hd720_dsi_cmd_cmi_lcm_drv;
extern LCM_DRIVER nt35516_qhd_dsi_cmd_ipsboe_lcm_drv;
extern LCM_DRIVER nt35516_qhd_dsi_cmd_ipsboe_wvga_lcm_drv;
extern LCM_DRIVER nt35516_qhd_dsi_cmd_ipsboe_fwvga_lcm_drv;
extern LCM_DRIVER nt35516_qhd_dsi_cmd_ips9k1431_drv;
extern LCM_DRIVER nt35516_qhd_dsi_cmd_tft9k1342_drv;
extern LCM_DRIVER bp070ws1_lcm_drv;
extern LCM_DRIVER bp101wx1_lcm_drv;
extern LCM_DRIVER bp101wx1_n_lcm_drv;
extern LCM_DRIVER nt35516_qhd_rav4_lcm_drv;
extern LCM_DRIVER r63311_fhd_dsi_vdo_sharp_lcm_drv;
extern LCM_DRIVER r81592_hvga_dsi_cmd_drv;
extern LCM_DRIVER rm68190_dsi_vdo_lcm_drv;
extern LCM_DRIVER nt35596_fhd_dsi_vdo_truly_lcm_drv;
extern LCM_DRIVER nt35595_fhd_dsi_vdo_truly_lcm_drv;
extern LCM_DRIVER nt35595_fhd_dsi_cmd_truly_lcm_drv;
extern LCM_DRIVER nt35595_fhd_dsi_cmd_truly_tps65132_lcm_drv;
extern LCM_DRIVER nt35595_fhd_dsi_vdo_truly_tps65132_lcm_drv;
extern LCM_DRIVER nt35595_fhd_dsi_vdo_truly_nt50358_lcm_drv;
extern LCM_DRIVER nt35595_fhd_dsi_cmd_truly_nt50358_lcm_drv;
extern LCM_DRIVER nt35595_fhd_dsi_cmd_truly_nt50358_720p_lcm_drv;
extern LCM_DRIVER nt35595_fhd_dsi_cmd_truly_nt50358_qhd_lcm_drv;
extern LCM_DRIVER nt35595_fhd_dsi_cmd_truly_nt50358_fwvga_lcm_drv;
extern LCM_DRIVER nt35595_fhd_dsi_cmd_truly_nt50358_wvga_lcm_drv;
extern LCM_DRIVER nt35595_fhd_dsi_cmd_truly_tps65132_720p_lcm_drv;
extern LCM_DRIVER nt35595_fhd_dsi_cmd_truly_nt50358_6735_lcm_drv;
extern LCM_DRIVER nt35595_fhd_dsi_cmd_truly_nt50358_6735_720p_lcm_drv;
extern LCM_DRIVER nt35596_fhd_dsi_vdo_yassy_lcm_drv;
extern LCM_DRIVER nt35596_hd720_dsi_vdo_truly_tps65132_lcm_drv;
extern LCM_DRIVER nt35590_hd720_dsi_cmd_truly2_lcm_drv;
extern LCM_DRIVER otm9608_wvga_dsi_cmd_drv;
extern LCM_DRIVER otm9608_fwvga_dsi_cmd_drv;
extern LCM_DRIVER otm9608_qhd_dsi_cmd_drv;
extern LCM_DRIVER otm9608_qhd_dsi_vdo_drv;
extern LCM_DRIVER otm8009a_fwvga_dsi_cmd_tianma_lcm_drv;
extern LCM_DRIVER otm8009a_fwvga_dsi_vdo_tianma_lcm_drv;
extern LCM_DRIVER hx8389b_qhd_dsi_vdo_tianma_lcm_drv;
extern LCM_DRIVER cm_otc3108bhv161_dsi_vdo_lcm_drv;
extern LCM_DRIVER auo_b079xat02_dsi_vdo_lcm_drv;
extern LCM_DRIVER hx8389b_qhd_dsi_vdo_tianma055xdhp_lcm_drv;
extern LCM_DRIVER cpt_claa101fp01_dsi_vdo_lcm_drv;
extern LCM_DRIVER cpt_claa101fp01_dsi_vdo_8163_lcm_drv;
extern LCM_DRIVER h070d_18dm_lcm_drv;
extern LCM_DRIVER hx8394a_hd720_dsi_vdo_tianma_lcm_drv;
extern LCM_DRIVER hx8394d_hd720_dsi_vdo_tianma_lcm_drv;
extern LCM_DRIVER cpt_clap070wp03xg_sn65dsi83_lcm_drv;
extern LCM_DRIVER nt35520_hd720_tm_lcm_drv;
extern LCM_DRIVER nt35520_hd720_boe_lcm_drv;
extern LCM_DRIVER nt35521_hd720_dsi_vdo_boe_lcm_drv;
extern LCM_DRIVER nt35521_hd720_tm_lcm_drv;
extern LCM_DRIVER r69429_wuxga_dsi_vdo_lcm_drv;
extern LCM_DRIVER r69429_wuxga_dsi_cmd_lcm_drv;
extern LCM_DRIVER rm68210_hd720_dsi_ufoe_cmd_lcm_drv;
extern LCM_DRIVER r63311_fhd_dsi_vedio_lcm_drv;
extern LCM_DRIVER otm1283a_6589_hd_dsi;
extern LCM_DRIVER hx8394a_hd720_dsi_vdo_tianma_v2_lcm_drv;
extern LCM_DRIVER cpt_clap070wp03xg_lvds_lcm_drv;
extern LCM_DRIVER hx8369_dsi_cmd_6571_lcm_drv;
extern LCM_DRIVER hx8369_dsi_vdo_6571_lcm_drv;
extern LCM_DRIVER hx8369_dbi_6571_lcm_drv;
extern LCM_DRIVER hx8369_dpi_6571_lcm_drv;
extern LCM_DRIVER nt35510_dsi_cmd_6571_lcm_drv;
extern LCM_DRIVER nt35510_dsi_cmd_6571_hvga_lcm_drv;
extern LCM_DRIVER nt35510_dsi_cmd_6571_qvga_lcm_drv;
extern LCM_DRIVER nt35510_dsi_vdo_6571_lcm_drv;
extern LCM_DRIVER nt35510_dbi_6571_lcm_drv;
extern LCM_DRIVER nt35510_dpi_6571_lcm_drv;
extern LCM_DRIVER nt35590_dsi_cmd_6571_fwvga_lcm_drv;
extern LCM_DRIVER nt35590_dsi_cmd_6571_qhd_lcm_drv;
extern LCM_DRIVER it6151_edp_dsi_video_sharp_lcm_drv;
extern LCM_DRIVER nt35517_qhd_dsi_vdo_lcm_drv;
extern LCM_DRIVER otm1283a_hd720_dsi_vdo_tm_lcm_drv;
extern LCM_DRIVER otm1284a_hd720_dsi_vdo_tm_lcm_drv;
extern LCM_DRIVER otm1285a_hd720_dsi_vdo_tm_lcm_drv;
extern LCM_DRIVER hx8389b_qhd_dsi_vdo_lgd_lcm_drv;
extern LCM_DRIVER it6151_fhd_edp_dsi_video_auo_lcm_drv;
extern LCM_DRIVER tf070mc_rgb_v18_mt6571_lcm_drv;
extern LCM_DRIVER zs070ih5015b3h6_mt6571_lcm_drv;
extern LCM_DRIVER a080ean01_dsi_vdo_lcm_drv;
extern LCM_DRIVER it6121_g156xw01v1_lvds_vdo_lcm_drv;
extern LCM_DRIVER cpt_clap070wp03xg_lvds_lcm_drv;
extern LCM_DRIVER r63315_fhd_dsi_vdo_truly_lcm_drv;
extern LCM_DRIVER it6151_lp079qx1_edp_dsi_video_lcm_drv;
extern LCM_DRIVER RX_498HX_615B_lcm_drv;
extern LCM_DRIVER RX_498HX_615B_82_lcm_drv;
extern LCM_DRIVER ili9806c_dsi_vdo_djn_fwvga_lcm_drv;
extern LCM_DRIVER hx8389b_hd720_dsi_vdo_drv;
extern LCM_DRIVER r69338_hd720_dsi_vdo_jdi_drv;
extern LCM_DRIVER r69339_hd720_dsi_vdo_lcm_drv;
extern LCM_DRIVER r69339_sharp55_jsj_hd_lcm_drv;
extern LCM_DRIVER r69338_hd720_5in_dsi_vdo_jdi_dw8768_drv;
extern LCM_DRIVER db7436_dsi_vdo_fwvga_drv;
extern LCM_DRIVER r63417_fhd_dsi_cmd_truly_nt50358_lcm_drv;
extern LCM_DRIVER r63417_fhd_dsi_cmd_truly_nt50358_720p_lcm_drv;
extern LCM_DRIVER r63417_fhd_dsi_cmd_truly_nt50358_qhd_lcm_drv;
extern LCM_DRIVER r63417_fhd_dsi_vdo_truly_nt50358_lcm_drv;
extern LCM_DRIVER r63419_wqhd_truly_phantom_cmd_lcm_drv;
extern LCM_DRIVER r63419_wqhd_truly_phantom_vdo_lcm_drv;
extern LCM_DRIVER r63419_fhd_truly_phantom_lcm_drv;
extern LCM_DRIVER r63423_wqhd_truly_phantom_lcm_drv;
extern LCM_DRIVER kr101ia2s_dsi_vdo_lcm_drv;
extern LCM_DRIVER kr070ia4t_dsi_vdo_lcm_drv;
extern LCM_DRIVER r69338_hd720_dsi_vdo_jdi_dw8755a_drv;
extern LCM_DRIVER otm9605a_qhd_dsi_vdo_drv;
extern LCM_DRIVER ili9806e_dsi_vdo_fwvga_drv;
extern LCM_DRIVER ili9881c_auo50_jingtai_hd_lcm_drv;
extern LCM_DRIVER ili9881c_auo50_xzx_hd_lcm_drv;
extern LCM_DRIVER ili9881c_hsd50_skyworth_hd_lcm_drv;
extern LCM_DRIVER otm1906a_fhd_dsi_cmd_auto_lcm_drv;
extern LCM_DRIVER clap070wp03xg_lvds_8163_lcm_drv;
extern LCM_DRIVER nt35523_wxga_dsi_vdo_boe_lcm_drv;
extern LCM_DRIVER otm1906b_fhd_dsi_cmd_jdi_tps65132_lcm_drv;
extern LCM_DRIVER otm1906b_fhd_dsi_cmd_jdi_tps65132_mt6797_lcm_drv;
extern LCM_DRIVER s6e3fa2_fhd1080_dsi_vdo_lcm_drv;
extern LCM_DRIVER nt35523_wsvga_dsi_vdo_boe_lcm_drv;
extern LCM_DRIVER ek79023_dsi_wsvga_vdo_lcm_drv;
extern LCM_DRIVER nt35532_fhd_dsi_vdo_sharp_lcm_drv;
extern LCM_DRIVER s6d7aa0_wxga_dsi_vdo_lcm_drv;
extern LCM_DRIVER s6d6fa1x01_jdi55_hlt_fhd_lcm_drv;
extern LCM_DRIVER hx8394c_wxga_dsi_vdo_lcm_drv;
extern LCM_DRIVER it6151_lp079qx1_edp_dsi_video_8163evb_lcm_drv;
extern LCM_DRIVER sy20810800210132_wuxga_dsi_vdo_lcm_drv;
extern LCM_DRIVER nt35695_fhd_dsi_cmd_truly_nt50358_720p_lcm_drv;
extern LCM_DRIVER nt35695_fhd_dsi_cmd_truly_nt50358_qhd_lcm_drv;
extern LCM_DRIVER nt35695_fhd_dsi_cmd_truly_nt50358_lcm_drv;
extern LCM_DRIVER nt35695_fhd_dsi_vdo_truly_nt50358_lcm_drv;
extern LCM_DRIVER nt35510_dsi_cmd_lcm_drv;
extern LCM_DRIVER rm69032_dsi_cmd_lcm_drv;
extern LCM_DRIVER st7789h2_dbi_lcm_drv;
extern LCM_DRIVER ek79007_wsvgalnl_dsi_vdo_lcm_drv;
extern LCM_DRIVER cm_n070ice_dsi_vdo_mt8173_lcm_drv;
extern LCM_DRIVER nt35595_fhd_dsi_cmd_truly_nt50358_extern_lcm_drv;
extern LCM_DRIVER r69429_wqxga_dsi_vdo_lcm_drv;
extern LCM_DRIVER hx8394c_wxga_dsi_vdo_lcm_drv;
extern LCM_DRIVER nt35595_truly_fhd_dsi_vdo_lcm_drv;
extern LCM_DRIVER b080uan01_2_wuxga_dsi_vdo_lcm_drv;
extern LCM_DRIVER rm68200_auo55_ykl_hd_lcm_drv;
extern LCM_DRIVER rm68200_boe50_jsj_hd_lcm_drv;
extern LCM_DRIVER rm68200_ctc50_jsj_hd_lcm_drv;
extern LCM_DRIVER rm68200_cpt50_blj_hd_lcm_drv;
extern LCM_DRIVER fl10802_ivo50_huayu_fwvga_lcm_drv;
extern LCM_DRIVER otm1283a_cmi50_tps65132_hd_lcm_drv;
extern LCM_DRIVER otm1285a_boe50_ykl_hd_lcm_drv;
extern LCM_DRIVER otm1289a_hsd50_ykl_hd_lcm_drv;
extern LCM_DRIVER otm1285a_boe50_hlt_hd_lcm_drv;
extern LCM_DRIVER otm1285a_boe50_ruili_hd_lcm_drv;
extern LCM_DRIVER fl1280_tm50_zgd_hd_lcm_drv;
extern LCM_DRIVER fl11281_boe50_gongtai_hd_lcm_drv;
extern LCM_DRIVER otm1285a_boe55_ykl_hd_lcm_drv;
extern LCM_DRIVER rm68191_tm45_linglong_qhd_lcm_drv;
extern LCM_DRIVER jd9161_hsd50_hlt_fwvga_lcm_drv;
extern LCM_DRIVER jd9161_hsd50_tn_fwvga_lcm_drv;
extern LCM_DRIVER jd9161_ivo50_tn_fwvga_lcm_drv;
extern LCM_DRIVER ili9806e_boe397_jingtai_wvga_lcm_drv;
extern LCM_DRIVER jd9161_ctc397_hlt_wvga_lcm_drv;
extern LCM_DRIVER jd9161_ctc397_hxh_wvga_lcm_drv;
extern LCM_DRIVER jd9161_hsd50_hlt_fwvga_adc_lcm_drv;
extern LCM_DRIVER jd9161_cmi50_gongtai_fwvga_lcm_drv;
extern LCM_DRIVER hx8394f_cog50_tcl_hd_lcm_drv;
extern LCM_DRIVER hx8394a01_ctc60_shenchao_hd_lcm_drv;
extern LCM_DRIVER hx8394f_hsd50_lide_hd_lcm_drv;
extern LCM_DRIVER hx8394d_hsd50_lide_hd_lcm_drv;
extern LCM_DRIVER hx8392b_boe50_hlt_hd_lcm_drv;
extern LCM_DRIVER ili9806e_hsd50_txd_fwvga_lcm_drv;
extern LCM_DRIVER ili9806e_ivo50_hongzhan_fwvga_lcm_drv;
extern LCM_DRIVER ili9806e_cpt50_txd_fwvga_adc_lcm_drv;
extern LCM_DRIVER st7701_hsd50_jumei_fwvga_lcm_drv;
extern LCM_DRIVER st7701_ctc397_haifei_wvga_lcm_drv;
extern LCM_DRIVER ili9881c_cmi55_ykl_hd_lcm_drv;
extern LCM_DRIVER rm68200_cmi50_ykl_hd_lcm_drv;
extern LCM_DRIVER rm68200_cmi55_jsj_hd_lcm_drv;
extern LCM_DRIVER rm68200_auo50_ykl_hd_lcm_drv;
extern LCM_DRIVER sh1386_hehui55_linglong_hd_lcm_drv;
extern LCM_DRIVER ili9881c_cpt55_fengcai_hd_lcm_drv;
extern LCM_DRIVER ili9881c_auo50_hongxian_hd_lcm_drv;
extern LCM_DRIVER ili9881c_hsd50_fengcai_hd_lcm_drv;
extern LCM_DRIVER rm68172_ivo50_qicai2_fwvga_lcm_drv;
extern LCM_DRIVER jd9161_ivo50_tyf_fwvga_lcm_drv;
extern LCM_DRIVER jd9161_ivo50_zgd_fwvga_lcm_drv;
extern LCM_DRIVER jd9161_tn50_zgd_fwvga_lcm_drv;
extern LCM_DRIVER jd9365_ivo50_zgd_hd_lcm_drv;
extern LCM_DRIVER nt35596_jdi60_rx_hd_lcm_drv;
extern LCM_DRIVER r63350_jdi60_ykl_hd_lcm_drv;
extern LCM_DRIVER r61318_tm55_wsc_hd_lcm_drv;
extern LCM_DRIVER nt35521_tm55_wsc_hd_lcm_drv;
extern LCM_DRIVER nt35521_boe50_huaxian_hd_lcm_drv;
extern LCM_DRIVER nt35521_cmi55_rixin_hd_lcm_drv;
extern LCM_DRIVER nt35521_boe50_xld_hd_lcm_drv;
extern LCM_DRIVER jd9365_inx50_jmg_hd_lcm_drv;
extern LCM_DRIVER hx8394d_cmi50_blj_hd_lcm_drv;
extern LCM_DRIVER otm8019a_cpt50_hlt_fwvga_lcm_drv;
extern LCM_DRIVER nt35532_sharp55_huayi_fhd_lcm_drv;
extern LCM_DRIVER s6d7aa0_boe50_samsung_hd_lcm_drv;
extern LCM_DRIVER s6d7aa0_qijing50_jdf_hd_lcm_drv;
extern LCM_DRIVER jd9161_ivo50_hongzhan_fwvga_lcm_drv;
extern LCM_DRIVER rm69052_auo50_dws_hd_lcm_drv;
extern LCM_DRIVER rm67120_gvo55_ruiding_hd_lcm_drv;
extern LCM_DRIVER rm69071_auo50_dws_hd_lcm_drv;
extern LCM_DRIVER rm68200_tm50_xld_hd_lcm_drv;
extern LCM_DRIVER jd9365_cpt55_shengshi_hd_lcm_drv;
extern LCM_DRIVER st7701_boe397_tn_wvga_lcm_drv;
#endif

#ifdef BUILD_LK
extern void mdelay(unsigned long msec);
#endif

#endif
