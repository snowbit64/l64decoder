// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opus_fft_impl
// Entry Point: 00e7bb90
// Size: 368 bytes
// Signature: undefined opus_fft_impl(void)


void opus_fft_impl(long param_1)

{
  bool bVar1;
  short sVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  short *psVar7;
  ulong uVar8;
  int *piVar9;
  int aiStack_8c [7];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  iVar4 = 1;
  lVar6 = -0x100000000;
  psVar7 = (short *)(param_1 + 0x12);
  piVar9 = aiStack_8c;
  do {
    lVar6 = lVar6 + 0x100000000;
    sVar2 = *psVar7;
    iVar4 = iVar4 * psVar7[-1];
    *piVar9 = iVar4;
    psVar7 = psVar7 + 2;
    piVar9 = piVar9 + 1;
  } while (sVar2 != 1);
  uVar8 = lVar6 >> 0x20;
  while( true ) {
    if (uVar8 == 0) {
      uVar5 = 0;
      sVar2 = *(short *)(param_1 + 0x10);
    }
    else {
      uVar5 = uVar8 & 0xffffffff;
      sVar2 = *(short *)(param_1 + (long)((int)uVar8 << 1) * 2 + 0x10);
    }
    if ((int)sVar2 - 2U < 4) break;
    bVar1 = (long)uVar8 < 1;
    uVar8 = uVar8 - 1;
    if (bVar1) {
      if (*(long *)(lVar3 + 0x28) == local_70) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00e7bcc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_00e7bcc8 + (ulong)*(ushort *)(&DAT_00568dc4 + (ulong)((int)sVar2 - 2U) * 2) * 4))
            (uVar5);
  return;
}


