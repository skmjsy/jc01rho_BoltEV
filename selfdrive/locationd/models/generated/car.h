#pragma once
#include "rednose/helpers/common_ekf.h"
extern "C" {
void car_update_25(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_24(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_30(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_26(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_27(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_29(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_28(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_err_fun(double *nom_x, double *delta_x, double *out_1063497859074836196);
void car_inv_err_fun(double *nom_x, double *true_x, double *out_7328910102410717070);
void car_H_mod_fun(double *state, double *out_3409643888634672646);
void car_f_fun(double *state, double dt, double *out_3003474115782140228);
void car_F_fun(double *state, double dt, double *out_8493089208129345221);
void car_h_25(double *state, double *unused, double *out_6391730680980061888);
void car_H_25(double *state, double *unused, double *out_8125768267235177217);
void car_h_24(double *state, double *unused, double *out_7724219593017986074);
void car_H_24(double *state, double *unused, double *out_6040940534489439302);
void car_h_30(double *state, double *unused, double *out_8417563864475467378);
void car_H_30(double *state, double *unused, double *out_1488130643714006063);
void car_h_26(double *state, double *unused, double *out_5380777813031134693);
void car_H_26(double *state, double *unused, double *out_4616382651535165126);
void car_h_27(double *state, double *unused, double *out_825629496919552023);
void car_H_27(double *state, double *unused, double *out_2775712631550631375);
void car_h_29(double *state, double *unused, double *out_4687312973348053675);
void car_H_29(double *state, double *unused, double *out_5311929412842838016);
void car_h_28(double *state, double *unused, double *out_5809648384004346737);
void car_H_28(double *state, double *unused, double *out_976891943747055564);
void car_predict(double *in_x, double *in_P, double *in_Q, double dt);
void car_set_mass(double x);
void car_set_rotational_inertia(double x);
void car_set_center_to_front(double x);
void car_set_center_to_rear(double x);
void car_set_stiffness_front(double x);
void car_set_stiffness_rear(double x);
}