// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: chooseNextRandomGrain
// Entry Point: 008ba254
// Size: 400 bytes
// Signature: undefined __thiscall chooseNextRandomGrain(GranularSynthesisSoundGenerator * this, int param_1, int param_2)


/* GranularSynthesisSoundGenerator::chooseNextRandomGrain(int, int) */

ulong __thiscall
GranularSynthesisSoundGenerator::chooseNextRandomGrain
          (GranularSynthesisSoundGenerator *this,int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  GranularSynthesisSoundGenerator *pGVar5;
  byte *pbVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  
  lVar16 = *(long *)(this + 0x20);
  uVar15 = (ulong)(uint)param_1;
  lVar10 = *(long *)(lVar16 + 0x30);
  uVar1 = param_1 - param_2 & (param_1 - param_2 >> 0x1f ^ 0xffffffffU);
  uVar17 = (ulong)uVar1;
  uVar7 = (uint)((ulong)(*(long *)(lVar16 + 0x38) - lVar10) >> 4);
  if (param_1 + param_2 + 1U <= uVar7) {
    uVar7 = param_1 + param_2 + 1;
  }
  if (uVar7 <= uVar1) {
    return uVar15;
  }
  uVar11 = uVar7 - uVar17;
  if (uVar11 < 2) {
    iVar13 = 0;
    uVar9 = uVar17;
  }
  else {
    uVar12 = uVar11 & 0xfffffffffffffffe;
    iVar4 = 0;
    iVar13 = 0;
    uVar9 = uVar12 + uVar17;
    lVar8 = *(uint *)(this + 0x18) - uVar17;
    pbVar6 = (byte *)(lVar10 + uVar17 * 0x10 + 0x1c);
    pGVar5 = this;
    uVar14 = uVar12;
    do {
      uVar3 = (uint)pGVar5;
      if (lVar8 != 0) {
        uVar3 = (uint)pbVar6[-0x10];
      }
      if (lVar8 != 1) {
        param_1 = (int)*pbVar6;
      }
      param_1 = param_1 & 0xff;
      uVar2 = 0;
      if (lVar8 != 0) {
        uVar2 = uVar3 & 0xff;
      }
      iVar4 = iVar4 + uVar2;
      uVar3 = 0;
      if (lVar8 != 1) {
        uVar3 = param_1;
      }
      pGVar5 = (GranularSynthesisSoundGenerator *)(ulong)uVar3;
      uVar14 = uVar14 - 2;
      iVar13 = iVar13 + uVar3;
      lVar8 = lVar8 + -2;
      pbVar6 = pbVar6 + 0x20;
    } while (uVar14 != 0);
    iVar13 = iVar13 + iVar4;
    if (uVar11 == uVar12) goto LAB_008ba334;
  }
  lVar8 = *(uint *)(this + 0x18) - uVar9;
  pbVar6 = (byte *)(lVar10 + uVar9 * 0x10 + 0xc);
  lVar10 = uVar7 - uVar9;
  do {
    if (lVar8 != 0) {
      iVar13 = iVar13 + (uint)*pbVar6;
    }
    lVar8 = lVar8 + -1;
    pbVar6 = pbVar6 + 0x10;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
LAB_008ba334:
  if ((iVar13 != 0) && (iVar4 = AudioMathUtil::generateRandomNumber(0,iVar13 + -1), uVar1 < uVar7))
  {
    iVar13 = 0;
    uVar11 = uVar17 << 4 | 0xc;
    do {
      if ((*(uint *)(this + 0x18) != uVar17) &&
         (*(char *)(*(long *)(lVar16 + 0x30) + uVar11) != '\0')) {
        if (iVar13 == iVar4) {
          return uVar17 & 0xffffffff;
        }
        iVar13 = iVar13 + 1;
      }
      uVar17 = uVar17 + 1;
      uVar11 = uVar11 + 0x10;
    } while (uVar7 != (uint)uVar17);
  }
  return uVar15;
}


