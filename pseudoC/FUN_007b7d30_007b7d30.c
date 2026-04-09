// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b7d30
// Entry Point: 007b7d30
// Size: 148 bytes
// Signature: undefined FUN_007b7d30(void)


void FUN_007b7d30(undefined8 param_1,uchar **param_2)

{
  long lVar1;
  size_t sVar2;
  GsBitStream *pGVar3;
  uchar *__s;
  undefined2 local_3c [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __s = *param_2;
  sVar2 = strlen((char *)__s);
  pGVar3 = (GsBitStream *)NetworkStream::getWriteStream();
  local_3c[0] = (undefined2)sVar2;
  GsBitStream::writeBits(pGVar3,(uchar *)local_3c,0x10,true);
  if ((sVar2 & 0xffff) != 0) {
    pGVar3 = (GsBitStream *)NetworkStream::getWriteStream();
    GsBitStream::writeAlignedBytes(pGVar3,__s,(uint)sVar2 & 0xffff);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


