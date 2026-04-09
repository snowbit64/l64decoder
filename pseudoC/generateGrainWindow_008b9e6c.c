// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: generateGrainWindow
// Entry Point: 008b9e6c
// Size: 1000 bytes
// Signature: undefined __thiscall generateGrainWindow(GranularSynthesisSoundGenerator * this, uint param_1, uint param_2, float * param_3, uint * param_4)


/* GranularSynthesisSoundGenerator::generateGrainWindow(unsigned int, unsigned int, float*, unsigned
   int&) */

void __thiscall
GranularSynthesisSoundGenerator::generateGrainWindow
          (GranularSynthesisSoundGenerator *this,uint param_1,uint param_2,float *param_3,
          uint *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  GranularSynthesisSoundGenerator *pGVar6;
  short *psVar7;
  short *psVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  float *pfVar19;
  int iVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int local_b0 [2];
  int local_a8 [2];
  int local_a0 [2];
  long local_98;
  
  lVar9 = tpidr_el0;
  local_98 = *(long *)(lVar9 + 0x28);
  uVar2 = *(uint *)(this + 0x18);
  if ((uVar2 == 0xffffffff) || (*(int *)(this + 0x14) == -1)) {
    uVar2 = *(uint *)(this + 0x10);
    *(uint *)(this + 0x14) = uVar2;
    *(uint *)(this + 0x18) = uVar2;
    iVar20 = *(int *)(this + 0x10);
  }
  else {
    iVar20 = *(int *)(this + 0x10);
  }
  if (param_1 == 0) {
    *(int *)(this + 0x18) = iVar20;
    GranularSynthesisRuntimeSettings::getSamplesValuesFromGrainIdx
              (*(GranularSynthesisRuntimeSettings **)(this + 0x20),iVar20,param_3,param_4);
    lVar9 = *(long *)(lVar9 + 0x28);
    goto LAB_008ba1e4;
  }
  lVar18 = *(long *)(this + 0x20);
  lVar11 = *(long *)(lVar18 + 0x30);
  uVar3 = iVar20 - param_1 & ((int)(iVar20 - param_1) >> 0x1f ^ 0xffffffffU);
  uVar21 = (ulong)uVar3;
  uVar4 = (uint)((ulong)(*(long *)(lVar18 + 0x38) - lVar11) >> 4);
  if (param_1 + iVar20 + 1 <= uVar4) {
    uVar4 = param_1 + iVar20 + 1;
  }
  if (uVar3 < uVar4) {
    uVar13 = uVar4 - uVar21;
    if (uVar13 < 2) {
      iVar1 = 0;
      uVar12 = uVar21;
LAB_008ba21c:
      lVar14 = uVar4 - uVar12;
      pbVar10 = (byte *)(lVar11 + uVar12 * 0x10 + 0xc);
      lVar11 = uVar2 - uVar12;
      do {
        if (lVar11 != 0) {
          iVar1 = iVar1 + (uint)*pbVar10;
        }
        lVar14 = lVar14 + -1;
        pbVar10 = pbVar10 + 0x10;
        lVar11 = lVar11 + -1;
      } while (lVar14 != 0);
    }
    else {
      uVar15 = uVar13 & 0xfffffffffffffffe;
      iVar16 = 0;
      iVar1 = 0;
      uVar12 = uVar15 + uVar21;
      lVar14 = uVar2 - uVar21;
      pbVar10 = (byte *)(lVar11 + uVar21 * 0x10 + 0x1c);
      pGVar6 = this;
      uVar17 = uVar15;
      do {
        uVar3 = (uint)pGVar6;
        if (lVar14 != 0) {
          uVar3 = (uint)pbVar10[-0x10];
        }
        if (lVar14 != 1) {
          param_1 = (uint)*pbVar10;
        }
        param_1 = param_1 & 0xff;
        uVar5 = 0;
        if (lVar14 != 0) {
          uVar5 = uVar3 & 0xff;
        }
        iVar16 = iVar16 + uVar5;
        uVar3 = 0;
        if (lVar14 != 1) {
          uVar3 = param_1;
        }
        pGVar6 = (GranularSynthesisSoundGenerator *)(ulong)uVar3;
        uVar17 = uVar17 - 2;
        iVar1 = iVar1 + uVar3;
        lVar14 = lVar14 + -2;
        pbVar10 = pbVar10 + 0x20;
      } while (uVar17 != 0);
      iVar1 = iVar1 + iVar16;
      if (uVar13 != uVar15) goto LAB_008ba21c;
    }
    if (iVar1 != 0) {
      iVar1 = AudioMathUtil::generateRandomNumber(0,iVar1 + -1);
      iVar16 = 0;
      uVar13 = uVar21 << 4 | 0xc;
      do {
        if ((*(uint *)(this + 0x18) != uVar21) &&
           (*(char *)(*(long *)(lVar18 + 0x30) + uVar13) != '\0')) {
          if (iVar16 == iVar1) {
            iVar20 = (int)uVar21;
            break;
          }
          iVar16 = iVar16 + 1;
        }
        uVar21 = uVar21 + 1;
        uVar13 = uVar13 + 0x10;
      } while (uVar4 != (uint)uVar21);
    }
  }
  uVar2 = GranularSynthesisRuntimeSettings::getNumSamplesFromGrain
                    (*(GranularSynthesisRuntimeSettings **)(this + 0x20),*(int *)(this + 0x14));
  uVar3 = GranularSynthesisRuntimeSettings::getNumSamplesFromGrain
                    (*(GranularSynthesisRuntimeSettings **)(this + 0x20),*(int *)(this + 0x18));
  psVar7 = (short *)GranularSynthesisRuntimeSettings::getSamplesValuesFromGrainIdx
                              (*(GranularSynthesisRuntimeSettings **)(this + 0x20),
                               *(int *)(this + 0x18));
  iVar16 = iVar20;
  if (iVar20 < 2) {
    iVar16 = 1;
  }
  fVar22 = (float)NEON_fmin((float)(ulong)uVar3 / (float)(ulong)uVar2,0x49000000);
  uVar4 = GranularSynthesisRuntimeSettings::getNumSamplesFromGrain
                    (*(GranularSynthesisRuntimeSettings **)(this + 0x20),*(int *)(this + 0x10));
  uVar5 = GranularSynthesisRuntimeSettings::getNumSamplesFromGrain
                    (*(GranularSynthesisRuntimeSettings **)(this + 0x20),iVar16 + -1);
  psVar8 = (short *)GranularSynthesisRuntimeSettings::getSamplesValuesFromGrainIdx
                              (*(GranularSynthesisRuntimeSettings **)(this + 0x20),iVar16 + -1);
  local_a0[0] = (uVar2 - param_2) * (int)(fVar22 * 8192.0);
  fVar23 = (float)NEON_fmin((float)(ulong)uVar5 / (float)(ulong)uVar4,0x49000000);
  local_a8[0] = (uVar4 - param_2) * (int)(fVar23 * 8192.0);
  if (param_2 != 0) {
    fVar26 = 1.0;
    fVar28 = 0.0;
    uVar21 = (ulong)param_2;
    fVar27 = 1.0 / ((float)(ulong)param_2 + -1.0);
    pfVar19 = param_3;
    do {
      uVar24 = AudioMathUtil::lerpFixedPoint(psVar7,uVar3,(FixedPoint *)local_a0);
      fVar25 = (float)AudioMathUtil::lerpFixedPoint(psVar8,uVar5,(FixedPoint *)local_a8);
      fVar25 = fVar28 * fVar25;
      fVar28 = fVar27 + fVar28;
      uVar21 = uVar21 - 1;
      local_a0[0] = local_a0[0] + (int)(fVar22 * 8192.0);
      fVar25 = (float)NEON_fmadd(uVar24,fVar26,fVar25);
      fVar26 = fVar26 - fVar27;
      local_a8[0] = local_a8[0] + (int)(fVar23 * 8192.0);
      *pfVar19 = fVar25;
      pfVar19 = pfVar19 + 1;
    } while (uVar21 != 0);
  }
  uVar2 = GranularSynthesisRuntimeSettings::getNumSamplesFromGrain
                    (*(GranularSynthesisRuntimeSettings **)(this + 0x20),iVar20);
  psVar7 = (short *)GranularSynthesisRuntimeSettings::getSamplesValuesFromGrainIdx
                              (*(GranularSynthesisRuntimeSettings **)(this + 0x20),iVar20);
  local_b0[0] = 0;
  iVar16 = uVar4 - param_2;
  if (param_2 <= uVar4 && iVar16 != 0) {
    fVar22 = (float)NEON_fmin((float)(ulong)uVar2 / (float)(ulong)uVar4,0x49000000);
    pfVar19 = param_3 + param_2;
    do {
      fVar23 = (float)AudioMathUtil::lerpFixedPoint(psVar7,uVar2,(FixedPoint *)local_b0);
      iVar16 = iVar16 + -1;
      *pfVar19 = fVar23;
      local_b0[0] = local_b0[0] + (int)(fVar22 * 8192.0);
      pfVar19 = pfVar19 + 1;
    } while (iVar16 != 0);
  }
  *param_4 = uVar4;
  *(int *)(this + 0x18) = iVar20;
  lVar9 = *(long *)(lVar9 + 0x28);
LAB_008ba1e4:
  if (lVar9 != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


