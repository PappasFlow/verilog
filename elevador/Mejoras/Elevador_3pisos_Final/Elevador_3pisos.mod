MODEL
MODEL_VERSION "v1998.8";
DESIGN "Elevador_3pisos";

/* port names and type */
INPUT S:PIN39 = f3;
INPUT S:PIN37 = f1;
INPUT S:PIN42 = s;
INPUT S:PIN35 = p2;
INPUT S:PIN34 = p1;
INPUT S:PIN36 = p3;
INPUT S:PIN38 = f2;
INPUT S:PIN6 = clk;
INPUT S:PIN27 = reset;
OUTPUT S:PIN4 = led<0>;
OUTPUT S:PIN3 = led<1>;
OUTPUT S:PIN2 = led<2>;
OUTPUT S:PIN1 = led<3>;
OUTPUT S:PIN13 = mdw;
OUTPUT S:PIN26 = D_out<0>;
OUTPUT S:PIN25 = D_out<1>;
OUTPUT S:PIN24 = D_out<2>;
OUTPUT S:PIN22 = D_out<3>;
OUTPUT S:PIN20 = D_out<4>;
OUTPUT S:PIN19 = D_out<5>;
OUTPUT S:PIN18 = D_out<6>;
OUTPUT S:PIN44 = E_dis<0>;
OUTPUT S:PIN43 = E_dis<1>;
OUTPUT S:PIN28 = E_dis<2>;
OUTPUT S:PIN29 = E_dis<3>;
OUTPUT S:PIN14 = mup;

/* timing arc definitions */
clk_led<0>_delay: DELAY clk led<0>;
clk_led<1>_delay: DELAY clk led<1>;
clk_led<2>_delay: DELAY clk led<2>;
clk_led<3>_delay: DELAY clk led<3>;
clk_mdw_delay: DELAY clk mdw;
clk_D_out<0>_delay: DELAY clk D_out<0>;
clk_D_out<1>_delay: DELAY clk D_out<1>;
clk_D_out<2>_delay: DELAY clk D_out<2>;
clk_D_out<3>_delay: DELAY clk D_out<3>;
clk_D_out<4>_delay: DELAY clk D_out<4>;
clk_D_out<5>_delay: DELAY clk D_out<5>;
clk_D_out<6>_delay: DELAY clk D_out<6>;
clk_E_dis<0>_delay: DELAY clk E_dis<0>;
clk_E_dis<1>_delay: DELAY clk E_dis<1>;
clk_E_dis<2>_delay: DELAY clk E_dis<2>;
clk_E_dis<3>_delay: DELAY clk E_dis<3>;
clk_mup_delay: DELAY clk mup;

/* timing check arc definitions */
f1_clk_setup: SETUP(POSEDGE) f1 clk;
f2_clk_setup: SETUP(POSEDGE) f2 clk;
f3_clk_setup: SETUP(POSEDGE) f3 clk;
p1_clk_setup: SETUP(POSEDGE) p1 clk;
p2_clk_setup: SETUP(POSEDGE) p2 clk;
p3_clk_setup: SETUP(POSEDGE) p3 clk;
reset_clk_setup: SETUP(POSEDGE) reset clk;
s_clk_setup: SETUP(POSEDGE) s clk;
f1_clk_hold: HOLD(POSEDGE) f1 clk;
f2_clk_hold: HOLD(POSEDGE) f2 clk;
f3_clk_hold: HOLD(POSEDGE) f3 clk;
p1_clk_hold: HOLD(POSEDGE) p1 clk;
p2_clk_hold: HOLD(POSEDGE) p2 clk;
p3_clk_hold: HOLD(POSEDGE) p3 clk;
reset_clk_hold: HOLD(POSEDGE) reset clk;
s_clk_hold: HOLD(POSEDGE) s clk;

ENDMODEL
