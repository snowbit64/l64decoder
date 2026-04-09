// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_packet_blocksize
// Entry Point: 00e1d6f0
// Size: 200 bytes
// Signature: undefined vorbis_packet_blocksize(void)


void vorbis_packet_blocksize(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  long lVar7;
  undefined auStack_50 [40];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar7 = *(long *)(param_1 + 0x30);
  if ((lVar7 == 0) || (*(int *)(lVar7 + 0x10) < 1)) {
    uVar5 = 0xffffffffffffff7f;
  }
  else {
    oggpack_readinit(auStack_50,*param_2,*(undefined4 *)(param_2 + 1));
    lVar4 = oggpack_read(auStack_50,1);
    if (lVar4 == 0) {
      uVar2 = ov_ilog(*(int *)(lVar7 + 0x10) + -1);
      uVar3 = oggpack_read(auStack_50,uVar2);
      if ((uVar3 == 0xffffffff) ||
         (piVar6 = *(int **)(lVar7 + ((long)((ulong)uVar3 << 0x20) >> 0x1d) + 0x28),
         piVar6 == (int *)0x0)) {
        uVar5 = 0xffffffffffffff78;
      }
      else {
        uVar5 = *(undefined8 *)(lVar7 + (long)*piVar6 * 8);
      }
    }
    else {
      uVar5 = 0xffffffffffffff79;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


