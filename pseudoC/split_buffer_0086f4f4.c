// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 0086f4f4
// Size: 192 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<ConditionalAnimationConditions::Group,std::__ndk1::allocator<ConditionalAnimationConditions::Group>&> * this)


/* std::__ndk1::__split_buffer<ConditionalAnimationConditions::Group,
   std::__ndk1::allocator<ConditionalAnimationConditions::Group>&>::~__split_buffer() */

void __thiscall
std::__ndk1::
__split_buffer<ConditionalAnimationConditions::Group,std::__ndk1::allocator<ConditionalAnimationConditions::Group>&>
::~__split_buffer(__split_buffer<ConditionalAnimationConditions::Group,std::__ndk1::allocator<ConditionalAnimationConditions::Group>&>
                  *this)

{
  void **ppvVar1;
  void **ppvVar2;
  void **ppvVar3;
  void *pvVar4;
  void **ppvVar5;
  void **ppvVar6;
  void **ppvVar7;
  
  ppvVar1 = *(void ***)(this + 8);
  ppvVar6 = *(void ***)(this + 0x10);
  while (ppvVar2 = ppvVar6, ppvVar2 != ppvVar1) {
    ppvVar6 = ppvVar2 + -3;
    ppvVar7 = (void **)*ppvVar6;
    *(void ***)(this + 0x10) = ppvVar6;
    if (ppvVar7 != (void **)0x0) {
      ppvVar5 = (void **)ppvVar2[-2];
      ppvVar3 = ppvVar7;
      if (ppvVar5 != ppvVar7) {
        do {
          ppvVar3 = ppvVar5 + -4;
          pvVar4 = *ppvVar3;
          if (pvVar4 != (void *)0x0) {
            ppvVar5[-3] = pvVar4;
            operator_delete(pvVar4);
          }
          ppvVar5 = ppvVar3;
        } while (ppvVar3 != ppvVar7);
        ppvVar3 = (void **)*ppvVar6;
      }
      ppvVar2[-2] = ppvVar7;
      operator_delete(ppvVar3);
      ppvVar6 = *(void ***)(this + 0x10);
    }
  }
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


