// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: issueMergedShadowJob
// Entry Point: 00a4557c
// Size: 376 bytes
// Signature: undefined __thiscall issueMergedShadowJob(ShadowRenderController * this, MergedShadowQueueItem * param_1, RenderTextureSetup * param_2)


/* ShadowRenderController::issueMergedShadowJob(MergedShadowQueueItem*, RenderTextureSetup*) */

void __thiscall
ShadowRenderController::issueMergedShadowJob
          (ShadowRenderController *this,MergedShadowQueueItem *param_1,RenderTextureSetup *param_2)

{
  long lVar1;
  undefined8 extraout_x1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  CullingArgs *local_4e0;
  RenderArgs *pRStack_4d8;
  char acStack_4d0 [1024];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  Matrix4x4 aMStack_88 [64];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Matrix4x4::invert(aMStack_88,*(Matrix4x4 **)param_1);
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  uStack_a8 = puVar2[5];
  local_b0 = puVar2[4];
  uStack_98 = puVar2[7];
  uStack_a0 = puVar2[6];
  uStack_c8 = puVar2[1];
  local_d0 = *puVar2;
  uStack_b8 = puVar2[3];
  uStack_c0 = puVar2[2];
  FUN_00a45258(acStack_4d0,extraout_x1,"Merged shadow: %s\n",*(undefined8 *)(param_1 + 0x28));
  issueSpotLightJob(this,aMStack_88,(Matrix4x4 *)&local_d0,*(ShadowQueueItem **)(param_1 + 8),
                    *(float *)(param_1 + 0x1c),param_2,acStack_4d0,&local_4e0,&pRStack_4d8);
  uVar4 = *(undefined8 *)(param_1 + 0x120);
  uVar3 = *(undefined8 *)(param_1 + 0x118);
  uVar6 = *(undefined8 *)(param_1 + 0x130);
  uVar5 = *(undefined8 *)(param_1 + 0x128);
  uVar8 = *(undefined8 *)(param_1 + 0x110);
  uVar7 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(local_4e0 + 0x2c8) = *(undefined8 *)(param_1 + 0x138);
  uVar9 = *(undefined8 *)(param_1 + 0x58);
  uVar11 = *(undefined8 *)(param_1 + 0x70);
  uVar10 = *(undefined8 *)(param_1 + 0x68);
  uVar13 = *(undefined8 *)(param_1 + 0x80);
  uVar12 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(local_4e0 + 0x1f0) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(local_4e0 + 0x1e8) = uVar9;
  *(undefined8 *)(local_4e0 + 0x200) = uVar11;
  *(undefined8 *)(local_4e0 + 0x1f8) = uVar10;
  *(undefined8 *)(local_4e0 + 0x210) = uVar13;
  *(undefined8 *)(local_4e0 + 0x208) = uVar12;
  uVar11 = *(undefined8 *)(param_1 + 0x88);
  uVar10 = *(undefined8 *)(param_1 + 0xa0);
  uVar9 = *(undefined8 *)(param_1 + 0x98);
  uVar13 = *(undefined8 *)(param_1 + 0xc0);
  uVar12 = *(undefined8 *)(param_1 + 0xb8);
  uVar15 = *(undefined8 *)(param_1 + 0xb0);
  uVar14 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(local_4e0 + 0x220) = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(local_4e0 + 0x218) = uVar11;
  *(undefined8 *)(local_4e0 + 0x250) = uVar13;
  *(undefined8 *)(local_4e0 + 0x248) = uVar12;
  *(undefined8 *)(local_4e0 + 0x240) = uVar15;
  *(undefined8 *)(local_4e0 + 0x238) = uVar14;
  *(undefined8 *)(local_4e0 + 0x230) = uVar10;
  *(undefined8 *)(local_4e0 + 0x228) = uVar9;
  uVar11 = *(undefined8 *)(param_1 + 200);
  uVar10 = *(undefined8 *)(param_1 + 0xe0);
  uVar9 = *(undefined8 *)(param_1 + 0xd8);
  uVar13 = *(undefined8 *)(param_1 + 0x100);
  uVar12 = *(undefined8 *)(param_1 + 0xf8);
  uVar15 = *(undefined8 *)(param_1 + 0xf0);
  uVar14 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(local_4e0 + 0x260) = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(local_4e0 + 600) = uVar11;
  *(undefined8 *)(local_4e0 + 0x290) = uVar13;
  *(undefined8 *)(local_4e0 + 0x288) = uVar12;
  *(undefined8 *)(local_4e0 + 0x280) = uVar15;
  *(undefined8 *)(local_4e0 + 0x278) = uVar14;
  *(undefined8 *)(local_4e0 + 0x270) = uVar10;
  *(undefined8 *)(local_4e0 + 0x268) = uVar9;
  *(undefined8 *)(local_4e0 + 0x2a0) = uVar8;
  *(undefined8 *)(local_4e0 + 0x298) = uVar7;
  *(undefined8 *)(local_4e0 + 0x2c0) = uVar6;
  *(undefined8 *)(local_4e0 + 0x2b8) = uVar5;
  *(undefined8 *)(local_4e0 + 0x2b0) = uVar4;
  *(undefined8 *)(local_4e0 + 0x2a8) = uVar3;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


