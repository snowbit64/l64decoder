// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsolatedInitialize
// Entry Point: 00cdbde4
// Size: 188 bytes
// Signature: undefined __thiscall IsolatedInitialize(SignerFilter * this, NameValuePairs * param_1)


/* CryptoPP::SignerFilter::IsolatedInitialize(CryptoPP::NameValuePairs const&) */

void __thiscall
CryptoPP::SignerFilter::IsolatedInitialize(SignerFilter *this,NameValuePairs *param_1)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  char local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  bVar2 = (**(code **)(*(long *)param_1 + 0x10))(param_1,"PutMessage",&bool::typeinfo,local_3c);
  lVar5 = **(long **)(this + 0x38);
  this[0x48] = (SignerFilter)(bVar2 & local_3c[0] != '\0');
  uVar3 = (**(code **)(lVar5 + 0x50))(*(long **)(this + 0x38),*(undefined8 *)(this + 0x30));
  plVar4 = *(long **)(this + 0x40);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  *(undefined8 *)(this + 0x40) = uVar3;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


