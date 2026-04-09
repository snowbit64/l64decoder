// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Animal
// Entry Point: 007031b0
// Size: 164 bytes
// Signature: undefined __thiscall ~Animal(Animal * this)


/* Animal::~Animal() */

void __thiscall Animal::~Animal(Animal *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__Animal_00fd9b58;
                    /* try { // try from 007031d8 to 007031df has its CatchHandler @ 00703254 */
  AnimalLocomotionSystem::destroy();
  if (*(long **)(this + 0x6a8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x6a8) + 8))();
  }
  if (*(long **)(this + 0x6f8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x6f8) + 8))();
  }
  std::__ndk1::__deque_base<BTBehavior*,std::__ndk1::allocator<BTBehavior*>>::~__deque_base
            ((__deque_base<BTBehavior*,std::__ndk1::allocator<BTBehavior*>> *)(this + 0x6c8));
  pvVar1 = *(void **)(this + 0x6b0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x6b8) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x638);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x640) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x5e8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x5f0) = pvVar1;
    operator_delete(pvVar1);
  }
  AnimalAnimationSystem::~AnimalAnimationSystem((AnimalAnimationSystem *)(this + 0x250));
  return;
}


