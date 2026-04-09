// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Seek
// Entry Point: 00c7de3c
// Size: 180 bytes
// Signature: undefined __thiscall Seek(AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::SymmetricCipher>> * this, ulong param_1)


/* CryptoPP::AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,
   CryptoPP::SymmetricCipher> >::Seek(unsigned long) */

void __thiscall
CryptoPP::
AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::SymmetricCipher>>
::Seek(AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::SymmetricCipher>>
       *this,ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  plVar3 = (long *)(**(code **)(*(long *)this + 0x88))();
  uVar2 = (**(code **)(*plVar3 + 0x18))();
  uVar5 = (ulong)uVar2;
  uVar1 = 0;
  if (uVar5 != 0) {
    uVar1 = param_1 / uVar5;
  }
  (**(code **)(*plVar3 + 0x60))(plVar3,uVar1);
  lVar4 = param_1 - uVar1 * uVar5;
  if (lVar4 != 0) {
    (**(code **)(*plVar3 + 0x30))
              (plVar3,(*(long *)(this + 0x30) + *(long *)(this + 0x28)) - uVar5,1);
    *(ulong *)(this + 0x38) = (ulong)(uVar2 - (int)lVar4);
    return;
  }
  *(undefined8 *)(this + 0x38) = 0;
  return;
}


