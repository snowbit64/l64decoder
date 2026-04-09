// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createProgramObject
// Entry Point: 00ac8784
// Size: 32 bytes
// Signature: undefined __thiscall createProgramObject(VulkanShaderCreator * this, CompiledProgramObjectDesc * param_1)


/* VulkanShaderCreator::createProgramObject(CompiledProgramObjectDesc const&) */

void __thiscall
VulkanShaderCreator::createProgramObject
          (VulkanShaderCreator *this,CompiledProgramObjectDesc *param_1)

{
  if (*(VulkanShaderObject **)(param_1 + 0x10) != (VulkanShaderObject *)0x0) {
    VulkanRenderDevice::createComputeProgramObject
              (*(VulkanRenderDevice **)(this + 8),*(VulkanShaderObject **)(param_1 + 0x10));
    return;
  }
  VulkanRenderDevice::createProgramObject
            (*(VulkanRenderDevice **)(this + 8),*(VulkanShaderObject **)param_1,
             *(VulkanShaderObject **)(param_1 + 8));
  return;
}


