// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b8288
// Entry Point: 007b8288
// Size: 152 bytes
// Signature: undefined FUN_007b8288(void)


void FUN_007b8288(undefined8 param_1,uint *param_2)

{
  long lVar1;
  GsBitStream *this;
  uint uVar2;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = *param_2;
  local_3c = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  param_2[0x42] = 0;
  if (0x1f < (int)uVar2) {
    uVar2 = 0x20;
  }
  if ((int)uVar2 < 2) {
    uVar2 = 1;
  }
  this = (GsBitStream *)NetworkStream::getReadStream();
  uVar2 = GsBitStream::readBits(this,(uchar *)&local_3c,uVar2,true);
  if ((uVar2 & 1) != 0) {
    param_2[0x42] = 1;
    param_2[0x40] = local_3c;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


