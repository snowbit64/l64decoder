// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0cb18
// Entry Point: 00f0cb18
// Size: 2492 bytes
// Signature: undefined FUN_00f0cb18(void)


long FUN_00f0cb18(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  undefined *puVar17;
  int iVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  
  lVar7 = 0;
  puVar17 = *(undefined **)(param_1 + 0x28);
  puVar17[1] = puVar17[1] | 4;
  switch(*puVar17) {
  case 6:
    break;
  case 7:
    lVar7 = *(long *)(puVar17 + 0x10);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(puVar17 + 8);
    if ((*(byte *)(lVar7 + 1) & 3) != 0) {
      FUN_00f0c8bc(param_1);
    }
    if (puVar17[3] == '\0') {
      if ((*(byte *)(*(long *)(puVar17 + 0x18) + 1) & 3) != 0) {
        FUN_00f0c8bc(param_1);
      }
      uVar11 = (ulong)(byte)puVar17[4];
      if (puVar17[4] == 0) {
        uVar11 = 0;
      }
      else {
        uVar15 = 0;
        plVar12 = (long *)(puVar17 + 0x20);
        do {
          if ((4 < *(int *)((long)plVar12 + 0xc)) && ((*(byte *)(*plVar12 + 1) & 3) != 0)) {
            FUN_00f0c8bc(param_1);
            uVar11 = (ulong)(byte)puVar17[4];
          }
          uVar15 = uVar15 + 1;
          plVar12 = plVar12 + 2;
        } while (uVar15 < uVar11);
      }
    }
    else {
      uVar11 = (ulong)(byte)puVar17[4];
      if (puVar17[4] != 0) {
        uVar15 = 0;
        plVar12 = (long *)(puVar17 + 0x30);
        do {
          if ((4 < *(int *)((long)plVar12 + 0xc)) && ((*(byte *)(*plVar12 + 1) & 3) != 0)) {
            FUN_00f0c8bc(param_1);
            uVar11 = (ulong)(byte)puVar17[4];
          }
          uVar15 = uVar15 + 1;
          plVar12 = plVar12 + 2;
        } while (uVar15 < uVar11);
      }
    }
    if (puVar17[3] == '\0') {
      return uVar11 * 0x10 + 0x20;
    }
    return uVar11 * 0x10 + 0x30;
  default:
    goto switchD_00f0cb68_caseD_8;
  case 9:
    cVar5 = puVar17[5];
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(puVar17 + 0x68);
    if (cVar5 == '\0') {
      puVar20 = *(undefined **)(*(long *)(puVar17 + 0x18) + 0xa70);
      if (FFlag::LuauBetterThreadMark == '\0') {
        if ((puVar20 == puVar17) || (*(char *)(param_1 + 0x21) != '\x01')) goto LAB_00f0d288;
        FUN_00f0d4d4(param_1,puVar17);
        uVar15 = *(ulong *)(puVar17 + 8);
        uVar11 = *(long *)(puVar17 + 0x30) + (long)*(int *)(puVar17 + 0x48) * 0x10;
        if (uVar15 < uVar11) {
          uVar2 = uVar11;
          if (uVar11 <= uVar15 + 0x10) {
            uVar2 = uVar15 + 0x10;
          }
          uVar13 = uVar15;
          if (0xf < uVar2 + ~uVar15) {
            uVar2 = (uVar2 + ~uVar15 >> 4) + 1;
            uVar14 = uVar2 & 0x1ffffffffffffffe;
            uVar13 = uVar15 + uVar14 * 0x10;
            puVar16 = (undefined4 *)(uVar15 + 0x1c);
            uVar15 = uVar14;
            do {
              uVar15 = uVar15 - 2;
              puVar16[-4] = 0;
              *puVar16 = 0;
              puVar16 = puVar16 + 8;
            } while (uVar15 != 0);
            if (uVar2 == uVar14) goto LAB_00f0d330;
          }
          do {
            *(undefined4 *)(uVar13 + 0xc) = 0;
            uVar13 = uVar13 + 0x10;
          } while (uVar13 < uVar11);
        }
        goto LAB_00f0d330;
      }
      FUN_00f0d4d4(param_1,puVar17);
      if (puVar20 == puVar17) goto LAB_00f0cce8;
LAB_00f0d08c:
      uVar15 = *(ulong *)(puVar17 + 8);
      uVar11 = *(long *)(puVar17 + 0x30) + (long)*(int *)(puVar17 + 0x48) * 0x10;
      if (uVar15 < uVar11) {
        uVar2 = uVar11;
        if (uVar11 <= uVar15 + 0x10) {
          uVar2 = uVar15 + 0x10;
        }
        uVar13 = uVar15;
        if (0xf < uVar2 + ~uVar15) {
          uVar2 = (uVar2 + ~uVar15 >> 4) + 1;
          uVar14 = uVar2 & 0x1ffffffffffffffe;
          uVar13 = uVar15 + uVar14 * 0x10;
          puVar16 = (undefined4 *)(uVar15 + 0x1c);
          uVar15 = uVar14;
          do {
            uVar15 = uVar15 - 2;
            puVar16[-4] = 0;
            *puVar16 = 0;
            puVar16 = puVar16 + 8;
          } while (uVar15 != 0);
          if (uVar2 == uVar14) goto LAB_00f0d104;
        }
        do {
          *(undefined4 *)(uVar13 + 0xc) = 0;
          uVar13 = uVar13 + 0x10;
        } while (uVar13 < uVar11);
      }
LAB_00f0d104:
      if (*(char *)(param_1 + 0x21) != '\x01') goto LAB_00f0d3dc;
      uVar11 = *(ulong *)(puVar17 + 0x40);
      uVar15 = *(ulong *)(puVar17 + 8);
      while (uVar2 = uVar15, uVar11 <= *(ulong *)(puVar17 + 0x20)) {
        puVar1 = (ulong *)(uVar11 + 0x10);
        uVar11 = uVar11 + 0x28;
        uVar15 = *puVar1;
        if (*puVar1 <= uVar2) {
          uVar15 = uVar2;
        }
      }
      uVar4 = *(uint *)(puVar17 + 0x4c);
      if (20000 < (int)uVar4) goto LAB_00f0d3dc;
      lVar7 = *(long *)(puVar17 + 0x30);
      if (((int)(*(ulong *)(puVar17 + 0x20) - *(ulong *)(puVar17 + 0x40) >> 3) * 0x66666667 <
           (int)uVar4) && (0x10 < (int)uVar4)) {
        FUN_00f0aaa4(puVar17,uVar4 >> 1);
      }
      uVar4 = *(uint *)(puVar17 + 0x48);
      if ((int)uVar4 <= (int)(uVar2 - lVar7 >> 4) * 3) goto LAB_00f0d3dc;
    }
    else {
      if (FFlag::LuauBetterThreadMark != '\0') {
        FUN_00f0d4d4(param_1,puVar17);
LAB_00f0cce8:
        uVar10 = *(undefined8 *)(param_1 + 0x30);
        *(undefined **)(param_1 + 0x30) = puVar17;
        *(undefined8 *)(puVar17 + 0x68) = uVar10;
        puVar17[1] = puVar17[1] & 0xfb;
        if (*(char *)(param_1 + 0x21) == '\x03') goto LAB_00f0d08c;
        goto LAB_00f0d104;
      }
LAB_00f0d288:
      uVar10 = *(undefined8 *)(param_1 + 0x30);
      *(undefined **)(param_1 + 0x30) = puVar17;
      *(undefined8 *)(puVar17 + 0x68) = uVar10;
      puVar17[1] = puVar17[1] & 0xfb;
      FUN_00f0d4d4(param_1,puVar17);
      if (*(char *)(param_1 + 0x21) == '\x03') {
        uVar15 = *(ulong *)(puVar17 + 8);
        uVar11 = *(long *)(puVar17 + 0x30) + (long)*(int *)(puVar17 + 0x48) * 0x10;
        if (uVar15 < uVar11) {
          uVar2 = uVar11;
          if (uVar11 <= uVar15 + 0x10) {
            uVar2 = uVar15 + 0x10;
          }
          uVar13 = uVar15;
          if (0xf < uVar2 + ~uVar15) {
            uVar2 = (uVar2 + ~uVar15 >> 4) + 1;
            uVar14 = uVar2 & 0x1ffffffffffffffe;
            uVar13 = uVar15 + uVar14 * 0x10;
            puVar16 = (undefined4 *)(uVar15 + 0x1c);
            uVar15 = uVar14;
            do {
              uVar15 = uVar15 - 2;
              puVar16[-4] = 0;
              *puVar16 = 0;
              puVar16 = puVar16 + 8;
            } while (uVar15 != 0);
            if (uVar2 == uVar14) goto LAB_00f0d330;
          }
          do {
            *(undefined4 *)(uVar13 + 0xc) = 0;
            uVar13 = uVar13 + 0x10;
          } while (uVar13 < uVar11);
        }
      }
LAB_00f0d330:
      if (*(char *)(param_1 + 0x21) == '\x03') goto LAB_00f0d3dc;
      uVar11 = *(ulong *)(puVar17 + 0x40);
      uVar15 = *(ulong *)(puVar17 + 8);
      while (uVar2 = uVar15, uVar11 <= *(ulong *)(puVar17 + 0x20)) {
        puVar1 = (ulong *)(uVar11 + 0x10);
        uVar11 = uVar11 + 0x28;
        uVar15 = *puVar1;
        if (*puVar1 <= uVar2) {
          uVar15 = uVar2;
        }
      }
      uVar4 = *(uint *)(puVar17 + 0x4c);
      if (20000 < (int)uVar4) goto LAB_00f0d3dc;
      lVar7 = *(long *)(puVar17 + 0x30);
      if (((int)(*(ulong *)(puVar17 + 0x20) - *(ulong *)(puVar17 + 0x40) >> 3) * 0x66666667 <
           (int)uVar4) && (0x10 < (int)uVar4)) {
        FUN_00f0aaa4(puVar17,uVar4 >> 1);
      }
      uVar4 = *(uint *)(puVar17 + 0x48);
      if ((int)uVar4 <= (int)(uVar2 - lVar7 >> 4) * 3) goto LAB_00f0d3dc;
    }
    if (0x5a < (int)uVar4) {
      FUN_00f0a950(puVar17,uVar4 >> 1);
    }
LAB_00f0d3dc:
    return (long)*(int *)(puVar17 + 0x50) * 0x28 + (long)*(int *)(puVar17 + 0x48) * 0x10 + 0x80;
  case 10:
    lVar7 = *(long *)(puVar17 + 0x40);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(puVar17 + 0x58);
    if (lVar7 != 0) {
      *(byte *)(lVar7 + 1) = *(byte *)(lVar7 + 1) & 0xfc;
    }
    lVar7 = *(long *)(puVar17 + 0x48);
    if (lVar7 != 0) {
      *(byte *)(lVar7 + 1) = *(byte *)(lVar7 + 1) & 0xfc;
    }
    iVar18 = *(int *)(puVar17 + 0x70);
    if (0 < iVar18) {
      lVar19 = 0;
      lVar7 = 0;
      do {
        if ((4 < *(int *)(*(long *)(puVar17 + 8) + lVar19 + 0xc)) &&
           ((*(byte *)(*(long *)(*(long *)(puVar17 + 8) + lVar19) + 1) & 3) != 0)) {
          FUN_00f0c8bc(param_1);
          iVar18 = *(int *)(puVar17 + 0x70);
        }
        lVar7 = lVar7 + 1;
        lVar19 = lVar19 + 0x10;
      } while (lVar7 < iVar18);
    }
    uVar11 = (ulong)*(uint *)(puVar17 + 0x6c);
    if (0 < (int)*(uint *)(puVar17 + 0x6c)) {
      plVar12 = *(long **)(puVar17 + 0x38);
      do {
        lVar7 = *plVar12;
        if (lVar7 != 0) {
          *(byte *)(lVar7 + 1) = *(byte *)(lVar7 + 1) & 0xfc;
        }
        uVar11 = uVar11 - 1;
        plVar12 = plVar12 + 1;
      } while (uVar11 != 0);
    }
    iVar18 = *(int *)(puVar17 + 100);
    if (0 < iVar18) {
      lVar7 = 0;
      do {
        lVar19 = *(long *)(*(long *)(puVar17 + 0x18) + lVar7 * 8);
        if ((lVar19 != 0) && ((*(byte *)(lVar19 + 1) & 3) != 0)) {
          FUN_00f0c8bc(param_1);
          iVar18 = *(int *)(puVar17 + 100);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar18);
    }
    uVar4 = *(uint *)(puVar17 + 0x68);
    uVar11 = (ulong)uVar4;
    if (0 < (int)uVar4) {
      plVar12 = *(long **)(puVar17 + 0x30);
      do {
        lVar7 = *plVar12;
        if (lVar7 != 0) {
          *(byte *)(lVar7 + 1) = *(byte *)(lVar7 + 1) & 0xfc;
        }
        uVar11 = uVar11 - 1;
        plVar12 = plVar12 + 3;
      } while (uVar11 != 0);
    }
    return (long)*(int *)(puVar17 + 0x60) * 4 + (long)*(int *)(puVar17 + 0x70) * 0x10 +
           (long)*(int *)(puVar17 + 0x78) + (long)(int)uVar4 * 0x18 +
           ((long)*(int *)(puVar17 + 0x6c) + (long)iVar18) * 8 + 0x88;
  }
  lVar7 = *(long *)(puVar17 + 0x10);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(puVar17 + 0x28);
  if (lVar7 == 0) {
LAB_00f0ce98:
    bVar6 = false;
LAB_00f0ce9c:
    iVar18 = *(int *)(puVar17 + 8);
    if (iVar18 != 0) {
      lVar7 = (long)iVar18 << 4;
      do {
        if ((4 < *(int *)(*(long *)(puVar17 + 0x18) + lVar7 + -4)) &&
           ((*(byte *)(*(long *)(*(long *)(puVar17 + 0x18) + lVar7 + -0x10) + 1) & 3) != 0)) {
          FUN_00f0c8bc(param_1);
        }
        lVar7 = lVar7 + -0x10;
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
    }
    lVar7 = (long)~(-1 << (ulong)((byte)puVar17[6] & 0x1f));
    lVar19 = lVar7 << 5;
    if (bVar6) {
      lVar7 = lVar7 + 1;
      do {
        lVar3 = *(long *)(puVar17 + 0x20) + lVar19;
        if (*(int *)(lVar3 + 0xc) == 0) {
          if (4 < (*(uint *)(lVar3 + 0x1c) & 0xf)) {
            *(uint *)(lVar3 + 0x1c) = *(uint *)(lVar3 + 0x1c) & 0xfffffff0 | 0xc;
          }
        }
        else if ((4 < *(int *)(lVar3 + 0xc)) &&
                ((*(byte *)(*(long *)(*(long *)(puVar17 + 0x20) + lVar19) + 1) & 3) != 0)) {
          FUN_00f0c8bc(param_1);
        }
        lVar19 = lVar19 + -0x20;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      goto LAB_00f0cc08;
    }
    lVar7 = lVar7 + 1;
    do {
      lVar21 = *(long *)(puVar17 + 0x20);
      lVar3 = lVar21 + lVar19;
      iVar18 = *(int *)(lVar3 + 0xc);
      bVar6 = 4 < (*(uint *)(lVar3 + 0x1c) & 0xf);
      if (iVar18 == 0) {
        if (bVar6) {
          *(uint *)(lVar3 + 0x1c) = *(uint *)(lVar3 + 0x1c) & 0xfffffff0 | 0xc;
        }
      }
      else {
        if ((bVar6) && ((*(byte *)(*(long *)(lVar21 + lVar19 + 0x10) + 1) & 3) != 0)) {
          FUN_00f0c8bc(param_1);
          iVar18 = *(int *)(lVar3 + 0xc);
        }
        if ((4 < iVar18) && ((*(byte *)(*(long *)(lVar21 + lVar19) + 1) & 3) != 0)) {
          FUN_00f0c8bc(param_1);
        }
      }
      lVar19 = lVar19 + -0x20;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  else {
    if ((*(byte *)(lVar7 + 1) & 3) != 0) {
      FUN_00f0c8bc(param_1);
      lVar7 = *(long *)(puVar17 + 0x10);
      if (lVar7 == 0) goto LAB_00f0ce98;
    }
    if ((((*(byte *)(lVar7 + 3) >> 2 & 1) != 0) ||
        (plVar12 = (long *)FUN_00f197a4(lVar7,2,*(undefined8 *)(param_1 + 0xb50)),
        plVar12 == (long *)0x0)) || (*(int *)((long)plVar12 + 0xc) != 5)) goto LAB_00f0ce98;
    lVar7 = *plVar12;
    pcVar8 = strchr((char *)(lVar7 + 0x18),0x76);
    pcVar9 = strchr((char *)(lVar7 + 0x18),0x6b);
    bVar6 = pcVar9 != (char *)0x0;
    if (((ulong)pcVar9 | (ulong)pcVar8) != 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x38);
      *(undefined **)(param_1 + 0x38) = puVar17;
      *(undefined8 *)(puVar17 + 0x28) = uVar10;
    }
    if ((pcVar9 == (char *)0x0) || (pcVar8 == (char *)0x0)) {
      if (pcVar8 != (char *)0x0) {
        lVar7 = (long)~(-1 << (ulong)((byte)puVar17[6] & 0x1f));
        if (pcVar9 == (char *)0x0) {
          lVar19 = lVar7 << 5;
          lVar7 = lVar7 + 1;
          do {
            lVar3 = *(long *)(puVar17 + 0x20) + lVar19;
            bVar6 = 4 < (*(uint *)(lVar3 + 0x1c) & 0xf);
            if (*(int *)(lVar3 + 0xc) == 0) {
              if (bVar6) {
                *(uint *)(lVar3 + 0x1c) = *(uint *)(lVar3 + 0x1c) & 0xfffffff0 | 0xc;
              }
            }
            else if ((bVar6) &&
                    ((*(byte *)(*(long *)(*(long *)(puVar17 + 0x20) + lVar19 + 0x10) + 1) & 3) != 0)
                    ) {
              FUN_00f0c8bc(param_1);
            }
            lVar19 = lVar19 + -0x20;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        else {
          lVar19 = lVar7 << 5;
          lVar7 = lVar7 + 1;
          do {
            lVar3 = *(long *)(puVar17 + 0x20) + lVar19;
            if ((*(int *)(lVar3 + 0xc) == 0) && (4 < (*(uint *)(lVar3 + 0x1c) & 0xf))) {
              *(uint *)(lVar3 + 0x1c) = *(uint *)(lVar3 + 0x1c) & 0xfffffff0 | 0xc;
            }
            lVar19 = lVar19 + -0x20;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        goto LAB_00f0cc08;
      }
      goto LAB_00f0ce9c;
    }
LAB_00f0cc08:
    puVar17[1] = puVar17[1] & 0xfb;
  }
  lVar7 = (long)*(int *)(puVar17 + 8) * 0x10 + (long)(1 << (ulong)((byte)puVar17[6] & 0x1f)) * 0x20
          + 0x30;
switchD_00f0cb68_caseD_8:
  return lVar7;
}


