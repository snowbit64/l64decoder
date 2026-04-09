// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createShaderResourceViews
// Entry Point: 00aae9b4
// Size: 376 bytes
// Signature: undefined __thiscall createShaderResourceViews(VulkanTextureObject * this, bool param_1)


/* VulkanTextureObject::createShaderResourceViews(bool) */

void __thiscall
VulkanTextureObject::createShaderResourceViews(VulkanTextureObject *this,bool param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined4 uStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_88[0] = 0xf;
  local_80 = 0;
  local_78 = 0;
  local_70 = **(undefined8 **)(this + 0x10);
  if (*(uint *)(this + 0x18) < 4) {
    local_68 = *(undefined4 *)(&DAT_004c5870 + (long)(int)*(uint *)(this + 0x18) * 4);
  }
  local_64 = *(undefined4 *)(*(undefined8 **)(this + 0x10) + 1);
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 1;
  if (this[0x50] != (VulkanTextureObject)0x0) {
    local_50 = 2;
  }
  uStack_40 = 1;
  if (this[0x56] == (VulkanTextureObject)0x0) {
    uStack_40 = 0xffffffff;
  }
  local_4c = 0xffffffff00000000;
  local_44 = 0;
  (*vkCreateImageView)(*(undefined8 *)(*(long *)(this + 8) + 0x18),local_88,0,this + 0xb0);
  if (param_1) {
    lVar1 = *(long *)(this + 0xe8);
    uVar3 = (ulong)(*(int *)(this + 0x38) + 1);
    uVar4 = *(long *)(this + 0xf0) - lVar1 >> 3;
    if (uVar4 < uVar3) {
      std::__ndk1::vector<VkImageView_T*,std::__ndk1::allocator<VkImageView_T*>>::__append
                ((vector<VkImageView_T*,std::__ndk1::allocator<VkImageView_T*>> *)(this + 0xe8),
                 uVar3 - uVar4);
    }
    else if (uVar3 < uVar4) {
      *(ulong *)(this + 0xf0) = lVar1 + uVar3 * 8;
    }
    uVar5 = 0;
    local_4c = 0x100000000;
    do {
      local_4c = CONCAT44(local_4c._4_4_,uVar5);
      (*vkCreateImageView)
                (*(undefined8 *)(*(long *)(this + 8) + 0x18),local_88,0,
                 *(long *)(this + 0xe8) + (ulong)uVar5 * 8);
      uVar5 = uVar5 + 1;
    } while (uVar5 <= *(uint *)(this + 0x38));
  }
  else if (*(long *)(this + 0xf0) != *(long *)(this + 0xe8)) {
    *(long *)(this + 0xf0) = *(long *)(this + 0xe8);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


