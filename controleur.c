/********
* ec2c version 0.67
* c file generated for node : controleur 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _controleur_EC2C_SRC_FILE
#include "controleur.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _miliseconde;
   _boolean _tour;
   _boolean _bouton1;
   _boolean _bouton2;
   _integer _circonference;
   //OUTPUTS
   _integer _vitesse_instantannee;
   _integer _affichage_bas;
   _boolean _dist;
   _boolean _moy;
   _boolean _h;
   _boolean _total;
   _boolean _en_avance;
   _boolean _en_retard;
   _boolean _a_lheure;
   //REGISTERS
   _integer M94;
   _boolean M94_nil;
   _integer M91;
   _boolean M91_nil;
   _integer M75;
   _boolean M75_nil;
   _integer M82;
   _boolean M82_nil;
   _integer M78;
   _boolean M78_nil;
   _integer M71;
   _boolean M71_nil;
   _integer M64;
   _boolean M64_nil;
   _integer M56;
   _boolean M56_nil;
   _integer M50;
   _boolean M50_nil;
   _integer M46;
   _boolean M46_nil;
   _integer M41;
   _boolean M41_nil;
   _integer M29;
   _boolean M29_nil;
   _integer M17;
   _boolean M17_nil;
   _boolean M12;
} controleur_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void controleur_I_miliseconde(controleur_ctx* ctx, _boolean V){
   ctx->_miliseconde = V;
}
void controleur_I_tour(controleur_ctx* ctx, _boolean V){
   ctx->_tour = V;
}
void controleur_I_bouton1(controleur_ctx* ctx, _boolean V){
   ctx->_bouton1 = V;
}
void controleur_I_bouton2(controleur_ctx* ctx, _boolean V){
   ctx->_bouton2 = V;
}
void controleur_I_circonference(controleur_ctx* ctx, _integer V){
   ctx->_circonference = V;
}
extern void controleur_O_vitesse_instantannee(void* cdata, _integer);
extern void controleur_O_affichage_bas(void* cdata, _integer);
extern void controleur_O_dist(void* cdata, _boolean);
extern void controleur_O_moy(void* cdata, _boolean);
extern void controleur_O_h(void* cdata, _boolean);
extern void controleur_O_total(void* cdata, _boolean);
extern void controleur_O_en_avance(void* cdata, _boolean);
extern void controleur_O_en_retard(void* cdata, _boolean);
extern void controleur_O_a_lheure(void* cdata, _boolean);
#ifdef CKCHECK
extern void controleur_BOT_vitesse_instantannee(void* cdata);
extern void controleur_BOT_affichage_bas(void* cdata);
extern void controleur_BOT_dist(void* cdata);
extern void controleur_BOT_moy(void* cdata);
extern void controleur_BOT_h(void* cdata);
extern void controleur_BOT_total(void* cdata);
extern void controleur_BOT_en_avance(void* cdata);
extern void controleur_BOT_en_retard(void* cdata);
extern void controleur_BOT_a_lheure(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void controleur_reset_input(controleur_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void controleur_reset(controleur_ctx* ctx){
   ctx->M94_nil = _true;
   ctx->M91_nil = _true;
   ctx->M75_nil = _true;
   ctx->M82_nil = _true;
   ctx->M78_nil = _true;
   ctx->M71_nil = _true;
   ctx->M64_nil = _true;
   ctx->M56_nil = _true;
   ctx->M50_nil = _true;
   ctx->M46_nil = _true;
   ctx->M41_nil = _true;
   ctx->M29_nil = _true;
   ctx->M17_nil = _true;
   ctx->M12 = _true;
   controleur_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void controleur_copy_ctx(controleur_ctx* dest, controleur_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(controleur_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
controleur_ctx* controleur_new_ctx(void* cdata){
   controleur_ctx* ctx = (controleur_ctx*)calloc(1, sizeof(controleur_ctx));
   ctx->client_data = cdata;
   controleur_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void controleur_step(controleur_ctx* ctx){
//LOCAL VARIABLES
   _integer L16;
   _integer L15;
   _integer L11;
   _boolean L10;
   _boolean L9;
   _boolean L8;
   _boolean L7;
   _boolean L6;
   _integer L23;
   _integer L22;
   _integer L28;
   _integer L27;
   _integer L26;
   _integer L25;
   _integer L21;
   _integer L5;
   _integer L40;
   _integer L39;
   _integer L38;
   _boolean L37;
   _boolean L36;
   _integer L45;
   _integer L44;
   _integer L43;
   _integer L35;
   _boolean L34;
   _integer L49;
   _integer L48;
   _integer L47;
   _boolean L53;
   _integer L55;
   _integer L54;
   _boolean L58;
   _boolean L61;
   _integer L63;
   _integer L62;
   _integer L60;
   _integer L59;
   _boolean L66;
   _integer L70;
   _boolean L74;
   _boolean L81;
   _boolean L73;
   _boolean L90;
   _integer L93;
   _integer L89;
   _integer L72;
   _integer L69;
   _integer L68;
   _integer L65;
   _integer L57;
   _integer L52;
   _integer L33;
   _integer L32;
   _boolean L96;
   _boolean L98;
   _boolean L100;
   _boolean L102;
   _integer L105;
   _boolean L104;
   _integer L108;
   _boolean L107;
   _boolean L111;
   _boolean L110;
   _integer T94;
   _integer T91;
   _integer L77;
   _integer L88;
   _integer L87;
   _integer L80;
   _integer L76;
   _integer T75;
   _integer L85;
   _integer L84;
   _integer L83;
   _integer T82;
   _integer L79;
   _integer T78;
   _integer T71;
   _integer T64;
   _integer T56;
   _integer T50;
   _integer T46;
   _integer T41;
   _integer T29;
   _integer T17;
//CODE
   L16 = (ctx->M17 + 1);
   if (ctx->_miliseconde) {
      L15 = L16;
   } else {
      L15 = 0;
   }
   if (ctx->M12) {
      L11 = 0;
   } else {
      L11 = L15;
   }
   L10 = (L11 == 1000);
   L9 = (L10 && ctx->_bouton1);
   L8 = (L9 && ctx->_bouton2);
   if (L8) {
      L7 = _true;
   } else {
      L7 = _false;
   }
   L6 = (L7 == _false);
   L23 = (2 * ctx->_circonference);
   L22 = (L23 / 1000);
   L28 = (ctx->M29 + 1);
   if (ctx->M12) {
      L27 = 0;
   } else {
      L27 = L28;
   }
   if (ctx->_miliseconde) {
      L26 = L27;
   } else {
      L26 = 0;
   }
   L25 = (L26 / 3600000);
   L21 = (L22 / L25);
   if (L6) {
      L5 = L21;
   } else {
      L5 = 0;
   }
   controleur_O_vitesse_instantannee(ctx->client_data, L5);
   L40 = (ctx->M41 + 1);
   if (_false) {
      L39 = 0;
   } else {
      L39 = L40;
   }
   if (ctx->M12) {
      L38 = 0;
   } else {
      L38 = L39;
   }
   L37 = (L38 < 4);
   L36 = (L37 && ctx->_bouton2);
   L45 = (ctx->M46 + 1);
   if (_true) {
      L44 = 0;
   } else {
      L44 = L45;
   }
   if (ctx->M12) {
      L43 = 0;
   } else {
      L43 = L44;
   }
   if (L36) {
      L35 = L38;
   } else {
      L35 = L43;
   }
   L34 = (L35 == 0);
   L49 = (ctx->M50 + ctx->_circonference);
   L48 = (L49 / 100);
   if (ctx->M12) {
      L47 = 0;
   } else {
      L47 = L48;
   }
   L53 = (L35 == 1);
   L55 = (ctx->M56 + L5);
   L54 = (L55 / 2);
   L58 = (L35 == 2);
   L61 = (L6 && ctx->_tour);
   L63 = (ctx->M64 + ctx->_circonference);
   L62 = (L63 / 100);
   if (L61) {
      L60 = L62;
   } else {
      L60 = 0;
   }
   if (ctx->M12) {
      L59 = 0;
   } else {
      L59 = L60;
   }
   L66 = (L35 == 3);
   if (L7) {
      L70 = 0;
   } else {
      L70 = ctx->M71;
   }
   L74 = (ctx->M75 == 59);
   L81 = (ctx->M82 == 59);
   L73 = (L74 && L81);
   L90 = (ctx->M91 == 23);
   L93 = (ctx->M91 + 1);
   if (L90) {
      L89 = 0;
   } else {
      L89 = L93;
   }
   if (L73) {
      L72 = L89;
   } else {
      L72 = ctx->M91;
   }
   if (ctx->M12) {
      L69 = L70;
   } else {
      L69 = L72;
   }
   if (ctx->M12) {
      L68 = 0;
   } else {
      L68 = L69;
   }
   if (L66) {
      L65 = L68;
   } else {
      L65 = ctx->M94;
   }
   if (L58) {
      L57 = L59;
   } else {
      L57 = L65;
   }
   if (L53) {
      L52 = L54;
   } else {
      L52 = L57;
   }
   if (L34) {
      L33 = L47;
   } else {
      L33 = L52;
   }
   if (ctx->M12) {
      L32 = 0;
   } else {
      L32 = L33;
   }
   controleur_O_affichage_bas(ctx->client_data, L32);
   if (L58) {
      L96 = _true;
   } else {
      L96 = _false;
   }
   controleur_O_dist(ctx->client_data, L96);
   if (L53) {
      L98 = _true;
   } else {
      L98 = _false;
   }
   controleur_O_moy(ctx->client_data, L98);
   if (L66) {
      L100 = _true;
   } else {
      L100 = _false;
   }
   controleur_O_h(ctx->client_data, L100);
   if (L34) {
      L102 = _true;
   } else {
      L102 = _false;
   }
   controleur_O_total(ctx->client_data, L102);
   L105 = (L54 + 1);
   L104 = (L5 > L105);
   controleur_O_en_avance(ctx->client_data, L104);
   L108 = (L54 - 1);
   L107 = (L5 < L108);
   controleur_O_en_retard(ctx->client_data, L107);
   L111 = (L104 || L107);
   L110 = (! L111);
   controleur_O_a_lheure(ctx->client_data, L110);
   T94 = L32;
   T91 = L69;
   if (L7) {
      L77 = 0;
   } else {
      L77 = ctx->M78;
   }
   L88 = (ctx->M75 + 1);
   if (L74) {
      L87 = 0;
   } else {
      L87 = L88;
   }
   if (L81) {
      L80 = L87;
   } else {
      L80 = ctx->M75;
   }
   if (ctx->M12) {
      L76 = L77;
   } else {
      L76 = L80;
   }
   T75 = L76;
   L85 = (ctx->M82 + 1);
   if (L81) {
      L84 = 0;
   } else {
      L84 = L85;
   }
   if (ctx->M12) {
      L83 = 0;
   } else {
      L83 = L84;
   }
   T82 = L83;
   if (ctx->M12) {
      L79 = 0;
   } else {
      L79 = L76;
   }
   T78 = L79;
   T71 = L68;
   T64 = L59;
   T56 = L5;
   T50 = L47;
   T46 = L43;
   T41 = L38;
   T29 = L26;
   T17 = L11;
   ctx->M94 = T94;
   ctx->M94_nil = _false;
   ctx->M91 = T91;
   ctx->M91_nil = _false;
   ctx->M75 = T75;
   ctx->M75_nil = _false;
   ctx->M82 = T82;
   ctx->M82_nil = _false;
   ctx->M78 = T78;
   ctx->M78_nil = _false;
   ctx->M71 = T71;
   ctx->M71_nil = _false;
   ctx->M64 = T64;
   ctx->M64_nil = _false;
   ctx->M56 = T56;
   ctx->M56_nil = _false;
   ctx->M50 = T50;
   ctx->M50_nil = _false;
   ctx->M46 = T46;
   ctx->M46_nil = _false;
   ctx->M41 = T41;
   ctx->M41_nil = _false;
   ctx->M29 = T29;
   ctx->M29_nil = _false;
   ctx->M17 = T17;
   ctx->M17_nil = _false;
   ctx->M12 = ctx->M12 && !(_true);
}
