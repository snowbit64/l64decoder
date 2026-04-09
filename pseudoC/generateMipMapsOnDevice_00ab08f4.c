// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: generateMipMapsOnDevice
// Entry Point: 00ab08f4
// Size: 1052 bytes
// Signature: undefined generateMipMapsOnDevice(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanTextureObject::generateMipMapsOnDevice() */

void VulkanTextureObject::generateMipMapsOnDevice(void)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long in_x0;
  VulkanCommandBuffer *this;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  undefined4 uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 local_128 [2];
  undefined8 local_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined4 local_f8;
  uint uStack_f4;
  ulong local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  uint uStack_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  uint local_bc;
  undefined8 local_b8;
  long lStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  uint local_94;
  long local_90;
  
  lVar3 = tpidr_el0;
  local_90 = *(long *)(lVar3 + 0x28);
  if (*(int *)(in_x0 + 0x38) != 0) {
    uStack_d4 = *(uint *)(in_x0 + 0x48);
    local_c8 = 0;
    local_e0 = *(undefined4 *)(in_x0 + 0x8c);
    local_a0 = 0;
    uStack_d8 = 0;
    lStack_b0 = (ulong)uStack_d4 << 0x20;
    local_b8 = CONCAT44(uStack_dc,local_e0);
    local_d0 = 0;
    local_a8 = 0;
    uVar16 = (ulong)***(uint ***)(in_x0 + 0x90);
    uVar18 = *(undefined8 *)(in_x0 + 0x28);
    uVar15 = *(uint *)(in_x0 + 0x30);
    uVar2 = *(uint *)(s_layoutInfo + uVar16 * 0x10 + 4);
    this = (VulkanCommandBuffer *)(**(code **)(**(long **)(in_x0 + 8) + 0x138))();
    uVar4 = VulkanCommandBuffer::acquireVkCommandBuffer(this,(uint)(byte)this[0x460]);
    local_e8 = *(undefined4 *)(in_x0 + 0x48);
    local_120 = 0;
    uStack_108 = 0xffffffff;
    uStack_104 = 0xffffffff;
    local_128[0] = 0x2d;
    local_f8 = *(undefined4 *)(in_x0 + 0x8c);
    uStack_110 = 0;
    uStack_10c = 7;
    local_118 = 0x100000000000;
    local_100 = **(undefined8 **)(in_x0 + 0x10);
    uStack_f4 = 1;
    local_f0 = (ulong)*(uint *)(in_x0 + 0x38);
    (*vkCmdPipelineBarrier)(uVar4,uVar2,0x1000,0,0,0,0,0,1,local_128);
    uStack_f4 = *(uint *)(in_x0 + 0x38);
    if (uStack_f4 != 0) {
      uVar14 = 0;
      uVar12 = uVar2;
      do {
        local_128[0] = 0x2d;
        local_120 = 0;
        uStack_10c = 6;
        uStack_108 = 0xffffffff;
        uStack_104 = 0xffffffff;
        local_f8 = *(undefined4 *)(in_x0 + 0x8c);
        uVar13 = *(undefined4 *)(s_layoutInfo + uVar16 * 0x10 + 8);
        uStack_110 = *(undefined4 *)(s_layoutInfo + uVar16 * 0x10);
        if ((0x10aUL >> (uVar16 & 0x3f) & 1) != 0) {
          uVar13 = 0;
        }
        local_e8 = *(undefined4 *)(in_x0 + 0x48);
        if (uVar12 == 0) {
          uVar12 = 1;
        }
        local_118 = CONCAT44(0x800,uVar13);
        local_100 = **(undefined8 **)(in_x0 + 0x10);
        uVar13 = (undefined4)uVar14;
        local_f0 = 1;
        uStack_f4 = uVar13;
        (*vkCmdPipelineBarrier)(uVar4,uVar12,0x1000,0,0,0,0,0,1,local_128);
        uVar12 = *(uint *)(in_x0 + 0x48);
        if (uVar12 != 0) {
          lVar9 = 0;
          do {
            plVar1 = (long *)(*(long *)(in_x0 + 0x90) + lVar9);
            lVar9 = lVar9 + 0x18;
            *(undefined4 *)(*plVar1 + uVar14 * 4) = 1;
          } while ((ulong)uVar12 * 0x18 - lVar9 != 0);
        }
        uVar17 = NEON_cmhi(uVar18,0x100000001,4);
        uVar12 = (int)uVar15 >> 1;
        uVar14 = uVar14 + 1;
        if (uVar15 < 2) {
          uVar12 = 1;
        }
        local_b8 = CONCAT44((int)uVar14,(undefined4)local_b8);
        uVar17 = NEON_bsl(uVar17,CONCAT44((int)((long)uVar18 >> 0x21),(int)uVar18 >> 1),0x100000001,
                          1);
        uStack_dc = uVar13;
        local_c4 = uVar18;
        local_bc = uVar15;
        local_9c = uVar17;
        local_94 = uVar12;
        (*vkCmdBlitImage)(uVar4,**(undefined8 **)(in_x0 + 0x10),6,**(undefined8 **)(in_x0 + 0x10),7,
                          1,&local_e0,1);
        uStack_f4 = *(uint *)(in_x0 + 0x38);
        uVar16 = 2;
        uVar18 = uVar17;
        uVar15 = uVar12;
        uVar12 = uVar2 | 0x1000;
      } while (uVar14 < uStack_f4);
    }
    local_120 = 0;
    local_128[0] = 0x2d;
    local_f8 = *(undefined4 *)(in_x0 + 0x8c);
    uStack_108 = 0xffffffff;
    uStack_104 = 0xffffffff;
    uStack_110 = 7;
    uStack_10c = 6;
    local_118 = 0x80000001000;
    local_100 = **(undefined8 **)(in_x0 + 0x10);
    local_e8 = *(undefined4 *)(in_x0 + 0x48);
    local_f0 = 1;
    (*vkCmdPipelineBarrier)(uVar4,0x1000,0x1000,0,0,0,0,0,1,local_128);
    uVar2 = *(uint *)(in_x0 + 0x38);
    uVar12 = *(uint *)(in_x0 + 0x48);
    uVar15 = 0;
    if (uVar2 != 0xffffffff) {
      uVar15 = uVar2;
    }
    uVar16 = (ulong)uVar15;
    if (uVar12 != 0) {
      if (uVar2 != 0xffffffff) {
        uVar15 = uVar15 + 1;
      }
      uVar14 = 0;
      uVar10 = uVar15 - uVar16;
      uVar11 = uVar10 & 0xfffffffffffffff8;
      do {
        if (uVar2 != 0xffffffff) {
          lVar9 = *(long *)(*(long *)(in_x0 + 0x90) + uVar14 * 0x18);
          uVar8 = uVar16;
          if (7 < uVar10) {
            puVar6 = (undefined8 *)(lVar9 + (uVar16 + 4) * 4);
            uVar8 = uVar11;
            do {
              puVar6[-1] = 0x100000001;
              puVar6[-2] = 0x100000001;
              puVar6[1] = 0x100000001;
              *puVar6 = 0x100000001;
              uVar8 = uVar8 - 8;
              puVar6 = puVar6 + 4;
            } while (uVar8 != 0);
            uVar8 = uVar11 + uVar16;
            if (uVar10 == uVar11) goto LAB_00ab0c6c;
          }
          lVar7 = uVar15 - uVar8;
          puVar5 = (undefined4 *)(lVar9 + uVar8 * 4);
          do {
            lVar7 = lVar7 + -1;
            *puVar5 = 1;
            puVar5 = puVar5 + 1;
          } while (lVar7 != 0);
        }
LAB_00ab0c6c:
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar12);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


