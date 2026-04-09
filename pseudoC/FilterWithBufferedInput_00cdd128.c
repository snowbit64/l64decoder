// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~FilterWithBufferedInput
// Entry Point: 00cdd128
// Size: 140 bytes
// Signature: undefined __thiscall ~FilterWithBufferedInput(FilterWithBufferedInput * this)


/* CryptoPP::FilterWithBufferedInput::~FilterWithBufferedInput() */

void __thiscall
CryptoPP::FilterWithBufferedInput::~FilterWithBufferedInput(FilterWithBufferedInput *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x68);
  *(undefined ***)this = &PTR__FilterWithBufferedInput_01006138;
  *(undefined ***)(this + 8) = &PTR__FilterWithBufferedInput_01006348;
  uVar1 = *(ulong *)(this + 0x58);
  if (*(ulong *)(this + 0x60) <= *(ulong *)(this + 0x58)) {
    uVar1 = *(ulong *)(this + 0x60);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00cdd174 to 00cdd177 has its CatchHandler @ 00cdd1b4 */
  UnalignedDeallocate(pvVar2);
  *(undefined ***)this = &PTR__Filter_01005f60;
  *(undefined ***)(this + 8) = &PTR__Filter_01006108;
  if (*(long **)(this + 0x18) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00cdd1a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x18) + 8))();
  return;
}


