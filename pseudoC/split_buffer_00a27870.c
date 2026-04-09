// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 00a27870
// Size: 112 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<ReflectionRenderController::RenderTargetUsageInfo,std::__ndk1::allocator<ReflectionRenderController::RenderTargetUsageInfo>&> * this)


/* std::__ndk1::__split_buffer<ReflectionRenderController::RenderTargetUsageInfo,
   std::__ndk1::allocator<ReflectionRenderController::RenderTargetUsageInfo>&>::~__split_buffer() */

void __thiscall
std::__ndk1::
__split_buffer<ReflectionRenderController::RenderTargetUsageInfo,std::__ndk1::allocator<ReflectionRenderController::RenderTargetUsageInfo>&>
::~__split_buffer(__split_buffer<ReflectionRenderController::RenderTargetUsageInfo,std::__ndk1::allocator<ReflectionRenderController::RenderTargetUsageInfo>&>
                  *this)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(this + 0x10);
  while (lVar4 = lVar2, lVar4 != lVar1) {
    while( true ) {
      pvVar3 = *(void **)(lVar4 + -0x18);
      *(long *)(this + 0x10) = lVar4 + -0x30;
      lVar2 = lVar4 + -0x30;
      if (pvVar3 == (void *)0x0) break;
      *(void **)(lVar4 + -0x10) = pvVar3;
      operator_delete(pvVar3);
      lVar4 = *(long *)(this + 0x10);
      if (lVar4 == lVar1) goto LAB_00a278c0;
    }
  }
LAB_00a278c0:
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


