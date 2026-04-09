// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cancelReallocateTexture
// Entry Point: 00ab7e7c
// Size: 24 bytes
// Signature: undefined __thiscall cancelReallocateTexture(VulkanRenderDevice * this, ICommandBuffer * param_1, ITextureObject * param_2)


/* VulkanRenderDevice::cancelReallocateTexture(ICommandBuffer*, ITextureObject*) */

void __thiscall
VulkanRenderDevice::cancelReallocateTexture
          (VulkanRenderDevice *this,ICommandBuffer *param_1,ITextureObject *param_2)

{
  if (param_2 != (ITextureObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ab7e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_2 + 8))(param_2);
    return;
  }
  return;
}


