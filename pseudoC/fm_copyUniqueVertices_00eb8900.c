// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_copyUniqueVertices
// Entry Point: 00eb8900
// Size: 260 bytes
// Signature: undefined __cdecl fm_copyUniqueVertices(uint param_1, float * param_2, float * param_3, uint param_4, uint * param_5, uint * param_6)


/* FLOAT_MATH::fm_copyUniqueVertices(unsigned int, float const*, float*, unsigned int, unsigned int
   const*, unsigned int*) */

uint FLOAT_MATH::fm_copyUniqueVertices
               (uint param_1,float *param_2,float *param_3,uint param_4,uint *param_5,uint *param_6)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  void *__dest;
  void *__s;
  int iVar4;
  uint uVar5;
  size_t __size;
  size_t __size_00;
  
  __size_00 = ((ulong)param_1 + (ulong)param_1 * 2) * 4;
  __size = (ulong)param_1 << 2;
  __dest = malloc(__size_00);
  memcpy(__dest,param_2,__size_00);
  __s = malloc(__size);
  memset(__s,0xff,__size);
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
        pfVar1 = (float *)((long)__dest + (ulong)(uVar2 * 3) * 4);
        *param_3 = *pfVar1;
        param_3[1] = pfVar1[1];
        param_3[2] = pfVar1[2];
        param_3 = param_3 + 3;
        iVar4 = iVar4 + -1;
        param_6 = param_6 + 1;
        param_5 = param_5 + 1;
        if (iVar4 == 0) goto LAB_00eb89d8;
      }
      *param_6 = uVar3;
      iVar4 = iVar4 + -1;
      param_6 = param_6 + 1;
      param_5 = param_5 + 1;
    } while (iVar4 != 0);
  }
LAB_00eb89d8:
  free(__dest);
  free(__s);
  return uVar5;
}


