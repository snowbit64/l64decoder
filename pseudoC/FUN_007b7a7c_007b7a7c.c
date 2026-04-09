// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b7a7c
// Entry Point: 007b7a7c
// Size: 92 bytes
// Signature: undefined FUN_007b7a7c(void)


void FUN_007b7a7c(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  GsBitStream *this;
  undefined2 local_2c [2];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar1 = *param_2;
  this = (GsBitStream *)NetworkStream::getWriteStream();
  local_2c[0] = (undefined2)uVar1;
  GsBitStream::writeBits(this,(uchar *)local_2c,0x10,true);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


