// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findGrainForDesiredRpm
// Entry Point: 008b9c90
// Size: 476 bytes
// Signature: undefined __cdecl findGrainForDesiredRpm(vector * param_1, RampType * param_2, float param_3)


/* GranularSynthesisSoundGenerator::findGrainForDesiredRpm(std::__ndk1::vector<GranularSynthesisRuntimeSettings::Grain,
   std::__ndk1::allocator<GranularSynthesisRuntimeSettings::Grain> > const&,
   GranularSynthesisRuntimeSettings::RampType const&, float) */

ulong GranularSynthesisSoundGenerator::findGrainForDesiredRpm
                (vector *param_1,RampType *param_2,float param_3)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  char *pcVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  char *pcVar14;
  long lVar15;
  float fVar16;
  
  uVar6 = 0;
  lVar2 = *(long *)param_1;
  uVar9 = *(long *)(param_1 + 8) - lVar2 >> 4;
  iVar8 = (int)uVar9;
  iVar10 = iVar8 + -1;
  if ((*param_2 == 0) && (1 < iVar8)) {
    uVar6 = 0;
    do {
      while( true ) {
        iVar5 = iVar10 + (int)uVar6;
        if (iVar5 < 0) {
          iVar5 = iVar5 + 1;
        }
        uVar13 = iVar5 >> 1;
        fVar16 = *(float *)(lVar2 + (long)(int)uVar13 * 0x10 + 8);
        if (param_3 < fVar16) break;
        if (param_3 <= fVar16) {
          bVar3 = true;
          uVar6 = (ulong)uVar13;
          goto LAB_008b9d6c;
        }
        uVar6 = (ulong)(uVar13 + 1);
        if (iVar10 <= (int)(uVar13 + 1)) goto LAB_008b9cfc;
      }
      iVar10 = uVar13 - 1;
    } while ((int)uVar6 < iVar10);
LAB_008b9cfc:
    bVar3 = false;
  }
  else {
    bVar3 = false;
    if (*param_2 == 1) {
      while (iVar5 = (int)uVar6, iVar5 < iVar10) {
        while( true ) {
          uVar13 = iVar10 + iVar5;
          if ((int)uVar13 < 0) {
            uVar13 = uVar13 + 1;
          }
          uVar1 = (int)uVar13 >> 1;
          fVar16 = *(float *)(lVar2 + (long)(int)uVar1 * 0x10 + 8);
          if (param_3 < fVar16) break;
          if (param_3 <= fVar16) {
            lVar11 = (long)((ulong)uVar13 << 0x20) >> 0x21;
            uVar6 = (ulong)uVar1;
            goto LAB_008b9d80;
          }
          iVar10 = uVar1 - 1;
          if (iVar10 <= iVar5) goto LAB_008b9d6c;
        }
        uVar6 = (ulong)(uVar1 + 1);
      }
    }
  }
LAB_008b9d6c:
  if (bVar3) {
    lVar11 = (long)(int)uVar6;
LAB_008b9d80:
    if (*(char *)(lVar2 + lVar11 * 0x10 + 0xc) != '\0') {
      return uVar6;
    }
  }
  iVar5 = (int)uVar6;
  iVar10 = iVar5;
  if (-1 < iVar5) {
    iVar10 = 0;
  }
  uVar7 = (ulong)(iVar10 - 1);
  uVar12 = uVar6;
  do {
    iVar10 = (int)uVar12;
    if (iVar10 < 1) goto LAB_008b9dc0;
    uVar12 = uVar12 - 1;
  } while (*(char *)(lVar2 + (uVar12 & 0xffffffff) * 0x10 + 0xc) == '\0');
  uVar7 = uVar12 & 0xffffffff;
LAB_008b9dc0:
  pcVar4 = (char *)(lVar2 + (long)iVar5 * 0x10 + 0x1c);
  lVar11 = 1;
  do {
    lVar15 = lVar11;
    pcVar14 = pcVar4;
    if (uVar9 <= (ulong)(iVar5 + lVar15)) break;
    pcVar4 = pcVar14 + 0x10;
    lVar11 = lVar15 + 1;
  } while (*pcVar14 == '\0');
  uVar13 = iVar5 + (int)lVar15;
  if (iVar10 < 1) {
    if (iVar8 <= (int)uVar13) {
      uVar13 = 0;
    }
    uVar7 = (ulong)uVar13;
  }
  else if ((int)uVar13 < iVar8) {
    uVar1 = (uint)uVar7;
    if (ABS(param_3 - *(float *)(pcVar14 + -4)) <=
        ABS(param_3 - *(float *)(lVar2 + uVar7 * 0x10 + 8))) {
      uVar1 = uVar13;
    }
    uVar7 = (ulong)uVar1;
  }
  if (((-1 < iVar5) && (lVar11 = lVar2 + uVar6 * 0x10, *(char *)(lVar11 + 0xc) != '\0')) &&
     (ABS(param_3 - *(float *)(lVar11 + 8)) <
      ABS(param_3 - *(float *)(lVar2 + (long)(int)uVar7 * 0x10 + 8)))) {
    return uVar6;
  }
  return uVar7;
}


