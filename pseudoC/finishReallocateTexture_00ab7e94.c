// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: finishReallocateTexture
// Entry Point: 00ab7e94
// Size: 164 bytes
// Signature: undefined __cdecl finishReallocateTexture(ICommandBuffer * param_1, ITextureObject * param_2, ITextureObject * param_3, bool param_4)


/* VulkanRenderDevice::finishReallocateTexture(ICommandBuffer*, ITextureObject*, ITextureObject*,
   bool) */

undefined8
VulkanRenderDevice::finishReallocateTexture
          (ICommandBuffer *param_1,ITextureObject *param_2,ITextureObject *param_3,bool param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar8 = (long *)(ulong)param_4;
  if (*(long *)(param_1 + 0x450) != 0) {
    uVar7 = VulkanTextureObject::canFinishReallocation();
    if ((uVar7 & 1) == 0) {
      return 0;
    }
    iVar5 = (**(code **)(*(long *)param_3 + 0x48))(param_3);
    uVar1 = iVar5 + 1;
    iVar6 = (**(code **)(*plVar8 + 0x48))(plVar8);
    uVar2 = iVar6 + 1;
    uVar3 = uVar1 - uVar2;
    uVar4 = uVar2 - uVar1;
    if (uVar1 <= uVar2) {
      uVar2 = iVar5 + 1;
    }
    VulkanTextureObject::encodeCopyMipMaps
              ((VulkanTextureObject *)param_3,(VulkanCommandBuffer *)param_2,
               (VulkanTextureObject *)plVar8,uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU),
               uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU),uVar2);
  }
  return 1;
}


