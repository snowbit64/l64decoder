// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLoadOp
// Entry Point: 00acd580
// Size: 40 bytes
// Signature: undefined __cdecl getLoadOp(LOAD_ACTION param_1, uint param_2)


/* VulkanCommandBuffer::getLoadOp(RenderTargetDesc::LOAD_ACTION, unsigned int) */

bool VulkanCommandBuffer::getLoadOp(LOAD_ACTION param_1,uint param_2)

{
  if (param_1 == 0) {
    return (bool)2;
  }
  if (param_1 == 1) {
    return param_2 == 0;
  }
  return false;
}


