// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createRenderTargetViews
// Entry Point: 00aae78c
// Size: 552 bytes
// Signature: undefined __thiscall createRenderTargetViews(VulkanTextureObject * this, bool param_1)


/* VulkanTextureObject::createRenderTargetViews(bool) */

void __thiscall VulkanTextureObject::createRenderTargetViews(VulkanTextureObject *this,bool param_1)

{
  uint uVar1;
  long lVar2;
  void **ppvVar3;
  void *pvVar4;
  long *this_00;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  void **ppvVar9;
  uint uVar10;
  void **ppvVar11;
  int iVar12;
  undefined4 local_b8 [2];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  int local_74;
  undefined4 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_b8[0] = 0xf;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = **(undefined8 **)(this + 0x10);
  local_80 = 1;
  local_98 = 1;
  uVar1 = *(uint *)(this + 0x38);
  lVar7 = (long)*(void ***)(this + 0x150) - *(long *)(this + 0x148) >> 3;
  local_94 = *(undefined4 *)(*(undefined8 **)(this + 0x10) + 1);
  if (this[0x50] != (VulkanTextureObject)0x0) {
    local_80 = 2;
  }
  uVar8 = lVar7 * -0x5555555555555555;
  if (!param_1) {
    uVar1 = 0;
  }
  local_90 = 0;
  uStack_88 = 0;
  uVar6 = (ulong)(uVar1 + 1);
  local_78 = 1;
  local_70 = 1;
  if (uVar6 <= uVar8) {
    if (uVar6 <= uVar8 && uVar8 - uVar6 != 0) {
      ppvVar9 = (void **)(*(long *)(this + 0x148) + uVar6 * 0x18);
      ppvVar11 = *(void ***)(this + 0x150);
      while (ppvVar3 = ppvVar11, ppvVar3 != ppvVar9) {
        ppvVar11 = ppvVar3 + -3;
        pvVar4 = *ppvVar11;
        if (pvVar4 != (void *)0x0) {
          ppvVar3[-2] = pvVar4;
          operator_delete(pvVar4);
        }
      }
      *(void ***)(this + 0x150) = ppvVar9;
    }
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::vector<VkImageView_T*,std::__ndk1::allocator<VkImageView_T*>>,std::__ndk1::allocator<std::__ndk1::vector<VkImageView_T*,std::__ndk1::allocator<VkImageView_T*>>>>
    ::__append((vector<std::__ndk1::vector<VkImageView_T*,std::__ndk1::allocator<VkImageView_T*>>,std::__ndk1::allocator<std::__ndk1::vector<VkImageView_T*,std::__ndk1::allocator<VkImageView_T*>>>>
                *)(this + 0x148),uVar6 + lVar7 * 0x5555555555555555);
  }
  uVar10 = 0;
  do {
    iVar12 = *(int *)(this + 0x18);
    if (iVar12 == 1) {
      uVar5 = *(uint *)(this + 0x30);
    }
    else if (iVar12 == 2) {
      uVar5 = 6;
    }
    else if (iVar12 == 3) {
      uVar5 = *(uint *)(this + 0x34);
    }
    else {
      uVar5 = 1;
    }
    uVar6 = (ulong)uVar5;
    this_00 = (long *)(*(long *)(this + 0x148) + (ulong)uVar10 * 0x18);
    uVar8 = this_00[1] - *this_00 >> 3;
    if (uVar8 < uVar6) {
      std::__ndk1::vector<VkImageView_T*,std::__ndk1::allocator<VkImageView_T*>>::__append
                ((vector<VkImageView_T*,std::__ndk1::allocator<VkImageView_T*>> *)this_00,
                 uVar6 - uVar8);
    }
    else if (uVar6 < uVar8) {
      this_00[1] = *this_00 + uVar6 * 8;
    }
    local_7c = uVar10;
    if (uVar5 != 0) {
      iVar12 = 0;
      lVar7 = 0;
      do {
        local_74 = iVar12;
        (*vkCreateImageView)
                  (*(undefined8 *)(*(long *)(this + 8) + 0x18),local_b8,0,
                   *(long *)(*(long *)(this + 0x148) + (ulong)uVar10 * 0x18) + lVar7);
        lVar7 = lVar7 + 8;
        iVar12 = iVar12 + 1;
      } while (uVar6 * 8 - lVar7 != 0);
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 <= uVar1);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


