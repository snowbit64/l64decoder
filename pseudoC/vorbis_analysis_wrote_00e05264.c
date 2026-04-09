// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_analysis_wrote
// Entry Point: 00e05264
// Size: 440 bytes
// Signature: undefined vorbis_analysis_wrote(void)


void vorbis_analysis_wrote(long param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined auStack_e0 [136];
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  lVar10 = *(long *)(param_1 + 8);
  lVar9 = *(long *)(lVar10 + 0x30);
  if (param_2 < 1) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      FUN_00e0541c(param_1);
    }
    vorbis_analysis_buffer(param_1,*(int *)(lVar9 + 8) * 3);
    iVar8 = *(int *)(lVar9 + 8);
    uVar3 = *(uint *)(param_1 + 0x24);
    iVar4 = *(int *)(lVar10 + 4);
    *(uint *)(param_1 + 0x30) = uVar3;
    *(uint *)(param_1 + 0x24) = iVar8 * 3 + uVar3;
    if (0 < iVar4) {
      lVar11 = 0;
      do {
        if ((int)uVar3 < 0x41) {
          uVar5 = *(int *)(param_1 + 0x24) - uVar3;
          memset((void *)(*(long *)(*(long *)(param_1 + 0x10) + lVar11 * 8) + (long)(int)uVar3 * 4),
                 0,-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2);
          if ((long)*(int *)(lVar10 + 4) <= lVar11 + 1) break;
        }
        else {
          uVar2 = *(ulong *)(lVar9 + 8);
          if ((long)(ulong)uVar3 <= (long)*(ulong *)(lVar9 + 8)) {
            uVar2 = (ulong)uVar3;
          }
          vorbis_lpc_from_data
                    (*(long *)(*(long *)(param_1 + 0x10) + lVar11 * 8) + (ulong)uVar3 * 4 +
                     uVar2 * -4,auStack_e0,uVar2,0x20);
          lVar1 = *(long *)(*(long *)(param_1 + 0x10) + lVar11 * 8) +
                  (long)*(int *)(param_1 + 0x30) * 4;
          vorbis_lpc_predict(auStack_e0,lVar1 + -0x80,0x20,lVar1,
                             (long)*(int *)(param_1 + 0x24) - (long)*(int *)(param_1 + 0x30));
          if ((long)*(int *)(lVar10 + 4) <= lVar11 + 1) break;
        }
        lVar11 = lVar11 + 1;
        uVar3 = *(uint *)(param_1 + 0x30);
      } while( true );
    }
  }
  else {
    lVar10 = (long)*(int *)(param_1 + 0x24) + (long)param_2;
    iVar8 = (int)lVar10;
    if (*(int *)(param_1 + 0x20) < iVar8) {
      uVar7 = 0xffffff7d;
      goto LAB_00e053ec;
    }
    *(int *)(param_1 + 0x24) = iVar8;
    if ((*(int *)(param_1 + 0x2c) == 0) &&
       (*(long *)(lVar9 + 8) < lVar10 - *(long *)(param_1 + 0x50))) {
      FUN_00e0541c(param_1);
    }
  }
  uVar7 = 0;
LAB_00e053ec:
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


