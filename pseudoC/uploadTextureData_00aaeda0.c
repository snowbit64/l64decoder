// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: uploadTextureData
// Entry Point: 00aaeda0
// Size: 836 bytes
// Signature: undefined __thiscall uploadTextureData(VulkanTextureObject * this, VulkanCommandBuffer * param_1, uchar * param_2, uchar * param_3, uint param_4, uint param_5, VK_COMMAND_BUFFER_TYPE param_6)


/* VulkanTextureObject::uploadTextureData(VulkanCommandBuffer*, unsigned char const*, unsigned char
   const*, unsigned int, unsigned int, VulkanUtil::VK_COMMAND_BUFFER_TYPE) */

void __thiscall
VulkanTextureObject::uploadTextureData
          (VulkanTextureObject *this,VulkanCommandBuffer *param_1,uchar *param_2,uchar *param_3,
          uint param_4,uint param_5,VK_COMMAND_BUFFER_TYPE param_6)

{
  uchar **ppuVar1;
  PIXEL_FORMAT PVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  uchar *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint local_11c;
  uchar *local_118;
  uchar *local_110;
  undefined4 local_108 [2];
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined8 uStack_cc;
  void *local_c0;
  uint local_b8;
  uint uStack_b4;
  LockInternalData aLStack_b0 [64];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  local_108[0] = 0x2d;
  uStack_f0 = 0x700000000;
  local_f8 = 0x100000000000;
  local_d8 = *(undefined4 *)(this + 0x8c);
  local_100 = 0;
  local_e8 = 0xffffffffffffffff;
  local_e0 = **(undefined8 **)(this + 0x10);
  uStack_cc = 0xffffffff00000000;
  local_d4 = 0xffffffff00000000;
  local_110 = param_2;
  uVar7 = VulkanCommandBuffer::acquireVkCommandBuffer(param_1,param_6);
  (*vkCmdPipelineBarrier)(uVar7,1,0x1000,0,0,0,0,0,1,local_108);
  uVar19 = *(uint *)(this + 0x48);
  if (uVar19 != 0) {
    uVar8 = 0;
    uVar18 = *(int *)(this + 0x38) + 1;
    uVar9 = (ulong)uVar18;
    uVar10 = uVar9 & 0xfffffff8;
    do {
      if (uVar18 != 0) {
        lVar11 = *(long *)(*(long *)(this + 0x90) + uVar8 * 0x18);
        if (uVar18 < 8) {
          uVar15 = 0;
        }
        else {
          puVar13 = (undefined8 *)(lVar11 + 0x10);
          uVar15 = uVar10;
          do {
            puVar13[-1] = 0x200000002;
            puVar13[-2] = 0x200000002;
            puVar13[1] = 0x200000002;
            *puVar13 = 0x200000002;
            puVar13 = puVar13 + 4;
            uVar15 = uVar15 - 8;
          } while (uVar15 != 0);
          uVar15 = uVar10;
          if (uVar10 == uVar9) goto LAB_00aaee98;
        }
        lVar14 = uVar9 - uVar15;
        puVar12 = (undefined4 *)(lVar11 + uVar15 * 4);
        do {
          lVar14 = lVar14 + -1;
          *puVar12 = 2;
          puVar12 = puVar12 + 1;
        } while (lVar14 != 0);
      }
LAB_00aaee98:
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar19);
  }
  local_118 = param_3;
  if (param_4 != 0) {
    local_11c = 0;
    do {
      uVar19 = 0;
      uVar18 = *(uint *)(this + 0x28);
      uVar20 = *(uint *)(this + 0x2c);
      uVar17 = *(uint *)(this + 0x30);
      do {
        lockInternal(this,param_1,local_11c,uVar19,0,0,uVar18,uVar20,0,uVar17,3,
                     (PixelLockData *)&local_c0,param_6);
        PVar2 = *(PIXEL_FORMAT *)(this + 0x1c);
        ppuVar1 = &local_118;
        if (uVar19 == 0 || param_3 == (uchar *)0x0) {
          ppuVar1 = &local_110;
        }
        if (PVar2 == *(PIXEL_FORMAT *)(this + 0x20)) {
          uVar8 = PixelFormatUtil::getMemorySize(uVar18,uVar20,uVar17,PVar2);
          puVar16 = *ppuVar1;
          memcpy(local_c0,puVar16,uVar8 & 0xffffffff);
          puVar16 = puVar16 + (uVar8 & 0xffffffff);
        }
        else {
          uVar5 = PixelFormatUtil::getMemorySize(uVar18,1,1,PVar2);
          uVar6 = PixelFormatUtil::getMemorySize(uVar18,uVar20,1,*(PIXEL_FORMAT *)(this + 0x1c));
          uVar8 = PixelFormatUtil::getMemorySize
                            (uVar18,uVar20,uVar17,*(PIXEL_FORMAT *)(this + 0x1c));
          PixelFormatUtil::convertPixelFormat
                    (*ppuVar1,uVar5,uVar6,*(PIXEL_FORMAT *)(this + 0x1c),local_c0,local_b8,uStack_b4
                     ,*(PIXEL_FORMAT *)(this + 0x20),uVar18,uVar20,uVar17);
          puVar16 = *ppuVar1 + (uVar8 & 0xffffffff);
        }
        *ppuVar1 = puVar16;
        unlockInternal(this,param_1,aLStack_b0,param_6);
        uVar5 = uVar18 >> 1;
        uVar6 = uVar20 >> 1;
        if (uVar18 < 2) {
          uVar5 = 1;
        }
        uVar3 = uVar17 >> 1;
        if (uVar20 < 2) {
          uVar6 = 1;
        }
        if (uVar17 < 2) {
          uVar3 = 1;
        }
        uVar19 = uVar19 + 1;
        uVar18 = uVar5;
        uVar20 = uVar6;
        uVar17 = uVar3;
      } while (uVar19 <= param_5);
      local_11c = local_11c + 1;
    } while (local_11c != param_4);
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


