// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsolatedInitialize
// Entry Point: 00cdaeb4
// Size: 216 bytes
// Signature: undefined __thiscall IsolatedInitialize(AuthenticatedEncryptionFilter * this, NameValuePairs * param_1)


/* CryptoPP::AuthenticatedEncryptionFilter::IsolatedInitialize(CryptoPP::NameValuePairs const&) */

void __thiscall
CryptoPP::AuthenticatedEncryptionFilter::IsolatedInitialize
          (AuthenticatedEncryptionFilter *this,NameValuePairs *param_1)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  char local_40 [4];
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  bVar2 = (**(code **)(*(long *)param_1 + 0x10))(param_1,"PutMessage",&bool::typeinfo,local_40);
  lVar4 = *(long *)param_1;
  this[0x138] = (AuthenticatedEncryptionFilter)(bVar2 & local_40[0] != '\0');
  uVar3 = (**(code **)(lVar4 + 0x10))(param_1,"TruncatedDigestSize",&int::typeinfo,&local_3c);
  if (((uVar3 & 1) == 0) || (local_3c < 0)) {
    local_3c = (**(code **)(**(long **)(this + 0x130) + 0x48))();
  }
  *(int *)(this + 0x13c) = local_3c;
  FilterWithBufferedInput::IsolatedInitialize((FilterWithBufferedInput *)this,param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


