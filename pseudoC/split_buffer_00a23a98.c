// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 00a23a98
// Size: 160 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<RenderQueue::SubmitSection,std::__ndk1::allocator<RenderQueue::SubmitSection>&> * this)


/* std::__ndk1::__split_buffer<RenderQueue::SubmitSection,
   std::__ndk1::allocator<RenderQueue::SubmitSection>&>::~__split_buffer() */

void __thiscall
std::__ndk1::
__split_buffer<RenderQueue::SubmitSection,std::__ndk1::allocator<RenderQueue::SubmitSection>&>::
~__split_buffer(__split_buffer<RenderQueue::SubmitSection,std::__ndk1::allocator<RenderQueue::SubmitSection>&>
                *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(this + 0x10);
  while (lVar2 != lVar1) {
    *(long *)(this + 0x10) = lVar2 + -0x2c0;
    *(undefined ***)(lVar2 + -0x1b0) = &PTR__Task_00fde908;
    if ((*(byte *)(lVar2 + -0x1a0) & 1) != 0) {
      operator_delete(*(void **)(lVar2 + -400));
    }
    if ((*(byte *)(lVar2 + -0x1c8) & 1) != 0) {
      operator_delete(*(void **)(lVar2 + -0x1b8));
    }
    lVar2 = *(long *)(this + 0x10);
  }
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    return;
  }
  return;
}


