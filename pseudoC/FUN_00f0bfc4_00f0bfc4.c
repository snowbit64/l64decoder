// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0bfc4
// Entry Point: 00f0bfc4
// Size: 1788 bytes
// Signature: undefined FUN_00f0bfc4(void)


ulong FUN_00f0bfc4(long param_1,ulong param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  char *pcVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  int local_80;
  int local_7c;
  char *local_78;
  int local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar18 = *(long *)(param_1 + 0x18);
  switch(*(undefined *)(lVar18 + 0x21)) {
  case 0:
    lVar20 = *(long *)(lVar18 + 0xa70);
    *(undefined8 *)(lVar18 + 0x28) = 0;
    *(undefined8 *)(lVar18 + 0x30) = 0;
    *(undefined8 *)(lVar18 + 0x38) = 0;
    if ((*(byte *)(lVar20 + 1) & 3) != 0) {
      FUN_00f0c8bc(lVar18);
      lVar20 = *(long *)(lVar18 + 0xa70);
    }
    if ((*(byte *)(*(long *)(lVar20 + 0x58) + 1) & 3) != 0) {
      FUN_00f0c8bc(lVar18);
    }
    if ((4 < *(int *)(*(long *)(param_1 + 0x18) + 0xbfc)) &&
       ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xbf0) + 1) & 3) != 0)) {
      FUN_00f0c8bc(lVar18);
    }
    FUN_00f0d5a4(lVar18);
    uVar19 = 0;
    *(undefined *)(lVar18 + 0x21) = 1;
    break;
  case 1:
    uVar19 = 0;
    bVar6 = *(long *)(lVar18 + 0x28) != 0;
    if ((*(long *)(lVar18 + 0x28) != 0) && (param_2 != 0)) {
      uVar19 = 0;
      do {
        lVar20 = FUN_00f0cb18(lVar18);
        uVar19 = lVar20 + uVar19;
        bVar6 = *(long *)(lVar18 + 0x28) != 0;
        if (*(long *)(lVar18 + 0x28) == 0) break;
      } while (uVar19 < param_2);
    }
    if (!bVar6) {
      *(undefined8 *)(lVar18 + 0x28) = *(undefined8 *)(lVar18 + 0x30);
      *(undefined8 *)(lVar18 + 0x30) = 0;
      *(undefined *)(lVar18 + 0x21) = 2;
    }
    break;
  case 2:
    uVar19 = 0;
    bVar6 = *(long *)(lVar18 + 0x28) != 0;
    if ((*(long *)(lVar18 + 0x28) != 0) && (param_2 != 0)) {
      uVar19 = 0;
      do {
        lVar20 = FUN_00f0cb18(lVar18);
        uVar19 = lVar20 + uVar19;
        bVar6 = *(long *)(lVar18 + 0x28) != 0;
        if (*(long *)(lVar18 + 0x28) == 0) break;
      } while (uVar19 < param_2);
    }
    if (!bVar6) {
      *(undefined *)(lVar18 + 0x21) = 3;
    }
    break;
  case 3:
    uVar22 = lua_clock();
    *(undefined8 *)(lVar18 + 0x1130) = uVar22;
    *(undefined8 *)(lVar18 + 0x1110) = *(undefined8 *)(lVar18 + 0x48);
    lVar18 = *(long *)(param_1 + 0x18);
    lVar20 = *(long *)(lVar18 + 0xa90);
    if (lVar20 == lVar18 + 0xa78) {
      lVar21 = 0;
    }
    else {
      lVar21 = 0;
      do {
        if ((((*(byte *)(lVar20 + 1) & 7) == 0) &&
            (4 < *(int *)((long)*(long **)(lVar20 + 8) + 0xc))) &&
           ((*(byte *)(**(long **)(lVar20 + 8) + 1) & 3) != 0)) {
          FUN_00f0c8bc(lVar18);
        }
        lVar20 = *(long *)(lVar20 + 0x18);
        lVar21 = lVar21 + 0x28;
      } while (lVar20 != lVar18 + 0xa78);
    }
    if (*(long *)(lVar18 + 0x28) == 0) {
      lVar20 = 0;
      uVar22 = *(undefined8 *)(lVar18 + 0x38);
      *(undefined8 *)(lVar18 + 0x38) = 0;
      *(undefined8 *)(lVar18 + 0x28) = uVar22;
      bVar2 = *(byte *)(param_1 + 1);
    }
    else {
      lVar20 = 0;
      do {
        lVar7 = FUN_00f0cb18(lVar18);
        lVar20 = lVar7 + lVar20;
      } while (*(long *)(lVar18 + 0x28) != 0);
      uVar22 = *(undefined8 *)(lVar18 + 0x38);
      *(undefined8 *)(lVar18 + 0x38) = 0;
      *(undefined8 *)(lVar18 + 0x28) = uVar22;
      bVar2 = *(byte *)(param_1 + 1);
    }
    if ((bVar2 & 3) != 0) {
      FUN_00f0c8bc(lVar18,param_1);
    }
    FUN_00f0d5a4(lVar18);
    if (*(long *)(lVar18 + 0x28) == 0) {
      lVar7 = 0;
      lVar12 = *(long *)(lVar18 + 0x30);
      lVar8 = 0;
      *(long *)(lVar18 + 0x28) = lVar12;
      *(undefined8 *)(lVar18 + 0x30) = 0;
    }
    else {
      lVar7 = 0;
      do {
        lVar8 = FUN_00f0cb18(lVar18);
        lVar7 = lVar8 + lVar7;
      } while (*(long *)(lVar18 + 0x28) != 0);
      lVar12 = *(long *)(lVar18 + 0x30);
      lVar8 = 0;
      *(long *)(lVar18 + 0x28) = lVar12;
      *(undefined8 *)(lVar18 + 0x30) = 0;
    }
    while (lVar12 != 0) {
      lVar12 = FUN_00f0cb18(lVar18);
      lVar8 = lVar12 + lVar8;
      lVar12 = *(long *)(lVar18 + 0x28);
    }
    lVar12 = *(long *)(lVar18 + 0x38);
    if (lVar12 == 0) {
      lVar23 = 0;
    }
    else {
      lVar23 = 0;
      do {
        uVar19 = (ulong)*(int *)(lVar12 + 8);
        bVar2 = *(byte *)(lVar12 + 6);
        lVar13 = uVar19 * 0x10;
        lVar9 = lVar13;
        bVar3 = bVar2;
        if (*(int *)(lVar12 + 8) != 0) {
          do {
            lVar14 = *(long *)(lVar12 + 0x18) + lVar9;
            if (4 < *(int *)(lVar14 + -4)) {
              pcVar17 = *(char **)(lVar14 + -0x10);
              if (*pcVar17 == '\x05') {
                pcVar17[1] = pcVar17[1] & 0xfc;
              }
              else if ((pcVar17[1] & 3U) != 0) {
                *(undefined4 *)(lVar14 + -4) = 0;
              }
            }
            uVar15 = (int)uVar19 - 1;
            uVar19 = (ulong)uVar15;
            lVar9 = lVar9 + -0x10;
          } while (uVar15 != 0);
          bVar3 = *(byte *)(lVar12 + 6);
        }
        uVar15 = ~(-1 << (ulong)(bVar3 & 0x1f));
        iVar11 = 0;
        lVar23 = lVar23 + lVar13 + (long)(1 << (ulong)(bVar2 & 0x1f)) * 0x20 + 0x30;
        uVar19 = -(ulong)(uVar15 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar15 << 5;
        lVar9 = (long)(int)uVar15 + 1;
        do {
          lVar14 = *(long *)(lVar12 + 0x20);
          lVar13 = lVar14 + uVar19;
          iVar16 = *(int *)(lVar13 + 0xc);
          if (iVar16 != 0) {
            uVar15 = *(uint *)(lVar13 + 0x1c);
            if ((uVar15 & 0xf) < 5) {
LAB_00f0c4e0:
              if (4 < iVar16) {
                pcVar17 = *(char **)(lVar14 + uVar19);
                if (*pcVar17 == '\x05') {
                  pcVar17[1] = pcVar17[1] & 0xfc;
                }
                else if ((pcVar17[1] & 3U) != 0) {
                  uVar15 = *(uint *)(lVar13 + 0x1c);
                  *(undefined4 *)(lVar13 + 0xc) = 0;
                  if ((uVar15 & 0xf) < 5) goto LAB_00f0c47c;
                  goto LAB_00f0c518;
                }
              }
              iVar11 = iVar11 + 1;
            }
            else {
              pcVar17 = *(char **)(lVar14 + uVar19 + 0x10);
              if (*pcVar17 == '\x05') {
                pcVar17[1] = pcVar17[1] & 0xfc;
                iVar16 = *(int *)(lVar13 + 0xc);
                goto LAB_00f0c4e0;
              }
              if ((pcVar17[1] & 3U) == 0) goto LAB_00f0c4e0;
              *(undefined4 *)(lVar13 + 0xc) = 0;
LAB_00f0c518:
              *(uint *)(lVar13 + 0x1c) = uVar15 & 0xfffffff0 | 0xc;
            }
          }
LAB_00f0c47c:
          uVar19 = uVar19 - 0x20;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        lVar9 = *(long *)(lVar12 + 0x10);
        if (((lVar9 != 0) && ((*(byte *)(lVar9 + 3) >> 2 & 1) == 0)) &&
           ((plVar10 = (long *)FUN_00f197a4(lVar9,2,*(undefined8 *)
                                                     (*(long *)(param_1 + 0x18) + 0xb50)),
            plVar10 != (long *)0x0 &&
            ((*(int *)((long)plVar10 + 0xc) == 5 &&
             (pcVar17 = strchr((char *)(*plVar10 + 0x18),0x73), pcVar17 != (char *)0x0)))))) {
          iVar4 = 3 << (ulong)(*(byte *)(lVar12 + 6) & 0x1f);
          iVar16 = iVar4 + 7;
          if (-1 < iVar4) {
            iVar16 = iVar4;
          }
          if (iVar11 < iVar16 >> 3) {
            FUN_00f16e60(param_1,lVar12,iVar11);
          }
        }
        lVar12 = *(long *)(lVar12 + 0x28);
      } while (lVar12 != 0);
    }
    *(undefined8 *)(lVar18 + 0x38) = 0;
    lVar9 = *(long *)(*(long *)(param_1 + 0x18) + 0xa90);
    lVar12 = *(long *)(param_1 + 0x18) + 0xa78;
    if (lVar9 == lVar12) {
      lVar13 = 0;
    }
    else {
      lVar13 = 0;
      do {
        while (*(char *)(lVar9 + 3) != '\0') {
          *(undefined *)(lVar9 + 3) = 0;
          plVar10 = (long *)(lVar9 + 0x18);
          lVar13 = lVar13 + 0x28;
          lVar9 = *plVar10;
          if (*plVar10 == lVar12) goto LAB_00f0c654;
        }
        lVar14 = *(long *)(lVar9 + 0x18);
        FUN_00f0bc18(param_1,lVar9,(*(byte *)(lVar9 + 1) & 3) != 0);
        lVar13 = lVar13 + 0x28;
        lVar9 = lVar14;
      } while (lVar14 != lVar12);
    }
LAB_00f0c654:
    *(undefined8 *)(lVar18 + 0x268) = *(undefined8 *)(lVar18 + 0x260);
    uVar19 = lVar20 + lVar21 + lVar7 + lVar8 + lVar23 + lVar13;
    *(undefined *)(lVar18 + 0x21) = 4;
    *(byte *)(lVar18 + 0x20) = *(byte *)(lVar18 + 0x20) ^ 3;
    break;
  case 4:
    lVar20 = *(long *)(lVar18 + 0x268);
    uVar19 = 0;
    if ((lVar20 != 0) && (param_2 != 0)) {
      uVar19 = 0;
      do {
        lVar20 = FUN_00f1097c(lVar20);
        uVar22 = *(undefined8 *)(lVar18 + 0x268);
        FUN_00f1093c(uVar22,&local_70,&local_78,&local_7c,&local_80);
        pcVar17 = (char *)CONCAT44(uStack_6c,local_70);
        if (pcVar17 != local_78) {
          bVar2 = *(byte *)(*(long *)(param_1 + 0x18) + 0x20);
          do {
            if (*pcVar17 != '\0') {
              if ((byte)((pcVar17[1] ^ 3U) & (bVar2 ^ 3)) == 0) {
                FUN_00f0cad0(param_1,pcVar17,uVar22);
                local_7c = local_7c + -1;
                if (local_7c == 0) {
                  iVar11 = 0;
                  if (local_80 != 0) {
                    iVar11 = ((int)pcVar17 - local_70) / local_80;
                  }
                  iVar11 = iVar11 + 1;
                  goto LAB_00f0c184;
                }
              }
              else {
                pcVar17[1] = pcVar17[1] & 0xf8U | bVar2 & 3;
              }
            }
            pcVar17 = pcVar17 + local_80;
          } while (pcVar17 != local_78);
        }
        iVar11 = 0;
        if (local_80 != 0) {
          iVar11 = ((int)pcVar17 - local_70) / local_80;
        }
LAB_00f0c184:
        *(long *)(lVar18 + 0x268) = lVar20;
        uVar19 = uVar19 + (long)(iVar11 << 4);
      } while ((lVar20 != 0) && (uVar19 < param_2));
    }
    if (lVar20 == 0) {
      *(byte *)(*(long *)(lVar18 + 0xa70) + 1) =
           *(byte *)(*(long *)(lVar18 + 0xa70) + 1) & 0xf8 | *(byte *)(lVar18 + 0x20) & 3;
      uVar1 = *(uint *)(*(long *)(param_1 + 0x18) + 0xc);
      uVar15 = uVar1 + 3;
      if (-1 < (int)uVar1) {
        uVar15 = uVar1;
      }
      if ((0x40 < (int)uVar1) &&
         (*(uint *)(*(long *)(param_1 + 0x18) + 8) < (uint)((int)uVar15 >> 2))) {
        FUN_00f1250c(param_1,uVar1 >> 1);
      }
      *(undefined *)(lVar18 + 0x21) = 0;
    }
    break;
  default:
    uVar19 = 0;
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return uVar19;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


