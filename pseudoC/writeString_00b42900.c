// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeString
// Entry Point: 00b42900
// Size: 140 bytes
// Signature: undefined __cdecl writeString(GsBitStream * param_1, char * param_2, uint param_3)


/* MasterServerUtil::writeString(GsBitStream*, char const*, unsigned int) */

void MasterServerUtil::writeString(GsBitStream *param_1,char *param_2,uint param_3)

{
  long lVar1;
  undefined2 local_3c [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_3 >> 0x10 == 0) {
    local_3c[0] = (undefined2)param_3;
    GsBitStream::writeBits(param_1,(uchar *)local_3c,0x10,true);
    if (param_3 != 0) {
      GsBitStream::writeAlignedBytes(param_1,(uchar *)param_2,param_3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_3 < 0x10000);
}


