// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VulkanShaderObject
// Entry Point: 00ac87a4
// Size: 192 bytes
// Signature: undefined __thiscall ~VulkanShaderObject(VulkanShaderObject * this)


/* VulkanShaderObject::~VulkanShaderObject() */

void __thiscall VulkanShaderObject::~VulkanShaderObject(VulkanShaderObject *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__VulkanShaderObject_00fe6628;
  if (*(long *)(this + 0x10) != 0) {
                    /* try { // try from 00ac87e4 to 00ac87eb has its CatchHandler @ 00ac8864 */
    (*vkDestroyShaderModule)(*(undefined8 *)(*(long *)(this + 8) + 0x18),*(long *)(this + 0x10),0);
  }
  pvVar1 = *(void **)(this + 0x30);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x38) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar3 = pvVar1;
  pvVar2 = *(void **)(this + 0x20);
  if (*(void **)(this + 0x20) != pvVar1) {
    do {
      pvVar3 = (void *)((long)pvVar2 + -0x28);
      if ((*(byte *)((long)pvVar2 + -0x20) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + -0x10));
      }
      pvVar2 = pvVar3;
    } while (pvVar3 != pvVar1);
    pvVar3 = *(void **)(this + 0x18);
  }
  *(void **)(this + 0x20) = pvVar1;
  operator_delete(pvVar3);
  return;
}


