// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b7fd8
// Entry Point: 007b7fd8
// Size: 120 bytes
// Signature: undefined FUN_007b7fd8(void)


void FUN_007b7fd8(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  GsBitStream *this;
  uint uVar3;
  byte local_2c [4];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  this = (GsBitStream *)NetworkStream::getReadStream();
  uVar3 = GsBitStream::readBits(this,local_2c,8,true);
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
  else {
    *(uint *)(param_2 + 0x100) = (uint)local_2c[0];
  }
  *(uint *)(param_2 + 0x108) = (uint)!bVar1;
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


