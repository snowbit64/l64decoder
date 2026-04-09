// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Encode
// Entry Point: 00cf9820
// Size: 156 bytes
// Signature: undefined __thiscall Encode(Integer * this, uchar * param_1, ulong param_2, Signedness param_3)


/* CryptoPP::Integer::Encode(unsigned char*, unsigned long, CryptoPP::Integer::Signedness) const */

void __thiscall
CryptoPP::Integer::Encode(Integer *this,uchar *param_1,ulong param_2,Signedness param_3)

{
  long lVar1;
  undefined **local_78;
  undefined **ppuStack_70;
  uchar *local_60;
  ulong uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Algorithm::Algorithm((Algorithm *)&local_78,false);
  local_50 = 0;
  local_78 = &PTR__BufferedTransformation_01007ee0;
  ppuStack_70 = &PTR__ArraySink_01008070;
  local_60 = param_1;
  uStack_58 = param_2;
  Encode(this,(BufferedTransformation *)&local_78,param_2,param_3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


