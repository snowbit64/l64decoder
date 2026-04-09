// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTextureObject
// Entry Point: 00acec64
// Size: 552 bytes
// Signature: undefined __thiscall setTextureObject(VulkanCommandBuffer * this, uint param_1, ITextureObject * param_2, SHADER_STAGE param_3, uint param_4, bool param_5)


/* VulkanCommandBuffer::setTextureObject(unsigned int, ITextureObject*,
   IProgramObject::SHADER_STAGE, unsigned int, bool) */

void __thiscall
VulkanCommandBuffer::setTextureObject
          (VulkanCommandBuffer *this,uint param_1,ITextureObject *param_2,SHADER_STAGE param_3,
          uint param_4,bool param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if (param_3 < 3) {
    lVar10 = *(long *)(&DAT_005238c8 + (long)(int)param_3 * 8);
  }
  else {
    lVar10 = 0;
  }
  uVar11 = (ulong)(param_3 == 2);
  lVar8 = lVar10 * 0x40 + uVar11 * 0x100;
  lVar9 = *(long *)(this + lVar8 + 0x680);
  lVar4 = *(long *)(this + lVar8 + 0x688) - lVar9 >> 3;
  uVar7 = lVar4 * -0x3333333333333333;
  if ((uint)uVar7 <= param_1) {
    uVar5 = (ulong)(param_1 + 1);
    if (uVar5 <= uVar7) {
      if (uVar5 <= uVar7 && uVar7 - uVar5 != 0) {
        *(ulong *)(this + lVar8 + 0x688) = lVar9 + uVar5 * 0x28;
      }
    }
    else {
      std::__ndk1::
      vector<VulkanCommandBuffer::DescriptorSetElementInfo,std::__ndk1::allocator<VulkanCommandBuffer::DescriptorSetElementInfo>>
      ::__append((vector<VulkanCommandBuffer::DescriptorSetElementInfo,std::__ndk1::allocator<VulkanCommandBuffer::DescriptorSetElementInfo>>
                  *)(this + lVar8 + 0x680),uVar5 + lVar4 * 0x3333333333333333);
      lVar9 = *(long *)(this + lVar8 + 0x680);
    }
  }
  uVar7 = (ulong)param_1;
  piVar12 = (int *)(lVar9 + (ulong)param_1 * 0x28);
  piVar12[8] = param_1;
  if (param_2 == (ITextureObject *)0x0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (**(code **)(*(long *)param_2 + 0x10))(param_2);
    if (iVar1 == 4) {
      iVar1 = 2;
      if (param_5) {
        iVar1 = 3;
      }
      lVar4 = VulkanTextureObject::acquireTexelBuffer();
      plVar6 = (long *)(lVar9 + uVar7 * 0x28 + 8);
      if (((*piVar12 != iVar1) || (lVar4 != *plVar6)) || (*(uint *)(this + lVar8 + 0x678) < param_1)
         ) {
        *(undefined2 *)(this + lVar10 * 0x40 + uVar11 * 0x100 + 0x67c) = 0x100;
        *plVar6 = lVar4;
      }
      uVar3 = 1;
      *piVar12 = iVar1;
    }
    else {
      iVar1 = 4;
      if (param_5) {
        iVar1 = 5;
      }
      if (*(ITextureObject **)(this + 0x2d8) == param_2) {
        puVar2 = (undefined8 *)VulkanTextureObject::acquireDepthTextureAsShaderResource();
      }
      else {
        puVar2 = (undefined8 *)
                 VulkanTextureObject::acquireTextureAsShaderResource
                           ((VulkanTextureObject *)param_2,param_4,param_5);
      }
      if (((*piVar12 != iVar1) || (*(long *)(lVar9 + uVar7 * 0x28 + 0x10) != puVar2[1])) ||
         (*(uint *)(this + lVar8 + 0x678) < param_1)) {
        lVar8 = lVar9 + uVar7 * 0x28;
        *(undefined2 *)(this + lVar10 * 0x40 + uVar11 * 0x100 + 0x67c) = 0x100;
        uVar14 = puVar2[1];
        uVar13 = *puVar2;
        *(undefined8 *)(lVar8 + 0x18) = puVar2[2];
        *(undefined8 *)(lVar8 + 0x10) = uVar14;
        *(undefined8 *)(lVar8 + 8) = uVar13;
      }
      uVar3 = 1;
      *piVar12 = iVar1;
    }
  }
  *(undefined *)(lVar9 + uVar7 * 0x28 + 0x24) = uVar3;
  return;
}


