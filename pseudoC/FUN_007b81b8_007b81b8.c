// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b81b8
// Entry Point: 007b81b8
// Size: 208 bytes
// Signature: undefined FUN_007b81b8(void)


void FUN_007b81b8(undefined8 param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  GsBitStream *pGVar3;
  ulong uVar4;
  uchar local_40 [4];
  int local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar1 = *param_2;
  local_3c = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  param_2[0x42] = 0;
  if (0x1f < iVar1) {
    iVar1 = 0x20;
  }
  pGVar3 = (GsBitStream *)NetworkStream::getReadStream();
  local_40[0] = '\0';
  uVar4 = GsBitStream::readBits(pGVar3,local_40,1,true);
  if ((uVar4 & 1) != 0) {
    if (iVar1 < 3) {
      iVar1 = 2;
    }
    pGVar3 = (GsBitStream *)NetworkStream::getReadStream();
    uVar4 = GsBitStream::readBits(pGVar3,(uchar *)&local_3c,iVar1 - 1,true);
    if ((uVar4 & 1) != 0) {
      if (local_40[0] != '\0') {
        local_3c = -local_3c;
      }
      param_2[0x40] = local_3c;
      param_2[0x42] = 1;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


