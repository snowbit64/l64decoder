// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeTile
// Entry Point: 00dd0788
// Size: 1556 bytes
// Signature: undefined __thiscall removeTile(dtNavMesh * this, uint param_1, uchar * * param_2, int * param_3)


/* dtNavMesh::removeTile(unsigned int, unsigned char**, int*) */

void __thiscall dtNavMesh::removeTile(dtNavMesh *this,uint param_1,uchar **param_2,int *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  long *plVar19;
  uint *puVar20;
  uint *puVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  uint *puVar25;
  long lVar26;
  long lVar27;
  undefined4 *puVar28;
  uint uVar29;
  long lVar30;
  uint *local_170 [32];
  long local_70;
  
  lVar7 = tpidr_el0;
  uVar9 = 0x80000008;
  local_70 = *(long *)(lVar7 + 0x28);
  if (param_1 == 0) goto LAB_00dd0d68;
  uVar18 = param_1 >> ((ulong)*(uint *)(this + 0x60) & 0x3f) &
           ~(-1 << (ulong)(*(uint *)(this + 0x5c) & 0x1f));
  uVar12 = (ulong)uVar18;
  if (*(int *)(this + 0x30) <= (int)uVar18) goto LAB_00dd0d68;
  lVar26 = *(long *)(this + 0x50);
  puVar25 = (uint *)(lVar26 + uVar12 * 0x68);
  if (*puVar25 !=
      (param_1 >> (ulong)(*(uint *)(this + 0x60) + *(uint *)(this + 0x5c) & 0x1f) &
      (-1 << (ulong)(*(uint *)(this + 0x58) & 0x1f) ^ 0xffffffffU))) goto LAB_00dd0d68;
  uVar4 = *(uint *)(this + 0x38);
  plVar19 = (long *)(lVar26 + uVar12 * 0x68 + 8);
  lVar14 = *plVar19;
  iVar16 = *(int *)(lVar14 + 8);
  iVar8 = *(int *)(lVar14 + 0xc);
  uVar18 = iVar16 * -0x72594cbd + iVar8 * -0x27e9c7bf & uVar4;
  lVar15 = *(long *)(this + 0x40);
  puVar20 = *(uint **)(lVar15 + (long)(int)uVar18 * 8);
  if (puVar20 == (uint *)0x0) {
LAB_00dd089c:
    puVar20 = *(uint **)(lVar15 + (long)(int)uVar18 * 8);
  }
  else {
    if (puVar20 == puVar25) {
      uVar9 = *(undefined8 *)(lVar26 + uVar12 * 0x68 + 0x60);
    }
    else {
      do {
        puVar21 = puVar20;
        puVar20 = *(uint **)(puVar21 + 0x18);
        if (puVar20 == (uint *)0x0) goto LAB_00dd089c;
      } while (puVar20 != puVar25);
      uVar9 = *(undefined8 *)(lVar26 + uVar12 * 0x68 + 0x60);
      if (puVar21 != (uint *)0x0) {
        *(undefined8 *)(puVar21 + 0x18) = uVar9;
        goto LAB_00dd089c;
      }
    }
    *(undefined8 *)(lVar15 + (long)(int)uVar18 * 8) = uVar9;
    lVar14 = *plVar19;
    iVar16 = *(int *)(lVar14 + 8);
    iVar8 = *(int *)(lVar14 + 0xc);
    lVar15 = *(long *)(this + 0x40);
    puVar20 = *(uint **)(lVar15 + (long)(int)(iVar16 * -0x72594cbd + iVar8 * -0x27e9c7bf & uVar4) *
                                  8);
  }
  if (puVar20 != (uint *)0x0) {
    uVar18 = 0;
    do {
      lVar22 = *(long *)(puVar20 + 2);
      if ((((lVar22 != 0) && (*(int *)(lVar22 + 8) == iVar16)) && (*(int *)(lVar22 + 0xc) == iVar8))
         && ((int)uVar18 < 0x20)) {
        local_170[(int)uVar18] = puVar20;
        uVar18 = uVar18 + 1;
      }
      puVar20 = *(uint **)(puVar20 + 0x18);
    } while (puVar20 != (uint *)0x0);
    if ((0 < (int)uVar18) && (lVar26 != 0)) {
      lVar22 = *(long *)(this + 0x50);
      uVar17 = 0;
      do {
        puVar20 = local_170[uVar17];
        if ((puVar20 != puVar25 && puVar20 != (uint *)0x0) &&
           (uVar4 = *(uint *)(*(long *)(puVar20 + 2) + 0x18), 0 < (int)uVar4)) {
          uVar2 = *(uint *)(this + 0x5c);
          uVar3 = *(uint *)(this + 0x60);
          uVar5 = *puVar25;
          uVar11 = 0;
          lVar13 = *(long *)(puVar20 + 4);
          do {
            puVar21 = (uint *)(lVar13 + uVar11 * 0x20);
            uVar29 = *puVar21;
            if (uVar29 != 0xffffffff) {
              lVar27 = *(long *)(puVar20 + 8);
              uVar23 = 0xffffffff;
              do {
                while ((uVar24 = (ulong)uVar29, *(char *)(lVar27 + (ulong)uVar29 * 0xc + 9) == -1 ||
                       (((*(uint *)(lVar27 + uVar24 * 0xc) ^
                         ((int)((ulong)((long)puVar25 - lVar22) >> 3) * -0x3b13b13b <<
                          (ulong)(uVar3 & 0x1f) | uVar5 << (ulong)(uVar2 + uVar3 & 0x1f))) >>
                         (ulong)(uVar3 & 0x1f) & ~(-1 << (ulong)(uVar2 & 0x1f))) != 0))) {
                  uVar6 = *(uint *)(lVar27 + uVar24 * 0xc + 4);
                  uVar23 = (ulong)uVar29;
                  uVar29 = uVar6;
                  if (uVar6 == 0xffffffff) goto LAB_00dd098c;
                }
                lVar30 = lVar27 + uVar24 * 0xc;
                puVar1 = puVar21;
                if ((int)uVar23 != -1) {
                  puVar1 = (uint *)(lVar27 + uVar23 * 0xc + 4);
                }
                uVar6 = *(uint *)(lVar30 + 4);
                *puVar1 = uVar6;
                *(uint *)(lVar30 + 4) = puVar20[1];
                puVar20[1] = uVar29;
                uVar29 = uVar6;
              } while (uVar6 != 0xffffffff);
            }
LAB_00dd098c:
            uVar11 = uVar11 + 1;
          } while (uVar11 != uVar4);
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar18);
    }
  }
  iVar16 = 0;
  do {
    iVar8 = *(int *)(lVar14 + 8);
    iVar10 = *(int *)(lVar14 + 0xc);
    switch(iVar16) {
    case 0:
      iVar8 = iVar8 + 1;
      break;
    case 1:
      iVar8 = iVar8 + 1;
    case 2:
      iVar10 = iVar10 + 1;
      break;
    case 3:
      iVar8 = iVar8 + -1;
      iVar10 = iVar10 + 1;
      break;
    case 4:
      iVar8 = iVar8 + -1;
      break;
    case 5:
      iVar8 = iVar8 + -1;
    case 6:
switchD_00dd0abc_caseD_6:
      iVar10 = iVar10 + -1;
      break;
    case 7:
      iVar8 = iVar8 + 1;
      goto switchD_00dd0abc_caseD_6;
    }
    puVar20 = *(uint **)(lVar15 + (long)(int)(iVar8 * -0x72594cbd + iVar10 * -0x27e9c7bf &
                                             *(uint *)(this + 0x38)) * 8);
    if (puVar20 != (uint *)0x0) {
      uVar18 = 0;
      do {
        lVar22 = *(long *)(puVar20 + 2);
        if ((((lVar22 != 0) && (*(int *)(lVar22 + 8) == iVar8)) &&
            (*(int *)(lVar22 + 0xc) == iVar10)) && ((int)uVar18 < 0x20)) {
          local_170[(int)uVar18] = puVar20;
          uVar18 = uVar18 + 1;
        }
        puVar20 = *(uint **)(puVar20 + 0x18);
      } while (puVar20 != (uint *)0x0);
      if ((0 < (int)uVar18) && (lVar26 != 0)) {
        lVar22 = *(long *)(this + 0x50);
        uVar17 = 0;
        do {
          puVar20 = local_170[uVar17];
          if ((puVar20 != (uint *)0x0) &&
             (uVar4 = *(uint *)(*(long *)(puVar20 + 2) + 0x18), 0 < (int)uVar4)) {
            uVar2 = *(uint *)(this + 0x5c);
            uVar3 = *(uint *)(this + 0x60);
            uVar5 = *puVar25;
            uVar11 = 0;
            lVar13 = *(long *)(puVar20 + 4);
            do {
              puVar21 = (uint *)(lVar13 + uVar11 * 0x20);
              uVar29 = *puVar21;
              if (uVar29 != 0xffffffff) {
                lVar27 = *(long *)(puVar20 + 8);
                uVar23 = 0xffffffff;
                do {
                  while ((uVar24 = (ulong)uVar29, *(char *)(lVar27 + (ulong)uVar29 * 0xc + 9) == -1
                         || (((*(uint *)(lVar27 + uVar24 * 0xc) ^
                              ((int)((ulong)((long)puVar25 - lVar22) >> 3) * -0x3b13b13b <<
                               (ulong)(uVar3 & 0x1f) | uVar5 << (ulong)(uVar2 + uVar3 & 0x1f))) >>
                              (ulong)(uVar3 & 0x1f) & ~(-1 << (ulong)(uVar2 & 0x1f))) != 0))) {
                    uVar23 = (ulong)uVar29;
                    uVar29 = *(uint *)(lVar27 + uVar24 * 0xc + 4);
                    if (uVar29 == 0xffffffff) goto LAB_00dd0bd8;
                  }
                  lVar30 = lVar27 + uVar24 * 0xc;
                  puVar1 = puVar21;
                  if ((int)uVar23 != -1) {
                    puVar1 = (uint *)(lVar27 + uVar23 * 0xc + 4);
                  }
                  uVar6 = *(uint *)(lVar30 + 4);
                  *puVar1 = uVar6;
                  *(uint *)(lVar30 + 4) = puVar20[1];
                  puVar20[1] = uVar29;
                  uVar29 = uVar6;
                } while (uVar6 != 0xffffffff);
              }
LAB_00dd0bd8:
              uVar11 = uVar11 + 1;
            } while (uVar11 != uVar4);
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 != uVar18);
      }
    }
    iVar16 = iVar16 + 1;
  } while (iVar16 != 8);
  puVar28 = (undefined4 *)(lVar26 + uVar12 * 0x68 + 0x5c);
  if ((*(byte *)puVar28 & 1) == 0) {
    if (param_2 != (uchar **)0x0) {
      *param_2 = *(uchar **)(lVar26 + uVar12 * 0x68 + 0x50);
    }
    if (param_3 != (int *)0x0) {
      iVar16 = *(int *)(lVar26 + uVar12 * 0x68 + 0x58);
LAB_00dd0d08:
      *param_3 = iVar16;
    }
  }
  else {
    lVar14 = lVar26 + uVar12 * 0x68;
    dtFree(*(void **)(lVar14 + 0x50));
    *(undefined8 *)(lVar14 + 0x50) = 0;
    *(undefined4 *)(lVar14 + 0x58) = 0;
    if (param_2 != (uchar **)0x0) {
      *param_2 = (uchar *)0x0;
    }
    if (param_3 != (int *)0x0) {
      iVar16 = 0;
      goto LAB_00dd0d08;
    }
  }
  *puVar28 = 0;
  uVar4 = *puVar25;
  uVar9 = 0x40000000;
  lVar26 = lVar26 + uVar12 * 0x68;
  *(undefined8 *)(lVar26 + 0xc) = 0;
  *(undefined8 *)(lVar26 + 4) = 0;
  *(undefined8 *)(lVar26 + 0x1c) = 0;
  *(undefined8 *)(lVar26 + 0x14) = 0;
  *(undefined8 *)(lVar26 + 0x2c) = 0;
  *(undefined8 *)(lVar26 + 0x24) = 0;
  *(undefined8 *)(lVar26 + 0x3c) = 0;
  *(undefined8 *)(lVar26 + 0x34) = 0;
  *(undefined8 *)(lVar26 + 0x48) = 0;
  *(undefined8 *)(lVar26 + 0x40) = 0;
  uVar2 = -1 << (ulong)(*(uint *)(this + 0x58) & 0x1f);
  uVar18 = uVar4 + 1 & (uVar2 ^ 0xffffffff);
  if ((uVar4 + 1 & (uVar2 ^ 0xffffffff)) == 0) {
    uVar18 = 1;
  }
  *puVar25 = uVar18;
  *(undefined8 *)(lVar26 + 0x60) = *(undefined8 *)(this + 0x48);
  *(uint **)(this + 0x48) = puVar25;
LAB_00dd0d68:
  if (*(long *)(lVar7 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}


