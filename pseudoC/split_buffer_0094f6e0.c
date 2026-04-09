// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 0094f6e0
// Size: 124 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<MaterialShaderManager::CodeInjection,std::__ndk1::allocator<MaterialShaderManager::CodeInjection>&> * this)


/* std::__ndk1::__split_buffer<MaterialShaderManager::CodeInjection,
   std::__ndk1::allocator<MaterialShaderManager::CodeInjection>&>::~__split_buffer() */

void __thiscall
std::__ndk1::
__split_buffer<MaterialShaderManager::CodeInjection,std::__ndk1::allocator<MaterialShaderManager::CodeInjection>&>
::~__split_buffer(__split_buffer<MaterialShaderManager::CodeInjection,std::__ndk1::allocator<MaterialShaderManager::CodeInjection>&>
                  *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(this + 0x10);
  while (lVar2 != lVar1) {
    *(byte **)(this + 0x10) = (byte *)(lVar2 + -0x30);
    if ((*(byte *)(lVar2 + -0x18) & 1) != 0) {
      operator_delete(*(void **)(lVar2 + -8));
    }
    if ((*(byte *)(lVar2 + -0x30) & 1) != 0) {
      operator_delete(*(void **)(lVar2 + -0x20));
    }
    lVar2 = *(long *)(this + 0x10);
  }
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    return;
  }
  return;
}


