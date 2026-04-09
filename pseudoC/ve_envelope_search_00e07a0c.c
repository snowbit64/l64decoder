// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _ve_envelope_search
// Entry Point: 00e07a0c
// Size: 584 bytes
// Signature: undefined _ve_envelope_search(void)


undefined8 _ve_envelope_search(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  uint uVar19;
  
  piVar15 = **(int ***)(param_1 + 0x88);
  iVar18 = piVar15[2];
  iVar2 = 0;
  if (iVar18 != 0) {
    iVar2 = *(int *)(param_1 + 0x24) / iVar18;
  }
  uVar17 = 0;
  if ((long)iVar18 != 0) {
    uVar17 = *(long *)(piVar15 + 0x40) / (long)iVar18;
  }
  plVar11 = *(long **)(*(long *)(param_1 + 8) + 0x30);
  lVar8 = (long)(iVar2 + 2);
  if (*(long *)(piVar15 + 0x3e) < lVar8) {
    *(long *)(piVar15 + 0x3e) = lVar8;
    pvVar7 = realloc(*(void **)(piVar15 + 0x3c),lVar8 << 2);
    *(void **)(piVar15 + 0x3c) = pvVar7;
  }
  uVar9 = uVar17 & 0xffffffff;
  if ((int)uVar17 < 1) {
    uVar9 = 0;
  }
  uVar17 = (ulong)(int)((long)iVar2 + -4);
  if ((long)uVar9 < (long)uVar17) {
    do {
      iVar18 = 0x18;
      if (piVar15[0x3a] < 0x18) {
        iVar18 = piVar15[0x3a] + 1;
      }
      piVar15[0x3a] = iVar18;
      if (*piVar15 < 1) {
        *(undefined4 *)(*(long *)(piVar15 + 0x3c) + uVar9 * 4 + 8) = 0;
      }
      else {
        lVar16 = 0;
        lVar8 = 0;
        uVar19 = 0;
        do {
          uVar6 = FUN_00e07c54(piVar15,plVar11 + 0x26a,
                               *(long *)(*(long *)(param_1 + 0x10) + lVar8 * 8) +
                               uVar9 * (long)piVar15[2] * 4,piVar15 + 0xe,
                               *(long *)(piVar15 + 0x38) + lVar16);
          uVar19 = uVar6 | uVar19;
          lVar8 = lVar8 + 1;
          lVar16 = lVar16 + 0x3f0;
        } while (lVar8 < *piVar15);
        lVar8 = *(long *)(piVar15 + 0x3c);
        *(undefined4 *)(lVar8 + uVar9 * 4 + 8) = 0;
        if ((uVar19 & 1) != 0) {
          *(undefined8 *)(lVar8 + uVar9 * 4) = 0x100000001;
        }
        if (((uVar19 >> 1 & 1) != 0) && (*(undefined4 *)(lVar8 + uVar9 * 4) = 1, uVar9 != 0)) {
          *(undefined4 *)(lVar8 + uVar9 * 4 + -4) = 1;
        }
        if ((uVar19 >> 2 & 1) != 0) {
          piVar15[0x3a] = -1;
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar17);
  }
  lVar10 = (long)piVar15[2];
  lVar13 = lVar10 * ((long)iVar2 + -4);
  lVar8 = *(long *)(param_1 + 0x40);
  *(long *)(piVar15 + 0x40) = lVar13;
  lVar13 = lVar13 - lVar10;
  lVar12 = plVar11[lVar8];
  lVar14 = *plVar11;
  lVar8 = plVar11[1];
  lVar16 = lVar12 + 3;
  if (-1 < lVar12) {
    lVar16 = lVar12;
  }
  lVar12 = *(long *)(piVar15 + 0x44);
  if (lVar8 < 0) {
    lVar8 = lVar8 + 1;
  }
  lVar1 = lVar14 + 3;
  if (-1 < lVar14) {
    lVar1 = lVar14;
  }
  if (lVar12 < lVar13) {
    lVar14 = *(long *)(param_1 + 0x50);
    do {
      if (lVar14 + (lVar16 >> 2) + (lVar8 >> 1) + (lVar1 >> 2) <= lVar12) {
        return 1;
      }
      lVar3 = 0;
      if (lVar10 != 0) {
        lVar3 = lVar12 / lVar10;
      }
      *(long *)(piVar15 + 0x44) = lVar12;
      bVar5 = *(int *)(*(long *)(piVar15 + 0x3c) + lVar3 * 4) != 0;
      bVar4 = false;
      if (bVar5) {
        bVar4 = lVar12 - lVar14 < 0;
      }
      if ((bVar5 && lVar12 != lVar14) && bVar4 == (bVar5 && SBORROW8(lVar12,lVar14))) {
        *(long *)(piVar15 + 0x42) = lVar12;
        return 0;
      }
      lVar12 = lVar12 + lVar10;
    } while (lVar12 < lVar13);
  }
  return 0xffffffffffffffff;
}


