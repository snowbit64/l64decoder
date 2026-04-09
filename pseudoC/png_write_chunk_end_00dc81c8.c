// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_write_chunk_end
// Entry Point: 00dc81c8
// Size: 100 bytes
// Signature: undefined png_write_chunk_end(void)


void png_write_chunk_end(long param_1)

{
  uint uVar1;
  long lVar2;
  uint local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (param_1 != 0) {
    uVar1 = (*(uint *)(param_1 + 0x284) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x284) & 0xff00ff) << 8;
    local_2c = uVar1 >> 0x10 | uVar1 << 0x10;
    *(undefined4 *)(param_1 + 0x4ac) = 0x82;
    png_write_data(param_1,&local_2c,4);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


