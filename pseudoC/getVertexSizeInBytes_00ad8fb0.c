// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVertexSizeInBytes
// Entry Point: 00ad8fb0
// Size: 16 bytes
// Signature: undefined __thiscall getVertexSizeInBytes(VulkanVertexDeclaration * this, uint param_1)


/* VulkanVertexDeclaration::getVertexSizeInBytes(unsigned int) const */

undefined4 __thiscall
VulkanVertexDeclaration::getVertexSizeInBytes(VulkanVertexDeclaration *this,uint param_1)

{
  return *(undefined4 *)(*(long *)(this + 8) + (ulong)param_1 * 4 + 0x124);
}


