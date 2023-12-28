/*
  This is error.h

  Coxeter version 3.0 Copyright (C) 2002 Fokko du Cloux
  See file main.cpp for full copyright notice
*/

#ifndef ERROR_H /* guard against multiple inclusions */
#define ERROR_H

#include "globals.h"

namespace error {
using namespace coxeter;

enum ErrorCodes {
  ABORT = 1,
  BAD_COXENTRY,
  BAD_INPUT,
  BAD_LENGTH,
  BAD_LINE,
  BAD_RCYCFIELD,
  CHECKCOMM_FAIL,
  CHECKMIN_FAIL,
  COMMAND_NOT_FOUND,
  COMMAND_REDEFINITION,
  CONTEXTNBR_OVERFLOW,
  COXALLOC_FAIL,
  COXNBR_OVERFLOW,
  DENSEARRAY_OVERFLOW,
  EMPTY_POP,
  EMPTY_READ,
  ERROR_WARNING,
  EXTENSION_FAIL,
  FILE_NOT_FOUND,
  LEADING_WHITESPACE,
  LENGTH_OVERFLOW,
  KLCOEFF_OVERFLOW,
  KLCOEFF_NEGATIVE,
  KLCOEFF_UNDERFLOW,
  KL_FAIL,
  MEMORY_WARNING,
  MINROOT_FAIL,
  MINROOT_OVERFLOW,
  MODECHANGE_FAIL,
  MU_FAIL,
  MU_NEGATIVE,
  MU_OVERFLOW,
  NOT_AFFINE,
  NOT_COXELT,
  NOT_DESCENT,
  NOT_FINITE,
  NOT_GENERATOR,
  NOT_PERMUTATION,
  NOT_SYMMETRIC,
  NOT_YN,
  OUT_OF_MEMORY,
  PARNBR_OVERFLOW,
  PARSE_ERROR,
  RANKSET_FAILED,
  READ_FAILED,
  REPEATED_SYMBOL,
  RESERVED_SYMBOL,
  SKLCOEFF_OVERFLOW,
  SKLCOEFF_UNDERFLOW,
  TYPESET_FAILED,
  UEMU_FAIL,
  UNDEF_COXARR,
  UNDEFINED_SHIFT,
  WRONG_COXETER_ENTRY,
  WRONG_RANK,
  WRONG_TYPE
};

extern bool CATCH_MEMORY_OVERFLOW;
extern int ERRNO;

void Error(int number, ...);
} // namespace error

#endif
