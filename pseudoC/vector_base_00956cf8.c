// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__vector_base
// Entry Point: 00956cf8
// Size: 140 bytes
// Signature: undefined __thiscall ~__vector_base(__vector_base<MaterialShaderManager::CodeInjection,std::__ndk1::allocator<MaterialShaderManager::CodeInjection>> * this)


/* std::__ndk1::__vector_base<MaterialShaderManager::CodeInjection,
   std::__ndk1::allocator<MaterialShaderManager::CodeInjection> >::~__vector_base() */

void __thiscall
std::__ndk1::
__vector_base<MaterialShaderManager::CodeInjection,std::__ndk1::allocator<MaterialShaderManager::CodeInjection>>
::~__vector_base(__vector_base<MaterialShaderManager::CodeInjection,std::__ndk1::allocator<MaterialShaderManager::CodeInjection>>
                 *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar1 = *(void **)this;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar3 = pvVar1;
  pvVar2 = *(void **)(this + 8);
  if (*(void **)(this + 8) != pvVar1) {
    do {
      if ((*(byte *)((long)pvVar2 + -0x18) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + -8));
      }
      pvVar3 = (void *)((long)pvVar2 + -0x30);
      if ((*(byte *)((long)pvVar2 + -0x30) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + -0x20));
      }
      pvVar2 = pvVar3;
    } while (pvVar3 != pvVar1);
    pvVar3 = *(void **)this;
  }
  *(void **)(this + 8) = pvVar1;
  operator_delete(pvVar3);
  return;
}


