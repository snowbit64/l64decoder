// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MaxUnpaddedLength
// Entry Point: 00d19848
// Size: 56 bytes
// Signature: undefined __thiscall MaxUnpaddedLength(OAEP_Base * this, ulong param_1)


/* CryptoPP::OAEP_Base::MaxUnpaddedLength(unsigned long) const */

long __thiscall CryptoPP::OAEP_Base::MaxUnpaddedLength(OAEP_Base *this,ulong param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  iVar2 = (**(code **)(*(long *)this + 0x30))();
  uVar3 = (ulong)(iVar2 << 1 | 1);
  lVar1 = 0;
  if (uVar3 <= param_1 >> 3) {
    lVar1 = (param_1 >> 3) - uVar3;
  }
  return lVar1;
}


