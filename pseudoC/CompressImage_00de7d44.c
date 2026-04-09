// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CompressImage
// Entry Point: 00de7d44
// Size: 864 bytes
// Signature: undefined __cdecl CompressImage(uchar * param_1, int param_2, int param_3, void * param_4, int param_5)


/* squish::CompressImage(unsigned char const*, int, int, void*, int) */

void squish::CompressImage(uchar *param_1,int param_2,int param_3,void *param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  
  uVar10 = (ulong)(uint)param_2;
  uVar1 = param_5 & 7;
  uVar3 = param_5 & 0x118;
  lVar8 = tpidr_el0;
  uVar2 = param_5 & 0x60;
  if (uVar1 != 4 && uVar1 != 2) {
    uVar1 = 1;
  }
  if (uVar3 != 0x10) {
    uVar3 = 8;
  }
  if (uVar2 != 0x40) {
    uVar2 = 0x20;
  }
  local_68 = *(long *)(lVar8 + 0x28);
  lVar4 = 0x10;
  if ((uVar1 & 1) != 0) {
    lVar4 = 8;
  }
  if ((0 < param_3) && (0 < param_2)) {
    iVar14 = 0;
    uVar13 = 0;
    uVar17 = (ulong)(uint)param_3;
    iVar5 = param_2 * 4;
    iVar6 = param_2 * 8;
    iVar7 = param_2 * 0xc;
    do {
      lVar16 = 3;
      iVar15 = iVar14;
      do {
        local_a8 = *(undefined4 *)(param_1 + iVar15);
        lVar11 = lVar16 + -2;
        if (lVar11 < (long)uVar10) {
          uVar9 = 3;
          local_a4 = *(undefined4 *)(param_1 + (iVar15 + 4));
        }
        else {
          uVar9 = 1;
        }
        if (lVar16 + -1 < (long)uVar10) {
          uVar9 = uVar9 | 4;
          local_a0 = *(undefined4 *)(param_1 + (iVar15 + 8));
        }
        lVar12 = lVar16 + -1;
        if (lVar16 < (long)uVar10) {
          uVar9 = uVar9 | 8;
          local_9c = *(undefined4 *)(param_1 + (iVar15 + 0xc));
        }
        if ((long)(uVar13 | 1) < (long)uVar17) {
          local_98 = *(undefined4 *)(param_1 + (iVar5 + iVar15));
          if (lVar11 < (long)uVar10) {
            uVar9 = uVar9 | 0x30;
            local_94 = *(undefined4 *)(param_1 + (iVar5 + iVar15 + 4));
          }
          else {
            uVar9 = uVar9 | 0x10;
          }
          if (lVar12 < (long)uVar10) {
            uVar9 = uVar9 | 0x40;
            local_90 = *(undefined4 *)(param_1 + (iVar5 + iVar15 + 8));
          }
          if (lVar16 < (long)uVar10) {
            uVar9 = uVar9 | 0x80;
            local_8c = *(undefined4 *)(param_1 + (iVar5 + iVar15 + 0xc));
          }
        }
        if ((long)(uVar13 | 2) < (long)uVar17) {
          local_88 = *(undefined4 *)(param_1 + (iVar6 + iVar15));
          if (lVar11 < (long)uVar10) {
            uVar9 = uVar9 | 0x300;
            local_84 = *(undefined4 *)(param_1 + (iVar6 + iVar15 + 4));
          }
          else {
            uVar9 = uVar9 | 0x100;
          }
          if (lVar12 < (long)uVar10) {
            uVar9 = uVar9 | 0x400;
            local_80 = *(undefined4 *)(param_1 + (iVar6 + iVar15 + 8));
          }
          if (lVar16 < (long)uVar10) {
            uVar9 = uVar9 | 0x800;
            local_7c = *(undefined4 *)(param_1 + (iVar6 + iVar15 + 0xc));
          }
        }
        if ((long)(uVar13 | 3) < (long)uVar17) {
          local_78 = *(undefined4 *)(param_1 + (iVar7 + iVar15));
          if (lVar11 < (long)uVar10) {
            uVar9 = uVar9 | 0x3000;
            local_74 = *(undefined4 *)(param_1 + (iVar7 + iVar15 + 4));
          }
          else {
            uVar9 = uVar9 | 0x1000;
          }
          if (lVar12 < (long)uVar10) {
            uVar9 = uVar9 | 0x4000;
            local_70 = *(undefined4 *)(param_1 + (iVar7 + iVar15 + 8));
          }
          if (lVar16 < (long)uVar10) {
            uVar9 = uVar9 | 0x8000;
            local_6c = *(undefined4 *)(param_1 + (iVar7 + iVar15 + 0xc));
          }
        }
        CompressMasked((uchar *)&local_a8,uVar9,param_4,uVar3 | param_5 & 0x80U | uVar2 | uVar1);
        lVar11 = lVar16 + 1;
        iVar15 = iVar15 + 0x10;
        param_4 = (void *)((long)param_4 + lVar4);
        lVar16 = lVar16 + 4;
      } while (lVar11 < (long)uVar10);
      uVar13 = uVar13 + 4;
      iVar14 = iVar14 + param_2 * 0x10;
    } while ((long)uVar13 < (long)uVar17);
  }
  if (*(long *)(lVar8 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


