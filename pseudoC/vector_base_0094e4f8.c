// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__vector_base
// Entry Point: 0094e4f8
// Size: 156 bytes
// Signature: undefined __thiscall ~__vector_base(__vector_base<CustomShader::Parameter,std::__ndk1::allocator<CustomShader::Parameter>> * this)


/* std::__ndk1::__vector_base<CustomShader::Parameter,
   std::__ndk1::allocator<CustomShader::Parameter> >::~__vector_base() */

void __thiscall
std::__ndk1::__vector_base<CustomShader::Parameter,std::__ndk1::allocator<CustomShader::Parameter>>
::~__vector_base(__vector_base<CustomShader::Parameter,std::__ndk1::allocator<CustomShader::Parameter>>
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
      if ((*(byte *)((long)pvVar2 + -0x68) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + -0x58));
      }
      pvVar3 = (void *)((long)pvVar2 + -0x80);
      if ((*(byte *)((long)pvVar2 + -0x80) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + -0x70));
      }
      pvVar2 = pvVar3;
    } while (pvVar3 != pvVar1);
    pvVar3 = *(void **)this;
  }
  *(void **)(this + 8) = pvVar1;
  operator_delete(pvVar3);
  return;
}


