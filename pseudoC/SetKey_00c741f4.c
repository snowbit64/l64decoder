// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetKey
// Entry Point: 00c741f4
// Size: 148 bytes
// Signature: undefined __thiscall SetKey(AuthenticatedSymmetricCipherBase * this, uchar * param_1, ulong param_2, NameValuePairs * param_3)


/* CryptoPP::AuthenticatedSymmetricCipherBase::SetKey(unsigned char const*, unsigned long,
   CryptoPP::NameValuePairs const&) */

void __thiscall
CryptoPP::AuthenticatedSymmetricCipherBase::SetKey
          (AuthenticatedSymmetricCipherBase *this,uchar *param_1,ulong param_2,
          NameValuePairs *param_3)

{
  long lVar1;
  long lVar2;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 0x50) = 0;
  (**(code **)(*(long *)this + 0x108))();
  *(undefined4 *)(this + 0x54) = 1;
  lVar2 = SimpleKeyingInterface::GetIVAndThrowIfInvalid
                    ((SimpleKeyingInterface *)this,param_3,(ulong *)&local_40);
  if (lVar2 != 0) {
    (**(code **)(*(long *)this + 0x60))(this,lVar2,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


