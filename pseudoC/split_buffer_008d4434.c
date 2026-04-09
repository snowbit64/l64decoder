// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 008d4434
// Size: 112 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<std::__ndk1::vector<Vector3,std::__ndk1::allocator<Vector3>>,std::__ndk1::allocator<std::__ndk1::vector<Vector3,std::__ndk1::allocator<Vector3>>>&> * this)


/* std::__ndk1::__split_buffer<std::__ndk1::vector<Vector3, std::__ndk1::allocator<Vector3> >,
   std::__ndk1::allocator<std::__ndk1::vector<Vector3, std::__ndk1::allocator<Vector3> >
   >&>::~__split_buffer() */

void __thiscall
std::__ndk1::
__split_buffer<std::__ndk1::vector<Vector3,std::__ndk1::allocator<Vector3>>,std::__ndk1::allocator<std::__ndk1::vector<Vector3,std::__ndk1::allocator<Vector3>>>&>
::~__split_buffer(__split_buffer<std::__ndk1::vector<Vector3,std::__ndk1::allocator<Vector3>>,std::__ndk1::allocator<std::__ndk1::vector<Vector3,std::__ndk1::allocator<Vector3>>>&>
                  *this)

{
  void **ppvVar1;
  void *pvVar2;
  void **ppvVar3;
  void **ppvVar4;
  
  ppvVar1 = *(void ***)(this + 8);
  ppvVar4 = *(void ***)(this + 0x10);
  while (ppvVar3 = ppvVar4, ppvVar3 != ppvVar1) {
    while( true ) {
      ppvVar4 = ppvVar3 + -3;
      pvVar2 = *ppvVar4;
      *(void ***)(this + 0x10) = ppvVar4;
      if (pvVar2 == (void *)0x0) break;
      ppvVar3[-2] = pvVar2;
      operator_delete(pvVar2);
      ppvVar3 = *(void ***)(this + 0x10);
      if (ppvVar3 == ppvVar1) goto LAB_008d4484;
    }
  }
LAB_008d4484:
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


