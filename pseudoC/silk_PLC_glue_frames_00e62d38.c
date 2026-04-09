// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_PLC_glue_frames
// Entry Point: 00e62d38
// Size: 512 bytes
// Signature: undefined silk_PLC_glue_frames(void)


void silk_PLC_glue_frames(long param_1,long param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  int local_40;
  int local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(int *)(param_1 + 0x1058) == 0) {
    if (*(int *)(param_1 + 0x1094) != 0) {
      silk_sum_sqr_shift(&local_40,&local_3c,param_2,param_3);
      iVar1 = *(int *)(param_1 + 0x10a4);
      if (local_3c - iVar1 == 0 || local_3c < iVar1) {
        if (local_3c < iVar1) {
          local_40 = local_40 >> (iVar1 - local_3c & 0x1fU);
        }
      }
      else {
        *(int *)(param_1 + 0x10a0) = *(int *)(param_1 + 0x10a0) >> (local_3c - iVar1 & 0x1fU);
      }
      iVar1 = *(int *)(param_1 + 0x10a0);
      if (iVar1 < local_40) {
        uVar5 = 0x19 - (int)LZCOUNT(iVar1);
        iVar1 = iVar1 << (ulong)((int)LZCOUNT(iVar1) - 1U & 0x1f);
        iVar6 = local_40 >> (uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU) & 0x1f);
        *(int *)(param_1 + 0x10a0) = iVar1;
        if (iVar6 < 2) {
          iVar6 = 1;
        }
        uVar5 = 0;
        if (iVar6 != 0) {
          uVar5 = iVar1 / iVar6;
        }
        if ((int)uVar5 < 1) {
          uVar5 = 0;
        }
        else {
          uVar4 = LZCOUNT(uVar5);
          uVar3 = (uint)uVar4;
          if (uVar3 - 0x18 != 0) {
            if (uVar5 < 0x80) {
              uVar5 = uVar5 >> (ulong)(0x38 - uVar3 & 0x1f) | uVar5 << (ulong)(uVar3 - 0x18 & 0x1f);
            }
            else {
              uVar5 = uVar5 << (ulong)(uVar3 + 8 & 0x1f) | uVar5 >> (ulong)(0x18 - uVar3 & 0x1f);
            }
          }
          uVar8 = 0xb486;
          if ((uVar4 & 1) != 0) {
            uVar8 = 0x8000;
          }
          uVar8 = uVar8 >> (ulong)(uVar3 >> 1);
          uVar5 = (uVar8 + (int)(((ulong)(uVar5 & 0x7f) * 0xd5000000000000 >> 0x30) * (ulong)uVar8
                                >> 0x10)) * 0x10;
        }
        if (0 < (int)param_3) {
          uVar4 = 0;
          uVar7 = (ulong)uVar5;
          iVar1 = 0;
          if (param_3 != 0) {
            iVar1 = (int)(0x10000 - uVar5) / (int)param_3;
          }
          do {
            iVar6 = (int)uVar7;
            uVar7 = uVar7 + (long)(iVar1 << 2);
            *(short *)(param_2 + uVar4 * 2) =
                 (short)((uint)(iVar6 * *(short *)(param_2 + uVar4 * 2)) >> 0x10);
            if (0x10000 < (long)uVar7) break;
            uVar4 = uVar4 + 1;
          } while (uVar4 < param_3);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x1094) = 0;
    if (*(long *)(lVar2 + 0x28) != local_38) goto LAB_00e62f34;
  }
  else {
    silk_sum_sqr_shift(param_1 + 0x10a0,param_1 + 0x10a4,param_2,param_3);
    *(undefined4 *)(param_1 + 0x1094) = 1;
    if (*(long *)(lVar2 + 0x28) != local_38) {
LAB_00e62f34:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return;
}


