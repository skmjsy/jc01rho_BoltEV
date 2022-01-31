#pragma once
#include "rednose/helpers/common_ekf.h"
extern "C" {
void live_update_4(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_9(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_10(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_12(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_31(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_32(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_13(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_14(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_33(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_H(double *in_vec, double *out_6053851564587979273);
void live_err_fun(double *nom_x, double *delta_x, double *out_7389794714027921961);
void live_inv_err_fun(double *nom_x, double *true_x, double *out_5057486488975891714);
void live_H_mod_fun(double *state, double *out_6748075909193761881);
void live_f_fun(double *state, double dt, double *out_8074529069450670553);
void live_F_fun(double *state, double dt, double *out_5427312182938220170);
void live_h_4(double *state, double *unused, double *out_7456474753437116369);
void live_H_4(double *state, double *unused, double *out_7180700258772212243);
void live_h_9(double *state, double *unused, double *out_323729581979990638);
void live_H_9(double *state, double *unused, double *out_7421889905401802888);
void live_h_10(double *state, double *unused, double *out_1677691710343043568);
void live_H_10(double *state, double *unused, double *out_264734576426783723);
void live_h_12(double *state, double *unused, double *out_8586791845152645926);
void live_H_12(double *state, double *unused, double *out_6246587406905377578);
void live_h_31(double *state, double *unused, double *out_7690004094545926106);
void live_H_31(double *state, double *unused, double *out_3501024374580363869);
void live_h_32(double *state, double *unused, double *out_2860583090773705045);
void live_H_32(double *state, double *unused, double *out_3632497812450703263);
void live_h_13(double *state, double *unused, double *out_9219879842723371893);
void live_H_13(double *state, double *unused, double *out_8156648507180591640);
void live_h_14(double *state, double *unused, double *out_323729581979990638);
void live_H_14(double *state, double *unused, double *out_7421889905401802888);
void live_h_33(double *state, double *unused, double *out_1541830281133406774);
void live_H_33(double *state, double *unused, double *out_350467369941506265);
void live_predict(double *in_x, double *in_P, double *in_Q, double dt);
}