// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e20afc
// Entry Point: 00e20afc
// Size: 476 bytes
// Signature: undefined FUN_00e20afc(void)


void FUN_00e20afc(long param_1,long param_2,undefined8 param_3,long param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((int)param_5 < 1) {
    iVar5 = 0;
    if (-1 < (int)-param_5) goto LAB_00e20ca0;
  }
  else {
    iVar5 = 0;
    do {
      while (uVar4 = vorbis_synthesis_pcmout(param_3,&local_70), uVar4 == 0) {
        iVar3 = FUN_00e1f850(param_1,0);
        if ((iVar3 == -2) || ((int)param_5 <= iVar5)) goto LAB_00e20be4;
      }
      uVar1 = param_5 - iVar5;
      if ((int)uVar4 <= (int)(param_5 - iVar5)) {
        uVar1 = uVar4;
      }
      if (0 < *(int *)(param_2 + 4)) {
        lVar6 = 0;
        do {
          memcpy((void *)(*(long *)(param_4 + lVar6 * 8) + (long)iVar5 * 4),
                 *(void **)(local_70 + lVar6 * 8),
                 -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)(param_2 + 4));
      }
      iVar5 = uVar1 + iVar5;
      vorbis_synthesis_read(param_3,(ulong)uVar1);
    } while (iVar5 < (int)param_5);
LAB_00e20be4:
    if ((int)param_5 <= iVar5) goto LAB_00e20ca0;
  }
  uVar4 = vorbis_synthesis_lapout(param_1 + 0x240,&local_70);
  if (uVar4 == 0) {
    if (0 < *(int *)(param_2 + 4)) {
      lVar6 = 0;
      do {
        memset((void *)(*(long *)(param_4 + lVar6 * 8) + (long)iVar5 * 4),0,
               (-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2) - (long)iVar5)
        ;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(param_2 + 4));
    }
  }
  else {
    uVar1 = param_5 - iVar5;
    if ((int)uVar4 <= (int)(param_5 - iVar5)) {
      uVar1 = uVar4;
    }
    if (0 < *(int *)(param_2 + 4)) {
      lVar6 = 0;
      do {
        memcpy((void *)(*(long *)(param_4 + lVar6 * 8) + (long)iVar5 * 4),
               *(void **)(local_70 + lVar6 * 8),
               -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(param_2 + 4));
    }
  }
LAB_00e20ca0:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


