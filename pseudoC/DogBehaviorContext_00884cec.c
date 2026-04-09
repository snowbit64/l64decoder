// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DogBehaviorContext
// Entry Point: 00884cec
// Size: 240 bytes
// Signature: undefined __thiscall ~DogBehaviorContext(DogBehaviorContext * this)


/* DogBehaviorContext::~DogBehaviorContext() */

void __thiscall DogBehaviorContext::~DogBehaviorContext(DogBehaviorContext *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__DogBehaviorContext_00fdc8b0;
  if (*(long **)(this + 0x188) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x188) + 8))();
    *(undefined8 *)(this + 0x188) = 0;
  }
  if (*(long **)(this + 0x120) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x120) + 8))();
  }
  if (*(long **)(this + 0x128) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x128) + 8))();
  }
  if (*(long **)(this + 0x130) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x130) + 8))();
  }
  if (*(long **)(this + 0x138) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x138) + 8))();
  }
  if (*(long **)(this + 0x140) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x140) + 8))();
  }
  if (*(long **)(this + 0x148) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x148) + 8))();
  }
                    /* try { // try from 00884da0 to 00884da3 has its CatchHandler @ 00884ddc */
  BehaviorTree::reset();
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


