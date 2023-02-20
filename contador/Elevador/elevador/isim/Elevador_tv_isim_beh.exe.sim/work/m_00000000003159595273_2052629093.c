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
static const char *ng0 = "D:/Documentos/Proyectos_Digitales/contador/Elevador/elevador/Elevador_vm.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {2U, 0U};



static void Always_39_0(char *t0)
{
    char t14[8];
    char t27[8];
    char t67[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;

LAB0:    t1 = (t0 + 4032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 4352);
    *((int *)t2) = 1;
    t3 = (t0 + 4064);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 2392U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB9:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t13 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB16;

LAB17:
LAB18:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(40, ng0);

LAB8:    xsi_set_current_line(41, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB7;

LAB10:    xsi_set_current_line(47, ng0);

LAB19:    xsi_set_current_line(48, ng0);
    t11 = (t0 + 1592U);
    t12 = *((char **)t11);
    t11 = (t0 + 1752U);
    t15 = *((char **)t11);
    memset(t14, 0, 8);
    t11 = (t15 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t15);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB23;

LAB21:    if (*((unsigned int *)t11) == 0)
        goto LAB20;

LAB22:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;

LAB23:    t17 = (t14 + 4);
    t18 = (t15 + 4);
    t19 = *((unsigned int *)t15);
    t20 = (~(t19));
    *((unsigned int *)t14) = t20;
    *((unsigned int *)t17) = 0;
    if (*((unsigned int *)t18) != 0)
        goto LAB25;

LAB24:    t25 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t25 & 1U);
    t26 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t26 & 1U);
    t28 = *((unsigned int *)t12);
    t29 = *((unsigned int *)t14);
    t30 = (t28 & t29);
    *((unsigned int *)t27) = t30;
    t31 = (t12 + 4);
    t32 = (t14 + 4);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB26;

LAB27:
LAB28:    t59 = (t27 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t27);
    t63 = (t62 & t61);
    t64 = (t63 != 0);
    if (t64 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB35;

LAB33:    if (*((unsigned int *)t2) == 0)
        goto LAB32;

LAB34:    t5 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t5) = 1;

LAB35:    t11 = (t14 + 4);
    t12 = (t3 + 4);
    t19 = *((unsigned int *)t3);
    t20 = (~(t19));
    *((unsigned int *)t14) = t20;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB37;

LAB36:    t25 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t25 & 1U);
    t26 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t26 & 1U);
    t15 = (t0 + 2072U);
    t16 = *((char **)t15);
    memset(t27, 0, 8);
    t15 = (t16 + 4);
    t28 = *((unsigned int *)t15);
    t29 = (~(t28));
    t30 = *((unsigned int *)t16);
    t34 = (t30 & t29);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB41;

LAB39:    if (*((unsigned int *)t15) == 0)
        goto LAB38;

LAB40:    t17 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t17) = 1;

LAB41:    t18 = (t27 + 4);
    t31 = (t16 + 4);
    t36 = *((unsigned int *)t16);
    t37 = (~(t36));
    *((unsigned int *)t27) = t37;
    *((unsigned int *)t18) = 0;
    if (*((unsigned int *)t31) != 0)
        goto LAB43;

LAB42:    t44 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t44 & 1U);
    t45 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t45 & 1U);
    t46 = *((unsigned int *)t14);
    t47 = *((unsigned int *)t27);
    t48 = (t46 & t47);
    *((unsigned int *)t67) = t48;
    t32 = (t14 + 4);
    t33 = (t27 + 4);
    t41 = (t67 + 4);
    t49 = *((unsigned int *)t32);
    t50 = *((unsigned int *)t33);
    t53 = (t49 | t50);
    *((unsigned int *)t41) = t53;
    t54 = *((unsigned int *)t41);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB44;

LAB45:
LAB46:    t65 = (t67 + 4);
    t76 = *((unsigned int *)t65);
    t77 = (~(t76));
    t78 = *((unsigned int *)t67);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB49:
LAB31:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB18;

LAB12:    xsi_set_current_line(57, ng0);

LAB50:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1912U);
    t5 = *((char **)t3);
    t3 = (t0 + 2072U);
    t11 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t11 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB54;

LAB52:    if (*((unsigned int *)t3) == 0)
        goto LAB51;

LAB53:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;

LAB54:    t15 = (t14 + 4);
    t16 = (t11 + 4);
    t19 = *((unsigned int *)t11);
    t20 = (~(t19));
    *((unsigned int *)t14) = t20;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB56;

LAB55:    t25 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t25 & 1U);
    t26 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t26 & 1U);
    t28 = *((unsigned int *)t5);
    t29 = *((unsigned int *)t14);
    t30 = (t28 & t29);
    *((unsigned int *)t27) = t30;
    t17 = (t5 + 4);
    t18 = (t14 + 4);
    t31 = (t27 + 4);
    t34 = *((unsigned int *)t17);
    t35 = *((unsigned int *)t18);
    t36 = (t34 | t35);
    *((unsigned int *)t31) = t36;
    t37 = *((unsigned int *)t31);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB57;

LAB58:
LAB59:    t41 = (t27 + 4);
    t60 = *((unsigned int *)t41);
    t61 = (~(t60));
    t62 = *((unsigned int *)t27);
    t63 = (t62 & t61);
    t64 = (t63 != 0);
    if (t64 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB62:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB18;

LAB14:    xsi_set_current_line(67, ng0);

LAB63:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 1592U);
    t5 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB67;

LAB65:    if (*((unsigned int *)t3) == 0)
        goto LAB64;

LAB66:    t11 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t11) = 1;

LAB67:    t12 = (t14 + 4);
    t15 = (t5 + 4);
    t19 = *((unsigned int *)t5);
    t20 = (~(t19));
    *((unsigned int *)t14) = t20;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB69;

LAB68:    t25 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t25 & 1U);
    t26 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t26 & 1U);
    t16 = (t0 + 1752U);
    t17 = *((char **)t16);
    t28 = *((unsigned int *)t14);
    t29 = *((unsigned int *)t17);
    t30 = (t28 & t29);
    *((unsigned int *)t27) = t30;
    t16 = (t14 + 4);
    t18 = (t17 + 4);
    t31 = (t27 + 4);
    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t18);
    t36 = (t34 | t35);
    *((unsigned int *)t31) = t36;
    t37 = *((unsigned int *)t31);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB70;

LAB71:
LAB72:    t41 = (t27 + 4);
    t60 = *((unsigned int *)t41);
    t61 = (~(t60));
    t62 = *((unsigned int *)t27);
    t63 = (t62 & t61);
    t64 = (t63 != 0);
    if (t64 > 0)
        goto LAB73;

LAB74:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB75:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB18;

LAB16:    xsi_set_current_line(77, ng0);

LAB76:    xsi_set_current_line(78, ng0);
    t3 = (t0 + 1912U);
    t5 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB80;

LAB78:    if (*((unsigned int *)t3) == 0)
        goto LAB77;

LAB79:    t11 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t11) = 1;

LAB80:    t12 = (t14 + 4);
    t15 = (t5 + 4);
    t19 = *((unsigned int *)t5);
    t20 = (~(t19));
    *((unsigned int *)t14) = t20;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB82;

LAB81:    t25 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t25 & 1U);
    t26 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t26 & 1U);
    t16 = (t0 + 2072U);
    t17 = *((char **)t16);
    t28 = *((unsigned int *)t14);
    t29 = *((unsigned int *)t17);
    t30 = (t28 & t29);
    *((unsigned int *)t27) = t30;
    t16 = (t14 + 4);
    t18 = (t17 + 4);
    t31 = (t27 + 4);
    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t18);
    t36 = (t34 | t35);
    *((unsigned int *)t31) = t36;
    t37 = *((unsigned int *)t31);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB83;

LAB84:
LAB85:    t41 = (t27 + 4);
    t60 = *((unsigned int *)t41);
    t61 = (~(t60));
    t62 = *((unsigned int *)t27);
    t63 = (t62 & t61);
    t64 = (t63 != 0);
    if (t64 > 0)
        goto LAB86;

LAB87:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB88:    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB18;

LAB20:    *((unsigned int *)t14) = 1;
    goto LAB23;

LAB25:    t21 = *((unsigned int *)t14);
    t22 = *((unsigned int *)t18);
    *((unsigned int *)t14) = (t21 | t22);
    t23 = *((unsigned int *)t17);
    t24 = *((unsigned int *)t18);
    *((unsigned int *)t17) = (t23 | t24);
    goto LAB24;

LAB26:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t39 | t40);
    t41 = (t12 + 4);
    t42 = (t14 + 4);
    t43 = *((unsigned int *)t12);
    t44 = (~(t43));
    t45 = *((unsigned int *)t41);
    t46 = (~(t45));
    t47 = *((unsigned int *)t14);
    t48 = (~(t47));
    t49 = *((unsigned int *)t42);
    t50 = (~(t49));
    t51 = (t44 & t46);
    t52 = (t48 & t50);
    t53 = (~(t51));
    t54 = (~(t52));
    t55 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t55 & t53);
    t56 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t56 & t54);
    t57 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t57 & t53);
    t58 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t58 & t54);
    goto LAB28;

LAB29:    xsi_set_current_line(49, ng0);
    t65 = ((char*)((ng2)));
    t66 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t66, t65, 0, 0, 2, 0LL);
    goto LAB31;

LAB32:    *((unsigned int *)t14) = 1;
    goto LAB35;

LAB37:    t21 = *((unsigned int *)t14);
    t22 = *((unsigned int *)t12);
    *((unsigned int *)t14) = (t21 | t22);
    t23 = *((unsigned int *)t11);
    t24 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t23 | t24);
    goto LAB36;

LAB38:    *((unsigned int *)t27) = 1;
    goto LAB41;

LAB43:    t38 = *((unsigned int *)t27);
    t39 = *((unsigned int *)t31);
    *((unsigned int *)t27) = (t38 | t39);
    t40 = *((unsigned int *)t18);
    t43 = *((unsigned int *)t31);
    *((unsigned int *)t18) = (t40 | t43);
    goto LAB42;

LAB44:    t56 = *((unsigned int *)t67);
    t57 = *((unsigned int *)t41);
    *((unsigned int *)t67) = (t56 | t57);
    t42 = (t14 + 4);
    t59 = (t27 + 4);
    t58 = *((unsigned int *)t14);
    t60 = (~(t58));
    t61 = *((unsigned int *)t42);
    t62 = (~(t61));
    t63 = *((unsigned int *)t27);
    t64 = (~(t63));
    t68 = *((unsigned int *)t59);
    t69 = (~(t68));
    t13 = (t60 & t62);
    t51 = (t64 & t69);
    t70 = (~(t13));
    t71 = (~(t51));
    t72 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t72 & t70);
    t73 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t73 & t71);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t74 & t70);
    t75 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t75 & t71);
    goto LAB46;

LAB47:    xsi_set_current_line(51, ng0);
    t66 = ((char*)((ng3)));
    t81 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t81, t66, 0, 0, 2, 0LL);
    goto LAB49;

LAB51:    *((unsigned int *)t14) = 1;
    goto LAB54;

LAB56:    t21 = *((unsigned int *)t14);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t14) = (t21 | t22);
    t23 = *((unsigned int *)t15);
    t24 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t23 | t24);
    goto LAB55;

LAB57:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t31);
    *((unsigned int *)t27) = (t39 | t40);
    t32 = (t5 + 4);
    t33 = (t14 + 4);
    t43 = *((unsigned int *)t5);
    t44 = (~(t43));
    t45 = *((unsigned int *)t32);
    t46 = (~(t45));
    t47 = *((unsigned int *)t14);
    t48 = (~(t47));
    t49 = *((unsigned int *)t33);
    t50 = (~(t49));
    t51 = (t44 & t46);
    t52 = (t48 & t50);
    t53 = (~(t51));
    t54 = (~(t52));
    t55 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t55 & t53);
    t56 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t56 & t54);
    t57 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t57 & t53);
    t58 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t58 & t54);
    goto LAB59;

LAB60:    xsi_set_current_line(59, ng0);
    t42 = ((char*)((ng4)));
    t59 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t59, t42, 0, 0, 2, 0LL);
    goto LAB62;

LAB64:    *((unsigned int *)t14) = 1;
    goto LAB67;

LAB69:    t21 = *((unsigned int *)t14);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t21 | t22);
    t23 = *((unsigned int *)t12);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t12) = (t23 | t24);
    goto LAB68;

LAB70:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t31);
    *((unsigned int *)t27) = (t39 | t40);
    t32 = (t14 + 4);
    t33 = (t17 + 4);
    t43 = *((unsigned int *)t14);
    t44 = (~(t43));
    t45 = *((unsigned int *)t32);
    t46 = (~(t45));
    t47 = *((unsigned int *)t17);
    t48 = (~(t47));
    t49 = *((unsigned int *)t33);
    t50 = (~(t49));
    t51 = (t44 & t46);
    t52 = (t48 & t50);
    t53 = (~(t51));
    t54 = (~(t52));
    t55 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t55 & t53);
    t56 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t56 & t54);
    t57 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t57 & t53);
    t58 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t58 & t54);
    goto LAB72;

LAB73:    xsi_set_current_line(69, ng0);
    t42 = ((char*)((ng3)));
    t59 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t59, t42, 0, 0, 2, 0LL);
    goto LAB75;

LAB77:    *((unsigned int *)t14) = 1;
    goto LAB80;

LAB82:    t21 = *((unsigned int *)t14);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t21 | t22);
    t23 = *((unsigned int *)t12);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t12) = (t23 | t24);
    goto LAB81;

LAB83:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t31);
    *((unsigned int *)t27) = (t39 | t40);
    t32 = (t14 + 4);
    t33 = (t17 + 4);
    t43 = *((unsigned int *)t14);
    t44 = (~(t43));
    t45 = *((unsigned int *)t32);
    t46 = (~(t45));
    t47 = *((unsigned int *)t17);
    t48 = (~(t47));
    t49 = *((unsigned int *)t33);
    t50 = (~(t49));
    t51 = (t44 & t46);
    t52 = (t48 & t50);
    t53 = (~(t51));
    t54 = (~(t52));
    t55 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t55 & t53);
    t56 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t56 & t54);
    t57 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t57 & t53);
    t58 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t58 & t54);
    goto LAB85;

LAB86:    xsi_set_current_line(79, ng0);
    t42 = ((char*)((ng1)));
    t59 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t59, t42, 0, 0, 2, 0LL);
    goto LAB88;

}


extern void work_m_00000000003159595273_2052629093_init()
{
	static char *pe[] = {(void *)Always_39_0};
	xsi_register_didat("work_m_00000000003159595273_2052629093", "isim/Elevador_tv_isim_beh.exe.sim/work/m_00000000003159595273_2052629093.didat");
	xsi_register_executes(pe);
}
