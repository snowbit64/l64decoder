// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setShadingRate
// Entry Point: 00ad2e90
// Size: 208 bytes
// Signature: undefined __thiscall setShadingRate(VulkanCommandBuffer * this, SHADING_RATE param_1, SHADING_RATE_COMBINER param_2, SHADING_RATE_COMBINER param_3)


/* VulkanCommandBuffer::setShadingRate(ICommandBuffer::SHADING_RATE,
   ICommandBuffer::SHADING_RATE_COMBINER, ICommandBuffer::SHADING_RATE_COMBINER) */

void __thiscall
VulkanCommandBuffer::setShadingRate
          (VulkanCommandBuffer *this,SHADING_RATE param_1,SHADING_RATE_COMBINER param_2,
          SHADING_RATE_COMBINER param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  SHADING_RATE_COMBINER local_30;
  SHADING_RATE_COMBINER SStack_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if ((*(char *)(*(long *)(this + 0x98) + 0x43b) != '\0') &&
     (((*(SHADING_RATE *)(this + 0xaa8) != param_1 ||
       (*(SHADING_RATE_COMBINER *)(this + 0xaac) != param_2)) ||
      (*(SHADING_RATE_COMBINER *)(this + 0xab0) != param_3)))) {
    uVar1 = param_1 - 1;
    *(SHADING_RATE *)(this + 0xaa8) = param_1;
    if (uVar1 < 6) {
      uVar4 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
      uStack_34 = *(undefined4 *)(&DAT_005238e0 + uVar4);
      local_38 = *(undefined4 *)(&DAT_005238f8 + uVar4);
    }
    else {
      uStack_34 = 1;
      local_38 = 1;
    }
    local_30 = param_2;
    SStack_2c = param_3;
    uVar3 = acquireVkCommandBuffer(this,0);
    (*vkCmdSetFragmentShadingRateKHR)(uVar3,&local_38,&local_30);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


