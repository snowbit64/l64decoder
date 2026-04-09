// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncodeOptionalAttributes
// Entry Point: 00ccfab8
// Size: 100 bytes
// Signature: undefined __thiscall DEREncodeOptionalAttributes(PKCS8PrivateKey * this, BufferedTransformation * param_1)


/* CryptoPP::PKCS8PrivateKey::DEREncodeOptionalAttributes(CryptoPP::BufferedTransformation&) const
    */

void __thiscall
CryptoPP::PKCS8PrivateKey::DEREncodeOptionalAttributes
          (PKCS8PrivateKey *this,BufferedTransformation *param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  (**(code **)(*(long *)(this + 0x10) + 0x120))
            (this + 0x10,param_1,&local_30,0xffffffffffffffff,&DEFAULT_CHANNEL,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


