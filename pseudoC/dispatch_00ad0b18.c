// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dispatch
// Entry Point: 00ad0b18
// Size: 192 bytes
// Signature: undefined __thiscall dispatch(VulkanCommandBuffer * this, uint param_1, uint param_2, uint param_3)


/* non-virtual thunk to VulkanCommandBuffer::dispatch(unsigned int, unsigned int, unsigned int) */

void __thiscall
VulkanCommandBuffer::dispatch(VulkanCommandBuffer *this,uint param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  VulkanCommandBuffer *this_00;
  
  this_00 = this + -8;
  uVar1 = acquireVkCommandBuffer(this_00,0);
  bindResources(this_00,1);
  uVar2 = getPipelineState(this_00,1,5);
  (*vkCmdBindPipeline)(uVar1,1,uVar2);
  *(undefined8 *)(this + 0x798) = *(undefined8 *)(this + 0x790);
  *(undefined8 *)(this + 0x7d8) = *(undefined8 *)(this + 2000);
  *(undefined8 *)(this + 0x818) = *(undefined8 *)(this + 0x810);
  *(undefined8 *)(this + 0x858) = *(undefined8 *)(this + 0x850);
                    /* WARNING: Could not recover jumptable at 0x00ad0bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*vkCmdDispatch)(uVar1,param_1,param_2,param_3);
  return;
}


