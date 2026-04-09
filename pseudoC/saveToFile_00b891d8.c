// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveToFile
// Entry Point: 00b891d8
// Size: 124 bytes
// Signature: undefined __thiscall saveToFile(ChunkedBitSquare * this, char * param_1)


/* ChunkedBitSquare::saveToFile(char const*) */

uint __thiscall ChunkedBitSquare::saveToFile(ChunkedBitSquare *this,char *param_1)

{
  long lVar1;
  uint uVar2;
  uchar *puVar3;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puVar3 = (uchar *)saveToMem(this,&local_3c,true);
  uVar2 = saveMemImageToFile(param_1,puVar3,local_3c);
  operator_delete__(puVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


