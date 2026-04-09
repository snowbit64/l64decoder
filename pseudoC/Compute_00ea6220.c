// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Compute
// Entry Point: 00ea6220
// Size: 248 bytes
// Signature: undefined __thiscall Compute(VHACD * this, float * param_1, uint param_2, uint * param_3, uint param_4, Parameters * param_5)


/* VHACD::VHACD::Compute(float const*, unsigned int, unsigned int const*, unsigned int,
   VHACD::IVHACD::Parameters const&) */

uint __thiscall
VHACD::VHACD::Compute
          (VHACD *this,float *param_1,uint param_2,uint *param_3,uint param_4,Parameters *param_5)

{
  uint uVar1;
  double *pdVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  float *pfVar6;
  double *pdVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar1 = param_2 * 3;
  uVar9 = (ulong)uVar1;
  pdVar2 = (double *)operator_new__(uVar9 << 3);
  if (uVar1 != 0) {
    if (uVar1 < 8) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar9 & 0xfffffff8;
      puVar5 = (undefined8 *)(param_1 + 4);
      pdVar7 = pdVar2 + 4;
      uVar8 = uVar3;
      do {
        uVar11 = puVar5[-1];
        uVar10 = puVar5[-2];
        uVar13 = puVar5[1];
        uVar12 = *puVar5;
        puVar5 = puVar5 + 4;
        uVar8 = uVar8 - 8;
        pdVar7[-3] = (double)(float)((ulong)uVar10 >> 0x20);
        pdVar7[-4] = (double)(float)uVar10;
        pdVar7[-1] = (double)(float)((ulong)uVar11 >> 0x20);
        pdVar7[-2] = (double)(float)uVar11;
        pdVar7[1] = (double)(float)((ulong)uVar12 >> 0x20);
        *pdVar7 = (double)(float)uVar12;
        pdVar7[3] = (double)(float)((ulong)uVar13 >> 0x20);
        pdVar7[2] = (double)(float)uVar13;
        pdVar7 = pdVar7 + 8;
      } while (uVar8 != 0);
      if (uVar3 == uVar9) goto LAB_00ea62d4;
    }
    lVar4 = uVar9 - uVar3;
    pfVar6 = param_1 + uVar3;
    pdVar7 = pdVar2 + uVar3;
    do {
      lVar4 = lVar4 + -1;
      *pdVar7 = (double)*pfVar6;
      pfVar6 = pfVar6 + 1;
      pdVar7 = pdVar7 + 1;
    } while (lVar4 != 0);
  }
LAB_00ea62d4:
  uVar1 = ComputeACD(this,pdVar2,param_2,param_3,param_4,param_5);
  operator_delete__(pdVar2);
  return uVar1 & 1;
}


