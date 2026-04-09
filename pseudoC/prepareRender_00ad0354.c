// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: prepareRender
// Entry Point: 00ad0354
// Size: 128 bytes
// Signature: undefined __thiscall prepareRender(VulkanCommandBuffer * this, PRIMITIVE_TYPE param_1)


/* VulkanCommandBuffer::prepareRender(ICommandBuffer::PRIMITIVE_TYPE) */

void __thiscall VulkanCommandBuffer::prepareRender(VulkanCommandBuffer *this,PRIMITIVE_TYPE param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  bindResources(this,0);
  *(ulong *)(this + 0x5f8) = *(ulong *)(this + 0x5f8) & 0xffff8fffffffffff | (ulong)param_1 << 0x2c;
  uVar1 = getPipelineState(this,0,param_1);
  *(undefined8 *)(this + 0x6a0) = *(undefined8 *)(this + 0x698);
  *(undefined8 *)(this + 0x6e0) = *(undefined8 *)(this + 0x6d8);
  *(undefined8 *)(this + 0x720) = *(undefined8 *)(this + 0x718);
  UNRECOVERED_JUMPTABLE = vkCmdBindPipeline;
  *(undefined8 *)(this + 0x760) = *(undefined8 *)(this + 0x758);
                    /* WARNING: Could not recover jumptable at 0x00ad03d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(this + 0x4b8),0,uVar1);
  return;
}


