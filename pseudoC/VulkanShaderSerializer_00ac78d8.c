// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VulkanShaderSerializer
// Entry Point: 00ac78d8
// Size: 148 bytes
// Signature: undefined __thiscall ~VulkanShaderSerializer(VulkanShaderSerializer * this)


/* VulkanShaderSerializer::~VulkanShaderSerializer() */

void __thiscall VulkanShaderSerializer::~VulkanShaderSerializer(VulkanShaderSerializer *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar1 = *(void **)(this + 0x20);
  *(undefined ***)this = &PTR__VulkanShaderSerializer_00fe65b0;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = pvVar1;
    pvVar2 = *(void **)(this + 0x10);
    if (*(void **)(this + 0x10) != pvVar1) {
      do {
        pvVar3 = (void *)((long)pvVar2 + -0x28);
        if ((*(byte *)((long)pvVar2 + -0x20) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar2 + -0x10));
        }
        pvVar2 = pvVar3;
      } while (pvVar3 != pvVar1);
      pvVar3 = *(void **)(this + 8);
    }
    *(void **)(this + 0x10) = pvVar1;
    operator_delete(pvVar3);
  }
  operator_delete(this);
  return;
}


