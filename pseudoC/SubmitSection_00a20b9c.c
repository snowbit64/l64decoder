// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SubmitSection
// Entry Point: 00a20b9c
// Size: 84 bytes
// Signature: undefined __thiscall ~SubmitSection(SubmitSection * this)


/* RenderQueue::SubmitSection::~SubmitSection() */

void __thiscall RenderQueue::SubmitSection::~SubmitSection(SubmitSection *this)

{
  *(undefined ***)(this + 0x110) = &PTR__Task_00fde908;
  if (((byte)this[0x120] & 1) != 0) {
    operator_delete(*(void **)(this + 0x130));
  }
  if (((byte)this[0xf8] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x108));
  return;
}


