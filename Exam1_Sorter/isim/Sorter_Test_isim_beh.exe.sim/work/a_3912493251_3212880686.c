/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/ProySisDigAva/Exam1_Sorter/Sorter.vhd";
extern char *IEEE_P_2592010699;



static void work_a_3912493251_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(44, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t3 = (t0 + 3872);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(45, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t3 = (t0 + 3936);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(46, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t3 = (t0 + 4000);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t1 = ((IEEE_P_2592010699) + 4024);
    t9 = xsi_vhdl_greaterEqual(t1, t2, 8U, t3, 8U);
    if (t9 == 1)
        goto LAB5;

LAB6:    t8 = (unsigned char)0;

LAB7:    if (t8 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t1 = ((IEEE_P_2592010699) + 4024);
    t9 = xsi_vhdl_greaterEqual(t1, t2, 8U, t3, 8U);
    if (t9 == 1)
        goto LAB15;

LAB16:    t8 = (unsigned char)0;

LAB17:    if (t8 != 0)
        goto LAB13;

LAB14:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = ((IEEE_P_2592010699) + 4024);
    t9 = xsi_vhdl_greaterEqual(t1, t2, 8U, t3, 8U);
    if (t9 == 1)
        goto LAB25;

LAB26:    t8 = (unsigned char)0;

LAB27:    if (t8 != 0)
        goto LAB23;

LAB24:
LAB3:    t1 = (t0 + 3792);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(49, ng0);
    t7 = (t0 + 1032U);
    t11 = *((char **)t7);
    t7 = (t0 + 3872);
    t12 = (t7 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 8U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t1 = ((IEEE_P_2592010699) + 4024);
    t8 = xsi_vhdl_greaterEqual(t1, t2, 8U, t3, 8U);
    if (t8 != 0)
        goto LAB8;

LAB10:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = ((IEEE_P_2592010699) + 4024);
    t8 = xsi_vhdl_greaterEqual(t1, t2, 8U, t3, 8U);
    if (t8 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t4 = ((IEEE_P_2592010699) + 4024);
    t10 = xsi_vhdl_greaterEqual(t4, t5, 8U, t6, 8U);
    t8 = t10;
    goto LAB7;

LAB8:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t4 = (t0 + 4000);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t5, 8U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 3936);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB9;

LAB11:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t4 = (t0 + 4000);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t5, 8U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 3936);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB9;

LAB13:    xsi_set_current_line(59, ng0);
    t7 = (t0 + 1192U);
    t11 = *((char **)t7);
    t7 = (t0 + 3872);
    t12 = (t7 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 8U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t1 = ((IEEE_P_2592010699) + 4024);
    t8 = xsi_vhdl_greaterEqual(t1, t2, 8U, t3, 8U);
    if (t8 != 0)
        goto LAB18;

LAB20:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t1 = ((IEEE_P_2592010699) + 4024);
    t8 = xsi_vhdl_greaterEqual(t1, t2, 8U, t3, 8U);
    if (t8 != 0)
        goto LAB21;

LAB22:
LAB19:    goto LAB3;

LAB15:    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t4 = (t0 + 1032U);
    t6 = *((char **)t4);
    t4 = ((IEEE_P_2592010699) + 4024);
    t10 = xsi_vhdl_greaterEqual(t4, t5, 8U, t6, 8U);
    t8 = t10;
    goto LAB17;

LAB18:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t4 = (t0 + 4000);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t5, 8U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 3936);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB19;

LAB21:    xsi_set_current_line(64, ng0);
    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t4 = (t0 + 4000);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t5, 8U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 3936);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB19;

LAB23:    xsi_set_current_line(69, ng0);
    t7 = (t0 + 1352U);
    t11 = *((char **)t7);
    t7 = (t0 + 3872);
    t12 = (t7 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 8U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = ((IEEE_P_2592010699) + 4024);
    t8 = xsi_vhdl_greaterEqual(t1, t2, 8U, t3, 8U);
    if (t8 != 0)
        goto LAB28;

LAB30:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t1 = ((IEEE_P_2592010699) + 4024);
    t8 = xsi_vhdl_greaterEqual(t1, t2, 8U, t3, 8U);
    if (t8 != 0)
        goto LAB31;

LAB32:
LAB29:    goto LAB3;

LAB25:    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t4 = (t0 + 1032U);
    t6 = *((char **)t4);
    t4 = ((IEEE_P_2592010699) + 4024);
    t10 = xsi_vhdl_greaterEqual(t4, t5, 8U, t6, 8U);
    t8 = t10;
    goto LAB27;

LAB28:    xsi_set_current_line(71, ng0);
    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t4 = (t0 + 4000);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t5, 8U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 3936);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB29;

LAB31:    xsi_set_current_line(74, ng0);
    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t4 = (t0 + 4000);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t5, 8U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 3936);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB29;

}


extern void work_a_3912493251_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3912493251_3212880686_p_0};
	xsi_register_didat("work_a_3912493251_3212880686", "isim/Sorter_Test_isim_beh.exe.sim/work/a_3912493251_3212880686.didat");
	xsi_register_executes(pe);
}
