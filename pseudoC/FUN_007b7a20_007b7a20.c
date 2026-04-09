// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b7a20
// Entry Point: 007b7a20
// Size: 92 bytes
// Signature: undefined FUN_007b7a20(void)


void FUN_007b7a20(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  GsBitStream *this;
  uchar local_2c [4];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar1 = *param_2;
  this = (GsBitStream *)NetworkStream::getWriteStream();
  local_2c[0] = (uchar)uVar1;
  GsBitStream::writeBits(this,local_2c,8,true);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


