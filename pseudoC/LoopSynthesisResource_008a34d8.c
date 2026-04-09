// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LoopSynthesisResource
// Entry Point: 008a34d8
// Size: 80 bytes
// Signature: undefined __thiscall ~LoopSynthesisResource(LoopSynthesisResource * this)


/* LoopSynthesisResource::~LoopSynthesisResource() */

void __thiscall LoopSynthesisResource::~LoopSynthesisResource(LoopSynthesisResource *this)

{
  *(undefined4 *)(this + 0x18) = 0;
  this[0x20] = (LoopSynthesisResource)0x0;
  *(undefined ***)this = &PTR__LoopSynthesisResource_00fdd418;
  *(undefined ***)(this + 0x10) = &PTR__LoopSynthesisResource_00fdd460;
  LoopSynthesisDataExchanger::~LoopSynthesisDataExchanger
            ((LoopSynthesisDataExchanger *)(this + 0x48));
  Resource::~Resource((Resource *)this);
  operator_delete(this);
  return;
}


