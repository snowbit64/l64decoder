// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createDepthStencilState
// Entry Point: 00ad7c3c
// Size: 88 bytes
// Signature: undefined __cdecl createDepthStencilState(DepthStencilStateDesc * param_1, VkPipelineDepthStencilStateCreateInfo * param_2)


/* VulkanDepthStencilState::createDepthStencilState(DepthStencilStateDesc const&,
   VkPipelineDepthStencilStateCreateInfo&) */

void VulkanDepthStencilState::createDepthStencilState
               (DepthStencilStateDesc *param_1,VkPipelineDepthStencilStateCreateInfo *param_2)

{
  uint uVar1;
  int iVar2;
  DepthStencilStateDesc DVar3;
  uint uVar4;
  
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)param_2 = 0x19;
  iVar2 = *(int *)(param_1 + 4);
  DVar3 = *param_1;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  uVar4 = iVar2 - 1;
  uVar1 = (uint)(byte)DVar3;
  if (uVar4 != 0) {
    uVar1 = 1;
  }
  *(uint *)(param_2 + 0x14) = uVar1;
  *(uint *)(param_2 + 0x18) = (uint)(byte)DVar3;
  if (uVar4 < 7) {
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(&DAT_00523a54 + (long)(int)uVar4 * 4);
  }
  *(undefined8 *)(param_2 + 0x60) = 0x3f80000000000000;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  return;
}


