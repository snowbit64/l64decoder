// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e85924
// Entry Point: 00e85924
// Size: 436 bytes
// Signature: undefined FUN_00e85924(void)


void FUN_00e85924(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined auStack_1a0 [312];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar4 = *(int *)(param_1 + 0x11e0);
  if ((iVar4 == param_2) && (*(int *)(param_1 + 0x11d0) == *(int *)(param_1 + 0x11cc))) {
    uVar7 = 0;
    *(undefined4 *)(param_1 + 0x11d0) = *(undefined4 *)(param_1 + 0x11cc);
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else if (iVar4 == 0) {
    uVar7 = silk_resampler_init(param_1 + 0x16a0,*(undefined4 *)(param_1 + 0x11cc),param_2 * 1000,1)
    ;
    *(undefined4 *)(param_1 + 0x11d0) = *(undefined4 *)(param_1 + 0x11cc);
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x11e4) * 10 + 5;
    iVar3 = silk_resampler_init(auStack_1a0,(short)iVar4 * 1000,*(undefined4 *)(param_1 + 0x11cc),0)
    ;
    uVar1 = (*(int *)(param_1 + 0x11cc) / 1000) * iVar5;
    lVar8 = (long)auStack_1a0 -
            ((-(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1) + 0xf &
            0xfffffffffffffff0);
    iVar4 = silk_resampler(auStack_1a0,lVar8,param_1 + 0x1c28,iVar5 * iVar4);
    iVar5 = silk_resampler_init(param_1 + 0x16a0,*(undefined4 *)(param_1 + 0x11cc),
                                (short)param_2 * 1000,1);
    iVar6 = silk_resampler(param_1 + 0x16a0,param_1 + 0x1c28,lVar8,(ulong)uVar1);
    uVar7 = (ulong)(uint)(iVar4 + iVar3 + iVar5 + iVar6);
    *(undefined4 *)(param_1 + 0x11d0) = *(undefined4 *)(param_1 + 0x11cc);
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


