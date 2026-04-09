// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isLosslessFlippable
// Entry Point: 00a85260
// Size: 188 bytes
// Signature: undefined isLosslessFlippable(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BC6BC7Util::D3DX_BC7::isLosslessFlippable() */

void BC6BC7Util::D3DX_BC7::isLosslessFlippable(void)

{
  long lVar1;
  D3DX_BC7 *in_x0;
  uint uVar2;
  BlockData local_70;
  byte local_6f;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  ReadBlockData(in_x0,&local_70);
  uVar2 = (uint)local_6f;
  if (((byte)local_70 < 8) && ((1 << (ulong)((byte)local_70 & 0x1f) & 0x8aU) != 0)) {
    if ((uVar2 & 0xfe) == 0x3e) {
LAB_00a852b4:
      uVar2 = 0;
      goto LAB_00a852c8;
    }
  }
  else if (((byte)local_70 & 0xfd) == 0) {
    if (((byte)local_70 == 0) && ((uVar2 & 0xfe) == 0xe)) goto LAB_00a852b4;
    if (uVar2 - 0x1f < 0x21) {
      uVar2 = 0x6ffffffcU >> ((ulong)(uVar2 - 0x1f) & 0x3f) & 1;
      goto LAB_00a852c8;
    }
  }
  uVar2 = 1;
LAB_00a852c8:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


