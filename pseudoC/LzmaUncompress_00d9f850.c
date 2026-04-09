// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LzmaUncompress
// Entry Point: 00d9f850
// Size: 88 bytes
// Signature: undefined LzmaUncompress(void)


void LzmaUncompress(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  LzmaDecode();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


