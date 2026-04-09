// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: synchronizeTextures
// Entry Point: 00aafd0c
// Size: 1924 bytes
// Signature: undefined __cdecl synchronizeTextures(VulkanCommandBuffer * param_1, VK_COMMAND_BUFFER_TYPE param_2, uint param_3, TransitionData * param_4)


/* VulkanTextureObject::synchronizeTextures(VulkanCommandBuffer*,
   VulkanUtil::VK_COMMAND_BUFFER_TYPE, unsigned int, VulkanTextureObject::TransitionData const*) */

void VulkanTextureObject::synchronizeTextures
               (VulkanCommandBuffer *param_1,VK_COMMAND_BUFFER_TYPE param_2,uint param_3,
               TransitionData *param_4)

{
  long lVar1;
  size_t __n;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  uint uVar12;
  bool bVar13;
  void *__s;
  undefined8 uVar14;
  ulong uVar15;
  uint **ppuVar16;
  uint *puVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  long lVar24;
  undefined8 *puVar25;
  undefined4 *puVar26;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  uint uVar31;
  ulong uVar32;
  uint uVar33;
  uint uVar34;
  ulong uVar35;
  uint uVar36;
  ulong uVar37;
  void *local_98;
  void *local_88;
  void *local_80;
  void *local_78;
  long local_70;
  
  uVar15 = (ulong)param_3;
  lVar11 = tpidr_el0;
  local_70 = *(long *)(lVar11 + 0x28);
  local_88 = (void *)0x0;
  local_80 = (void *)0x0;
  local_78 = (void *)0x0;
  if (param_3 != 0) {
    uVar32 = (ulong)param_3;
    uVar30 = uVar32 * 0x48;
    local_98 = operator_new(uVar30);
    local_78 = (void *)((long)local_98 + uVar30);
    __n = ((uVar30 - 0x48) / 0x48) * 0x48 + 0x48;
    local_88 = local_98;
    memset(local_98,0,__n);
    local_80 = (void *)((long)local_98 + __n);
                    /* try { // try from 00aafdc0 to 00aafdc7 has its CatchHandler @ 00ab0490 */
    __s = operator_new(uVar32 * 0x38);
    memset(__s,0,((uVar32 * 0x38 - 0x38) / 0x38) * 0x38 + 0x38);
    uVar30 = 0;
    uVar33 = 0;
    uVar36 = 0;
    uVar27 = 0;
    uVar34 = 0;
    do {
      plVar23 = (long *)(param_4 + uVar30 * 0x18);
      lVar24 = *plVar23;
      uVar31 = *(uint *)(plVar23 + 1);
      uVar8 = *(uint *)((long)plVar23 + 0xc);
      ppuVar16 = *(uint ***)(lVar24 + 0x90);
      puVar17 = *ppuVar16;
      uVar9 = *puVar17;
      uVar22 = (ulong)uVar9;
      if (*(int *)(lVar24 + 0x18) == 4) {
        if (param_4[uVar30 * 0x18 + 0x10] != (TransitionData)0x0) {
          uVar31 = uVar9;
        }
        if ((uVar31 != uVar9) || ((0x10aUL >> (uVar22 & 0x3f) & 1) == 0)) {
          puVar26 = (undefined4 *)((long)__s + (ulong)uVar34 * 0x38);
          uVar34 = uVar34 + 1;
          uVar3 = *(uint *)(s_layoutInfo + uVar22 * 0x10 + 4);
          uVar6 = *(uint *)(s_layoutInfo + uVar22 * 0x10 + 8);
          *puVar26 = 0x2c;
          *(undefined8 *)(puVar26 + 2) = 0;
          uVar9 = uVar3 & 0xfffffff7;
          if ((uVar8 & 2) != 0) {
            uVar9 = uVar3;
          }
          *(undefined8 *)(puVar26 + 6) = 0xffffffffffffffff;
          uVar4 = uVar9 & 0xffffff7f;
          if ((uVar8 & 4) != 0) {
            uVar4 = uVar9;
          }
          uVar9 = uVar4 & 0xfffff7ff;
          if ((uVar8 & 8) != 0) {
            uVar9 = uVar4;
          }
          bVar13 = (uVar8 & 1) != 0;
          uVar4 = uVar6 & 0xfffff87f;
          if (bVar13) {
            uVar4 = uVar6;
          }
          uVar6 = uVar9 & 0xfffff9ff;
          if (bVar13) {
            uVar6 = uVar9;
          }
          if (((uVar8 ^ 0xffffffff) & 0xf) != 0) {
            uVar3 = uVar6;
          }
          uVar9 = uVar4 & 0xffffff9f;
          if ((uVar8 & 0xe) != 0) {
            uVar9 = uVar4;
          }
          uVar33 = uVar3 | uVar33;
          uVar8 = *(uint *)(s_layoutInfo + (ulong)uVar31 * 0x10 + 4);
          uVar7 = *(undefined4 *)(s_layoutInfo + (ulong)uVar31 * 0x10 + 8);
          puVar26[4] = uVar9;
          puVar26[5] = uVar7;
          uVar36 = uVar8 | uVar36;
          lVar24 = *(long *)(lVar24 + 0x10);
          puVar25 = (undefined8 *)(*(long *)(lVar24 + 0x68) + 8);
          if (*(char *)(lVar24 + 0x60) != '\0') {
            puVar25 = (undefined8 *)(lVar24 + 0x70);
          }
          uVar14 = *puVar25;
          *(undefined8 *)(puVar26 + 0xc) = 0xffffffffffffffff;
          *(undefined8 *)(puVar26 + 10) = 0;
          *(undefined8 *)(puVar26 + 8) = uVar14;
          *puVar17 = uVar31;
        }
      }
      else {
        uVar6 = *(uint *)(lVar24 + 0x48);
        uVar28 = (ulong)uVar6;
        uVar3 = *(int *)(lVar24 + 0x38) + 1;
        uVar18 = (ulong)uVar3;
        if (uVar6 != 0) {
          uVar19 = 0;
          bVar13 = false;
          do {
            if (uVar3 != 0) {
              puVar17 = ppuVar16[uVar19 * 3];
              uVar37 = uVar18;
              do {
                if (*puVar17 != uVar9) {
                  bVar13 = true;
                  break;
                }
                puVar17 = puVar17 + 1;
                uVar37 = uVar37 - 1;
              } while (uVar37 != 0);
            }
            uVar19 = uVar19 + 1;
          } while (uVar19 != uVar28);
          if (bVar13) {
            if (uVar6 != 0) {
              uVar22 = 0;
              uVar19 = (ulong)uVar27;
              do {
                if (uVar3 != 0) {
                  uVar37 = 0;
                  uVar29 = uVar19;
                  do {
                    uVar27 = ppuVar16[uVar22 * 3][uVar37];
                    uVar35 = (ulong)uVar27;
                    if (param_4[uVar30 * 0x18 + 0x10] != (TransitionData)0x0) {
                      uVar31 = uVar27;
                    }
                    if ((uVar31 != uVar27) ||
                       (uVar19 = uVar29, (0x10aUL >> (uVar35 & 0x3f) & 1) == 0)) {
                      uVar27 = (int)uVar29 + 1;
                      uVar19 = (ulong)uVar27;
                      if ((uint)uVar15 <= uVar27) {
                        uVar15 = (ulong)((uint)uVar15 << 1);
                        lVar20 = (long)local_80 - (long)local_98 >> 3;
                        uVar21 = lVar20 * -0x71c71c71c71c71c7;
                        if (uVar15 <= uVar21) {
                          if (uVar15 <= uVar21 && uVar21 - uVar15 != 0) {
                            local_80 = (void *)((long)local_98 + uVar15 * 0x48);
                          }
                        }
                        else {
                    /* try { // try from 00ab0314 to 00ab031b has its CatchHandler @ 00ab04a0 */
                          std::__ndk1::
                          vector<VkImageMemoryBarrier,std::__ndk1::allocator<VkImageMemoryBarrier>>
                          ::__append((vector<VkImageMemoryBarrier,std::__ndk1::allocator<VkImageMemoryBarrier>>
                                      *)&local_88,uVar15 + lVar20 * 0x71c71c71c71c71c7);
                          ppuVar16 = *(uint ***)(lVar24 + 0x90);
                          local_98 = local_88;
                        }
                      }
                      puVar26 = (undefined4 *)((long)local_98 + uVar29 * 0x48);
                      lVar20 = uVar35 * 0x10;
                      lVar1 = (ulong)uVar31 * 0x10;
                      *puVar26 = 0x2d;
                      *(undefined8 *)(puVar26 + 2) = 0;
                      uVar7 = *(undefined4 *)(s_layoutInfo + lVar20);
                      uVar9 = *(uint *)(s_layoutInfo + lVar20 + 4);
                      uVar6 = *(uint *)(s_layoutInfo + lVar20 + 8);
                      *(undefined8 *)(puVar26 + 8) = 0xffffffffffffffff;
                      uVar27 = uVar9 & 0xfffffff7;
                      if ((uVar8 & 2) != 0) {
                        uVar27 = uVar9;
                      }
                      uVar4 = uVar27 & 0xffffff7f;
                      if ((uVar8 & 4) != 0) {
                        uVar4 = uVar27;
                      }
                      uVar27 = uVar4 & 0xfffff7ff;
                      if ((uVar8 & 8) != 0) {
                        uVar27 = uVar4;
                      }
                      bVar13 = (uVar8 & 1) != 0;
                      uVar4 = uVar6 & 0xfffff87f;
                      if (bVar13) {
                        uVar4 = uVar6;
                      }
                      uVar6 = uVar27 & 0xfffff9ff;
                      if (bVar13) {
                        uVar6 = uVar27;
                      }
                      if ((uVar8 & 0xf) != 0xf) {
                        uVar9 = uVar6;
                      }
                      uVar33 = uVar9 | uVar33;
                      uVar27 = uVar4 & 0xffffff9f;
                      if ((uVar8 & 0xe) != 0) {
                        uVar27 = uVar4;
                      }
                      uVar5 = *(undefined4 *)(s_layoutInfo + lVar1);
                      uVar9 = *(uint *)(s_layoutInfo + lVar1 + 4);
                      if ((0x10aUL >> (uVar35 & 0x3f) & 1) != 0) {
                        uVar27 = 0;
                      }
                      uVar10 = *(undefined4 *)(s_layoutInfo + lVar1 + 8);
                      puVar26[6] = uVar7;
                      puVar26[7] = uVar5;
                      puVar26[4] = uVar27;
                      puVar26[5] = uVar10;
                      uVar36 = uVar9 | uVar36;
                      *(undefined8 *)(puVar26 + 10) = **(undefined8 **)(lVar24 + 0x10);
                      uVar7 = *(undefined4 *)(lVar24 + 0x8c);
                      puVar26[0xe] = 1;
                      puVar26[0xf] = (int)uVar22;
                      puVar26[0x10] = 1;
                      puVar26[0xc] = uVar7;
                      puVar26[0xd] = (int)uVar37;
                      ppuVar16[uVar22 * 3][uVar37] = uVar31;
                    }
                    uVar37 = uVar37 + 1;
                    uVar29 = uVar19;
                  } while (uVar18 != uVar37);
                }
                uVar22 = uVar22 + 1;
              } while (uVar22 != uVar28);
              uVar27 = (uint)uVar19;
            }
            goto LAB_00aaff00;
          }
        }
        if (param_4[uVar30 * 0x18 + 0x10] != (TransitionData)0x0) {
          uVar31 = uVar9;
        }
        uVar19 = 0x10aUL >> (uVar22 & 0x3f) & 1;
        if ((uVar31 != uVar9) || (uVar19 == 0)) {
          lVar20 = uVar22 * 0x10;
          uVar4 = *(uint *)(s_layoutInfo + lVar20 + 4);
          uVar7 = *(undefined4 *)(s_layoutInfo + lVar20);
          uVar9 = uVar4 & 0xfffffff7;
          if ((uVar8 & 2) != 0) {
            uVar9 = uVar4;
          }
          uVar2 = uVar9 & 0xffffff7f;
          if ((uVar8 & 4) != 0) {
            uVar2 = uVar9;
          }
          uVar9 = uVar2 & 0xfffff7ff;
          if ((uVar8 & 8) != 0) {
            uVar9 = uVar2;
          }
          uVar2 = uVar9 & 0xfffff9ff;
          uVar12 = *(uint *)(s_layoutInfo + lVar20 + 8) & 0xfffff87f;
          if ((uVar8 & 1) != 0) {
            uVar2 = uVar9;
            uVar12 = *(uint *)(s_layoutInfo + lVar20 + 8);
          }
          lVar20 = (ulong)uVar31 * 0x10;
          if (((uVar8 ^ 0xffffffff) & 0xf) != 0) {
            uVar4 = uVar2;
          }
          puVar26 = (undefined4 *)((long)local_98 + (ulong)uVar27 * 0x48);
          uVar9 = uVar12 & 0xffffff9f;
          if ((uVar8 & 0xe) != 0) {
            uVar9 = uVar12;
          }
          if (uVar19 != 0) {
            uVar9 = 0;
          }
          uVar10 = *(undefined4 *)(s_layoutInfo + lVar20 + 8);
          uVar5 = *(undefined4 *)(s_layoutInfo + lVar20);
          uVar8 = *(uint *)(s_layoutInfo + lVar20 + 4);
          *puVar26 = 0x2d;
          uVar27 = uVar27 + 1;
          puVar26[4] = uVar9;
          puVar26[5] = uVar10;
          *(undefined8 *)(puVar26 + 2) = 0;
          uVar33 = uVar4 | uVar33;
          *(undefined8 *)(puVar26 + 8) = 0xffffffffffffffff;
          uVar36 = uVar8 | uVar36;
          puVar26[6] = uVar7;
          puVar26[7] = uVar5;
          *(undefined8 *)(puVar26 + 10) = **(undefined8 **)(lVar24 + 0x10);
          uVar7 = *(undefined4 *)(lVar24 + 0x8c);
          puVar26[0x10] = uVar6;
          puVar26[0xc] = uVar7;
          puVar26[0xd] = 0;
          puVar26[0xe] = uVar3;
          puVar26[0xf] = 0;
          if (uVar6 != 0) {
            uVar22 = 0;
            uVar19 = uVar18 & 0xfffffff8;
            do {
              if (uVar3 != 0) {
                puVar17 = ppuVar16[uVar22 * 3];
                if (uVar3 < 8) {
                  uVar37 = 0;
                }
                else {
                  puVar25 = (undefined8 *)(puVar17 + 4);
                  uVar37 = uVar19;
                  do {
                    puVar25[-1] = CONCAT44(uVar31,uVar31);
                    puVar25[-2] = CONCAT44(uVar31,uVar31);
                    puVar25[1] = CONCAT44(uVar31,uVar31);
                    *puVar25 = CONCAT44(uVar31,uVar31);
                    puVar25 = puVar25 + 4;
                    uVar37 = uVar37 - 8;
                  } while (uVar37 != 0);
                  uVar37 = uVar19;
                  if (uVar19 == uVar18) goto LAB_00ab00d0;
                }
                lVar24 = uVar18 - uVar37;
                puVar17 = puVar17 + uVar37;
                do {
                  lVar24 = lVar24 + -1;
                  *puVar17 = uVar31;
                  puVar17 = puVar17 + 1;
                } while (lVar24 != 0);
              }
LAB_00ab00d0:
              uVar22 = uVar22 + 1;
            } while (uVar22 != uVar28);
          }
        }
      }
LAB_00aaff00:
      uVar30 = uVar30 + 1;
    } while (uVar30 != uVar32);
    if (uVar27 != 0) {
                    /* try { // try from 00ab03a8 to 00ab03ef has its CatchHandler @ 00ab049c */
      uVar14 = VulkanCommandBuffer::acquireVkCommandBuffer(param_1,param_2);
      uVar31 = uVar33;
      if (uVar33 == 0) {
        uVar31 = 1;
      }
      uVar8 = 0x2000;
      if (uVar36 != 0) {
        uVar8 = uVar36;
      }
      (*vkCmdPipelineBarrier)(uVar14,uVar31,uVar8,0,0,0,0,0,uVar27,local_88);
    }
    if (uVar34 != 0) {
                    /* try { // try from 00ab03fc to 00ab0443 has its CatchHandler @ 00ab0498 */
      uVar14 = VulkanCommandBuffer::acquireVkCommandBuffer(param_1,param_2);
      if (uVar33 == 0) {
        uVar33 = 1;
      }
      uVar27 = 0x2000;
      if (uVar36 != 0) {
        uVar27 = uVar36;
      }
      (*vkCmdPipelineBarrier)(uVar14,uVar33,uVar27,0,0,0,uVar34,__s,0,0);
    }
    operator_delete(__s);
  }
  if (local_88 != (void *)0x0) {
    local_80 = local_88;
    operator_delete(local_88);
  }
  if (*(long *)(lVar11 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


