// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b7ccc
// Entry Point: 007b7ccc
// Size: 100 bytes
// Signature: undefined FUN_007b7ccc(void)


void FUN_007b7ccc(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  GsBitStream *this;
  undefined4 uVar2;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = *param_2;
  this = (GsBitStream *)NetworkStream::getWriteStream();
  local_2c = uVar2;
  GsBitStream::writeBits(this,(uchar *)&local_2c,0x20,true);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


