// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Decode
// Entry Point: 00cf59f0
// Size: 112 bytes
// Signature: undefined __thiscall Decode(Integer * this, uchar * param_1, ulong param_2, Signedness param_3)


/* CryptoPP::Integer::Decode(unsigned char const*, unsigned long, CryptoPP::Integer::Signedness) */

void __thiscall
CryptoPP::Integer::Decode(Integer *this,uchar *param_1,ulong param_2,Signedness param_3)

{
  long lVar1;
  StringStore aSStack_70 [56];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  StringStore::StringStore(aSStack_70,param_1,param_2);
  Decode(this,(BufferedTransformation *)aSStack_70,param_2,param_3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


