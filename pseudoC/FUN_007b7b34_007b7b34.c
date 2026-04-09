// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b7b34
// Entry Point: 007b7b34
// Size: 92 bytes
// Signature: undefined FUN_007b7b34(void)


void FUN_007b7b34(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  GsBitStream *this;
  undefined4 local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar1 = *param_2;
  this = (GsBitStream *)NetworkStream::getWriteStream();
  local_2c = uVar1;
  GsBitStream::writeBits(this,(uchar *)&local_2c,0x20,true);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


