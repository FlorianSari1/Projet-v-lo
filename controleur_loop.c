/********
* ec2c version 0.67
* c main file generated for node : controleur 
* to be used with : controleur.c 
* and             : controleur.h 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "controleur.h"

/* Print a promt ? ************************/
static int ISATTY;
/* MACROS DEFINITIONS ****************/
#ifndef TT
#define TT "true"
#endif
#ifndef FF
#define FF "false"
#endif
#ifndef BB
#define BB "bottom"
#endif
#ifdef CKCHECK
/* set this macro for testing output clocks */
#endif

/* Standard Input procedures **************/
_boolean _get_bool(char* n){
   char b[512];
   _boolean r = 0;
   int s = 1;
   char c;
   do {
      if(ISATTY) {
         if((s != 1)||(r == -1)) printf("\a");
         printf("%s (1,t,T/0,f,F) ? ", n);
      }
      if(scanf("%s", b)==EOF) exit(0);
      s = sscanf(b, "%c", &c);
      r = -1;
      if((c == '0') || (c == 'f') || (c == 'F')) r = 0;
      if((c == '1') || (c == 't') || (c == 'T')) r = 1;
   } while((s != 1) || (r == -1));
   return r;
}
_integer _get_int(char* n){
   char b[512];
   _integer r;
   int s = 1;
   do {
      if(ISATTY) {
         if(s != 1) printf("\a");
         printf("%s (integer) ? ", n);
      }
      if(scanf("%s", b)==EOF) exit(0);
      s = sscanf(b, "%d", &r);
   } while(s != 1);
   return r;
}
#define REALFORMAT ((sizeof(_real)==8)?"%lf":"%f")
_real _get_real(char* n){
   char b[512];
   _real r;
   int s = 1;
   do {
      if(ISATTY) {
         if(s != 1) printf("\a");
         printf("%s (real) ? ", n);
      }
      if(scanf("%s", b)==EOF) exit(0);
      s = sscanf(b, REALFORMAT, &r);
   } while(s != 1);
   return r;
}
/* Standard Output procedures **************/
void _put_bottom(char* n){
   if(ISATTY) printf("%s = ", n);
   printf("%s ", BB);
   if(ISATTY) printf("\n");
}
void _put_bool(char* n, _boolean _V){
   if(ISATTY) printf("%s = ", n);
   printf("%s ", (_V)? TT : FF);
   if(ISATTY) printf("\n");
}
void _put_int(char* n, _integer _V){
   if(ISATTY) printf("%s = ", n);
   printf("%d ", _V);
   if(ISATTY) printf("\n");
}
void _put_real(char* n, _real _V){
   if(ISATTY) printf("%s = ", n);
   printf("%f ", _V);
   if(ISATTY) printf("\n");
}
/* Output procedures **********************/
#ifdef CKCHECK
void controleur_BOT_vitesse_instantannee(void* cdata){
   _put_bottom("vitesse_instantannee");
}
void controleur_BOT_affichage_bas(void* cdata){
   _put_bottom("affichage_bas");
}
void controleur_BOT_dist(void* cdata){
   _put_bottom("dist");
}
void controleur_BOT_moy(void* cdata){
   _put_bottom("moy");
}
void controleur_BOT_h(void* cdata){
   _put_bottom("h");
}
void controleur_BOT_total(void* cdata){
   _put_bottom("total");
}
void controleur_BOT_en_avance(void* cdata){
   _put_bottom("en_avance");
}
void controleur_BOT_en_retard(void* cdata){
   _put_bottom("en_retard");
}
void controleur_BOT_a_lheure(void* cdata){
   _put_bottom("a_lheure");
}
#endif
/* Output procedures **********************/
void controleur_O_vitesse_instantannee(void* cdata, _integer _V) {
   _put_int("vitesse_instantannee", _V);
}
void controleur_O_affichage_bas(void* cdata, _integer _V) {
   _put_int("affichage_bas", _V);
}
void controleur_O_dist(void* cdata, _boolean _V) {
   _put_bool("dist", _V);
}
void controleur_O_moy(void* cdata, _boolean _V) {
   _put_bool("moy", _V);
}
void controleur_O_h(void* cdata, _boolean _V) {
   _put_bool("h", _V);
}
void controleur_O_total(void* cdata, _boolean _V) {
   _put_bool("total", _V);
}
void controleur_O_en_avance(void* cdata, _boolean _V) {
   _put_bool("en_avance", _V);
}
void controleur_O_en_retard(void* cdata, _boolean _V) {
   _put_bool("en_retard", _V);
}
void controleur_O_a_lheure(void* cdata, _boolean _V) {
   _put_bool("a_lheure", _V);
}/* Main procedure *************************/
int main(){
   
   int s = 0;
   /* Context allocation */
   struct controleur_ctx* ctx = controleur_new_ctx(NULL);
   controleur_reset(ctx);
   /* Main loop */
   ISATTY = isatty(0);
   while(1){
      if (ISATTY) printf("## STEP %d ##########\n", s+1);
      else if(s) printf("\n");
      fflush(stdout);
      ++s;
      controleur_I_miliseconde(ctx, _get_bool("miliseconde"));
      controleur_I_tour(ctx, _get_bool("tour"));
      controleur_I_bouton1(ctx, _get_bool("bouton1"));
      controleur_I_bouton2(ctx, _get_bool("bouton2"));
      controleur_I_circonference(ctx, _get_int("circonference"));
      controleur_step(ctx);
      
   }
   return 1;
   
}
