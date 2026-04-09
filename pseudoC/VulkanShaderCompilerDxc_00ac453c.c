// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VulkanShaderCompilerDxc
// Entry Point: 00ac453c
// Size: 124 bytes
// Signature: undefined __thiscall ~VulkanShaderCompilerDxc(VulkanShaderCompilerDxc * this)


/* VulkanShaderCompilerDxc::~VulkanShaderCompilerDxc() */

void __thiscall VulkanShaderCompilerDxc::~VulkanShaderCompilerDxc(VulkanShaderCompilerDxc *this)

{
  VulkanShaderCompilerDxc VVar1;
  
  *(undefined ***)this = &PTR__VulkanShaderCompilerDxc_00fe6520;
  SpirvCompilerDxc::~SpirvCompilerDxc((SpirvCompilerDxc *)(this + 0x68));
  if (((byte)this[0x50] & 1) == 0) {
    VVar1 = this[0x38];
  }
  else {
    operator_delete(*(void **)(this + 0x60));
    VVar1 = this[0x38];
  }
  if (((byte)VVar1 & 1) == 0) {
    VVar1 = this[0x20];
  }
  else {
    operator_delete(*(void **)(this + 0x48));
    VVar1 = this[0x20];
  }
  if (((byte)VVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x30));
  }
  operator_delete(this);
  return;
}


