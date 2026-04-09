// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: renderInstances
// Entry Point: 00ad03d4
// Size: 276 bytes
// Signature: undefined __thiscall renderInstances(VulkanCommandBuffer * this, uint param_1, uint param_2, uint param_3, uint param_4, PRIMITIVE_TYPE param_5)


/* VulkanCommandBuffer::renderInstances(unsigned int, unsigned int, unsigned int, unsigned int,
   ICommandBuffer::PRIMITIVE_TYPE) */

void __thiscall
VulkanCommandBuffer::renderInstances
          (VulkanCommandBuffer *this,uint param_1,uint param_2,uint param_3,uint param_4,
          PRIMITIVE_TYPE param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 0x4b8);
  bindResources(this,0);
  *(ulong *)(this + 0x5f8) = *(ulong *)(this + 0x5f8) & 0xffff8fffffffffff | (ulong)param_5 << 0x2c;
  uVar2 = getPipelineState(this,0,param_5);
  *(undefined8 *)(this + 0x6a0) = *(undefined8 *)(this + 0x698);
  *(undefined8 *)(this + 0x6e0) = *(undefined8 *)(this + 0x6d8);
  pcVar1 = vkCmdBindPipeline;
  *(undefined8 *)(this + 0x720) = *(undefined8 *)(this + 0x718);
  *(undefined8 *)(this + 0x760) = *(undefined8 *)(this + 0x758);
  (*pcVar1)(*(undefined8 *)(this + 0x4b8),0,uVar2);
  if (*(long *)(this + 0xb0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00ad04ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*vkCmdDrawIndexed)(uVar3,param_1,param_3,param_2,0,param_4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00ad04e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*vkCmdDraw)(uVar3,param_1,param_3,param_2,param_4);
  return;
}


