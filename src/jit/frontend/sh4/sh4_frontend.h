#ifndef SH4_FRONTEND_H
#define SH4_FRONTEND_H

#include "jit/frontend/jit_frontend.h"

enum {
  SH4_DOUBLE_PR = 0x1,
  SH4_DOUBLE_SZ = 0x2,
};

extern uint32_t sh4_fsca_table[];

struct jit_frontend *sh4_frontend_create();

#endif
