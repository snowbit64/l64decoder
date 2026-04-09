// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: adjustViewport
// Entry Point: 00ad86c8
// Size: 124 bytes
// Signature: undefined __cdecl adjustViewport(VkSurfaceTransformFlagBitsKHR param_1, uint * param_2, uint * param_3, uint * param_4, uint * param_5)


/* VulkanUtil::adjustViewport(VkSurfaceTransformFlagBitsKHR, unsigned int&, unsigned int&, unsigned
   int&, unsigned int&) */

void VulkanUtil::adjustViewport
               (VkSurfaceTransformFlagBitsKHR param_1,uint *param_2,uint *param_3,uint *param_4,
               uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = *param_4;
  uVar3 = *param_5;
  uVar6 = *param_2;
  uVar5 = *param_3;
  uVar1 = uVar3;
  uVar4 = uVar2;
  if ((param_1 & 10) != 0) {
    uVar1 = uVar2;
    uVar4 = uVar3;
  }
  if (param_1 == 8) {
    uVar6 = uVar1 - (uVar2 + uVar6);
  }
  else {
    if (param_1 == 4) {
      *param_2 = uVar4 - (uVar2 + uVar6);
      *param_3 = uVar1 - (uVar3 + uVar5);
      return;
    }
    if (param_1 != 2) {
      return;
    }
    uVar5 = uVar4 - (uVar3 + uVar5);
  }
  *param_2 = uVar5;
  *param_3 = uVar6;
  *param_4 = uVar3;
  *param_5 = uVar2;
  return;
}


