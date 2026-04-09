// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_crc_error
// Entry Point: 00dbc698
// Size: 180 bytes
// Signature: undefined png_crc_error(void)


void png_crc_error(long param_1)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x168);
  if ((*(byte *)(param_1 + 0x253) >> 5 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x4ac) = 0x81;
    png_read_data(param_1,&local_3c,4);
    if ((uVar1 >> 0xb & 1) == 0) {
LAB_00dbc710:
      uVar1 = (local_3c & 0xff00ff00) >> 8 | (local_3c & 0xff00ff) << 8;
      bVar3 = (uVar1 >> 0x10 | uVar1 << 0x10) != *(uint *)(param_1 + 0x284);
      goto LAB_00dbc724;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x4ac) = 0x81;
    png_read_data(param_1,&local_3c,4);
    if ((~uVar1 & 0x300) != 0) goto LAB_00dbc710;
  }
  bVar3 = false;
LAB_00dbc724:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


