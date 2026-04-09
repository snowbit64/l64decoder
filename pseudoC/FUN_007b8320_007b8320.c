// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b8320
// Entry Point: 007b8320
// Size: 120 bytes
// Signature: undefined FUN_007b8320(void)


void FUN_007b8320(undefined8 param_1,long param_2)

{
  long lVar1;
  GsBitStream *this;
  uint uVar2;
  undefined4 uVar3;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this = (GsBitStream *)NetworkStream::getReadStream();
  uVar2 = GsBitStream::readBits(this,(uchar *)&local_2c,0x20,true);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
  else {
    uVar3 = 4;
    *(undefined4 *)(param_2 + 0x100) = local_2c;
  }
  *(undefined4 *)(param_2 + 0x108) = uVar3;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


