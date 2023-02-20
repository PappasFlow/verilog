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
static const char *ng0 = "D:/Documentos/Proyectos_Digitales/Elevador3pisos/Tes_divisor_frc.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};



static void Initial_23_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 2664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);

LAB4:    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(26, ng0);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB1;

}

static void Always_34_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 2912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);

LAB4:    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2720);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(36, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2720);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    goto LAB2;

}


extern void work_m_00000000002076313413_0563542550_init()
{
	static char *pe[] = {(void *)Initial_23_0,(void *)Always_34_1};
	xsi_register_didat("work_m_00000000002076313413_0563542550", "isim/Tes_divisor_frc_isim_beh.exe.sim/work/m_00000000002076313413_0563542550.didat");
	xsi_register_executes(pe);
}
