// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LoopSynthesisResource
// Entry Point: 008a3528
// Size: 84 bytes
// Signature: undefined __thiscall ~LoopSynthesisResource(LoopSynthesisResource * this)


/* non-virtual thunk to LoopSynthesisResource::~LoopSynthesisResource() */

void __thiscall LoopSynthesisResource::~LoopSynthesisResource(LoopSynthesisResource *this)

{
  undefined8 *this_00;
  
  *(undefined4 *)(this + 8) = 0;
  this[0x10] = (LoopSynthesisResource)0x0;
  *(undefined ***)this = &PTR__LoopSynthesisResource_00fdd460;
  this_00 = (undefined8 *)(this + -0x10);
  *this_00 = &PTR__LoopSynthesisResource_00fdd418;
  LoopSynthesisDataExchanger::~LoopSynthesisDataExchanger
            ((LoopSynthesisDataExchanger *)(this + 0x38));
  Resource::~Resource((Resource *)this_00);
  operator_delete(this_00);
  return;
}


