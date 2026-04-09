// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BehaviorContext
// Entry Point: 00881adc
// Size: 72 bytes
// Signature: undefined __thiscall ~BehaviorContext(BehaviorContext * this)


/* BehaviorContext::~BehaviorContext() */

void __thiscall BehaviorContext::~BehaviorContext(BehaviorContext *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0xd0);
  *(undefined ***)this = &PTR__BehaviorContext_00fdc410;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xd8) = pvVar1;
    operator_delete(pvVar1);
  }
  std::__ndk1::__deque_base<BTBehavior*,std::__ndk1::allocator<BTBehavior*>>::~__deque_base
            ((__deque_base<BTBehavior*,std::__ndk1::allocator<BTBehavior*>> *)(this + 0x68));
  StateMachine::~StateMachine((StateMachine *)(this + 8));
  return;
}


