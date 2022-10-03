#pragma once

#define ___ KC_NO

/* Adapted matrix of the JD45. Phoenix45 is a drop-in replacement and
 * additionally supports triple space (2.25 - 1 - 2.75)
 * https://p3dstore.com/collections/pcbs/products/phoenix-pcb-only
 */
#define LAYOUT_PHOENIX45_TRIPLE_SPACE( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A,      k1B, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A,      k2B, \
         k31, k32, k33,           k36,      k38, k39, k3A \
) { \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, ___ }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B, ___ }, \
    { ___, k31, k32, k33, ___, ___, k36, ___, k38, k39, k3A, ___, ___ } \
}
