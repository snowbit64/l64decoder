// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b7c58
// Entry Point: 007b7c58
// Size: 116 bytes
// Signature: undefined FUN_007b7c58(void)


void FUN_007b7c58(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  long lVar2;
  GsBitStream *this;
  undefined4 local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar1 = param_2[4];
  if (0x1f < (int)uVar1) {
    uVar1 = 0x20;
  }
  local_2c = *param_2;
  if ((int)uVar1 < 2) {
    uVar1 = 1;
  }
  this = (GsBitStream *)NetworkStream::getWriteStream();
  GsBitStream::writeBits(this,(uchar *)&local_2c,uVar1,true);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


