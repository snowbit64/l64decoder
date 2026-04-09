// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_do_read_interlace
// Entry Point: 00dc0400
// Size: 980 bytes
// Signature: undefined png_do_read_interlace(void)


void png_do_read_interlace(uint *param_1,long param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  bool bVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  byte *pbVar18;
  void *__dest;
  undefined auStack_70 [8];
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  if ((param_1 != (uint *)0x0) && (param_2 != 0)) {
    uVar1 = *param_1;
    bVar3 = *(byte *)((long)param_1 + 0x13);
    iVar2 = *(int *)(&DAT_00549dc4 + (long)param_3 * 4);
    uVar5 = iVar2 * uVar1;
    if (bVar3 == 4) {
      uVar12 = (uVar1 & 1) << 2;
      if ((param_4 >> 0x10 & 1) == 0) {
        uVar11 = 0;
        uVar15 = uVar5 * 4;
        uVar13 = 4;
        iVar14 = 4;
      }
      else {
        uVar11 = 4;
        uVar13 = 0;
        uVar12 = uVar12 ^ 4;
        uVar15 = uVar5 * 4 ^ 0xffffffff;
        iVar14 = -4;
      }
      if (uVar1 != 0) {
        uVar15 = uVar15 & 4;
        uVar16 = 0;
        pbVar17 = (byte *)(param_2 + (ulong)(uVar1 - 1 >> 1));
        pbVar18 = (byte *)(param_2 + (ulong)(uVar5 - 1 >> 1));
        if (iVar2 < 2) {
          iVar2 = 1;
        }
        do {
          bVar3 = *pbVar17;
          iVar7 = iVar2;
          do {
            uVar6 = 4 - uVar15;
            uVar4 = uVar15 & 0x1f;
            bVar9 = uVar15 == uVar13;
            uVar1 = uVar15 + iVar14;
            uVar15 = uVar11;
            if (!bVar9) {
              uVar15 = uVar1;
            }
            iVar7 = iVar7 + -1;
            *pbVar18 = (byte)(0xf0f >> (ulong)(uVar6 & 0x1f)) & *pbVar18 |
                       (byte)((bVar3 >> (ulong)(uVar12 & 0x1f) & 0xf) << (ulong)uVar4);
            pbVar18 = pbVar18 + -(ulong)bVar9;
          } while (iVar7 != 0);
          bVar9 = uVar12 == uVar13;
          uVar1 = uVar12 + iVar14;
          uVar12 = uVar11;
          if (!bVar9) {
            uVar12 = uVar1;
          }
          pbVar17 = pbVar17 + -(ulong)bVar9;
          uVar16 = uVar16 + 1;
        } while (uVar16 < *param_1);
      }
    }
    else if (bVar3 == 2) {
      uVar12 = uVar1 * 2 + 6 & 6;
      if ((param_4 >> 0x10 & 1) == 0) {
        uVar11 = 0;
        uVar12 = uVar12 ^ 6;
        uVar15 = ~(uVar5 * 2 + 6);
        iVar14 = 2;
        uVar13 = 6;
      }
      else {
        uVar13 = 0;
        uVar15 = uVar5 * 2 + 6;
        iVar14 = -2;
        uVar11 = 6;
      }
      if (uVar1 != 0) {
        uVar15 = uVar15 & 6;
        uVar16 = 0;
        pbVar17 = (byte *)(param_2 + (ulong)(uVar1 - 1 >> 2));
        pbVar18 = (byte *)(param_2 + (ulong)(uVar5 - 1 >> 2));
        if (iVar2 < 2) {
          iVar2 = 1;
        }
        do {
          bVar3 = *pbVar17;
          iVar7 = iVar2;
          do {
            uVar6 = 6 - uVar15;
            uVar4 = uVar15 & 0x1f;
            bVar9 = uVar15 == uVar13;
            uVar1 = uVar15 + iVar14;
            uVar15 = uVar11;
            if (!bVar9) {
              uVar15 = uVar1;
            }
            iVar7 = iVar7 + -1;
            *pbVar18 = (byte)(0x3f3f >> (ulong)(uVar6 & 0x1f)) & *pbVar18 |
                       (byte)((bVar3 >> (ulong)(uVar12 & 0x1f) & 3) << (ulong)uVar4);
            pbVar18 = pbVar18 + -(ulong)bVar9;
          } while (iVar7 != 0);
          bVar9 = uVar12 == uVar13;
          uVar1 = uVar12 + iVar14;
          uVar12 = uVar11;
          if (!bVar9) {
            uVar12 = uVar1;
          }
          pbVar17 = pbVar17 + -(ulong)bVar9;
          uVar16 = uVar16 + 1;
        } while (uVar16 < *param_1);
      }
    }
    else if (bVar3 == 1) {
      uVar12 = uVar1 - 1 & 7;
      if ((param_4 >> 0x10 & 1) == 0) {
        uVar15 = -uVar5;
        uVar11 = 0;
        uVar12 = uVar12 ^ 7;
        uVar13 = 7;
        iVar14 = 1;
      }
      else {
        uVar13 = 0;
        uVar11 = 7;
        iVar14 = -1;
        uVar15 = uVar5 - 1;
      }
      if (uVar1 != 0) {
        uVar15 = uVar15 & 7;
        uVar16 = 0;
        pbVar17 = (byte *)(param_2 + (ulong)(uVar1 - 1 >> 3));
        pbVar18 = (byte *)(param_2 + (ulong)(uVar5 - 1 >> 3));
        if (iVar2 < 2) {
          iVar2 = 1;
        }
        do {
          bVar3 = *pbVar17;
          iVar7 = iVar2;
          do {
            uVar6 = 7 - uVar15;
            uVar4 = uVar15 & 0x1f;
            bVar9 = uVar15 == uVar13;
            uVar1 = uVar15 + iVar14;
            uVar15 = uVar11;
            if (!bVar9) {
              uVar15 = uVar1;
            }
            iVar7 = iVar7 + -1;
            *pbVar18 = (byte)(0x7f7f >> (ulong)(uVar6 & 0x1f)) & *pbVar18 |
                       (byte)((bVar3 >> (ulong)(uVar12 & 0x1f) & 1) << (ulong)uVar4);
            pbVar18 = pbVar18 + -(ulong)bVar9;
          } while (iVar7 != 0);
          bVar9 = uVar12 == uVar13;
          uVar1 = uVar12 + iVar14;
          uVar12 = uVar11;
          if (!bVar9) {
            uVar12 = uVar1;
          }
          pbVar17 = pbVar17 + -(ulong)bVar9;
          uVar16 = uVar16 + 1;
        } while (uVar16 < *param_1);
      }
    }
    else if (uVar1 != 0) {
      uVar10 = (ulong)(bVar3 >> 3);
      __dest = (void *)(param_2 + (uVar5 - 1) * uVar10);
      uVar12 = 0;
      param_2 = param_2 + uVar10 * (uVar1 - 1);
      if (iVar2 < 2) {
        iVar2 = 1;
      }
      do {
        __memcpy_chk(auStack_70,param_2,uVar10,8);
        iVar14 = iVar2;
        do {
          memcpy(__dest,auStack_70,uVar10);
          __dest = (void *)((long)__dest + -uVar10);
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
        param_2 = param_2 + -uVar10;
        uVar12 = uVar12 + 1;
      } while (uVar12 < *param_1);
    }
    bVar3 = *(byte *)((long)param_1 + 0x13);
    *param_1 = uVar5;
    if (bVar3 < 8) {
      uVar10 = (ulong)bVar3 * (ulong)uVar5 + 7 >> 3;
    }
    else {
      uVar10 = (ulong)(bVar3 >> 3) * (ulong)uVar5;
    }
    *(ulong *)(param_1 + 2) = uVar10;
  }
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


