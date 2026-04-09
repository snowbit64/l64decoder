// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dispatch
// Entry Point: 00ad0690
// Size: 184 bytes
// Signature: undefined __thiscall dispatch(VulkanCommandBuffer * this, uint param_1, uint param_2, uint param_3)


/* VulkanCommandBuffer::dispatch(unsigned int, unsigned int, unsigned int) */

void __thiscall
VulkanCommandBuffer::dispatch(VulkanCommandBuffer *this,uint param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = acquireVkCommandBuffer(this,0);
  bindResources(this,1);
  uVar2 = getPipelineState(this,1,5);
  (*vkCmdBindPipeline)(uVar1,1,uVar2);
  *(undefined8 *)(this + 0x7a0) = *(undefined8 *)(this + 0x798);
  *(undefined8 *)(this + 0x7e0) = *(undefined8 *)(this + 0x7d8);
  *(undefined8 *)(this + 0x820) = *(undefined8 *)(this + 0x818);
  *(undefined8 *)(this + 0x860) = *(undefined8 *)(this + 0x858);
                    /* WARNING: Could not recover jumptable at 0x00ad0744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*vkCmdDispatch)(uVar1,param_1,param_2,param_3);
  return;
}


