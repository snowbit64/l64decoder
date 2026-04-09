// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__vector_base
// Entry Point: 008657e4
// Size: 124 bytes
// Signature: undefined __thiscall ~__vector_base(__vector_base<ConditionalAnimationItem::LoadedCallbackInfo,std::__ndk1::allocator<ConditionalAnimationItem::LoadedCallbackInfo>> * this)


/* std::__ndk1::__vector_base<ConditionalAnimationItem::LoadedCallbackInfo,
   std::__ndk1::allocator<ConditionalAnimationItem::LoadedCallbackInfo> >::~__vector_base() */

void __thiscall
std::__ndk1::
__vector_base<ConditionalAnimationItem::LoadedCallbackInfo,std::__ndk1::allocator<ConditionalAnimationItem::LoadedCallbackInfo>>
::~__vector_base(__vector_base<ConditionalAnimationItem::LoadedCallbackInfo,std::__ndk1::allocator<ConditionalAnimationItem::LoadedCallbackInfo>>
                 *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar2 = *(void **)this;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  pvVar3 = pvVar2;
  pvVar1 = *(void **)(this + 8);
  if (*(void **)(this + 8) != pvVar2) {
    do {
      pvVar3 = (void *)((long)pvVar1 + -0x20);
      if ((*(byte *)((long)pvVar1 + -0x18) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar1 + -8));
      }
      pvVar1 = pvVar3;
    } while (pvVar3 != pvVar2);
    pvVar3 = *(void **)this;
  }
  *(void **)(this + 8) = pvVar2;
  operator_delete(pvVar3);
  return;
}


