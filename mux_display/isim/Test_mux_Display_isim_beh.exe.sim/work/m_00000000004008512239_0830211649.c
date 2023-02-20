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
static const char *ng0 = "D:/Documentos/Proyectos_Digitales/mux_display/mux_Display.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {8U, 0U};



static void Always_24_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    int t31;

LAB0:    t1 = (t0 + 4032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 4352);
    *((int *)t2) = 1;
    t3 = (t0 + 4064);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(25, ng0);
    t5 = (t0 + 2392U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t5) == 0)
        goto LAB5;

LAB7:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB8:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB10;

LAB9:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB15:    t6 = ((char*)((ng1)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 2, t6, 2);
    if (t31 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng2)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t31 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng3)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t31 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng4)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t31 == 1)
        goto LAB22;

LAB23:
LAB24:
LAB13:    goto LAB2;

LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB10:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB9;

LAB11:    xsi_set_current_line(25, ng0);

LAB14:    xsi_set_current_line(26, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 2, 0LL);
    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1592U);
    t3 = *((char **)t2);
    t2 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 7, 0LL);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB13;

LAB16:    xsi_set_current_line(32, ng0);

LAB25:    xsi_set_current_line(33, ng0);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 2, 0LL);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1592U);
    t3 = *((char **)t2);
    t2 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 7, 0LL);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB24;

LAB18:    xsi_set_current_line(37, ng0);

LAB26:    xsi_set_current_line(38, ng0);
    t3 = ((char*)((ng3)));
    t6 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1752U);
    t3 = *((char **)t2);
    t2 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 7, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB24;

LAB20:    xsi_set_current_line(42, ng0);

LAB27:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng4)));
    t6 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 7, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB24;

LAB22:    xsi_set_current_line(47, ng0);

LAB28:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng1)));
    t6 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2072U);
    t3 = *((char **)t2);
    t2 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 7, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB24;

}


extern void work_m_00000000004008512239_0830211649_init()
{
	static char *pe[] = {(void *)Always_24_0};
	xsi_register_didat("work_m_00000000004008512239_0830211649", "isim/Test_mux_Display_isim_beh.exe.sim/work/m_00000000004008512239_0830211649.didat");
	xsi_register_executes(pe);
}
