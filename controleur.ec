node controleur
  (miliseconde: bool;
  tour: bool;
  bouton1: bool;
  bouton2: bool;
  circonference: int)
returns
  (vitesse_instantannee: int;
  affichage_bas: int;
  dist: bool;
  moy: bool;
  h: bool;
  total: bool;
  en_avance: bool;
  en_retard: bool;
  a_lheure: bool);

var
  V65_vitesse_moy: int;
  V66_dist_tot: int;
  V67_dist_parcourue: int;
  V68_heure: int;
  V69_minute: int;
  V70_raz: bool;
  V160_time: int;
  V174_time: int;
  V199_seconde: int;
  V200_h0: int;
  V201_m0: int;
  V197_heure: int;
  V198_minute: int;
  V223_index: int;
  V224_v: int;
  V225_c: int;

let
  vitesse_instantannee = (if (V70_raz = false) then (((2 * circonference) / 
  1000) / (V174_time / 3600000)) else 0);
  affichage_bas = (0 -> (if (V223_index = 0) then V66_dist_tot else (if (
  V223_index = 1) then V65_vitesse_moy else (if (V223_index = 2) then 
  V67_dist_parcourue else (if (V223_index = 3) then V68_heure else (pre 
  affichage_bas))))));
  dist = (if (V223_index = 2) then true else false);
  moy = (if (V223_index = 1) then true else false);
  h = (if (V223_index = 3) then true else false);
  total = (if (V223_index = 0) then true else false);
  en_avance = (vitesse_instantannee > (V65_vitesse_moy + 1));
  en_retard = (vitesse_instantannee < (V65_vitesse_moy - 1));
  a_lheure = (not (en_avance or en_retard));
  V65_vitesse_moy = (((pre vitesse_instantannee) + vitesse_instantannee) / 2);
  V66_dist_tot = (0 -> (((pre V66_dist_tot) + circonference) / 100));
  V67_dist_parcourue = (0 -> (if ((V70_raz = false) and tour) then (((pre 
  V67_dist_parcourue) + circonference) / 100) else 0));
  V68_heure = (0 -> V197_heure);
  V69_minute = (0 -> V198_minute);
  V70_raz = (if (((V160_time = 1000) and bouton1) and bouton2) then true else 
  false);
  V160_time = (0 -> (if miliseconde then ((pre V160_time) + 1) else 0));
  V174_time = (if miliseconde then (0 -> ((pre V174_time) + 1)) else 0);
  V199_seconde = (0 -> (if ((pre V199_seconde) = 59) then 0 else ((pre 
  V199_seconde) + 1)));
  V200_h0 = (if V70_raz then 0 else (pre V68_heure));
  V201_m0 = (if V70_raz then 0 else (pre V69_minute));
  V197_heure = (V200_h0 -> (if (((pre V198_minute) = 59) and ((pre V199_seconde
  ) = 59)) then (if ((pre V197_heure) = 23) then 0 else ((pre V197_heure) + 1)) 
  else (pre V197_heure)));
  V198_minute = (V201_m0 -> (if ((pre V199_seconde) = 59) then (if ((pre 
  V198_minute) = 59) then 0 else ((pre V198_minute) + 1)) else (pre V198_minute
  )));
  V223_index = (if ((V224_v < 4) and bouton2) then V224_v else V225_c);
  V224_v = (0 -> (if false then 0 else ((pre V224_v) + 1)));
  V225_c = (0 -> (if true then 0 else ((pre V225_c) + 1)));
tel

