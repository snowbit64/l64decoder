// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BaseAndExponent
// Entry Point: 00c99208
// Size: 208 bytes
// Signature: undefined __thiscall ~BaseAndExponent(BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> * this)


/* CryptoPP::BaseAndExponent<CryptoPP::ECPPoint, CryptoPP::Integer>::~BaseAndExponent() */

void __thiscall
CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>::~BaseAndExponent
          (BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x90);
  *(undefined ***)(this + 0x70) = &PTR__Integer_0100c890;
  uVar1 = *(ulong *)(this + 0x80);
  if (*(ulong *)(this + 0x88) <= *(ulong *)(this + 0x80)) {
    uVar1 = *(ulong *)(this + 0x88);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c99250 to 00c99253 has its CatchHandler @ 00c992e0 */
  UnalignedDeallocate(pvVar2);
  *(undefined ***)(this + 0x38) = &PTR__Integer_0100c890;
  pvVar2 = *(void **)(this + 0x58);
  *(undefined ***)this = &PTR__ECPPoint_00fe9fd8;
  uVar1 = *(ulong *)(this + 0x48);
  if (*(ulong *)(this + 0x50) <= *(ulong *)(this + 0x48)) {
    uVar1 = *(ulong *)(this + 0x50);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c99294 to 00c99297 has its CatchHandler @ 00c992dc */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x28);
  *(undefined ***)(this + 8) = &PTR__Integer_0100c890;
  uVar1 = *(ulong *)(this + 0x18);
  if (*(ulong *)(this + 0x20) <= *(ulong *)(this + 0x18)) {
    uVar1 = *(ulong *)(this + 0x20);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c992c8 to 00c992cb has its CatchHandler @ 00c992d8 */
  UnalignedDeallocate(pvVar2);
  return;
}


