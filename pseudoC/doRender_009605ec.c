// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doRender
// Entry Point: 009605ec
// Size: 488 bytes
// Signature: undefined __thiscall doRender(MultiresTextureGpuUpdater * this, ICommandBuffer * param_1, TileUpdateInfo * param_2, uint param_3)


/* MultiresTextureGpuUpdater::doRender(ICommandBuffer*, MultiresTextureGpuUpdater::TileUpdateInfo&,
   unsigned int) */

void __thiscall
MultiresTextureGpuUpdater::doRender
          (MultiresTextureGpuUpdater *this,ICommandBuffer *param_1,TileUpdateInfo *param_2,
          uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint local_140 [2];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c [2];
  undefined local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined local_58;
  char *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar1 = *(uint *)(*(long *)(this + 0x110) + 8);
  iVar2 = *(int *)(*(long *)(this + 0x110) + 0xc);
  uStack_b4 = 0x300000003;
  local_bc = 0x100000002;
  uStack_84 = 0x300000003;
  local_8c = 0x100000002;
  uStack_60 = 0x300000003;
  local_68 = 0x100000002;
  local_140[0] = *(uint *)(this + 0x28);
  uVar5 = (ulong)local_140[0];
  local_138 = 0;
  uStack_130 = 0;
  local_120 = 0;
  local_128 = 0;
  local_11c[1] = 0x300000003;
  local_11c[0] = 0x100000002;
  local_10c = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_108 = 0;
  local_f0 = 0;
  uStack_e4 = 0x300000003;
  local_ec = 0x100000002;
  local_dc = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_d8 = 0;
  local_c0 = 0;
  local_ac = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  local_98 = 0;
  local_7c = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  local_50 = "MultiresTextureGpuUpdater Job";
  if (local_140[0] != 0) {
    if (local_140[0] == 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar5 & 0xfffffffe;
      puVar9 = &local_108;
      puVar8 = (undefined8 *)(param_2 + 0x58);
      uVar11 = uVar7;
      do {
        uVar10 = puVar8[-1];
        uVar3 = *puVar8;
        *(undefined8 *)((long)puVar9 + -0x14) = 0x100000000;
        uVar11 = uVar11 - 2;
        *(undefined8 *)((long)puVar9 + 0x1c) = 0x100000000;
        puVar8 = puVar8 + 2;
        *(undefined4 *)((long)puVar9 + -0xc) = 3;
        puVar9[-6] = uVar10;
        *puVar9 = uVar3;
        *(undefined4 *)((long)puVar9 + 0x24) = 3;
        puVar9 = puVar9 + 0xc;
      } while (uVar11 != 0);
      if (uVar7 == uVar5) goto LAB_0096074c;
    }
    lVar6 = uVar5 - uVar7;
    puVar9 = local_11c + uVar7 * 6;
    puVar8 = (undefined8 *)(param_2 + uVar7 * 8 + 0x50);
    do {
      uVar10 = *puVar8;
      *puVar9 = 0x100000000;
      lVar6 = lVar6 + -1;
      *(undefined4 *)(puVar9 + 1) = 3;
      *(undefined8 *)((long)puVar9 + -0x1c) = uVar10;
      puVar9 = puVar9 + 6;
      puVar8 = puVar8 + 1;
    } while (lVar6 != 0);
  }
LAB_0096074c:
  iVar2 = (int)(1L << ((ulong)uVar1 & 0x3f)) + iVar2 * 2;
  (**(code **)(*(long *)param_1 + 0x38))(param_1,local_140,0,1,0,0,iVar2,iVar2);
  (**(code **)(*(long *)this + 0x10))(this,param_1,param_3);
  (**(code **)(*(long *)param_1 + 0x40))(param_1);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


