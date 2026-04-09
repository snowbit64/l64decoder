// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: renderPrimitiveList
// Entry Point: 00ad0510
// Size: 384 bytes
// Signature: undefined __thiscall renderPrimitiveList(VulkanCommandBuffer * this, float * param_1, uint param_2, float * param_3, uint param_4, PRIMITIVE_TYPE param_5, uint param_6)


/* VulkanCommandBuffer::renderPrimitiveList(float const*, unsigned int, float const*, unsigned int,
   ICommandBuffer::PRIMITIVE_TYPE, unsigned int) */

void __thiscall
VulkanCommandBuffer::renderPrimitiveList
          (VulkanCommandBuffer *this,float *param_1,uint param_2,float *param_3,uint param_4,
          PRIMITIVE_TYPE param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *__dest;
  undefined8 uVar4;
  ulong __n;
  
  if (param_6 != 0) {
    uVar2 = 0;
    if (param_2 != 0) {
      uVar2 = 0x20000 / param_2;
    }
    uVar1 = *(uint *)(s_primitiveTypeInfo + (ulong)param_5 * 0xc + 8);
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = uVar2 / uVar1;
    }
    do {
      uVar2 = uVar3 * uVar1;
      if (param_6 <= uVar3 * uVar1) {
        uVar2 = param_6;
      }
      __n = (ulong)(uVar2 * param_2);
      __dest = (void *)(**(code **)(**(long **)(this + 0x1e8) + 0x10))
                                 (*(long **)(this + 0x1e8),this,0,__n,1);
      memcpy(__dest,param_1,__n);
      (**(code **)(**(long **)(this + 0x1e8) + 0x18))(*(long **)(this + 0x1e8),this);
      (**(code **)(*(long *)this + 0x50))(this,this + 0x1e8,1,*(undefined8 *)(this + 0x1e0));
      bindResources(this,0);
      *(ulong *)(this + 0x5f8) =
           *(ulong *)(this + 0x5f8) & 0xffff8fffffffffff | (ulong)param_5 << 0x2c;
      uVar4 = getPipelineState(this,0,param_5);
      *(undefined8 *)(this + 0x6a0) = *(undefined8 *)(this + 0x698);
      *(undefined8 *)(this + 0x6e0) = *(undefined8 *)(this + 0x6d8);
      *(undefined8 *)(this + 0x720) = *(undefined8 *)(this + 0x718);
      *(undefined8 *)(this + 0x760) = *(undefined8 *)(this + 0x758);
      (*vkCmdBindPipeline)(*(undefined8 *)(this + 0x4b8),0,uVar4);
      (*vkCmdDraw)(*(undefined8 *)(this + 0x4b8),uVar2,1,0,0);
      param_1 = (float *)((long)param_1 + __n);
      param_6 = param_6 - uVar2;
    } while (param_6 != 0);
  }
  return;
}


