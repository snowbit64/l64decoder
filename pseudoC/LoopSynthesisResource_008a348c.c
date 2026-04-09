// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LoopSynthesisResource
// Entry Point: 008a348c
// Size: 76 bytes
// Signature: undefined __thiscall ~LoopSynthesisResource(LoopSynthesisResource * this)


/* non-virtual thunk to LoopSynthesisResource::~LoopSynthesisResource() */

void __thiscall LoopSynthesisResource::~LoopSynthesisResource(LoopSynthesisResource *this)

{
  *(undefined4 *)(this + 8) = 0;
  this[0x10] = (LoopSynthesisResource)0x0;
  *(undefined ***)this = &PTR__LoopSynthesisResource_00fdd460;
  *(undefined ***)(this + -0x10) = &PTR__LoopSynthesisResource_00fdd418;
  LoopSynthesisDataExchanger::~LoopSynthesisDataExchanger
            ((LoopSynthesisDataExchanger *)(this + 0x38));
  Resource::~Resource((Resource *)(this + -0x10));
  return;
}


