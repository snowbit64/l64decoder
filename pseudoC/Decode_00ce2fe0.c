// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Decode
// Entry Point: 00ce2fe0
// Size: 104 bytes
// Signature: undefined __thiscall Decode(PolynomialMod2 * this, uchar * param_1, ulong param_2)


/* CryptoPP::PolynomialMod2::Decode(unsigned char const*, unsigned long) */

void __thiscall CryptoPP::PolynomialMod2::Decode(PolynomialMod2 *this,uchar *param_1,ulong param_2)

{
  long lVar1;
  StringStore aSStack_70 [56];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  StringStore::StringStore(aSStack_70,param_1,param_2);
  Decode(this,(BufferedTransformation *)aSStack_70,param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


