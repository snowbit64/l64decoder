// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 008b141c
// Size: 104 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<SteadyLoopRuntimeSettings::LoopData,std::__ndk1::allocator<SteadyLoopRuntimeSettings::LoopData>&> * this)


/* std::__ndk1::__split_buffer<SteadyLoopRuntimeSettings::LoopData,
   std::__ndk1::allocator<SteadyLoopRuntimeSettings::LoopData>&>::~__split_buffer() */

void __thiscall
std::__ndk1::
__split_buffer<SteadyLoopRuntimeSettings::LoopData,std::__ndk1::allocator<SteadyLoopRuntimeSettings::LoopData>&>
::~__split_buffer(__split_buffer<SteadyLoopRuntimeSettings::LoopData,std::__ndk1::allocator<SteadyLoopRuntimeSettings::LoopData>&>
                  *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 8);
  lVar3 = *(long *)(this + 0x10);
  while (lVar2 = lVar3, lVar2 != lVar1) {
    *(long *)(this + 0x10) = lVar2 + -0x48;
    lVar3 = lVar2 + -0x48;
    if ((*(byte *)(lVar2 + -0x48) & 1) != 0) {
      operator_delete(*(void **)(lVar2 + -0x38));
      lVar3 = *(long *)(this + 0x10);
    }
  }
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    return;
  }
  return;
}


