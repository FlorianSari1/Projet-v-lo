/********
* ec2c version 0.67
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : controleur 
* to be used with : controleur.c 
********/
#ifndef _controleur_EC2C_H_FILE
#define _controleur_EC2C_H_FILE
/*-------- Predefined types ---------*/
#ifndef _EC2C_PREDEF_TYPES
#define _EC2C_PREDEF_TYPES
typedef int _boolean;
typedef int _integer;
typedef char* _string;
typedef double _real;
typedef double _double;
typedef float _float;
#define _false 0
#define _true 1
#endif
/*--------- Pragmas ----------------*/
//MODULE: controleur 5 9
//IN: _boolean miliseconde
//IN: _boolean tour
//IN: _boolean bouton1
//IN: _boolean bouton2
//IN: _integer circonference
//OUT: _integer vitesse_instantannee
//OUT: _integer affichage_bas
//OUT: _boolean dist
//OUT: _boolean moy
//OUT: _boolean h
//OUT: _boolean total
//OUT: _boolean en_avance
//OUT: _boolean en_retard
//OUT: _boolean a_lheure
#ifndef _controleur_EC2C_SRC_FILE
/*--------Context type -------------*/
struct controleur_ctx;
/*-------- Input procedures -------------*/
extern void controleur_I_miliseconde(struct controleur_ctx* ctx, _boolean);
extern void controleur_I_tour(struct controleur_ctx* ctx, _boolean);
extern void controleur_I_bouton1(struct controleur_ctx* ctx, _boolean);
extern void controleur_I_bouton2(struct controleur_ctx* ctx, _boolean);
extern void controleur_I_circonference(struct controleur_ctx* ctx, _integer);
/*-------- Reset procedure -----------*/
extern void controleur_reset(struct controleur_ctx* ctx);
/*--------Context copy -------------*/
extern void controleur_copy_ctx(struct controleur_ctx* dest, struct 
controleur_ctx* src);
/*--------Context allocation --------*/
extern struct controleur_ctx* controleur_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void controleur_step(struct controleur_ctx* ctx);
#endif
#endif
