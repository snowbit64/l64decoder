// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_resampler_private_down_FIR
// Entry Point: 00e64148
// Size: 1640 bytes
// Signature: undefined silk_resampler_private_down_FIR(void)


void silk_resampler_private_down_FIR(long param_1,undefined2 *param_2,long param_3,int param_4)

{
  int *piVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  short *psVar13;
  undefined2 *puVar14;
  void *__dest;
  int iVar15;
  ulong uVar16;
  long lVar17;
  int aiStack_80 [2];
  void *local_78;
  long local_70;
  long local_68;
  
  local_70 = tpidr_el0;
  local_68 = *(long *)(local_70 + 0x28);
  iVar15 = *(int *)(param_1 + 0x10c);
  uVar16 = (ulong)*(int *)(param_1 + 0x114);
  uVar12 = *(int *)(param_1 + 0x114) + iVar15;
  __dest = (void *)((long)aiStack_80 -
                   ((-(ulong)(uVar12 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar12 << 2) + 0xf &
                   0xfffffffffffffff0));
  local_78 = (void *)(param_1 + 0x18);
  memcpy(__dest,local_78,uVar16 << 2);
  lVar17 = *(long *)(param_1 + 0x128);
  iVar8 = *(int *)(param_1 + 0x110);
  lVar10 = lVar17;
  while( true ) {
    iVar7 = param_4;
    if (iVar15 <= param_4) {
      iVar7 = iVar15;
    }
    silk_resampler_private_AR2
              (param_1,(void *)((long)__dest + (long)(int)uVar16 * 4),param_3,lVar10,iVar7);
    iVar15 = *(int *)(param_1 + 0x114);
    iVar9 = iVar7 * 0x10000;
    if (iVar15 == 0x12) {
      if (0 < iVar9) {
        iVar11 = *(int *)(param_1 + 0x118);
        uVar12 = 0;
        puVar14 = param_2;
        do {
          uVar3 = uVar12 & 0xffff;
          iVar4 = (int)uVar12 >> 0x10;
          uVar12 = uVar12 + iVar8;
          lVar10 = (long)(short)iVar11 * (ulong)uVar3;
          piVar1 = (int *)((long)__dest + (long)iVar4 * 4);
          psVar13 = (short *)(lVar17 + 4 + (lVar10 >> 0x10) * 0x12);
          psVar2 = (short *)(lVar17 + 4 +
                            (long)(int)((iVar11 + ~(uint)((ulong)lVar10 >> 0x10)) * 9) * 2);
          iVar4 = (int)((ulong)((long)psVar13[1] * (long)piVar1[2]) >> 0x10) +
                  (int)((ulong)((long)*psVar13 * (long)*piVar1) >> 0x10) +
                  (int)((ulong)((long)psVar13[2] * (long)piVar1[2]) >> 0x10) +
                  (int)((ulong)((long)psVar13[3] * (long)piVar1[4]) >> 0x10) +
                  (int)((ulong)((long)psVar13[4] * (long)piVar1[4]) >> 0x10) +
                  (int)((ulong)((long)psVar13[5] * (long)piVar1[6]) >> 0x10) +
                  (int)((ulong)((long)psVar13[6] * (long)piVar1[6]) >> 0x10) +
                  (int)((ulong)((long)psVar13[7] * (long)piVar1[8]) >> 0x10) +
                  (int)((ulong)((long)psVar13[8] * (long)piVar1[8]) >> 0x10) +
                  (int)((ulong)((long)*psVar2 * (long)piVar1[0x12]) >> 0x10) +
                  (int)((ulong)((long)psVar2[1] * (long)piVar1[0x10]) >> 0x10) +
                  (int)((ulong)((long)psVar2[2] * (long)piVar1[0x10]) >> 0x10) +
                  (int)((ulong)((long)psVar2[3] * (long)piVar1[0xe]) >> 0x10) +
                  (int)((ulong)((long)psVar2[4] * (long)piVar1[0xe]) >> 0x10) +
                  (int)((ulong)((long)psVar2[5] * (long)piVar1[0xc]) >> 0x10) +
                  (int)((ulong)((long)psVar2[6] * (long)piVar1[0xc]) >> 0x10) +
                  (int)((ulong)((long)psVar2[7] * (long)piVar1[10]) >> 0x10) +
                  (int)((ulong)((long)psVar2[8] * (long)piVar1[10]) >> 0x10);
          iVar5 = (iVar4 >> 5) + 1 >> 1;
          if (iVar5 == -0x8000 || iVar5 + 0x8000 < 0 != SCARRY4(iVar5,0x8000)) {
            iVar5 = -0x8000;
          }
          uVar6 = 0x7fff;
          if (iVar4 < 0x1fffe0) {
            uVar6 = (short)iVar5;
          }
          param_2 = puVar14 + 1;
          *puVar14 = uVar6;
          puVar14 = param_2;
        } while ((int)(uVar12 + iVar7 * -0x10000) < 0 != SBORROW4(uVar12,iVar9));
      }
    }
    else if (iVar15 == 0x18) {
      if (0 < iVar9) {
        iVar11 = 0;
        puVar14 = param_2;
        do {
          iVar4 = iVar11 >> 0x10;
          iVar11 = iVar11 + iVar8;
          piVar1 = (int *)((long)__dest + (long)iVar4 * 4);
          iVar4 = (int)((ulong)(((long)piVar1[0x16] + (long)piVar1[2]) *
                               (long)*(short *)(lVar17 + 6)) >> 0x10) +
                  (int)((ulong)(((long)piVar1[0x18] + (long)*piVar1) * (long)*(short *)(lVar17 + 4))
                       >> 0x10) +
                  (int)((ulong)(((long)piVar1[0x16] + (long)piVar1[2]) *
                               (long)*(short *)(lVar17 + 8)) >> 0x10) +
                  (int)((ulong)(((long)piVar1[0x14] + (long)piVar1[4]) *
                               (long)*(short *)(lVar17 + 10)) >> 0x10) +
                  (int)((ulong)(((long)piVar1[0x14] + (long)piVar1[4]) *
                               (long)*(short *)(lVar17 + 0xc)) >> 0x10) +
                  (int)((ulong)(((long)piVar1[0x12] + (long)piVar1[6]) *
                               (long)*(short *)(lVar17 + 0xe)) >> 0x10) +
                  (int)((ulong)(((long)piVar1[0x12] + (long)piVar1[6]) *
                               (long)*(short *)(lVar17 + 0x10)) >> 0x10) +
                  (int)((ulong)(((long)piVar1[0x10] + (long)piVar1[8]) *
                               (long)*(short *)(lVar17 + 0x12)) >> 0x10) +
                  (int)((ulong)(((long)piVar1[0x10] + (long)piVar1[8]) *
                               (long)*(short *)(lVar17 + 0x14)) >> 0x10) +
                  (int)((ulong)(((long)piVar1[0xe] + (long)piVar1[10]) *
                               (long)*(short *)(lVar17 + 0x16)) >> 0x10) +
                  (int)((ulong)(((long)piVar1[0xe] + (long)piVar1[10]) *
                               (long)*(short *)(lVar17 + 0x18)) >> 0x10) +
                  (int)((ulong)(((long)piVar1[0xc] + (long)piVar1[0xc]) *
                               (long)*(short *)(lVar17 + 0x1a)) >> 0x10);
          iVar5 = (iVar4 >> 5) + 1 >> 1;
          if (iVar5 == -0x8000 || iVar5 + 0x8000 < 0 != SCARRY4(iVar5,0x8000)) {
            iVar5 = -0x8000;
          }
          uVar6 = 0x7fff;
          if (iVar4 < 0x1fffe0) {
            uVar6 = (short)iVar5;
          }
          param_2 = puVar14 + 1;
          *puVar14 = uVar6;
          puVar14 = param_2;
        } while (iVar11 + iVar7 * -0x10000 < 0 != SBORROW4(iVar11,iVar9));
      }
    }
    else if ((iVar15 == 0x24) && (0 < iVar9)) {
      iVar11 = 0;
      puVar14 = param_2;
      do {
        iVar4 = iVar11 >> 0x10;
        iVar11 = iVar11 + iVar8;
        piVar1 = (int *)((long)__dest + (long)iVar4 * 4);
        iVar4 = (int)((ulong)(((long)piVar1[0x22] + (long)piVar1[2]) * (long)*(short *)(lVar17 + 6))
                     >> 0x10) +
                (int)((ulong)(((long)piVar1[0x24] + (long)*piVar1) * (long)*(short *)(lVar17 + 4))
                     >> 0x10) +
                (int)((ulong)(((long)piVar1[0x22] + (long)piVar1[2]) * (long)*(short *)(lVar17 + 8))
                     >> 0x10) +
                (int)((ulong)(((long)piVar1[0x20] + (long)piVar1[4]) * (long)*(short *)(lVar17 + 10)
                             ) >> 0x10) +
                (int)((ulong)(((long)piVar1[0x20] + (long)piVar1[4]) *
                             (long)*(short *)(lVar17 + 0xc)) >> 0x10) +
                (int)((ulong)(((long)piVar1[0x1e] + (long)piVar1[6]) *
                             (long)*(short *)(lVar17 + 0xe)) >> 0x10) +
                (int)((ulong)(((long)piVar1[0x1e] + (long)piVar1[6]) *
                             (long)*(short *)(lVar17 + 0x10)) >> 0x10) +
                (int)((ulong)(((long)piVar1[0x1c] + (long)piVar1[8]) *
                             (long)*(short *)(lVar17 + 0x12)) >> 0x10) +
                (int)((ulong)(((long)piVar1[0x1c] + (long)piVar1[8]) *
                             (long)*(short *)(lVar17 + 0x14)) >> 0x10) +
                (int)((ulong)(((long)piVar1[0x1a] + (long)piVar1[10]) *
                             (long)*(short *)(lVar17 + 0x16)) >> 0x10) +
                (int)((ulong)(((long)piVar1[0x1a] + (long)piVar1[10]) *
                             (long)*(short *)(lVar17 + 0x18)) >> 0x10) +
                (int)((ulong)(((long)piVar1[0x18] + (long)piVar1[0xc]) *
                             (long)*(short *)(lVar17 + 0x1a)) >> 0x10) +
                (int)((ulong)(((long)piVar1[0x18] + (long)piVar1[0xc]) *
                             (long)*(short *)(lVar17 + 0x1c)) >> 0x10) +
                (int)((ulong)(((long)piVar1[0x16] + (long)piVar1[0xe]) *
                             (long)*(short *)(lVar17 + 0x1e)) >> 0x10) +
                (int)((ulong)(((long)piVar1[0x16] + (long)piVar1[0xe]) *
                             (long)*(short *)(lVar17 + 0x20)) >> 0x10) +
                (int)((ulong)(((long)piVar1[0x14] + (long)piVar1[0x10]) *
                             (long)*(short *)(lVar17 + 0x22)) >> 0x10) +
                (int)((ulong)(((long)piVar1[0x14] + (long)piVar1[0x10]) *
                             (long)*(short *)(lVar17 + 0x24)) >> 0x10) +
                (int)((ulong)(((long)piVar1[0x12] + (long)piVar1[0x12]) *
                             (long)*(short *)(lVar17 + 0x26)) >> 0x10);
        iVar5 = (iVar4 >> 5) + 1 >> 1;
        if (iVar5 == -0x8000 || iVar5 + 0x8000 < 0 != SCARRY4(iVar5,0x8000)) {
          iVar5 = -0x8000;
        }
        uVar6 = 0x7fff;
        if (iVar4 < 0x1fffe0) {
          uVar6 = (short)iVar5;
        }
        param_2 = puVar14 + 1;
        *puVar14 = uVar6;
        puVar14 = param_2;
      } while (iVar11 + iVar7 * -0x10000 < 0 != SBORROW4(iVar11,iVar9));
    }
    lVar10 = (long)iVar7;
    param_4 = param_4 - iVar7;
    if (param_4 < 2) break;
    param_3 = param_3 + lVar10 * 2;
    memcpy(__dest,(void *)((long)__dest + lVar10 * 4),(long)iVar15 << 2);
    iVar15 = *(int *)(param_1 + 0x10c);
    uVar16 = (ulong)*(uint *)(param_1 + 0x114);
    lVar10 = *(long *)(param_1 + 0x128);
  }
  memcpy(local_78,(void *)((long)__dest + lVar10 * 4),(long)iVar15 << 2);
  if (*(long *)(local_70 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


