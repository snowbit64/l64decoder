// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_chunk_unknown_handling
// Entry Point: 00da9920
// Size: 144 bytes
// Signature: undefined png_chunk_unknown_handling(void)


void png_chunk_unknown_handling(ulong param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  uint *puVar5;
  
  lVar2 = tpidr_el0;
  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x3fc) != 0) {
      puVar5 = (uint *)((long)*(uint **)(param_1 + 0x400) +
                       (ulong)(uint)(*(int *)(param_1 + 0x3fc) * 5));
      do {
        puVar4 = (uint *)((long)puVar5 + -5);
        if ((uVar1 >> 0x10 | uVar1 << 0x10) == *puVar4) {
          param_1 = (ulong)*(byte *)((long)puVar5 + -1);
          lVar3 = *(long *)(lVar2 + 0x28);
          goto joined_r0x00da99a8;
        }
        puVar5 = puVar4;
      } while (*(uint **)(param_1 + 0x400) < puVar4);
    }
    param_1 = 0;
  }
  lVar3 = *(long *)(lVar2 + 0x28);
joined_r0x00da99a8:
  if (lVar3 == *(long *)(lVar2 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


