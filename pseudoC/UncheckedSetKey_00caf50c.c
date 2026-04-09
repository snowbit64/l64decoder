// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: UncheckedSetKey
// Entry Point: 00caf50c
// Size: 136 bytes
// Signature: undefined __thiscall UncheckedSetKey(CBC_CTS_Encryption * this, uchar * param_1, uint param_2, NameValuePairs * param_3)


/* CryptoPP::CBC_CTS_Encryption::UncheckedSetKey(unsigned char const*, unsigned int,
   CryptoPP::NameValuePairs const&) */

void __thiscall
CryptoPP::CBC_CTS_Encryption::UncheckedSetKey
          (CBC_CTS_Encryption *this,uchar *param_1,uint param_2,NameValuePairs *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  BlockOrientedCipherModeBase::UncheckedSetKey
            ((BlockOrientedCipherModeBase *)this,param_1,param_2,param_3);
  uVar2 = (**(code **)(*(long *)param_3 + 0x10))
                    (param_3,"StolenIV",&unsigned_char*::typeinfo,&local_40);
  if ((uVar2 & 1) == 0) {
    local_40 = 0;
  }
  *(undefined8 *)(this + 0x58) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


