// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: OpenPGPEncode
// Entry Point: 00cf9f44
// Size: 136 bytes
// Signature: undefined __thiscall OpenPGPEncode(Integer * this, uchar * param_1, ulong param_2)


/* CryptoPP::Integer::OpenPGPEncode(unsigned char*, unsigned long) const */

void __thiscall CryptoPP::Integer::OpenPGPEncode(Integer *this,uchar *param_1,ulong param_2)

{
  long lVar1;
  undefined **local_68;
  undefined **ppuStack_60;
  uchar *local_50;
  ulong uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Algorithm::Algorithm((Algorithm *)&local_68,false);
  local_40 = 0;
  local_68 = &PTR__BufferedTransformation_01007ee0;
  ppuStack_60 = &PTR__ArraySink_01008070;
  local_50 = param_1;
  uStack_48 = param_2;
  OpenPGPEncode(this,(BufferedTransformation *)&local_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


