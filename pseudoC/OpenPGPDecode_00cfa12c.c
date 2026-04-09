// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: OpenPGPDecode
// Entry Point: 00cfa12c
// Size: 88 bytes
// Signature: undefined __thiscall OpenPGPDecode(Integer * this, uchar * param_1, ulong param_2)


/* CryptoPP::Integer::OpenPGPDecode(unsigned char const*, unsigned long) */

void __thiscall CryptoPP::Integer::OpenPGPDecode(Integer *this,uchar *param_1,ulong param_2)

{
  long lVar1;
  StringStore aSStack_60 [56];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  StringStore::StringStore(aSStack_60,param_1,param_2);
  OpenPGPDecode(this,(BufferedTransformation *)aSStack_60);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


