// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsValidKeyLength
// Entry Point: 00bbec84
// Size: 48 bytes
// Signature: undefined __thiscall IsValidKeyLength(SimpleKeyingInterface * this, ulong param_1)


/* CryptoPP::SimpleKeyingInterface::IsValidKeyLength(unsigned long) const */

bool __thiscall
CryptoPP::SimpleKeyingInterface::IsValidKeyLength(SimpleKeyingInterface *this,ulong param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0x28))();
  return uVar1 == param_1;
}


