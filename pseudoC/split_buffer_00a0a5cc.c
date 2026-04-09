// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 00a0a5cc
// Size: 84 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<RenderQueueItemAllocator::TempData,std::__ndk1::allocator<RenderQueueItemAllocator::TempData>&> * this)


/* std::__ndk1::__split_buffer<RenderQueueItemAllocator::TempData,
   std::__ndk1::allocator<RenderQueueItemAllocator::TempData>&>::~__split_buffer() */

void __thiscall
std::__ndk1::
__split_buffer<RenderQueueItemAllocator::TempData,std::__ndk1::allocator<RenderQueueItemAllocator::TempData>&>
::~__split_buffer(__split_buffer<RenderQueueItemAllocator::TempData,std::__ndk1::allocator<RenderQueueItemAllocator::TempData>&>
                  *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(this + 0x10);
  while (lVar2 != lVar1) {
    *(TempData **)(this + 0x10) = (TempData *)(lVar2 + -0xa8);
    RenderQueueItemAllocator::TempData::~TempData((TempData *)(lVar2 + -0xa8));
    lVar2 = *(long *)(this + 0x10);
  }
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


