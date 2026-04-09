// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BaseAndExponent
// Entry Point: 00c86de8
// Size: 140 bytes
// Signature: undefined __thiscall ~BaseAndExponent(BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer> * this)


/* CryptoPP::BaseAndExponent<CryptoPP::Integer, CryptoPP::Integer>::~BaseAndExponent() */

void __thiscall
CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>::~BaseAndExponent
          (BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer> *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x50);
  *(undefined ***)(this + 0x30) = &PTR__Integer_0100c890;
  uVar1 = *(ulong *)(this + 0x40);
  if (*(ulong *)(this + 0x48) <= *(ulong *)(this + 0x40)) {
    uVar1 = *(ulong *)(this + 0x48);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c86e30 to 00c86e33 has its CatchHandler @ 00c86e78 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x20);
  *(undefined ***)this = &PTR__Integer_0100c890;
  uVar1 = *(ulong *)(this + 0x10);
  if (*(ulong *)(this + 0x18) <= *(ulong *)(this + 0x10)) {
    uVar1 = *(ulong *)(this + 0x18);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c86e64 to 00c86e67 has its CatchHandler @ 00c86e74 */
  UnalignedDeallocate(pvVar2);
  return;
}


