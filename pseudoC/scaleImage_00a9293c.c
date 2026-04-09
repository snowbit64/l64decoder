// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: scaleImage
// Entry Point: 00a9293c
// Size: 476 bytes
// Signature: undefined __thiscall scaleImage(ImageScale * this, uchar * param_1, uint param_2, uint param_3, uint param_4, uchar * param_5, uint param_6, uint param_7, uint param_8, _func_double_double * param_9, double param_10)


/* ImageScale::scaleImage(unsigned char const*, unsigned int, unsigned int, unsigned int, unsigned
   char*, unsigned int, unsigned int, unsigned int, double (*)(double), double) */

void __thiscall
ImageScale::scaleImage
          (ImageScale *this,uchar *param_1,uint param_2,uint param_3,uint param_4,uchar *param_5,
          uint param_6,uint param_7,uint param_8,_func_double_double *param_9,double param_10)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  
  *(_func_double_double **)(this + 0x18) = param_9;
  *(uchar **)this = param_1;
  *(uint *)(this + 8) = param_2;
  *(uint *)(this + 0xc) = param_3;
  uVar2 = param_7 * param_4;
  if (param_6 != 0) {
    uVar2 = param_6;
  }
  *(uint *)(this + 0x10) = param_4;
  dVar9 = (double)NEON_fminnm((double)(ulong)param_7 / (double)(ulong)param_2,0x3ff0000000000000);
  dVar10 = (double)NEON_fminnm((double)(ulong)param_8 / (double)(ulong)param_3,0x3ff0000000000000);
  *(double *)(this + 0x30) = dVar9;
  *(double *)(this + 0x38) = dVar10;
  uVar6 = (ulong)((int)(param_10 / dVar9) << 1 | 1);
  *(double *)(this + 0x20) = param_10 / dVar9;
  *(double *)(this + 0x28) = param_10 / dVar10;
  uVar8 = (ulong)((int)(param_10 / dVar10) << 1 | 1);
  pvVar3 = operator_new__(uVar6 << 2);
  *(void **)(this + 0x40) = pvVar3;
  pvVar4 = operator_new__(uVar8 << 2);
  *(void **)(this + 0x48) = pvVar4;
  pvVar4 = operator_new__(uVar6 << 3);
  *(void **)(this + 0x50) = pvVar4;
  pvVar4 = operator_new__(uVar8 << 3);
  *(void **)(this + 0x58) = pvVar4;
  if (param_8 != 0) {
    dVar9 = 0.0;
    uVar5 = 0;
    uVar7 = 0;
    do {
      if (param_7 != 0) {
        dVar10 = 0.0;
        uVar6 = (ulong)param_7;
        uVar1 = uVar5;
        do {
          setFilteredPixel(this,param_5 + uVar1,dVar10,dVar9);
          dVar10 = (double)(ulong)param_2 / (double)(ulong)param_7 + dVar10;
          uVar1 = uVar1 + param_4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      dVar9 = (double)(ulong)param_3 / (double)(ulong)param_8 + dVar9;
      uVar7 = uVar7 + 1;
      uVar5 = uVar5 + uVar2;
    } while (uVar7 != param_8);
    pvVar3 = *(void **)(this + 0x40);
    if (pvVar3 == (void *)0x0) goto LAB_00a92aa8;
  }
  operator_delete__(pvVar3);
LAB_00a92aa8:
  if (*(void **)(this + 0x48) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x48));
  }
  if (*(void **)(this + 0x50) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x50));
  }
  if (*(void **)(this + 0x58) == (void *)0x0) {
    return;
  }
  operator_delete__(*(void **)(this + 0x58));
  return;
}


