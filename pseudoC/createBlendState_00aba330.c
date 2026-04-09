// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createBlendState
// Entry Point: 00aba330
// Size: 332 bytes
// Signature: undefined __cdecl createBlendState(BlendStateDesc * param_1, VkPipelineColorBlendStateCreateInfo * param_2)


/* VulkanBlendState::createBlendState(BlendStateDesc const&, VkPipelineColorBlendStateCreateInfo&)
    */

void VulkanBlendState::createBlendState
               (BlendStateDesc *param_1,VkPipelineColorBlendStateCreateInfo *param_2)

{
  long lVar1;
  BlendStateDesc BVar2;
  BlendStateDesc BVar3;
  BlendStateDesc BVar4;
  BlendStateDesc BVar5;
  uint uVar6;
  void *pvVar7;
  long lVar8;
  BlendStateDesc *pBVar9;
  uint *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  pvVar7 = operator_new__(0x80);
  puVar10 = (uint *)(param_1 + 0x20);
  lVar8 = 0;
  pBVar9 = param_1 + 0x4c;
  do {
    if (puVar10[-8] == 0) {
      if (((puVar10[-4] == 1) && (*puVar10 == 0)) && (puVar10[4] == 1)) {
        uVar11 = 1;
        *(undefined4 *)((long)pvVar7 + lVar8) = 0;
      }
      else {
        uVar11 = 1;
        *(undefined4 *)((long)pvVar7 + lVar8) = 1;
      }
    }
    else {
      uVar6 = puVar10[-8] - 2;
      *(undefined4 *)((long)pvVar7 + lVar8) = 1;
      if (uVar6 < 8) {
        uVar11 = *(undefined4 *)(&DAT_00517680 + (long)(int)uVar6 * 4);
      }
      else {
        uVar11 = 0;
      }
    }
    uVar6 = puVar10[-4];
    *(undefined4 *)((long)pvVar7 + lVar8 + 4) = uVar11;
    if (uVar6 < 10) {
      uVar11 = *(undefined4 *)(&DAT_005233b4 + (long)(int)uVar6 * 4);
    }
    else {
      uVar11 = 0;
    }
    uVar6 = *puVar10;
    uVar12 = 0;
    *(undefined4 *)((long)pvVar7 + lVar8 + 8) = uVar11;
    *(undefined4 *)((long)pvVar7 + lVar8 + 0xc) = 0;
    if (uVar6 < 10) {
      uVar12 = *(undefined4 *)(&DAT_005233b4 + (long)(int)uVar6 * 4);
    }
    uVar6 = puVar10[4];
    *(undefined4 *)((long)pvVar7 + lVar8 + 0x10) = uVar12;
    if (uVar6 < 10) {
      uVar11 = *(undefined4 *)(&DAT_005233b4 + (long)(int)uVar6 * 4);
    }
    else {
      uVar11 = 0;
    }
    BVar3 = pBVar9[-0xc];
    lVar1 = lVar8 + 0x20;
    BVar4 = pBVar9[-8];
    puVar10 = puVar10 + 1;
    BVar5 = pBVar9[-4];
    BVar2 = *pBVar9;
    *(undefined4 *)((long)pvVar7 + lVar8 + 0x14) = uVar11;
    *(undefined4 *)((long)pvVar7 + lVar8 + 0x18) = 0;
    *(uint *)((long)pvVar7 + lVar8 + 0x1c) =
         (uint)(byte)BVar3 | (uint)(byte)BVar4 << 1 | (uint)(byte)BVar5 << 2 |
         (uint)(byte)BVar2 << 3;
    lVar8 = lVar1;
    pBVar9 = pBVar9 + 1;
  } while (lVar1 != 0x80);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined4 *)param_2 = 0x1a;
  *(undefined8 *)(param_2 + 0x18) = 0x400000000;
  *(void **)(param_2 + 0x20) = pvVar7;
  return;
}


