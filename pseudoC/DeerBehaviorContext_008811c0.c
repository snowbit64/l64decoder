// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DeerBehaviorContext
// Entry Point: 008811c0
// Size: 136 bytes
// Signature: undefined __thiscall ~DeerBehaviorContext(DeerBehaviorContext * this)


/* DeerBehaviorContext::~DeerBehaviorContext() */

void __thiscall DeerBehaviorContext::~DeerBehaviorContext(DeerBehaviorContext *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__DeerBehaviorContext_00fdc3b0;
  if (*(long **)(this + 0x108) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x108) + 8))();
  }
  if (*(long **)(this + 0x110) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x110) + 8))();
  }
  pvVar1 = *(void **)(this + 0xd0);
  *(undefined ***)this = &PTR__BehaviorContext_00fdc410;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xd8) = pvVar1;
    operator_delete(pvVar1);
  }
  std::__ndk1::__deque_base<BTBehavior*,std::__ndk1::allocator<BTBehavior*>>::~__deque_base
            ((__deque_base<BTBehavior*,std::__ndk1::allocator<BTBehavior*>> *)(this + 0x68));
  StateMachine::~StateMachine((StateMachine *)(this + 8));
  operator_delete(this);
  return;
}


