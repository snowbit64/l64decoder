// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DeerBehaviorContext
// Entry Point: 008810fc
// Size: 68 bytes
// Signature: undefined __thiscall DeerBehaviorContext(DeerBehaviorContext * this)


/* DeerBehaviorContext::DeerBehaviorContext() */

void __thiscall DeerBehaviorContext::DeerBehaviorContext(DeerBehaviorContext *this)

{
  BehaviorContext::BehaviorContext((BehaviorContext *)this);
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  this[0x138] = (DeerBehaviorContext)0x0;
  *(undefined ***)this = &PTR__DeerBehaviorContext_00fdc3b0;
  return;
}


