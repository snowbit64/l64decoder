// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addPoint
// Entry Point: 00ec1e58
// Size: 508 bytes
// Signature: undefined __thiscall addPoint(CTriangulator * this, double param_1, double param_2, double param_3)


/* FLOAT_MATH::CTriangulator::addPoint(double, double, double) */

void __thiscall
FLOAT_MATH::CTriangulator::addPoint
          (CTriangulator *this,double param_1,double param_2,double param_3)

{
  ulong uVar1;
  double *__src;
  void *pvVar2;
  long lVar3;
  double *pdVar4;
  double *pdVar5;
  size_t __n;
  double dVar6;
  
  __src = *(double **)(this + 0x40);
  pdVar4 = *(double **)(this + 0x48);
  if (__src == pdVar4) {
    *(double *)(this + 0x10) = param_1;
    *(double *)(this + 0x18) = param_2;
    *(double *)(this + 0x20) = param_3;
    *(double *)(this + 0x28) = param_1;
    *(double *)(this + 0x30) = param_2;
  }
  else {
    if (param_1 < *(double *)(this + 0x10)) {
      *(double *)(this + 0x10) = param_1;
      if (*(double *)(this + 0x18) <= param_2) goto LAB_00ec1ea8;
LAB_00ec1f38:
      *(double *)(this + 0x18) = param_2;
      if (*(double *)(this + 0x20) <= param_3) goto LAB_00ec1eb4;
LAB_00ec1f48:
      *(double *)(this + 0x20) = param_3;
      if (param_1 <= *(double *)(this + 0x28)) goto LAB_00ec1ec0;
LAB_00ec1f58:
      *(double *)(this + 0x28) = param_1;
      if (param_2 <= *(double *)(this + 0x30)) goto LAB_00ec1ecc;
LAB_00ec1f68:
      *(double *)(this + 0x30) = param_2;
      dVar6 = *(double *)(this + 0x38);
    }
    else {
      if (param_2 < *(double *)(this + 0x18)) goto LAB_00ec1f38;
LAB_00ec1ea8:
      if (param_3 < *(double *)(this + 0x20)) goto LAB_00ec1f48;
LAB_00ec1eb4:
      if (*(double *)(this + 0x28) < param_1) goto LAB_00ec1f58;
LAB_00ec1ec0:
      if (*(double *)(this + 0x30) < param_2) goto LAB_00ec1f68;
LAB_00ec1ecc:
      dVar6 = *(double *)(this + 0x38);
    }
    if (param_3 <= dVar6) {
      pdVar5 = *(double **)(this + 0x50);
      goto joined_r0x00ec1f88;
    }
  }
  *(double *)(this + 0x38) = param_3;
  pdVar5 = *(double **)(this + 0x50);
joined_r0x00ec1f88:
  if (pdVar4 == pdVar5) {
    __n = (long)pdVar4 - (long)__src;
    lVar3 = (long)__n >> 3;
    uVar1 = lVar3 * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)(lVar3 * 0x5555555555555556)) {
      uVar1 = lVar3 * 0x5555555555555556;
    }
    if (0x555555555555554 < (ulong)(lVar3 * -0x5555555555555555)) {
      uVar1 = 0xaaaaaaaaaaaaaaa;
    }
    if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar2 = operator_new(uVar1 * 0x18);
    pdVar4 = (double *)((long)pvVar2 + lVar3 * 8);
    *pdVar4 = param_1;
    pdVar4[1] = param_2;
    pdVar4[2] = param_3;
    if (0 < (long)__n) {
      memcpy((void *)((long)pdVar4 - __n),__src,__n);
    }
    *(void **)(this + 0x40) = (void *)((long)pdVar4 - __n);
    *(double **)(this + 0x48) = pdVar4 + 3;
    *(void **)(this + 0x50) = (void *)((long)pvVar2 + uVar1 * 0x18);
    if (__src != (double *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    *pdVar4 = param_1;
    pdVar4[1] = param_2;
    pdVar4[2] = param_3;
    *(double **)(this + 0x48) = pdVar4 + 3;
  }
  return;
}


