// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 0094f8f0
// Size: 104 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<CustomShader::VertexDeclarationAttribute,std::__ndk1::allocator<CustomShader::VertexDeclarationAttribute>&> * this)


/* std::__ndk1::__split_buffer<CustomShader::VertexDeclarationAttribute,
   std::__ndk1::allocator<CustomShader::VertexDeclarationAttribute>&>::~__split_buffer() */

void __thiscall
std::__ndk1::
__split_buffer<CustomShader::VertexDeclarationAttribute,std::__ndk1::allocator<CustomShader::VertexDeclarationAttribute>&>
::~__split_buffer(__split_buffer<CustomShader::VertexDeclarationAttribute,std::__ndk1::allocator<CustomShader::VertexDeclarationAttribute>&>
                  *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 8);
  lVar3 = *(long *)(this + 0x10);
  while (lVar2 = lVar3, lVar2 != lVar1) {
    *(long *)(this + 0x10) = lVar2 + -0x20;
    lVar3 = lVar2 + -0x20;
    if ((*(byte *)(lVar2 + -0x18) & 1) != 0) {
      operator_delete(*(void **)(lVar2 + -8));
      lVar3 = *(long *)(this + 0x10);
    }
  }
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    return;
  }
  return;
}


