// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 00877530
// Size: 168 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<AnimalCompanionManager::AnimalData,std::__ndk1::allocator<AnimalCompanionManager::AnimalData>&> * this)


/* std::__ndk1::__split_buffer<AnimalCompanionManager::AnimalData,
   std::__ndk1::allocator<AnimalCompanionManager::AnimalData>&>::~__split_buffer() */

void __thiscall
std::__ndk1::
__split_buffer<AnimalCompanionManager::AnimalData,std::__ndk1::allocator<AnimalCompanionManager::AnimalData>&>
::~__split_buffer(__split_buffer<AnimalCompanionManager::AnimalData,std::__ndk1::allocator<AnimalCompanionManager::AnimalData>&>
                  *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 8);
  lVar3 = *(long *)(this + 0x10);
  while (lVar3 != lVar1) {
    plVar2 = *(long **)(lVar3 + -0x40);
    *(long *)(this + 0x10) = lVar3 + -0x58;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (*(long **)(lVar3 + -0x48) != (long *)0x0) {
      (**(code **)(**(long **)(lVar3 + -0x48) + 8))();
    }
    if (*(long **)(lVar3 + -0x50) != (long *)0x0) {
      (**(code **)(**(long **)(lVar3 + -0x50) + 8))();
    }
    if ((*(byte *)(lVar3 + -0x28) & 1) != 0) {
      operator_delete(*(void **)(lVar3 + -0x18));
    }
    lVar3 = *(long *)(this + 0x10);
  }
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    return;
  }
  return;
}


