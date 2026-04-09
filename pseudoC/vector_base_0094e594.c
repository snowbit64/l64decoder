// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__vector_base
// Entry Point: 0094e594
// Size: 156 bytes
// Signature: undefined __thiscall ~__vector_base(__vector_base<CustomShader::Texture,std::__ndk1::allocator<CustomShader::Texture>> * this)


/* std::__ndk1::__vector_base<CustomShader::Texture, std::__ndk1::allocator<CustomShader::Texture>
   >::~__vector_base() */

void __thiscall
std::__ndk1::__vector_base<CustomShader::Texture,std::__ndk1::allocator<CustomShader::Texture>>::
~__vector_base(__vector_base<CustomShader::Texture,std::__ndk1::allocator<CustomShader::Texture>>
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
      if ((*(byte *)((long)pvVar2 + -0x20) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + -0x10));
      }
      if ((*(byte *)((long)pvVar2 + -0x40) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + -0x30));
      }
      pvVar3 = (void *)((long)pvVar2 + -0x58);
      if ((*(byte *)((long)pvVar2 + -0x58) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + -0x48));
      }
      pvVar2 = pvVar3;
    } while (pvVar3 != pvVar1);
    pvVar3 = *(void **)this;
  }
  *(void **)(this + 8) = pvVar1;
  operator_delete(pvVar3);
  return;
}


