// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 00877eec
// Size: 136 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<AnimalSteering,std::__ndk1::allocator<AnimalSteering>&> * this)


/* std::__ndk1::__split_buffer<AnimalSteering,
   std::__ndk1::allocator<AnimalSteering>&>::~__split_buffer() */

void __thiscall
std::__ndk1::__split_buffer<AnimalSteering,std::__ndk1::allocator<AnimalSteering>&>::~__split_buffer
          (__split_buffer<AnimalSteering,std::__ndk1::allocator<AnimalSteering>&> *this)

{
  long lVar1;
  void *pvVar2;
  __tree_node *p_Var3;
  long lVar4;
  
  lVar1 = *(long *)(this + 8);
  lVar4 = *(long *)(this + 0x10);
  while (lVar4 != lVar1) {
    p_Var3 = *(__tree_node **)(lVar4 + -0x18);
    *(long *)(this + 0x10) = lVar4 + -0xe0;
    __tree<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>>>
    ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>>>
               *)(lVar4 + -0x20),p_Var3);
    pvVar2 = *(void **)(lVar4 + -0x48);
    if (pvVar2 != (void *)0x0) {
      *(void **)(lVar4 + -0x40) = pvVar2;
      operator_delete(pvVar2);
    }
    pvVar2 = *(void **)(lVar4 + -0x60);
    if (pvVar2 != (void *)0x0) {
      *(void **)(lVar4 + -0x58) = pvVar2;
      operator_delete(pvVar2);
    }
    lVar4 = *(long *)(this + 0x10);
  }
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    return;
  }
  return;
}


