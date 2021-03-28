#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define SIZE(x) (sizeof(x)/sizeof((x)[0]))
      
#ifndef KBD_DEFMODE
#define KBD_DEFMODE ((1 << VC_REPEAT) | (1 << VC_META))
#endif
      
#ifndef KBD_DEFLEDS
/* * Some laptops take the 789uiojklm,. keys as number pad when NumLock
       * is on. This seems a good reason to start with NumLock off. */
#define KBD_DEFLEDS 0
#endif
      
#ifndef KBD_DEFLOCK
#define KBD_DEFLOCK 0
#endif  

#define INIT_VAR 1

int init()
{
	printf("Hey keyboard driver is started work.\n");
	int startaddr = 0b00000001;
	int stopaddr = 0b10000000;
	
	printf("Starting from: %x", startaddr);
	
	asm(
		"mov x0, #1\n"
	);
	
	printf("\n");
	printf("Stopped from: %x", stopaddr);
}

int wait_f_p(int breakaddr)
{
	return 0;
}

int pressed_k()
{
	#ifndef strctalph
	#define strctalph 1
	struct big_l{
		char A;
		char B;
		char C;
		char D;
		char E;
		char F;
		char G;
		char H;
		char I;
		char J;
		char K;
		char L;
		char M;
		char N;
		char O;
		char P;
		char Q;
		char R;
		char S;
		char T;
		char U;
		char V;
		char W;
		char X;
		char Y;
		char Z;
	};
	struct small_l{
		char A_s;
		char B_s;
		char C_s;
		char D_s;
		char E_s;
		char F_s;
		char G_s;
		char H_s;
		char I_s;
		char J_s;
		char K_s;
		char L_s;
		char M_s;
		char N_s;
		char O_s;
		char P_s;
		char Q_s;
		char R_s;
		char S_s;
		char T_s;
		char U_s;
		char V_s;
		char W_s;
		char X_s;
		char Y_s;
		char Z_s;
	};
	
	struct big_l bl;
	struct small_l sl;
	
	bl.A = 65;
	bl.B = 66;
	bl.C = 67;
	bl.D = 68;
	bl.E = 69;
	bl.F = 70;
	bl.G = 71;
	bl.H = 72;
	bl.I = 73;
	bl.J = 74;
	bl.K = 75;
	bl.L = 76;
	bl.M = 77;
	bl.N = 78;
	bl.O = 79;
	bl.P = 80;
	bl.Q = 81;
	bl.R = 82;
	bl.S = 83;
	bl.T = 84;
	bl.U = 85;
	bl.V = 86;
	bl.W = 87;
	bl.X = 88;
	bl.Y = 89;
	bl.Z = 90;
	
	sl.A_s = 97;
	sl.B_s = 98;
	sl.C_s = 99;
	sl.D_s = 100;
	sl.E_s = 101;
	sl.F_s = 102;
	sl.G_s = 103;
	sl.H_s = 104;
	sl.I_s = 105;
	sl.J_s = 106;
	sl.K_s = 107;
	sl.L_s = 108;
	sl.M_s = 109;
	sl.N_s = 110;
	sl.O_s = 111;
	sl.P_s = 112;
	sl.Q_s = 113;
	sl.R_s = 114;
	sl.S_s = 115;
	sl.T_s = 116;
	sl.U_s = 117;
	sl.V_s = 118;
	sl.W_s = 119;
	sl.X_s = 120;
	sl.Y_s = 121;
	sl.Z_s = 122;
	
	init();
	
	#endif
}

int err(int errno)
{
	printf("Error (errno): %d", errno);
	return errno;
}