// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_book_decodevs_add
// Entry Point: 00e0a4e0
// Size: 368 bytes
// Signature: undefined vorbis_book_decodevs_add(void)


void vorbis_book_decodevs_add(long *param_1,long param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  long alStack_70 [2];
  
  lVar2 = tpidr_el0;
  alStack_70[1] = *(long *)(lVar2 + 0x28);
  if (0 < param_1[2]) {
    lVar8 = (long)param_4;
    uVar1 = 0;
    if (*param_1 != 0) {
      uVar1 = lVar8 / *param_1;
    }
    lVar3 = -0x70 - ((-(uVar1 >> 0x1f & 1) & 0xfffffff800000000 | (uVar1 & 0xffffffff) << 3) + 0xf &
                    0xfffffffffffffff0);
    iVar11 = (int)uVar1;
    if (0 < iVar11) {
      uVar9 = 0;
      lVar10 = (long)iVar11;
      do {
        lVar4 = FUN_00e0a388(param_1,param_3);
        if (lVar4 == -1) goto LAB_00e0a61c;
        lVar5 = *param_1;
        *(long *)((long)alStack_70 + uVar9 * 8 + lVar3 + 0x70) = param_1[4] + lVar5 * lVar4 * 4;
        uVar9 = uVar9 + 1;
      } while ((uVar1 & 0xffffffff) != uVar9);
      if ((0 < lVar5) && (0 < iVar11)) {
        lVar4 = 0;
        lVar6 = 0;
        do {
          if (lVar6 < lVar8) {
            lVar7 = 0;
            do {
              *(float *)(param_2 + lVar7 * 4) =
                   *(float *)(*(long *)((long)alStack_70 + lVar7 * 8 + lVar3 + 0x70) + lVar4 * 4) +
                   *(float *)(param_2 + lVar7 * 4);
              if (lVar8 <= lVar6 + lVar7 + 1) break;
              lVar7 = lVar7 + 1;
            } while (lVar7 < lVar10);
          }
          lVar4 = lVar4 + 1;
          lVar6 = lVar6 + lVar10;
          param_2 = param_2 + lVar10 * 4;
        } while (lVar4 != lVar5);
      }
      if ((long)uVar9 < lVar10) {
        lVar4 = -1;
        goto LAB_00e0a61c;
      }
    }
  }
  lVar4 = 0;
LAB_00e0a61c:
  if (*(long *)(lVar2 + 0x28) != alStack_70[1]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar4);
  }
  return;
}


