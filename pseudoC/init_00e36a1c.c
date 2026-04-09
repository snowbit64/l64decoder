// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00e36a1c
// Size: 84 bytes
// Signature: undefined __thiscall init(AlignedFloatBuffer * this, uint param_1)


/* SoLoud::AlignedFloatBuffer::init(unsigned int) */

undefined8 __thiscall SoLoud::AlignedFloatBuffer::init(AlignedFloatBuffer *this,uint param_1)

{
  void *pvVar1;
  
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  *(uint *)(this + 0x10) = param_1;
  pvVar1 = operator_new__((ulong)param_1 * 4 + 0x40);
  *(ulong *)this = (long)pvVar1 + 0x1fU & 0xffffffffffffffe0;
  *(void **)(this + 8) = pvVar1;
  return 0;
}


