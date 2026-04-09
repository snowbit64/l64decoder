// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createPipelineLayout
// Entry Point: 00abbfd4
// Size: 140 bytes
// Signature: undefined __cdecl createPipelineLayout(PipelineLayoutDesc * param_1, VkDevice_T * param_2)


/* VulkanProgramObject::createPipelineLayout(VulkanProgramObject::PipelineLayoutDesc const&,
   VkDevice_T*) */

void VulkanProgramObject::createPipelineLayout(PipelineLayoutDesc *param_1,VkDevice_T *param_2)

{
  long lVar1;
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined8 local_50;
  PipelineLayoutDesc *local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60[0] = 0x1e;
  local_58 = 0;
  local_50 = 0x400000000;
  local_40 = 0;
  local_38 = 0;
  local_48 = param_1;
  (*vkCreatePipelineLayout)(param_2,local_60,0,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30);
}


