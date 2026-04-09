// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: eraseNonCurrent
// Entry Point: 00a03124
// Size: 364 bytes
// Signature: undefined eraseNonCurrent(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PersistentShadowMap::DividedMap::eraseNonCurrent() */

void PersistentShadowMap::DividedMap::eraseNonCurrent(void)

{
  uint uVar1;
  long in_x0;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong extraout_x15;
  ulong uVar12;
  ulong extraout_x17;
  ulong uVar13;
  void *pvVar14;
  ulong uVar15;
  void **ppvVar16;
  
  if (*(int *)(in_x0 + 0xc) != 0) {
    uVar15 = 0;
    do {
      lVar3 = *(long *)(in_x0 + 0x10);
      ppvVar16 = (void **)(lVar3 + uVar15 * 0x88 + 0x10);
      if (*ppvVar16 == (void *)0x0) {
        plVar6 = (long *)(lVar3 + uVar15 * 0x88 + 0x18);
        if ((*plVar6 != 0) && (*(char *)(lVar3 + uVar15 * 0x88 + 0x30) == '\0')) {
          *plVar6 = 0;
        }
      }
      else {
        eraseNonCurrent();
        pvVar14 = *ppvVar16;
        uVar1 = *(uint *)((long)pvVar14 + 0xc);
        uVar4 = (ulong)uVar1;
        pvVar2 = *(void **)((long)pvVar14 + 0x10);
        if (uVar1 == 0) {
          if (pvVar2 != (void *)0x0) {
LAB_00a03268:
            operator_delete__(pvVar2);
          }
          operator_delete(pvVar14);
        }
        else {
          if (uVar1 == 1) {
            uVar5 = 0;
            iVar7 = 0;
LAB_00a03230:
            lVar3 = uVar4 - uVar5;
            plVar6 = (long *)((long)pvVar2 + uVar5 * 0x88 + 0x18);
            do {
              if ((plVar6[-1] != 0) || (*plVar6 != 0)) {
                iVar7 = iVar7 + 1;
              }
              plVar6 = plVar6 + 0x11;
              lVar3 = lVar3 + -1;
            } while (lVar3 != 0);
          }
          else {
            uVar5 = uVar4 & 0xfffffffe;
            iVar8 = 0;
            iVar7 = 0;
            puVar9 = (ulong *)((long)pvVar2 + 0x98);
            uVar10 = uVar5;
            uVar12 = extraout_x15;
            uVar13 = extraout_x17;
            do {
              if (puVar9[-0x11] == 0) {
                uVar12 = puVar9[-0x10];
              }
              if (*puVar9 == 0) {
                uVar13 = puVar9[1];
              }
              uVar11 = puVar9[-0x11] | uVar12;
              uVar12 = *puVar9 | uVar13;
              puVar9 = puVar9 + 0x22;
              if (uVar11 != 0) {
                iVar8 = iVar8 + 1;
              }
              if (uVar12 != 0) {
                iVar7 = iVar7 + 1;
              }
              uVar10 = uVar10 - 2;
            } while (uVar10 != 0);
            iVar7 = iVar7 + iVar8;
            if (uVar5 != uVar4) goto LAB_00a03230;
          }
          if (iVar7 != 0) goto LAB_00a03154;
          if (pvVar14 != (void *)0x0) goto LAB_00a03268;
        }
        *ppvVar16 = (void *)0x0;
      }
LAB_00a03154:
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(uint *)(in_x0 + 0xc));
  }
  return;
}


