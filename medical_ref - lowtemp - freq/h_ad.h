#ifndef _AD_H_
#define _AD_H_
//------------------------------------------------------------------------------
//外部函数声明
extern void ad_val_deal(void);     //ad值处理程序，在AD转换程序中调用

extern void ad_temp_calc(void);    //ad温度计算程序，在主循环程序中调用

//------------------------------------------------------------------------------
//外部变量声明
extern flag_type flg_adc;
          
          #define   bflg_allow_ad_calc   flg_adc.bits.bit0   //ad转换ok标志
          
          
          
          
          
          #define   bflg_Tbat1_fault     flg_adc.bits.bit6   //电池1温度传感器故障标志
          #define   bflg_Tbat2_fault     flg_adc.bits.bit7   //电池2温度传感器故障标志
          
          #define   bflg_ad_calc_ok      flg_adc.bits.bit8   //ad计算完成标志


//------------------------------------------------------------------------------
extern uint16_t  gus_ad_val;

extern uint16_t  gus_ad_buffer[12];
extern uint16_t  gus_ad_aver_buffer[12];

extern uint8_t   guc_ad_index;

extern int16_t   gss_TA;      //主传感器
extern int16_t   gss_THW;     //环温传感器
extern int16_t   gss_TC;      //冷凝器温度传感器
extern int16_t   gss_TE;      //热交换器温度传感器
//血液柜使用
extern int16_t   gss_TU;   //上温传感器
extern int16_t   gss_TD;   //下温传感器

extern int16_t   gss_VAC;     //电源电压
extern uint8_t   guc_12V;     //12V电压

extern int16_t   gss_Tbat1;   //锂电池温度1
extern int16_t   gss_Tbat2;   //锂电池温度2

extern uint8_t   guc_bat_Vin; //电池充电电压
extern uint8_t   guc_bat_Vout;//电池放电电压
extern uint8_t   guc_bat_Vout_instant;  //电池放电电压瞬时值
extern int16_t   gss_bat_I;   //电池充电电流

extern int16_t   gss_adg_Temp[10];
extern int16_t   gss_adg_Temp2;

extern uint8_t   guc_ad_calc_cnt;

//------------------------------------------------------------------------------
#endif
