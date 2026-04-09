// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateFromAudioSource
// Entry Point: 00a4e844
// Size: 816 bytes
// Signature: undefined updateFromAudioSource(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AudioSourceSample::updateFromAudioSource() */

void AudioSourceSample::updateFromAudioSource(void)

{
  bool bVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  long in_x0;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  float *pfVar14;
  ulong uVar15;
  float *pfVar16;
  undefined4 uVar17;
  ulong uVar18;
  long *plVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  
  if ((*(uint *)(in_x0 + 0x78) >> 4 & 1) == 0) {
    return;
  }
  if (*(int *)(in_x0 + 0x88) < 0) {
    return;
  }
  if ((*(uint *)(in_x0 + 0x78) >> 3 & 1) != 0) {
    return;
  }
  if ((*(uint *)(in_x0 + 0xb0) < 2) && (*(float *)(in_x0 + 0x80) <= 0.0)) {
    return;
  }
  lVar11 = (ulong)*(uint *)(in_x0 + 0xac) * 0x38;
  lVar13 = in_x0 + lVar11 + 0xb4;
  if (1 < *(uint *)(in_x0 + 0xb0)) {
    lVar13 = *(long *)(in_x0 + 0xf0) + lVar11;
  }
  if (*(long **)(lVar13 + 0x30) != (long *)0x0) {
    lVar11 = *(long *)(lVar13 + 0x28);
    bVar9 = (**(code **)(**(long **)(lVar13 + 0x30) + 0x18))();
    if ((lVar11 == 0) || ((bVar9 & 1) == 0)) {
      if ((lVar11 == 0 & bVar9) != 0) {
        return;
      }
    }
    else if (*(char *)(*(long *)(lVar13 + 0x28) + 0x6a) == '\0') {
      return;
    }
  }
  puVar5 = (uint *)(in_x0 + 0xb0) + (ulong)*(uint *)(in_x0 + 0xac) * 0xe + 1;
  if (1 < *(uint *)(in_x0 + 0xb0)) {
    puVar5 = (uint *)(*(long *)(in_x0 + 0xf0) + (ulong)*(uint *)(in_x0 + 0xac) * 0x38);
  }
  if (*(long **)(puVar5 + 0xc) != (long *)0x0) {
    (**(code **)(**(long **)(puVar5 + 0xc) + 0x40))(0,0);
  }
  if (*(int *)(in_x0 + 0x88) != 0) {
    iVar7 = *(int *)(in_x0 + 0x88) + -1;
    if (iVar7 == 0) {
      iVar7 = -1;
    }
    *(int *)(in_x0 + 0x88) = iVar7;
    if (iVar7 < 0) {
      return;
    }
  }
  fVar24 = *(float *)(in_x0 + 0x7c);
  fVar23 = *(float *)(in_x0 + 0x80);
  fVar20 = fVar23;
  if (fVar24 <= fVar23) {
    fVar20 = fVar24;
  }
  if (fVar23 <= fVar24) {
    fVar23 = fVar24;
  }
  fVar20 = (float)MathUtil::getRandomMinMax(fVar20,fVar23);
  *(float *)(in_x0 + 0x98) = fVar20 * 1000.0;
  if ((*(byte *)(in_x0 + 0x78) >> 2 & 1) == 0) {
    uVar6 = *(uint *)(in_x0 + 0xb0);
    uVar10 = *(int *)(in_x0 + 0xac) + 1;
    uVar8 = 0;
    if (uVar6 != 0) {
      uVar8 = uVar10 / uVar6;
    }
    uVar10 = uVar10 - uVar8 * uVar6;
    goto LAB_00a4eaac;
  }
  uVar10 = *(uint *)(in_x0 + 0xb0);
  uVar18 = (ulong)uVar10;
  if (uVar10 == 0) {
    fVar20 = 0.0;
  }
  else {
    if (uVar10 == 1) {
      fVar20 = 0.0;
      uVar12 = 0;
    }
    else {
      uVar12 = uVar18 & 0xfffffffe;
      fVar20 = 0.0;
      pfVar14 = (float *)(in_x0 + 0xec);
      uVar15 = uVar12;
      pfVar16 = *(float **)(in_x0 + 0xf0);
      do {
        pfVar4 = pfVar14 + -0xe;
        if (1 < uVar10) {
          pfVar4 = pfVar16;
        }
        pfVar2 = pfVar16 + 0xe;
        pfVar16 = pfVar16 + 0x1c;
        pfVar3 = pfVar14;
        if (1 < uVar10) {
          pfVar3 = pfVar2;
        }
        pfVar14 = pfVar14 + 0x1c;
        uVar15 = uVar15 - 2;
        fVar20 = fVar20 + *pfVar4 + *pfVar3;
      } while (uVar15 != 0);
      if (uVar12 == uVar18) goto LAB_00a4ea54;
    }
    lVar13 = uVar18 - uVar12;
    pfVar16 = *(float **)(in_x0 + 0xf0) + uVar12 * 0xe;
    pfVar14 = (float *)(uVar12 * 0x38 + in_x0 + 0xb4);
    do {
      pfVar4 = pfVar14;
      if (1 < uVar10) {
        pfVar4 = pfVar16;
      }
      lVar13 = lVar13 + -1;
      pfVar16 = pfVar16 + 0xe;
      pfVar14 = pfVar14 + 0xe;
      fVar20 = fVar20 + *pfVar4;
    } while (lVar13 != 0);
  }
LAB_00a4ea54:
  fVar23 = (float)MathUtil::getRandom();
  uVar10 = uVar10 - 1;
  if (uVar10 != 0) {
    fVar24 = 0.0;
    uVar18 = 0;
    pfVar16 = *(float **)(in_x0 + 0xf0);
    pfVar14 = (float *)(in_x0 + 0xb4);
    do {
      pfVar4 = pfVar14;
      if (1 < *(uint *)(in_x0 + 0xb0)) {
        pfVar4 = pfVar16;
      }
      fVar24 = fVar24 + *pfVar4;
      if (fVar20 * fVar23 <= fVar24) {
        uVar10 = (uint)uVar18;
        break;
      }
      uVar18 = uVar18 + 1;
      pfVar16 = pfVar16 + 0xe;
      pfVar14 = pfVar14 + 0xe;
    } while (uVar10 != uVar18);
  }
LAB_00a4eaac:
  *(uint *)(in_x0 + 0xac) = uVar10;
  uVar21 = Sample::getVolume();
  if (*(char *)(in_x0 + 0x30) != '\0') {
    puVar5 = (uint *)(in_x0 + 0xb0) + (ulong)*(uint *)(in_x0 + 0xac) * 0xe + 1;
    if (1 < *(uint *)(in_x0 + 0xb0)) {
      puVar5 = (uint *)(*(long *)(in_x0 + 0xf0) + (ulong)*(uint *)(in_x0 + 0xac) * 0x38);
    }
    if (*(long *)(puVar5 + 0xc) != 0) {
      uVar25 = *(undefined4 *)(in_x0 + 0x98);
      if (*(long *)(puVar5 + 10) != 0) {
        LoopSynthesisGenerator::setStart
                  ((LoopSynthesisGenerator *)(*(long *)(puVar5 + 10) + 0x10),0.0);
      }
      uVar17 = *(undefined4 *)(in_x0 + 0x88);
      if (((*(byte *)(in_x0 + 0x78) >> 3 & 1) == 0) &&
         (bVar1 = 0.0 < *(float *)(in_x0 + 0x80),
         (bVar1 || *(int *)(in_x0 + 0xb0) != 0) && (bVar1 || *(int *)(in_x0 + 0xb0) != 1))) {
        uVar17 = 1;
      }
      plVar19 = *(long **)(puVar5 + 0xc);
      uVar22 = Sample::getPitch();
                    /* WARNING: Could not recover jumptable at 0x00a4eb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar19 + 0x10))(uVar21,uVar22,0,uVar25,plVar19,uVar17,0);
      return;
    }
  }
  return;
}


