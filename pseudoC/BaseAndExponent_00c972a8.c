// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BaseAndExponent
// Entry Point: 00c972a8
// Size: 192 bytes
// Signature: undefined __thiscall ~BaseAndExponent(BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer> * this)


/* CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint, CryptoPP::Integer>::~BaseAndExponent() */

void __thiscall
CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>::~BaseAndExponent
          (BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer> *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x70);
  *(undefined ***)(this + 0x50) = &PTR__Integer_0100c890;
  uVar1 = *(ulong *)(this + 0x60);
  if (*(ulong *)(this + 0x68) <= *(ulong *)(this + 0x60)) {
    uVar1 = *(ulong *)(this + 0x68);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c972f0 to 00c972f3 has its CatchHandler @ 00c97370 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x40);
  uVar1 = *(ulong *)(this + 0x30);
  if (*(ulong *)(this + 0x38) <= *(ulong *)(this + 0x30)) {
    uVar1 = *(ulong *)(this + 0x38);
  }
  *(undefined ***)this = &PTR__EC2NPoint_010026a8;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c9732c to 00c9732f has its CatchHandler @ 00c9736c */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x20);
  uVar1 = *(ulong *)(this + 0x10);
  if (*(ulong *)(this + 0x18) <= *(ulong *)(this + 0x10)) {
    uVar1 = *(ulong *)(this + 0x18);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c97358 to 00c9735b has its CatchHandler @ 00c97368 */
  UnalignedDeallocate(pvVar2);
  return;
}


