// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVulkanBlendFactor
// Entry Point: 00aba47c
// Size: 32 bytes
// Signature: undefined __cdecl getVulkanBlendFactor(SCENE_BLEND_FACTOR param_1)


/* VulkanBlendState::getVulkanBlendFactor(BlendStateDesc::SCENE_BLEND_FACTOR) */

undefined4 VulkanBlendState::getVulkanBlendFactor(SCENE_BLEND_FACTOR param_1)

{
  if (param_1 < 10) {
    return *(undefined4 *)(&DAT_005233b4 + (long)(int)param_1 * 4);
  }
  return 0;
}


