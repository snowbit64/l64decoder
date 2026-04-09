// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~MontgomeryRepresentation
// Entry Point: 00d033ac
// Size: 152 bytes
// Signature: undefined __thiscall ~MontgomeryRepresentation(MontgomeryRepresentation * this)


/* CryptoPP::MontgomeryRepresentation::~MontgomeryRepresentation() */

void __thiscall
CryptoPP::MontgomeryRepresentation::~MontgomeryRepresentation(MontgomeryRepresentation *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0xf0);
  *(undefined ***)this = &PTR__MontgomeryRepresentation_0100ca00;
  uVar1 = *(ulong *)(this + 0xe0);
  if (*(ulong *)(this + 0xe8) <= *(ulong *)(this + 0xe0)) {
    uVar1 = *(ulong *)(this + 0xe8);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00d033f4 to 00d033f7 has its CatchHandler @ 00d03448 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 200);
  uVar1 = *(ulong *)(this + 0xb8);
  if (*(ulong *)(this + 0xc0) <= *(ulong *)(this + 0xb8)) {
    uVar1 = *(ulong *)(this + 0xc0);
  }
  *(undefined ***)(this + 0xa8) = &PTR__Integer_0100c890;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00d03430 to 00d03433 has its CatchHandler @ 00d03444 */
  UnalignedDeallocate(pvVar2);
  ModularArithmetic::~ModularArithmetic((ModularArithmetic *)this);
  return;
}


