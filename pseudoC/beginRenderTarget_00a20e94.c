// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: beginRenderTarget
// Entry Point: 00a20e94
// Size: 448 bytes
// Signature: undefined __thiscall beginRenderTarget(RenderQueue * this, ICommandBuffer * param_1, RenderTargetData * param_2, uint param_3, uint param_4, uint param_5, uint param_6)


/* RenderQueue::beginRenderTarget(ICommandBuffer*, RenderQueue::RenderTargetData const&, unsigned
   int, unsigned int, unsigned int, unsigned int) const */

void __thiscall
RenderQueue::beginRenderTarget
          (RenderQueue *this,ICommandBuffer *param_1,RenderTargetData *param_2,uint param_3,
          uint param_4,uint param_5,uint param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  RenderTargetData RVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  long *plVar11;
  long lVar12;
  uint local_120 [2];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined local_5c;
  long local_58;
  long local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int iStack_3c;
  RenderTargetData local_38;
  long local_30;
  long local_28;
  
  lVar6 = tpidr_el0;
  local_28 = *(long *)(lVar6 + 0x28);
  lVar7 = *(long *)(this + 0x28);
  local_110 = 0;
  local_108 = 0;
  local_118 = 0;
  local_100 = 0;
  uStack_f4 = 0x300000003;
  local_fc = 0x100000002;
  local_ec = 0;
  local_30 = lVar7 + 0x579;
  if ((*(byte *)(lVar7 + 0x578) & 1) != 0) {
    local_30 = *(long *)(lVar7 + 0x588);
  }
  local_120[0] = *(uint *)(param_2 + 0xac);
  uVar8 = (ulong)local_120[0];
  local_e0 = 0;
  uStack_d8 = 0;
  local_e8 = 0;
  local_d0 = 0;
  uStack_c4 = 0x300000003;
  local_cc = 0x100000002;
  local_bc = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_b8 = 0;
  local_a0 = 0;
  uStack_94 = 0x300000003;
  local_9c = 0x100000002;
  local_8c = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_70 = 0;
  local_78 = 0;
  uStack_64 = 0x300000003;
  local_6c = 0x100000002;
  local_5c = 0;
  if (local_120[0] != 0) {
    RVar5 = param_2[0xa0];
    puVar9 = &local_fc;
    puVar10 = (undefined4 *)(param_2 + 100);
    plVar11 = (long *)param_2;
    do {
      uVar1 = puVar10[0x13];
      *(RenderTargetData *)(puVar9 + 2) = RVar5;
      lVar12 = *plVar11;
      lVar7 = plVar11[5];
      uVar4 = puVar10[-5];
      *(undefined4 *)((long)puVar9 + -0xc) = uVar1;
      uVar1 = *puVar10;
      *(long *)((long)puVar9 + -0x1c) = lVar12;
      uVar2 = puVar10[5];
      iVar3 = puVar10[10];
      *(long *)((long)puVar9 + -0x14) = lVar7;
      *(undefined4 *)puVar9 = uVar4;
      *(undefined4 *)((long)puVar9 + 4) = uVar1;
      *(undefined4 *)(puVar9 + 1) = uVar2;
      *(int *)((long)puVar9 + 0xc) = iVar3;
      if ((lVar12 == lVar7) && (lVar7 != 0)) {
        if (iVar3 == 0) {
          *(undefined4 *)(puVar9 + 1) = 0;
        }
        *(undefined4 *)((long)puVar9 + 4) = 1;
        *(undefined8 *)((long)puVar9 + -0x14) = 0;
      }
      uVar8 = uVar8 - 1;
      plVar11 = plVar11 + 1;
      puVar9 = puVar9 + 6;
      puVar10 = puVar10 + 1;
    } while (uVar8 != 0);
  }
  local_48 = *(undefined4 *)(param_2 + 0x60);
  local_44 = *(undefined4 *)(param_2 + 0x74);
  local_38 = param_2[0xa1];
  local_58 = *(long *)(param_2 + 0x20);
  local_50 = *(long *)(param_2 + 0x48);
  local_40 = *(undefined4 *)(param_2 + 0x88);
  iStack_3c = *(int *)(param_2 + 0x9c);
  if ((local_58 == local_50) && (local_50 != 0)) {
    if (iStack_3c == 0) {
      local_40 = 0;
    }
    local_50 = 0;
    local_44 = 1;
  }
  (**(code **)(*(long *)param_1 + 0x38))
            (param_1,local_120,*(undefined4 *)(param_2 + 0xa4),*(undefined4 *)(param_2 + 0xa8),
             param_3,param_4,param_5,param_6);
  if (*(long *)(lVar6 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


