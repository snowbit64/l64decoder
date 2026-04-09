// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecode
// Entry Point: 00cf9c90
// Size: 96 bytes
// Signature: undefined __thiscall BERDecode(Integer * this, uchar * param_1, ulong param_2)


/* CryptoPP::Integer::BERDecode(unsigned char const*, unsigned long) */

void __thiscall CryptoPP::Integer::BERDecode(Integer *this,uchar *param_1,ulong param_2)

{
  long lVar1;
  StringStore aSStack_60 [56];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  StringStore::StringStore(aSStack_60,param_1,param_2);
  (**(code **)(*(long *)this + 0x10))(this,aSStack_60);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


