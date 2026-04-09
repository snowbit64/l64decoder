// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deflate
// Entry Point: 00e270e8
// Size: 3576 bytes
// Signature: undefined deflate(void)


ulong deflate(long *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  size_t __n;
  undefined uVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  uint uVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  int iVar17;
  long lVar18;
  long **pplVar19;
  long *plVar20;
  ulong uVar21;
  
  if ((((param_1 == (long *)0x0) || (param_1[8] == 0)) || (param_1[9] == 0)) ||
     ((pplVar19 = (long **)param_1[7], pplVar19 == (long **)0x0 || (*pplVar19 != param_1)))) {
    return 0xfffffffe;
  }
  iVar12 = *(int *)(pplVar19 + 1);
  if (((0x38 < iVar12 - 0x39U) ||
      ((1L << ((ulong)(iVar12 - 0x39U) & 0x3f) & 0x100400400011001U) == 0)) &&
     ((iVar12 != 0x29a && (iVar12 != 0x2a)))) {
    return 0xfffffffe;
  }
  if (5 < param_2) {
    return 0xfffffffe;
  }
  if (((param_1[3] == 0) || ((iVar1 = *(int *)(param_1 + 1), iVar1 != 0 && (*param_1 == 0)))) ||
     ((param_2 != 4 && (iVar12 == 0x29a)))) {
    uVar8 = 0xfffffffe;
    lVar10 = 0x5055a0;
    goto LAB_00e271bc;
  }
  if (*(int *)(param_1 + 4) == 0) {
LAB_00e27554:
    uVar8 = 0xfffffffb;
    lVar10 = 0x4cbac0;
LAB_00e271bc:
    param_1[6] = lVar10;
    return uVar8;
  }
  iVar2 = *(int *)((long)pplVar19 + 0x4c);
  *(uint *)((long)pplVar19 + 0x4c) = param_2;
  if (pplVar19[5] == (long *)0x0) {
    if (iVar1 == 0) {
      iVar17 = -9;
      iVar1 = iVar17;
      if (iVar2 < 5) {
        iVar1 = 0;
      }
      plVar11 = (long *)0x0;
      if (param_2 < 5) {
        iVar17 = 0;
      }
      if ((param_2 != 4) && ((int)(iVar17 + param_2 * 2) <= iVar1 + iVar2 * 2)) goto LAB_00e27554;
    }
    else {
      plVar11 = (long *)0x0;
    }
  }
  else {
    _tr_flush_bits(pplVar19);
    plVar11 = pplVar19[5];
    uVar13 = *(uint *)(param_1 + 4);
    uVar7 = uVar13;
    if ((uint)plVar11 <= uVar13) {
      uVar7 = (uint)plVar11;
    }
    uVar8 = (ulong)uVar7;
    if (uVar7 != 0) {
      memcpy((void *)param_1[3],pplVar19[4],uVar8);
      plVar16 = pplVar19[4];
      plVar11 = pplVar19[5];
      param_1[3] = param_1[3] + uVar8;
      uVar13 = *(int *)(param_1 + 4) - uVar7;
      plVar11 = (long *)((long)plVar11 - uVar8);
      param_1[5] = param_1[5] + uVar8;
      *(uint *)(param_1 + 4) = uVar13;
      pplVar19[4] = (long *)((long)plVar16 + uVar8);
      pplVar19[5] = plVar11;
      if (plVar11 == (long *)0x0) {
        pplVar19[4] = pplVar19[2];
      }
    }
    if (uVar13 == 0) goto LAB_00e27bc4;
    iVar12 = *(int *)(pplVar19 + 1);
  }
  if (iVar12 == 0x2a) {
    if ((*(int *)(pplVar19 + 0x19) < 2) &&
       (uVar7 = *(uint *)((long)pplVar19 + 0xc4), 1 < (int)uVar7)) {
      if (uVar7 < 6) {
        uVar13 = 0x40;
      }
      else {
        uVar13 = 0x80;
        if (uVar7 != 6) {
          uVar13 = 0xc0;
        }
      }
    }
    else {
      uVar13 = 0;
    }
    uVar13 = uVar13 | *(int *)((long)pplVar19 + 0x54) * 0x1000 - 0x7800U;
    if (*(int *)((long)pplVar19 + 0xac) != 0) {
      uVar13 = uVar13 | 0x20;
    }
    pplVar19[5] = (long *)((long)plVar11 + 1);
    *(char *)((long)pplVar19[2] + (long)plVar11) = (char)(uVar13 >> 8);
    plVar11 = pplVar19[5];
    pplVar19[5] = (long *)((long)plVar11 + 1);
    *(byte *)((long)pplVar19[2] + (long)plVar11) =
         ((byte)uVar13 + (char)(uVar13 / 0x1f) * -0x1f | (byte)uVar13) ^ 0x1f;
    if (*(int *)((long)pplVar19 + 0xac) != 0) {
      plVar11 = pplVar19[5];
      lVar10 = param_1[0xc];
      pplVar19[5] = (long *)((long)plVar11 + 1);
      *(char *)((long)pplVar19[2] + (long)plVar11) = (char)((ulong)lVar10 >> 0x18);
      plVar11 = pplVar19[5];
      pplVar19[5] = (long *)((long)plVar11 + 1);
      *(char *)((long)pplVar19[2] + (long)plVar11) = (char)((ulong)lVar10 >> 0x10);
      plVar11 = pplVar19[5];
      lVar10 = param_1[0xc];
      pplVar19[5] = (long *)((long)plVar11 + 1);
      *(char *)((long)pplVar19[2] + (long)plVar11) = (char)((ulong)lVar10 >> 8);
      plVar11 = pplVar19[5];
      pplVar19[5] = (long *)((long)plVar11 + 1);
      *(char *)((long)pplVar19[2] + (long)plVar11) = (char)lVar10;
    }
    lVar10 = adler32(0,0,0);
    param_1[0xc] = lVar10;
    *(undefined4 *)(pplVar19 + 1) = 0x71;
    FUN_00e28254(param_1);
    if (pplVar19[5] != (long *)0x0) goto LAB_00e27bc4;
    iVar12 = *(int *)(pplVar19 + 1);
LAB_00e273cc:
    if (iVar12 == 0x39) {
      lVar10 = crc32(0,0,0);
      plVar11 = pplVar19[5];
      plVar16 = pplVar19[2];
      param_1[0xc] = lVar10;
      pplVar19[5] = (long *)((long)plVar11 + 1);
      *(undefined *)((long)plVar16 + (long)plVar11) = 0x1f;
      plVar11 = pplVar19[5];
      pplVar19[5] = (long *)((long)plVar11 + 1);
      *(undefined *)((long)pplVar19[2] + (long)plVar11) = 0x8b;
      plVar11 = pplVar19[5];
      pplVar19[5] = (long *)((long)plVar11 + 1);
      *(undefined *)((long)pplVar19[2] + (long)plVar11) = 8;
      plVar11 = pplVar19[7];
      if (plVar11 == (long *)0x0) {
        plVar11 = pplVar19[5];
        pplVar19[5] = (long *)((long)plVar11 + 1);
        *(undefined *)((long)pplVar19[2] + (long)plVar11) = 0;
        plVar11 = pplVar19[5];
        pplVar19[5] = (long *)((long)plVar11 + 1);
        *(undefined *)((long)pplVar19[2] + (long)plVar11) = 0;
        plVar11 = pplVar19[5];
        pplVar19[5] = (long *)((long)plVar11 + 1);
        *(undefined *)((long)pplVar19[2] + (long)plVar11) = 0;
        plVar11 = pplVar19[5];
        pplVar19[5] = (long *)((long)plVar11 + 1);
        *(undefined *)((long)pplVar19[2] + (long)plVar11) = 0;
        plVar11 = pplVar19[5];
        pplVar19[5] = (long *)((long)plVar11 + 1);
        *(undefined *)((long)pplVar19[2] + (long)plVar11) = 0;
        if (*(int *)((long)pplVar19 + 0xc4) == 9) {
          uVar9 = 2;
        }
        else {
          iVar12 = *(int *)(pplVar19 + 0x19);
          bVar6 = 1 < *(int *)((long)pplVar19 + 0xc4);
          bVar5 = false;
          if (bVar6) {
            bVar5 = iVar12 + -1 < 0;
          }
          uVar9 = 4;
          if (bVar6 && iVar12 == 1 || bVar5 != (bVar6 && SBORROW4(iVar12,1))) {
            uVar9 = 0;
          }
        }
        plVar11 = pplVar19[5];
        pplVar19[5] = (long *)((long)plVar11 + 1);
        *(undefined *)((long)pplVar19[2] + (long)plVar11) = uVar9;
        plVar11 = pplVar19[5];
        pplVar19[5] = (long *)((long)plVar11 + 1);
        *(undefined *)((long)pplVar19[2] + (long)plVar11) = 3;
        *(undefined4 *)(pplVar19 + 1) = 0x71;
        FUN_00e28254(param_1);
        if (pplVar19[5] != (long *)0x0) goto LAB_00e27bc4;
        iVar12 = *(int *)(pplVar19 + 1);
        goto LAB_00e27704;
      }
      iVar12 = *(int *)plVar11;
      iVar1 = *(int *)((long)plVar11 + 0x44);
      lVar15 = plVar11[3];
      lVar18 = plVar11[5];
      lVar10 = plVar11[7];
      plVar11 = pplVar19[5];
      pplVar19[5] = (long *)((long)plVar11 + 1);
      *(char *)((long)pplVar19[2] + (long)plVar11) =
           iVar12 != 0 | (iVar1 != 0) << 1 | (lVar15 != 0) << 2 | (lVar18 != 0) << 3 |
           (lVar10 != 0) << 4;
      plVar11 = pplVar19[5];
      lVar10 = pplVar19[7][1];
      pplVar19[5] = (long *)((long)plVar11 + 1);
      *(char *)((long)pplVar19[2] + (long)plVar11) = (char)lVar10;
      plVar11 = pplVar19[5];
      lVar10 = pplVar19[7][1];
      pplVar19[5] = (long *)((long)plVar11 + 1);
      *(char *)((long)pplVar19[2] + (long)plVar11) = (char)((ulong)lVar10 >> 8);
      plVar11 = pplVar19[5];
      lVar10 = pplVar19[7][1];
      pplVar19[5] = (long *)((long)plVar11 + 1);
      *(char *)((long)pplVar19[2] + (long)plVar11) = (char)((ulong)lVar10 >> 0x10);
      plVar11 = pplVar19[5];
      lVar10 = pplVar19[7][1];
      pplVar19[5] = (long *)((long)plVar11 + 1);
      *(char *)((long)pplVar19[2] + (long)plVar11) = (char)((ulong)lVar10 >> 0x18);
      if (*(int *)((long)pplVar19 + 0xc4) == 9) {
        uVar9 = 2;
      }
      else {
        iVar12 = *(int *)(pplVar19 + 0x19);
        bVar6 = 1 < *(int *)((long)pplVar19 + 0xc4);
        bVar5 = false;
        if (bVar6) {
          bVar5 = iVar12 + -1 < 0;
        }
        uVar9 = 4;
        if (bVar6 && iVar12 == 1 || bVar5 != (bVar6 && SBORROW4(iVar12,1))) {
          uVar9 = 0;
        }
      }
      plVar11 = pplVar19[5];
      pplVar19[5] = (long *)((long)plVar11 + 1);
      *(undefined *)((long)pplVar19[2] + (long)plVar11) = uVar9;
      plVar11 = pplVar19[5];
      uVar3 = *(undefined4 *)((long)pplVar19[7] + 0x14);
      pplVar19[5] = (long *)((long)plVar11 + 1);
      *(char *)((long)pplVar19[2] + (long)plVar11) = (char)uVar3;
      plVar11 = pplVar19[7];
      if (plVar11[3] != 0) {
        plVar16 = pplVar19[5];
        uVar3 = *(undefined4 *)(plVar11 + 4);
        pplVar19[5] = (long *)((long)plVar16 + 1);
        *(char *)((long)pplVar19[2] + (long)plVar16) = (char)uVar3;
        plVar11 = pplVar19[5];
        uVar3 = *(undefined4 *)(pplVar19[7] + 4);
        pplVar19[5] = (long *)((long)plVar11 + 1);
        *(char *)((long)pplVar19[2] + (long)plVar11) = (char)((uint)uVar3 >> 8);
        plVar11 = pplVar19[7];
      }
      if (*(int *)((long)plVar11 + 0x44) != 0) {
        lVar10 = crc32(param_1[0xc],pplVar19[2],*(undefined4 *)(pplVar19 + 5));
        param_1[0xc] = lVar10;
      }
      pplVar19[8] = (long *)0x0;
      *(undefined4 *)(pplVar19 + 1) = 0x45;
switchD_00e27724_caseD_45:
      lVar10 = pplVar19[7][3];
      if (lVar10 != 0) {
        plVar16 = pplVar19[8];
        plVar20 = pplVar19[5];
        plVar14 = pplVar19[3];
        plVar11 = (long *)(ulong)((uint)*(ushort *)(pplVar19[7] + 4) - (int)plVar16);
        if (plVar14 < (long *)((long)plVar20 + (long)plVar11)) {
          while( true ) {
            uVar21 = (long)plVar14 - (long)plVar20;
            uVar8 = uVar21 & 0xffffffff;
            memcpy((void *)((long)pplVar19[2] + (long)plVar20),(void *)(lVar10 + (long)plVar16),
                   uVar8);
            plVar16 = pplVar19[3];
            iVar12 = *(int *)((long)pplVar19[7] + 0x44);
            pplVar19[5] = plVar16;
            if ((iVar12 != 0) && (plVar20 < plVar16)) {
              lVar10 = crc32(param_1[0xc],(long)pplVar19[2] + (long)plVar20,
                             (int)plVar16 - (int)plVar20);
              param_1[0xc] = lVar10;
            }
            lVar10 = param_1[7];
            pplVar19[8] = (long *)((long)pplVar19[8] + uVar8);
            _tr_flush_bits(lVar10);
            uVar7 = *(uint *)(param_1 + 4);
            if (*(uint *)(lVar10 + 0x28) <= *(uint *)(param_1 + 4)) {
              uVar7 = *(uint *)(lVar10 + 0x28);
            }
            uVar8 = (ulong)uVar7;
            if (uVar7 != 0) {
              memcpy((void *)param_1[3],*(void **)(lVar10 + 0x20),uVar8);
              lVar15 = *(long *)(lVar10 + 0x20);
              lVar18 = *(long *)(lVar10 + 0x28);
              param_1[3] = param_1[3] + uVar8;
              lVar18 = lVar18 - uVar8;
              param_1[5] = param_1[5] + uVar8;
              *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) - uVar7;
              *(ulong *)(lVar10 + 0x20) = lVar15 + uVar8;
              *(long *)(lVar10 + 0x28) = lVar18;
              if (lVar18 == 0) {
                *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(lVar10 + 0x10);
              }
            }
            if (pplVar19[5] != (long *)0x0) goto LAB_00e27bc4;
            plVar14 = pplVar19[3];
            plVar11 = (long *)(ulong)(uint)((int)plVar11 - (int)uVar21);
            if (plVar11 <= plVar14) break;
            plVar16 = pplVar19[8];
            plVar20 = (long *)0x0;
            lVar10 = pplVar19[7][3];
          }
          plVar16 = pplVar19[8];
          plVar20 = (long *)0x0;
          lVar10 = pplVar19[7][3];
        }
        memcpy((void *)((long)pplVar19[2] + (long)plVar20),(void *)(lVar10 + (long)plVar16),
               (size_t)plVar11);
        plVar11 = (long *)((long)pplVar19[5] + (long)plVar11);
        iVar12 = *(int *)((long)pplVar19[7] + 0x44);
        pplVar19[5] = plVar11;
        if ((iVar12 != 0) && (plVar20 < plVar11)) {
          lVar10 = crc32(param_1[0xc],(long)pplVar19[2] + (long)plVar20,(int)plVar11 - (int)plVar20)
          ;
          param_1[0xc] = lVar10;
        }
        pplVar19[8] = (long *)0x0;
      }
      *(undefined4 *)(pplVar19 + 1) = 0x49;
switchD_00e27724_caseD_49:
      if (pplVar19[7][5] != 0) {
        plVar11 = pplVar19[5];
        plVar16 = plVar11;
        if (plVar11 != pplVar19[3]) goto LAB_00e27998;
        while( true ) {
          bVar6 = *(int *)((long)pplVar19[7] + 0x44) == 0;
          if ((!bVar6 && plVar11 <= plVar16) && (bVar6 || plVar16 != plVar11)) {
            lVar10 = crc32(param_1[0xc],(long)pplVar19[2] + (long)plVar11,
                           (int)plVar16 - (int)plVar11);
            param_1[0xc] = lVar10;
          }
          lVar10 = param_1[7];
          _tr_flush_bits(lVar10);
          uVar7 = *(uint *)(param_1 + 4);
          if (*(uint *)(lVar10 + 0x28) <= *(uint *)(param_1 + 4)) {
            uVar7 = *(uint *)(lVar10 + 0x28);
          }
          uVar8 = (ulong)uVar7;
          if (uVar7 != 0) {
            memcpy((void *)param_1[3],*(void **)(lVar10 + 0x20),uVar8);
            lVar15 = *(long *)(lVar10 + 0x20);
            lVar18 = *(long *)(lVar10 + 0x28);
            param_1[3] = param_1[3] + uVar8;
            lVar18 = lVar18 - uVar8;
            param_1[5] = param_1[5] + uVar8;
            *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) - uVar7;
            *(ulong *)(lVar10 + 0x20) = lVar15 + uVar8;
            *(long *)(lVar10 + 0x28) = lVar18;
            if (lVar18 == 0) {
              *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(lVar10 + 0x10);
            }
          }
          if (pplVar19[5] != (long *)0x0) break;
          plVar16 = (long *)0x0;
          plVar11 = (long *)0x0;
LAB_00e27998:
          do {
            plVar14 = pplVar19[8];
            lVar10 = pplVar19[7][5];
            pplVar19[8] = (long *)((long)plVar14 + 1);
            cVar4 = *(char *)(lVar10 + (long)plVar14);
            pplVar19[5] = (long *)((long)plVar16 + 1);
            *(char *)((long)pplVar19[2] + (long)plVar16) = cVar4;
            if (cVar4 == '\0') {
              if ((*(int *)((long)pplVar19[7] + 0x44) != 0) && (plVar11 < pplVar19[5])) {
                lVar10 = crc32(param_1[0xc],(long)pplVar19[2] + (long)plVar11,
                               (int)pplVar19[5] - (int)plVar11);
                param_1[0xc] = lVar10;
              }
              pplVar19[8] = (long *)0x0;
              goto LAB_00e279f4;
            }
            plVar16 = pplVar19[5];
          } while (plVar16 != pplVar19[3]);
        }
        goto LAB_00e27bc4;
      }
LAB_00e279f4:
      *(undefined4 *)(pplVar19 + 1) = 0x5b;
switchD_00e27724_caseD_5b:
      if (pplVar19[7][7] != 0) {
        plVar11 = pplVar19[5];
        plVar16 = plVar11;
        if (plVar11 != pplVar19[3]) goto LAB_00e27ad8;
        while( true ) {
          bVar6 = *(int *)((long)pplVar19[7] + 0x44) == 0;
          if ((!bVar6 && plVar11 <= plVar16) && (bVar6 || plVar16 != plVar11)) {
            lVar10 = crc32(param_1[0xc],(long)pplVar19[2] + (long)plVar11,
                           (int)plVar16 - (int)plVar11);
            param_1[0xc] = lVar10;
          }
          lVar10 = param_1[7];
          _tr_flush_bits(lVar10);
          uVar7 = *(uint *)(param_1 + 4);
          if (*(uint *)(lVar10 + 0x28) <= *(uint *)(param_1 + 4)) {
            uVar7 = *(uint *)(lVar10 + 0x28);
          }
          uVar8 = (ulong)uVar7;
          if (uVar7 != 0) {
            memcpy((void *)param_1[3],*(void **)(lVar10 + 0x20),uVar8);
            lVar15 = *(long *)(lVar10 + 0x20);
            lVar18 = *(long *)(lVar10 + 0x28);
            param_1[3] = param_1[3] + uVar8;
            lVar18 = lVar18 - uVar8;
            param_1[5] = param_1[5] + uVar8;
            *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) - uVar7;
            *(ulong *)(lVar10 + 0x20) = lVar15 + uVar8;
            *(long *)(lVar10 + 0x28) = lVar18;
            if (lVar18 == 0) {
              *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(lVar10 + 0x10);
            }
          }
          if (pplVar19[5] != (long *)0x0) break;
          plVar16 = (long *)0x0;
          plVar11 = (long *)0x0;
LAB_00e27ad8:
          do {
            plVar14 = pplVar19[8];
            lVar10 = pplVar19[7][7];
            pplVar19[8] = (long *)((long)plVar14 + 1);
            cVar4 = *(char *)(lVar10 + (long)plVar14);
            pplVar19[5] = (long *)((long)plVar16 + 1);
            *(char *)((long)pplVar19[2] + (long)plVar16) = cVar4;
            if (cVar4 == '\0') {
              if ((*(int *)((long)pplVar19[7] + 0x44) != 0) && (plVar11 < pplVar19[5])) {
                lVar10 = crc32(param_1[0xc],(long)pplVar19[2] + (long)plVar11,
                               (int)pplVar19[5] - (int)plVar11);
                param_1[0xc] = lVar10;
              }
              goto LAB_00e27b30;
            }
            plVar16 = pplVar19[5];
          } while (plVar16 != pplVar19[3]);
        }
        goto LAB_00e27bc4;
      }
LAB_00e27b30:
      *(undefined4 *)(pplVar19 + 1) = 0x67;
switchD_00e27724_caseD_67:
      if (*(int *)((long)pplVar19[7] + 0x44) != 0) {
        plVar11 = pplVar19[5];
        if (pplVar19[3] < (long *)((long)plVar11 + 2U)) {
          FUN_00e28254(param_1);
          plVar11 = pplVar19[5];
          if (plVar11 != (long *)0x0) goto LAB_00e27bc4;
        }
        lVar10 = param_1[0xc];
        pplVar19[5] = (long *)((long)plVar11 + 1);
        *(char *)((long)pplVar19[2] + (long)plVar11) = (char)lVar10;
        plVar11 = pplVar19[5];
        lVar10 = param_1[0xc];
        pplVar19[5] = (long *)((long)plVar11 + 1);
        *(char *)((long)pplVar19[2] + (long)plVar11) = (char)((ulong)lVar10 >> 8);
        lVar10 = crc32(0,0,0);
        param_1[0xc] = lVar10;
      }
      *(undefined4 *)(pplVar19 + 1) = 0x71;
      FUN_00e28254(param_1);
      if (pplVar19[5] != (long *)0x0) goto LAB_00e27bc4;
    }
    else {
LAB_00e27704:
      switch(iVar12) {
      case 0x45:
        goto switchD_00e27724_caseD_45;
      case 0x49:
        goto switchD_00e27724_caseD_49;
      case 0x5b:
        goto switchD_00e27724_caseD_5b;
      case 0x67:
        goto switchD_00e27724_caseD_67;
      }
    }
    if (*(int *)(param_1 + 1) == 0) goto LAB_00e27bf0;
  }
  else {
    if (iVar12 != 0x29a) goto LAB_00e273cc;
    if (*(int *)(param_1 + 1) != 0) goto LAB_00e27554;
LAB_00e27bf0:
    if ((*(int *)((long)pplVar19 + 0xb4) == 0) &&
       ((param_2 == 0 || (*(int *)(pplVar19 + 1) == 0x29a)))) goto LAB_00e27d18;
  }
  if (*(int *)((long)pplVar19 + 0xc4) == 0) {
    uVar7 = FUN_00e282f8(pplVar19,param_2);
  }
  else if (*(int *)(pplVar19 + 0x19) == 3) {
    uVar7 = FUN_00e28cd8(pplVar19,param_2);
  }
  else if (*(int *)(pplVar19 + 0x19) == 2) {
    uVar7 = FUN_00e289b8(pplVar19,param_2);
  }
  else {
    uVar7 = (*(code *)(&PTR_FUN_01013b98)[(long)*(int *)((long)pplVar19 + 0xc4) * 2])
                      (pplVar19,param_2);
  }
  if ((uVar7 & 0xfffffffe) == 2) {
    *(undefined4 *)(pplVar19 + 1) = 0x29a;
  }
  if ((uVar7 & 0xfffffffd) != 0) {
    if (uVar7 == 1) {
      if (param_2 != 5) {
        if (param_2 == 1) {
          _tr_align();
        }
        else {
          _tr_stored_block(pplVar19,0,0,0);
          if (param_2 == 3) {
            plVar11 = pplVar19[0xf];
            __n = (ulong)(*(int *)((long)pplVar19 + 0x84) - 1) * 2;
            *(undefined2 *)((long)plVar11 + __n) = 0;
            memset(plVar11,0,__n);
            if (*(int *)((long)pplVar19 + 0xb4) == 0) {
              *(undefined4 *)((long)pplVar19 + 0xac) = 0;
              pplVar19[0x13] = (long *)0x0;
              *(undefined4 *)((long)pplVar19 + 0x172c) = 0;
            }
          }
        }
      }
      FUN_00e28254(param_1);
      if (*(int *)(param_1 + 4) == 0) goto LAB_00e27bc4;
    }
LAB_00e27d18:
    if (param_2 != 4) {
      return 0;
    }
    if (*(int *)(pplVar19 + 6) < 1) {
      return 1;
    }
    lVar10 = param_1[0xc];
    if (*(int *)(pplVar19 + 6) == 2) {
      plVar11 = pplVar19[5];
      pplVar19[5] = (long *)((long)plVar11 + 1);
      *(char *)((long)pplVar19[2] + (long)plVar11) = (char)lVar10;
      plVar11 = pplVar19[5];
      lVar10 = param_1[0xc];
      pplVar19[5] = (long *)((long)plVar11 + 1);
      *(char *)((long)pplVar19[2] + (long)plVar11) = (char)((ulong)lVar10 >> 8);
      plVar11 = pplVar19[5];
      lVar10 = param_1[0xc];
      pplVar19[5] = (long *)((long)plVar11 + 1);
      *(char *)((long)pplVar19[2] + (long)plVar11) = (char)((ulong)lVar10 >> 0x10);
      plVar11 = pplVar19[5];
      lVar10 = param_1[0xc];
      pplVar19[5] = (long *)((long)plVar11 + 1);
      *(char *)((long)pplVar19[2] + (long)plVar11) = (char)((ulong)lVar10 >> 0x18);
      plVar11 = pplVar19[5];
      lVar10 = param_1[2];
      pplVar19[5] = (long *)((long)plVar11 + 1);
      *(char *)((long)pplVar19[2] + (long)plVar11) = (char)lVar10;
      plVar11 = pplVar19[5];
      lVar10 = param_1[2];
      pplVar19[5] = (long *)((long)plVar11 + 1);
      *(char *)((long)pplVar19[2] + (long)plVar11) = (char)((ulong)lVar10 >> 8);
      plVar11 = pplVar19[5];
      lVar10 = param_1[2];
      pplVar19[5] = (long *)((long)plVar11 + 1);
      *(char *)((long)pplVar19[2] + (long)plVar11) = (char)((ulong)lVar10 >> 0x10);
      plVar11 = pplVar19[5];
      plVar16 = pplVar19[2];
      uVar9 = (undefined)((ulong)param_1[2] >> 0x18);
    }
    else {
      plVar11 = pplVar19[5];
      pplVar19[5] = (long *)((long)plVar11 + 1);
      *(char *)((long)pplVar19[2] + (long)plVar11) = (char)((ulong)lVar10 >> 0x18);
      plVar11 = pplVar19[5];
      pplVar19[5] = (long *)((long)plVar11 + 1);
      *(char *)((long)pplVar19[2] + (long)plVar11) = (char)((ulong)lVar10 >> 0x10);
      plVar11 = pplVar19[5];
      lVar10 = param_1[0xc];
      uVar9 = (undefined)lVar10;
      pplVar19[5] = (long *)((long)plVar11 + 1);
      *(char *)((long)pplVar19[2] + (long)plVar11) = (char)((ulong)lVar10 >> 8);
      plVar11 = pplVar19[5];
      plVar16 = pplVar19[2];
    }
    pplVar19[5] = (long *)((long)plVar11 + 1);
    *(undefined *)((long)plVar16 + (long)plVar11) = uVar9;
    FUN_00e28254(param_1);
    if (0 < *(int *)(pplVar19 + 6)) {
      *(int *)(pplVar19 + 6) = -*(int *)(pplVar19 + 6);
    }
    return (ulong)(pplVar19[5] == (long *)0x0);
  }
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
LAB_00e27bc4:
  *(undefined4 *)((long)pplVar19 + 0x4c) = 0xffffffff;
  return 0;
}


