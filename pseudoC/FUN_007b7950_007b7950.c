// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b7950
// Entry Point: 007b7950
// Size: 116 bytes
// Signature: undefined FUN_007b7950(void)


void FUN_007b7950(undefined8 param_1,uchar *param_2)

{
  uchar uVar1;
  long lVar2;
  GsBitStream *this;
  uchar local_3c [4];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *param_2;
  this = (GsBitStream *)NetworkStream::getWriteStream();
  local_3c[0] = uVar1;
  GsBitStream::writeBits(this,local_3c,1,true);
  param_2[0x100] = uVar1;
  *(undefined4 *)(param_2 + 0x108) = 3;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


