// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: acquireTextureAsShaderResource
// Entry Point: 00aafc58
// Size: 64 bytes
// Signature: undefined __thiscall acquireTextureAsShaderResource(VulkanTextureObject * this, uint param_1, bool param_2)


/* VulkanTextureObject::acquireTextureAsShaderResource(unsigned int, bool) */

VulkanTextureObject * __thiscall
VulkanTextureObject::acquireTextureAsShaderResource
          (VulkanTextureObject *this,uint param_1,bool param_2)

{
  long lVar1;
  
  if (param_1 != 0xffffffff) {
    if (param_2) {
      lVar1 = *(long *)(this + 0x118);
    }
    else {
      lVar1 = *(long *)(this + 0x100);
    }
    return (VulkanTextureObject *)(lVar1 + (ulong)param_1 * 0x18);
  }
  lVar1 = 0xd0;
  if (!param_2) {
    lVar1 = 0xb8;
  }
  return this + lVar1;
}


