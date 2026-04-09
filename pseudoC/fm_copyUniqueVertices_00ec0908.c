// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_copyUniqueVertices
// Entry Point: 00ec0908
// Size: 260 bytes
// Signature: undefined __cdecl fm_copyUniqueVertices(uint param_1, double * param_2, double * param_3, uint param_4, uint * param_5, uint * param_6)


/* FLOAT_MATH::fm_copyUniqueVertices(unsigned int, double const*, double*, unsigned int, unsigned
   int const*, unsigned int*) */

uint FLOAT_MATH::fm_copyUniqueVertices
               (uint param_1,double *param_2,double *param_3,uint param_4,uint *param_5,
               uint *param_6)

{
  double *pdVar1;
  uint uVar2;
  uint uVar3;
  void *__dest;
  void *__s;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  
  sVar6 = ((ulong)param_1 + (ulong)param_1 * 2) * 8;
  __dest = malloc(sVar6);
  memcpy(__dest,param_2,sVar6);
  sVar6 = (ulong)param_1 << 2;
  __s = malloc(sVar6);
  memset(__s,0xff,sVar6);
  iVar4 = param_4 * 3;
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    do {
      while( true ) {
        uVar2 = *param_5;
        uVar3 = *(uint *)((long)__s + (ulong)uVar2 * 4);
        if (uVar3 != 0xffffffff) break;
        *param_6 = uVar5;
        *(uint *)((long)__s + (ulong)uVar2 * 4) = uVar5;
        uVar5 = uVar5 + 1;
        pdVar1 = (double *)((long)__dest + (ulong)(uVar2 * 3) * 8);
        *param_3 = *pdVar1;
        param_3[1] = pdVar1[1];
        param_3[2] = pdVar1[2];
        param_3 = param_3 + 3;
        iVar4 = iVar4 + -1;
        param_6 = param_6 + 1;
        param_5 = param_5 + 1;
        if (iVar4 == 0) goto LAB_00ec09e0;
      }
      *param_6 = uVar3;
      iVar4 = iVar4 + -1;
      param_6 = param_6 + 1;
      param_5 = param_5 + 1;
    } while (iVar4 != 0);
  }
LAB_00ec09e0:
  free(__dest);
  free(__s);
  return uVar5;
}


