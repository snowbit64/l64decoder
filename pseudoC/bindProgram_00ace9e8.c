// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: bindProgram
// Entry Point: 00ace9e8
// Size: 280 bytes
// Signature: undefined __thiscall bindProgram(VulkanCommandBuffer * this, IProgramObject * param_1, PIPELINE_TYPE param_2)


/* VulkanCommandBuffer::bindProgram(IProgramObject*, VulkanCommandBuffer::PIPELINE_TYPE) */

void __thiscall
VulkanCommandBuffer::bindProgram
          (VulkanCommandBuffer *this,IProgramObject *param_1,PIPELINE_TYPE param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  VulkanProgramObject *pVVar3;
  VulkanProgramObject **ppVVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  ppVVar4 = (VulkanProgramObject **)(this + (ulong)param_2 * 8 + 0xb8);
  if ((*ppVVar4 != (VulkanProgramObject *)0x0) && (uVar1 == *(uint *)(*ppVVar4 + 8))) {
    return;
  }
  uVar5 = (ulong)param_2;
  *ppVVar4 = (VulkanProgramObject *)param_1;
  *(ulong *)(this + uVar5 * 8 + 0x5f8) =
       *(ulong *)(this + uVar5 * 8 + 0x5f8) & 0xfffffffffffe0000 | (ulong)uVar1;
  puVar2 = (undefined8 *)
           VulkanProgramObject::getDescriptorSetLayout((VulkanProgramObject *)param_1,0);
  pVVar3 = *ppVVar4;
  *(undefined8 *)(this + uVar5 * 0x100 + 0x698) = *puVar2;
  VulkanProgramObject::getBindingNumbers
            (pVVar3,0,(uint **)(this + uVar5 * 0x100 + 0x6a8),(uint *)(this + uVar5 * 0x100 + 0x6b0)
            );
  puVar2 = (undefined8 *)VulkanProgramObject::getDescriptorSetLayout(*ppVVar4,1);
  pVVar3 = *ppVVar4;
  *(undefined8 *)(this + uVar5 * 0x100 + 0x6d8) = *puVar2;
  VulkanProgramObject::getBindingNumbers
            (pVVar3,1,(uint **)(this + uVar5 * 0x100 + 0x6e8),(uint *)(this + uVar5 * 0x100 + 0x6f0)
            );
  puVar2 = (undefined8 *)VulkanProgramObject::getDescriptorSetLayout(*ppVVar4,2);
  pVVar3 = *ppVVar4;
  *(undefined8 *)(this + uVar5 * 0x100 + 0x718) = *puVar2;
  VulkanProgramObject::getBindingNumbers
            (pVVar3,2,(uint **)(this + uVar5 * 0x100 + 0x728),(uint *)(this + uVar5 * 0x100 + 0x730)
            );
  puVar2 = (undefined8 *)VulkanProgramObject::getDescriptorSetLayout(*ppVVar4,3);
  pVVar3 = *ppVVar4;
  *(undefined8 *)(this + uVar5 * 0x100 + 0x758) = *puVar2;
  VulkanProgramObject::getBindingNumbers
            (pVVar3,3,(uint **)(this + uVar5 * 0x100 + 0x768),(uint *)(this + uVar5 * 0x100 + 0x770)
            );
  return;
}


