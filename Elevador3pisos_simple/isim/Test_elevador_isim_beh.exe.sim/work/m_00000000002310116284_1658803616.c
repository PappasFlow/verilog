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
static const char *ng0 = "D:/Documentos/Proyectos_Digitales/Elevador3pisos_simple/Elevador_3pisos.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {48U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {99U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {6U, 0U};
static unsigned int ng11[] = {109U, 0U};
static unsigned int ng12[] = {4U, 0U};
static unsigned int ng13[] = {5U, 0U};
static unsigned int ng14[] = {121U, 0U};
static unsigned int ng15[] = {29U, 0U};



static void Always_32_0(char *t0)
{
    char t14[8];
    char t27[8];
    char t43[8];
    char t77[8];
    char t93[8];
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
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    int t117;
    int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    char *t132;

LAB0:    t1 = (t0 + 5056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 5376);
    *((int *)t2) = 1;
    t3 = (t0 + 5088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 3096U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 4136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB9:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t13 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng12)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng13)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB24;

LAB25:
LAB26:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(33, ng0);

LAB8:    xsi_set_current_line(34, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    goto LAB7;

LAB10:    xsi_set_current_line(41, ng0);

LAB27:    xsi_set_current_line(42, ng0);
    t11 = (t0 + 2136U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t15 = (t12 + 4);
    t16 = (t11 + 4);
    t6 = *((unsigned int *)t12);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t15);
    t10 = *((unsigned int *)t16);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t15);
    t20 = *((unsigned int *)t16);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB31;

LAB28:    if (t21 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t14) = 1;

LAB31:    t25 = (t0 + 2296U);
    t26 = *((char **)t25);
    t25 = ((char*)((ng4)));
    memset(t27, 0, 8);
    t28 = (t26 + 4);
    t29 = (t25 + 4);
    t30 = *((unsigned int *)t26);
    t31 = *((unsigned int *)t25);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t28);
    t34 = *((unsigned int *)t29);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t28);
    t38 = *((unsigned int *)t29);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB35;

LAB32:    if (t39 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t27) = 1;

LAB35:    t44 = *((unsigned int *)t14);
    t45 = *((unsigned int *)t27);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t47 = (t14 + 4);
    t48 = (t27 + 4);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t47);
    t51 = *((unsigned int *)t48);
    t52 = (t50 | t51);
    *((unsigned int *)t49) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB36;

LAB37:
LAB38:    t75 = (t0 + 2456U);
    t76 = *((char **)t75);
    t75 = ((char*)((ng3)));
    memset(t77, 0, 8);
    t78 = (t76 + 4);
    t79 = (t75 + 4);
    t80 = *((unsigned int *)t76);
    t81 = *((unsigned int *)t75);
    t82 = (t80 ^ t81);
    t83 = *((unsigned int *)t78);
    t84 = *((unsigned int *)t79);
    t85 = (t83 ^ t84);
    t86 = (t82 | t85);
    t87 = *((unsigned int *)t78);
    t88 = *((unsigned int *)t79);
    t89 = (t87 | t88);
    t90 = (~(t89));
    t91 = (t86 & t90);
    if (t91 != 0)
        goto LAB42;

LAB39:    if (t89 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t77) = 1;

LAB42:    t94 = *((unsigned int *)t43);
    t95 = *((unsigned int *)t77);
    t96 = (t94 & t95);
    *((unsigned int *)t93) = t96;
    t97 = (t43 + 4);
    t98 = (t77 + 4);
    t99 = (t93 + 4);
    t100 = *((unsigned int *)t97);
    t101 = *((unsigned int *)t98);
    t102 = (t100 | t101);
    *((unsigned int *)t99) = t102;
    t103 = *((unsigned int *)t99);
    t104 = (t103 != 0);
    if (t104 == 1)
        goto LAB43;

LAB44:
LAB45:    t125 = (t93 + 4);
    t126 = *((unsigned int *)t125);
    t127 = (~(t126));
    t128 = *((unsigned int *)t93);
    t129 = (t128 & t127);
    t130 = (t129 != 0);
    if (t130 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2136U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB52;

LAB49:    if (t21 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t14) = 1;

LAB52:    t15 = (t0 + 2296U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng3)));
    memset(t27, 0, 8);
    t24 = (t16 + 4);
    t25 = (t15 + 4);
    t30 = *((unsigned int *)t16);
    t31 = *((unsigned int *)t15);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t25);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t24);
    t38 = *((unsigned int *)t25);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB56;

LAB53:    if (t39 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t27) = 1;

LAB56:    t44 = *((unsigned int *)t14);
    t45 = *((unsigned int *)t27);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t28 = (t14 + 4);
    t29 = (t27 + 4);
    t42 = (t43 + 4);
    t50 = *((unsigned int *)t28);
    t51 = *((unsigned int *)t29);
    t52 = (t50 | t51);
    *((unsigned int *)t42) = t52;
    t53 = *((unsigned int *)t42);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB57;

LAB58:
LAB59:    t49 = (t0 + 2456U);
    t57 = *((char **)t49);
    t49 = ((char*)((ng4)));
    memset(t77, 0, 8);
    t58 = (t57 + 4);
    t75 = (t49 + 4);
    t80 = *((unsigned int *)t57);
    t81 = *((unsigned int *)t49);
    t82 = (t80 ^ t81);
    t83 = *((unsigned int *)t58);
    t84 = *((unsigned int *)t75);
    t85 = (t83 ^ t84);
    t86 = (t82 | t85);
    t87 = *((unsigned int *)t58);
    t88 = *((unsigned int *)t75);
    t89 = (t87 | t88);
    t90 = (~(t89));
    t91 = (t86 & t90);
    if (t91 != 0)
        goto LAB63;

LAB60:    if (t89 != 0)
        goto LAB62;

LAB61:    *((unsigned int *)t77) = 1;

LAB63:    t94 = *((unsigned int *)t43);
    t95 = *((unsigned int *)t77);
    t96 = (t94 & t95);
    *((unsigned int *)t93) = t96;
    t78 = (t43 + 4);
    t79 = (t77 + 4);
    t92 = (t93 + 4);
    t100 = *((unsigned int *)t78);
    t101 = *((unsigned int *)t79);
    t102 = (t100 | t101);
    *((unsigned int *)t92) = t102;
    t103 = *((unsigned int *)t92);
    t104 = (t103 != 0);
    if (t104 == 1)
        goto LAB64;

LAB65:
LAB66:    t99 = (t93 + 4);
    t126 = *((unsigned int *)t99);
    t127 = (~(t126));
    t128 = *((unsigned int *)t93);
    t129 = (t128 & t127);
    t130 = (t129 != 0);
    if (t130 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB69:
LAB48:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    goto LAB26;

LAB12:    xsi_set_current_line(53, ng0);

LAB70:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 2776U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB74;

LAB71:    if (t21 != 0)
        goto LAB73;

LAB72:    *((unsigned int *)t14) = 1;

LAB74:    t16 = (t14 + 4);
    t30 = *((unsigned int *)t16);
    t31 = (~(t30));
    t32 = *((unsigned int *)t14);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB77:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    goto LAB26;

LAB14:    xsi_set_current_line(62, ng0);

LAB78:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 2136U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB82;

LAB79:    if (t21 != 0)
        goto LAB81;

LAB80:    *((unsigned int *)t14) = 1;

LAB82:    t16 = (t0 + 2296U);
    t24 = *((char **)t16);
    t16 = ((char*)((ng3)));
    memset(t27, 0, 8);
    t25 = (t24 + 4);
    t26 = (t16 + 4);
    t30 = *((unsigned int *)t24);
    t31 = *((unsigned int *)t16);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t25);
    t34 = *((unsigned int *)t26);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t26);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB86;

LAB83:    if (t39 != 0)
        goto LAB85;

LAB84:    *((unsigned int *)t27) = 1;

LAB86:    t44 = *((unsigned int *)t14);
    t45 = *((unsigned int *)t27);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t29 = (t14 + 4);
    t42 = (t27 + 4);
    t47 = (t43 + 4);
    t50 = *((unsigned int *)t29);
    t51 = *((unsigned int *)t42);
    t52 = (t50 | t51);
    *((unsigned int *)t47) = t52;
    t53 = *((unsigned int *)t47);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB87;

LAB88:
LAB89:    t57 = (t0 + 2456U);
    t58 = *((char **)t57);
    t57 = ((char*)((ng3)));
    memset(t77, 0, 8);
    t75 = (t58 + 4);
    t76 = (t57 + 4);
    t80 = *((unsigned int *)t58);
    t81 = *((unsigned int *)t57);
    t82 = (t80 ^ t81);
    t83 = *((unsigned int *)t75);
    t84 = *((unsigned int *)t76);
    t85 = (t83 ^ t84);
    t86 = (t82 | t85);
    t87 = *((unsigned int *)t75);
    t88 = *((unsigned int *)t76);
    t89 = (t87 | t88);
    t90 = (~(t89));
    t91 = (t86 & t90);
    if (t91 != 0)
        goto LAB93;

LAB90:    if (t89 != 0)
        goto LAB92;

LAB91:    *((unsigned int *)t77) = 1;

LAB93:    t94 = *((unsigned int *)t43);
    t95 = *((unsigned int *)t77);
    t96 = (t94 & t95);
    *((unsigned int *)t93) = t96;
    t79 = (t43 + 4);
    t92 = (t77 + 4);
    t97 = (t93 + 4);
    t100 = *((unsigned int *)t79);
    t101 = *((unsigned int *)t92);
    t102 = (t100 | t101);
    *((unsigned int *)t97) = t102;
    t103 = *((unsigned int *)t97);
    t104 = (t103 != 0);
    if (t104 == 1)
        goto LAB94;

LAB95:
LAB96:    t107 = (t93 + 4);
    t126 = *((unsigned int *)t107);
    t127 = (~(t126));
    t128 = *((unsigned int *)t93);
    t129 = (t128 & t127);
    t130 = (t129 != 0);
    if (t130 > 0)
        goto LAB97;

LAB98:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2136U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB103;

LAB100:    if (t21 != 0)
        goto LAB102;

LAB101:    *((unsigned int *)t14) = 1;

LAB103:    t15 = (t0 + 2296U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng3)));
    memset(t27, 0, 8);
    t24 = (t16 + 4);
    t25 = (t15 + 4);
    t30 = *((unsigned int *)t16);
    t31 = *((unsigned int *)t15);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t25);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t24);
    t38 = *((unsigned int *)t25);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB107;

LAB104:    if (t39 != 0)
        goto LAB106;

LAB105:    *((unsigned int *)t27) = 1;

LAB107:    t44 = *((unsigned int *)t14);
    t45 = *((unsigned int *)t27);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t28 = (t14 + 4);
    t29 = (t27 + 4);
    t42 = (t43 + 4);
    t50 = *((unsigned int *)t28);
    t51 = *((unsigned int *)t29);
    t52 = (t50 | t51);
    *((unsigned int *)t42) = t52;
    t53 = *((unsigned int *)t42);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB108;

LAB109:
LAB110:    t49 = (t0 + 2456U);
    t57 = *((char **)t49);
    t49 = ((char*)((ng4)));
    memset(t77, 0, 8);
    t58 = (t57 + 4);
    t75 = (t49 + 4);
    t80 = *((unsigned int *)t57);
    t81 = *((unsigned int *)t49);
    t82 = (t80 ^ t81);
    t83 = *((unsigned int *)t58);
    t84 = *((unsigned int *)t75);
    t85 = (t83 ^ t84);
    t86 = (t82 | t85);
    t87 = *((unsigned int *)t58);
    t88 = *((unsigned int *)t75);
    t89 = (t87 | t88);
    t90 = (~(t89));
    t91 = (t86 & t90);
    if (t91 != 0)
        goto LAB114;

LAB111:    if (t89 != 0)
        goto LAB113;

LAB112:    *((unsigned int *)t77) = 1;

LAB114:    t94 = *((unsigned int *)t43);
    t95 = *((unsigned int *)t77);
    t96 = (t94 & t95);
    *((unsigned int *)t93) = t96;
    t78 = (t43 + 4);
    t79 = (t77 + 4);
    t92 = (t93 + 4);
    t100 = *((unsigned int *)t78);
    t101 = *((unsigned int *)t79);
    t102 = (t100 | t101);
    *((unsigned int *)t92) = t102;
    t103 = *((unsigned int *)t92);
    t104 = (t103 != 0);
    if (t104 == 1)
        goto LAB115;

LAB116:
LAB117:    t99 = (t93 + 4);
    t126 = *((unsigned int *)t99);
    t127 = (~(t126));
    t128 = *((unsigned int *)t93);
    t129 = (t128 & t127);
    t130 = (t129 != 0);
    if (t130 > 0)
        goto LAB118;

LAB119:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB120:
LAB99:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    goto LAB26;

LAB16:    xsi_set_current_line(73, ng0);

LAB121:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 2936U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB125;

LAB122:    if (t21 != 0)
        goto LAB124;

LAB123:    *((unsigned int *)t14) = 1;

LAB125:    t16 = (t14 + 4);
    t30 = *((unsigned int *)t16);
    t31 = (~(t30));
    t32 = *((unsigned int *)t14);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB126;

LAB127:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB128:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    goto LAB26;

LAB18:    xsi_set_current_line(82, ng0);

LAB129:    xsi_set_current_line(83, ng0);
    t3 = (t0 + 2136U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB133;

LAB130:    if (t21 != 0)
        goto LAB132;

LAB131:    *((unsigned int *)t14) = 1;

LAB133:    t16 = (t0 + 2296U);
    t24 = *((char **)t16);
    t16 = ((char*)((ng3)));
    memset(t27, 0, 8);
    t25 = (t24 + 4);
    t26 = (t16 + 4);
    t30 = *((unsigned int *)t24);
    t31 = *((unsigned int *)t16);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t25);
    t34 = *((unsigned int *)t26);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t26);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB137;

LAB134:    if (t39 != 0)
        goto LAB136;

LAB135:    *((unsigned int *)t27) = 1;

LAB137:    t44 = *((unsigned int *)t14);
    t45 = *((unsigned int *)t27);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t29 = (t14 + 4);
    t42 = (t27 + 4);
    t47 = (t43 + 4);
    t50 = *((unsigned int *)t29);
    t51 = *((unsigned int *)t42);
    t52 = (t50 | t51);
    *((unsigned int *)t47) = t52;
    t53 = *((unsigned int *)t47);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB138;

LAB139:
LAB140:    t57 = (t0 + 2456U);
    t58 = *((char **)t57);
    t57 = ((char*)((ng3)));
    memset(t77, 0, 8);
    t75 = (t58 + 4);
    t76 = (t57 + 4);
    t80 = *((unsigned int *)t58);
    t81 = *((unsigned int *)t57);
    t82 = (t80 ^ t81);
    t83 = *((unsigned int *)t75);
    t84 = *((unsigned int *)t76);
    t85 = (t83 ^ t84);
    t86 = (t82 | t85);
    t87 = *((unsigned int *)t75);
    t88 = *((unsigned int *)t76);
    t89 = (t87 | t88);
    t90 = (~(t89));
    t91 = (t86 & t90);
    if (t91 != 0)
        goto LAB144;

LAB141:    if (t89 != 0)
        goto LAB143;

LAB142:    *((unsigned int *)t77) = 1;

LAB144:    t94 = *((unsigned int *)t43);
    t95 = *((unsigned int *)t77);
    t96 = (t94 & t95);
    *((unsigned int *)t93) = t96;
    t79 = (t43 + 4);
    t92 = (t77 + 4);
    t97 = (t93 + 4);
    t100 = *((unsigned int *)t79);
    t101 = *((unsigned int *)t92);
    t102 = (t100 | t101);
    *((unsigned int *)t97) = t102;
    t103 = *((unsigned int *)t97);
    t104 = (t103 != 0);
    if (t104 == 1)
        goto LAB145;

LAB146:
LAB147:    t107 = (t93 + 4);
    t126 = *((unsigned int *)t107);
    t127 = (~(t126));
    t128 = *((unsigned int *)t93);
    t129 = (t128 & t127);
    t130 = (t129 != 0);
    if (t130 > 0)
        goto LAB148;

LAB149:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2136U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB154;

LAB151:    if (t21 != 0)
        goto LAB153;

LAB152:    *((unsigned int *)t14) = 1;

LAB154:    t15 = (t0 + 2296U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng4)));
    memset(t27, 0, 8);
    t24 = (t16 + 4);
    t25 = (t15 + 4);
    t30 = *((unsigned int *)t16);
    t31 = *((unsigned int *)t15);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t25);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t24);
    t38 = *((unsigned int *)t25);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB158;

LAB155:    if (t39 != 0)
        goto LAB157;

LAB156:    *((unsigned int *)t27) = 1;

LAB158:    t44 = *((unsigned int *)t14);
    t45 = *((unsigned int *)t27);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t28 = (t14 + 4);
    t29 = (t27 + 4);
    t42 = (t43 + 4);
    t50 = *((unsigned int *)t28);
    t51 = *((unsigned int *)t29);
    t52 = (t50 | t51);
    *((unsigned int *)t42) = t52;
    t53 = *((unsigned int *)t42);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB159;

LAB160:
LAB161:    t49 = (t0 + 2456U);
    t57 = *((char **)t49);
    t49 = ((char*)((ng3)));
    memset(t77, 0, 8);
    t58 = (t57 + 4);
    t75 = (t49 + 4);
    t80 = *((unsigned int *)t57);
    t81 = *((unsigned int *)t49);
    t82 = (t80 ^ t81);
    t83 = *((unsigned int *)t58);
    t84 = *((unsigned int *)t75);
    t85 = (t83 ^ t84);
    t86 = (t82 | t85);
    t87 = *((unsigned int *)t58);
    t88 = *((unsigned int *)t75);
    t89 = (t87 | t88);
    t90 = (~(t89));
    t91 = (t86 & t90);
    if (t91 != 0)
        goto LAB165;

LAB162:    if (t89 != 0)
        goto LAB164;

LAB163:    *((unsigned int *)t77) = 1;

LAB165:    t94 = *((unsigned int *)t43);
    t95 = *((unsigned int *)t77);
    t96 = (t94 & t95);
    *((unsigned int *)t93) = t96;
    t78 = (t43 + 4);
    t79 = (t77 + 4);
    t92 = (t93 + 4);
    t100 = *((unsigned int *)t78);
    t101 = *((unsigned int *)t79);
    t102 = (t100 | t101);
    *((unsigned int *)t92) = t102;
    t103 = *((unsigned int *)t92);
    t104 = (t103 != 0);
    if (t104 == 1)
        goto LAB166;

LAB167:
LAB168:    t99 = (t93 + 4);
    t126 = *((unsigned int *)t99);
    t127 = (~(t126));
    t128 = *((unsigned int *)t93);
    t129 = (t128 & t127);
    t130 = (t129 != 0);
    if (t130 > 0)
        goto LAB169;

LAB170:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB171:
LAB150:    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    goto LAB26;

LAB20:    xsi_set_current_line(93, ng0);

LAB172:    xsi_set_current_line(94, ng0);
    t3 = (t0 + 2776U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB176;

LAB173:    if (t21 != 0)
        goto LAB175;

LAB174:    *((unsigned int *)t14) = 1;

LAB176:    t16 = (t14 + 4);
    t30 = *((unsigned int *)t16);
    t31 = (~(t30));
    t32 = *((unsigned int *)t14);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB177;

LAB178:    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB179:    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    goto LAB26;

LAB22:    xsi_set_current_line(102, ng0);

LAB180:    xsi_set_current_line(103, ng0);
    t3 = (t0 + 2936U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB184;

LAB181:    if (t21 != 0)
        goto LAB183;

LAB182:    *((unsigned int *)t14) = 1;

LAB184:    t16 = (t14 + 4);
    t30 = *((unsigned int *)t16);
    t31 = (~(t30));
    t32 = *((unsigned int *)t14);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB185;

LAB186:    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB187:    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    goto LAB26;

LAB24:    xsi_set_current_line(111, ng0);

LAB188:    xsi_set_current_line(112, ng0);
    t3 = (t0 + 2616U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB192;

LAB189:    if (t21 != 0)
        goto LAB191;

LAB190:    *((unsigned int *)t14) = 1;

LAB192:    t16 = (t14 + 4);
    t30 = *((unsigned int *)t16);
    t31 = (~(t30));
    t32 = *((unsigned int *)t14);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB193;

LAB194:    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB195:    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    goto LAB26;

LAB30:    t24 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB31;

LAB34:    t42 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB35;

LAB36:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t43) = (t55 | t56);
    t57 = (t14 + 4);
    t58 = (t27 + 4);
    t59 = *((unsigned int *)t14);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (~(t61));
    t63 = *((unsigned int *)t27);
    t64 = (~(t63));
    t65 = *((unsigned int *)t58);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t71 & t69);
    t72 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB38;

LAB41:    t92 = (t77 + 4);
    *((unsigned int *)t77) = 1;
    *((unsigned int *)t92) = 1;
    goto LAB42;

LAB43:    t105 = *((unsigned int *)t93);
    t106 = *((unsigned int *)t99);
    *((unsigned int *)t93) = (t105 | t106);
    t107 = (t43 + 4);
    t108 = (t77 + 4);
    t109 = *((unsigned int *)t43);
    t110 = (~(t109));
    t111 = *((unsigned int *)t107);
    t112 = (~(t111));
    t113 = *((unsigned int *)t77);
    t114 = (~(t113));
    t115 = *((unsigned int *)t108);
    t116 = (~(t115));
    t117 = (t110 & t112);
    t118 = (t114 & t116);
    t119 = (~(t117));
    t120 = (~(t118));
    t121 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t121 & t119);
    t122 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t122 & t120);
    t123 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t123 & t119);
    t124 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t124 & t120);
    goto LAB45;

LAB46:    xsi_set_current_line(43, ng0);
    t131 = ((char*)((ng5)));
    t132 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t132, t131, 0, 0, 3, 0LL);
    goto LAB48;

LAB51:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB52;

LAB55:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB56;

LAB57:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t42);
    *((unsigned int *)t43) = (t55 | t56);
    t47 = (t14 + 4);
    t48 = (t27 + 4);
    t59 = *((unsigned int *)t14);
    t60 = (~(t59));
    t61 = *((unsigned int *)t47);
    t62 = (~(t61));
    t63 = *((unsigned int *)t27);
    t64 = (~(t63));
    t65 = *((unsigned int *)t48);
    t66 = (~(t65));
    t13 = (t60 & t62);
    t67 = (t64 & t66);
    t69 = (~(t13));
    t70 = (~(t67));
    t71 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB59;

LAB62:    t76 = (t77 + 4);
    *((unsigned int *)t77) = 1;
    *((unsigned int *)t76) = 1;
    goto LAB63;

LAB64:    t105 = *((unsigned int *)t93);
    t106 = *((unsigned int *)t92);
    *((unsigned int *)t93) = (t105 | t106);
    t97 = (t43 + 4);
    t98 = (t77 + 4);
    t109 = *((unsigned int *)t43);
    t110 = (~(t109));
    t111 = *((unsigned int *)t97);
    t112 = (~(t111));
    t113 = *((unsigned int *)t77);
    t114 = (~(t113));
    t115 = *((unsigned int *)t98);
    t116 = (~(t115));
    t68 = (t110 & t112);
    t117 = (t114 & t116);
    t119 = (~(t68));
    t120 = (~(t117));
    t121 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t121 & t119);
    t122 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t122 & t120);
    t123 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t123 & t119);
    t124 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t124 & t120);
    goto LAB66;

LAB67:    xsi_set_current_line(45, ng0);
    t107 = ((char*)((ng6)));
    t108 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t108, t107, 0, 0, 3, 0LL);
    goto LAB69;

LAB73:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB74;

LAB75:    xsi_set_current_line(55, ng0);
    t24 = ((char*)((ng7)));
    t25 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t25, t24, 0, 0, 3, 0LL);
    goto LAB77;

LAB81:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB82;

LAB85:    t28 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB86;

LAB87:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t47);
    *((unsigned int *)t43) = (t55 | t56);
    t48 = (t14 + 4);
    t49 = (t27 + 4);
    t59 = *((unsigned int *)t14);
    t60 = (~(t59));
    t61 = *((unsigned int *)t48);
    t62 = (~(t61));
    t63 = *((unsigned int *)t27);
    t64 = (~(t63));
    t65 = *((unsigned int *)t49);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t71 & t69);
    t72 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB89;

LAB92:    t78 = (t77 + 4);
    *((unsigned int *)t77) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB93;

LAB94:    t105 = *((unsigned int *)t93);
    t106 = *((unsigned int *)t97);
    *((unsigned int *)t93) = (t105 | t106);
    t98 = (t43 + 4);
    t99 = (t77 + 4);
    t109 = *((unsigned int *)t43);
    t110 = (~(t109));
    t111 = *((unsigned int *)t98);
    t112 = (~(t111));
    t113 = *((unsigned int *)t77);
    t114 = (~(t113));
    t115 = *((unsigned int *)t99);
    t116 = (~(t115));
    t117 = (t110 & t112);
    t118 = (t114 & t116);
    t119 = (~(t117));
    t120 = (~(t118));
    t121 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t121 & t119);
    t122 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t122 & t120);
    t123 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t123 & t119);
    t124 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t124 & t120);
    goto LAB96;

LAB97:    xsi_set_current_line(64, ng0);
    t108 = ((char*)((ng9)));
    t125 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t125, t108, 0, 0, 3, 0LL);
    goto LAB99;

LAB102:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB103;

LAB106:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB107;

LAB108:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t42);
    *((unsigned int *)t43) = (t55 | t56);
    t47 = (t14 + 4);
    t48 = (t27 + 4);
    t59 = *((unsigned int *)t14);
    t60 = (~(t59));
    t61 = *((unsigned int *)t47);
    t62 = (~(t61));
    t63 = *((unsigned int *)t27);
    t64 = (~(t63));
    t65 = *((unsigned int *)t48);
    t66 = (~(t65));
    t13 = (t60 & t62);
    t67 = (t64 & t66);
    t69 = (~(t13));
    t70 = (~(t67));
    t71 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB110;

LAB113:    t76 = (t77 + 4);
    *((unsigned int *)t77) = 1;
    *((unsigned int *)t76) = 1;
    goto LAB114;

LAB115:    t105 = *((unsigned int *)t93);
    t106 = *((unsigned int *)t92);
    *((unsigned int *)t93) = (t105 | t106);
    t97 = (t43 + 4);
    t98 = (t77 + 4);
    t109 = *((unsigned int *)t43);
    t110 = (~(t109));
    t111 = *((unsigned int *)t97);
    t112 = (~(t111));
    t113 = *((unsigned int *)t77);
    t114 = (~(t113));
    t115 = *((unsigned int *)t98);
    t116 = (~(t115));
    t68 = (t110 & t112);
    t117 = (t114 & t116);
    t119 = (~(t68));
    t120 = (~(t117));
    t121 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t121 & t119);
    t122 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t122 & t120);
    t123 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t123 & t119);
    t124 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t124 & t120);
    goto LAB117;

LAB118:    xsi_set_current_line(66, ng0);
    t107 = ((char*)((ng10)));
    t108 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t108, t107, 0, 0, 3, 0LL);
    goto LAB120;

LAB124:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB125;

LAB126:    xsi_set_current_line(75, ng0);
    t24 = ((char*)((ng12)));
    t25 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t25, t24, 0, 0, 3, 0LL);
    goto LAB128;

LAB132:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB133;

LAB136:    t28 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB137;

LAB138:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t47);
    *((unsigned int *)t43) = (t55 | t56);
    t48 = (t14 + 4);
    t49 = (t27 + 4);
    t59 = *((unsigned int *)t14);
    t60 = (~(t59));
    t61 = *((unsigned int *)t48);
    t62 = (~(t61));
    t63 = *((unsigned int *)t27);
    t64 = (~(t63));
    t65 = *((unsigned int *)t49);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t71 & t69);
    t72 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB140;

LAB143:    t78 = (t77 + 4);
    *((unsigned int *)t77) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB144;

LAB145:    t105 = *((unsigned int *)t93);
    t106 = *((unsigned int *)t97);
    *((unsigned int *)t93) = (t105 | t106);
    t98 = (t43 + 4);
    t99 = (t77 + 4);
    t109 = *((unsigned int *)t43);
    t110 = (~(t109));
    t111 = *((unsigned int *)t98);
    t112 = (~(t111));
    t113 = *((unsigned int *)t77);
    t114 = (~(t113));
    t115 = *((unsigned int *)t99);
    t116 = (~(t115));
    t117 = (t110 & t112);
    t118 = (t114 & t116);
    t119 = (~(t117));
    t120 = (~(t118));
    t121 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t121 & t119);
    t122 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t122 & t120);
    t123 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t123 & t119);
    t124 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t124 & t120);
    goto LAB147;

LAB148:    xsi_set_current_line(84, ng0);
    t108 = ((char*)((ng9)));
    t125 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t125, t108, 0, 0, 3, 0LL);
    goto LAB150;

LAB153:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB154;

LAB157:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB158;

LAB159:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t42);
    *((unsigned int *)t43) = (t55 | t56);
    t47 = (t14 + 4);
    t48 = (t27 + 4);
    t59 = *((unsigned int *)t14);
    t60 = (~(t59));
    t61 = *((unsigned int *)t47);
    t62 = (~(t61));
    t63 = *((unsigned int *)t27);
    t64 = (~(t63));
    t65 = *((unsigned int *)t48);
    t66 = (~(t65));
    t13 = (t60 & t62);
    t67 = (t64 & t66);
    t69 = (~(t13));
    t70 = (~(t67));
    t71 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB161;

LAB164:    t76 = (t77 + 4);
    *((unsigned int *)t77) = 1;
    *((unsigned int *)t76) = 1;
    goto LAB165;

LAB166:    t105 = *((unsigned int *)t93);
    t106 = *((unsigned int *)t92);
    *((unsigned int *)t93) = (t105 | t106);
    t97 = (t43 + 4);
    t98 = (t77 + 4);
    t109 = *((unsigned int *)t43);
    t110 = (~(t109));
    t111 = *((unsigned int *)t97);
    t112 = (~(t111));
    t113 = *((unsigned int *)t77);
    t114 = (~(t113));
    t115 = *((unsigned int *)t98);
    t116 = (~(t115));
    t68 = (t110 & t112);
    t117 = (t114 & t116);
    t119 = (~(t68));
    t120 = (~(t117));
    t121 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t121 & t119);
    t122 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t122 & t120);
    t123 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t123 & t119);
    t124 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t124 & t120);
    goto LAB168;

LAB169:    xsi_set_current_line(86, ng0);
    t107 = ((char*)((ng13)));
    t108 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t108, t107, 0, 0, 3, 0LL);
    goto LAB171;

LAB175:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB176;

LAB177:    xsi_set_current_line(95, ng0);
    t24 = ((char*)((ng7)));
    t25 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t25, t24, 0, 0, 3, 0LL);
    goto LAB179;

LAB183:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB184;

LAB185:    xsi_set_current_line(104, ng0);
    t24 = ((char*)((ng12)));
    t25 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t25, t24, 0, 0, 3, 0LL);
    goto LAB187;

LAB191:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB192;

LAB193:    xsi_set_current_line(113, ng0);
    t24 = ((char*)((ng1)));
    t25 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t25, t24, 0, 0, 3, 0LL);
    goto LAB195;

}


extern void work_m_00000000002310116284_1658803616_init()
{
	static char *pe[] = {(void *)Always_32_0};
	xsi_register_didat("work_m_00000000002310116284_1658803616", "isim/Test_elevador_isim_beh.exe.sim/work/m_00000000002310116284_1658803616.didat");
	xsi_register_executes(pe);
}
