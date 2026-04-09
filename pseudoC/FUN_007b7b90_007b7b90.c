// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b7b90
// Entry Point: 007b7b90
// Size: 200 bytes
// Signature: undefined FUN_007b7b90(void)


void FUN_007b7b90(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  GsBitStream *pGVar4;
  int local_44;
  uchar local_40 [4];
  uchar local_3c [4];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  iVar1 = param_2[4];
  iVar2 = *param_2;
  if (0x1f < iVar1) {
    iVar1 = 0x20;
  }
  local_44 = iVar2;
  pGVar4 = (GsBitStream *)NetworkStream::getWriteStream();
  if (iVar2 < 0) {
    local_40[0] = '\x01';
    GsBitStream::writeBits(pGVar4,local_40,1,true);
    local_44 = -iVar2;
  }
  else {
    local_3c[0] = '\0';
    GsBitStream::writeBits(pGVar4,local_3c,1,true);
  }
  if (iVar1 < 3) {
    iVar1 = 2;
  }
  pGVar4 = (GsBitStream *)NetworkStream::getWriteStream();
  GsBitStream::writeBits(pGVar4,(uchar *)&local_44,iVar1 - 1,true);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


