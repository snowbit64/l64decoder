// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDisabledGrainsFromWavIdx
// Entry Point: 008a493c
// Size: 296 bytes
// Signature: undefined __thiscall setDisabledGrainsFromWavIdx(GranularSynthesisRuntimeSettings * this, vector * param_1)


/* GranularSynthesisRuntimeSettings::setDisabledGrainsFromWavIdx(std::__ndk1::vector<int,
   std::__ndk1::allocator<int> > const&) */

void __thiscall
GranularSynthesisRuntimeSettings::setDisabledGrainsFromWavIdx
          (GranularSynthesisRuntimeSettings *this,vector *param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  undefined *puVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  
  lVar1 = *(long *)(this + 0x30);
  lVar7 = *(long *)(this + 0x38);
  if (lVar7 - lVar1 == 0) {
    iVar10 = -1;
    lVar9 = lVar1;
    goto LAB_008a49c4;
  }
  uVar6 = lVar7 - lVar1 >> 4;
  if (uVar6 < 2) {
    uVar6 = 1;
  }
  if (uVar6 < 2) {
    uVar8 = 0;
LAB_008a4998:
    lVar7 = uVar6 - uVar8;
    puVar11 = (undefined *)(lVar1 + uVar8 * 0x10 + 0xc);
    do {
      lVar7 = lVar7 + -1;
      *puVar11 = 1;
      puVar11 = puVar11 + 0x10;
    } while (lVar7 != 0);
  }
  else {
    uVar8 = uVar6 & 0xfffffffffffffffe;
    puVar11 = (undefined *)(lVar1 + 0x1c);
    uVar12 = uVar8;
    do {
      uVar12 = uVar12 - 2;
      puVar11[-0x10] = 1;
      *puVar11 = 1;
      puVar11 = puVar11 + 0x20;
    } while (uVar12 != 0);
    if (uVar6 != uVar8) goto LAB_008a4998;
  }
  lVar7 = *(long *)(this + 0x38);
  iVar10 = (int)((ulong)(lVar7 - *(long *)(this + 0x30)) >> 4) + -1;
  lVar9 = *(long *)(this + 0x30);
LAB_008a49c4:
  lVar2 = *(long *)param_1;
  lVar5 = *(long *)(param_1 + 8) - lVar2;
  if (lVar5 != 0) {
    uVar12 = lVar5 >> 2;
    uVar6 = 0;
    if (uVar12 < 2) {
      uVar12 = 1;
    }
    do {
      if (lVar9 != lVar7) {
        uVar3 = *(uint *)(lVar2 + uVar6 * 4);
        uVar13 = 0;
        iVar15 = iVar10;
        do {
          while( true ) {
            uVar14 = uVar13;
            if (iVar15 <= (int)uVar13) goto LAB_008a4a50;
            iVar4 = iVar15 - uVar13;
            if (iVar4 < 0) {
              iVar4 = iVar4 + 1;
            }
            uVar14 = uVar13 + (iVar4 >> 1);
            if (*(uint *)(lVar9 + (-(ulong)(uVar14 >> 0x1f) & 0xfffffff000000000 |
                                  (ulong)uVar14 << 4)) <= uVar3) break;
            iVar15 = uVar14 - 1;
          }
          uVar13 = uVar14 + 1;
        } while (*(uint *)(lVar9 + (long)(int)uVar14 * 0x10 + 4) < uVar3);
LAB_008a4a50:
        if (-1 < (int)uVar14) {
          *(undefined *)(lVar1 + (ulong)uVar14 * 0x10 + 0xc) = 0;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar12);
  }
  return;
}


