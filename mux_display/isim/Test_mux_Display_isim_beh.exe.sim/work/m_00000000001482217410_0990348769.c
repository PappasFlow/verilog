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
static const char *ng0 = "D:/Documentos/Proyectos_Digitales/mux_display/Test_mux_Display.v";
static unsigned int ng1[] = {120U, 0U};
static unsigned int ng2[] = {15U, 0U};
static unsigned int ng3[] = {28U, 0U};
static unsigned int ng4[] = {99U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {0U, 0U};
static unsigned int ng7[] = {1U, 0U};



static void Initial_51_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(51, ng0);

LAB2:    xsi_set_current_line(53, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1744);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 7);
    xsi_set_current_line(54, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1904);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 7);
    xsi_set_current_line(55, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2064);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 7);
    xsi_set_current_line(56, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2224);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 7);
    xsi_set_current_line(57, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 2544);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_63_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 3712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);

LAB4:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3520);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2384);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3520);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    goto LAB2;

}


extern void work_m_00000000001482217410_0990348769_init()
{
	static char *pe[] = {(void *)Initial_51_0,(void *)Always_63_1};
	xsi_register_didat("work_m_00000000001482217410_0990348769", "isim/Test_mux_Display_isim_beh.exe.sim/work/m_00000000001482217410_0990348769.didat");
	xsi_register_executes(pe);
}
