// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocateGpuResources
// Entry Point: 0095f8b8
// Size: 1160 bytes
// Signature: undefined __thiscall allocateGpuResources(MultiresTextureGpuUpdater * this, IRenderDevice * param_1, ICommandBuffer * param_2)


/* MultiresTextureGpuUpdater::allocateGpuResources(IRenderDevice*, ICommandBuffer*) */

uint __thiscall
MultiresTextureGpuUpdater::allocateGpuResources
          (MultiresTextureGpuUpdater *this,IRenderDevice *param_1,ICommandBuffer *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  MultiresTextureGpuUpdater *pMVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  uint *puVar18;
  long lVar19;
  ulong uVar20;
  ulong local_168;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  char *local_f8;
  undefined2 local_ec;
  undefined local_ea;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined8 local_dc;
  uint local_d4;
  uint uStack_d0;
  undefined8 local_cc;
  undefined8 uStack_c4;
  uint local_bc;
  MultiresTextureGpuUpdater local_b8;
  undefined2 local_b7;
  undefined local_b5;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined4 local_9c;
  char *local_98;
  long local_90;
  
  lVar8 = tpidr_el0;
  local_90 = *(long *)(lVar8 + 0x28);
  lVar12 = *(long *)(this + 0x110);
  uVar9 = (int)(1L << ((ulong)*(uint *)(lVar12 + 8) & 0x3f)) + *(int *)(lVar12 + 0xc) * 2;
  if (*(int *)(this + 8) != 0) {
    lVar17 = 0;
    lVar19 = 0x50;
    local_168 = 0;
    do {
      if (*(int *)(this + 0x28) != 0) {
        uVar13 = 0;
        pMVar14 = this + 0x30;
        do {
          uStack_a4 = 0x3f80000000000000;
          local_ac = 0;
          uStack_c4 = 0;
          local_cc = 0x100000001;
          local_bc = *(uint *)(pMVar14 + -4);
          local_e8 = 0;
          local_b8 = *pMVar14;
          local_e0 = 0;
          local_dc = 0xffffffff00000000;
          local_b4 = 0x100000210;
          local_9c = 0;
          local_98 = "MultiresTextureGpuUpdater RT";
          local_d4 = uVar9;
          uStack_d0 = uVar9;
          uVar10 = (**(code **)(*(long *)param_1 + 0x100))(param_1,param_2,&local_e8);
          *(undefined8 *)(*(long *)(this + 0x120) + lVar19 + uVar13 * 8) = uVar10;
          uVar13 = uVar13 + 1;
          pMVar14 = pMVar14 + 8;
        } while (uVar13 < *(uint *)(this + 0x28));
        lVar12 = *(long *)(this + 0x110);
      }
      if (*(int *)(lVar12 + 0x18) != 0) {
        uVar13 = 0;
        lVar15 = lVar17;
        do {
          uVar1 = *(uint *)(lVar12 + uVar13 * 8 + 0x20);
          uVar5 = (byte)PixelFormatUtil::s_pixelFormats[(ulong)uVar1 * 0x18 + 0xc] >> 1 & 1;
          *(char *)(*(long *)(this + 0x120) + local_168 * 0xf8 + uVar13 + 0xf0) = (char)uVar5;
          uVar11 = PixelFormatUtil::getComputeWritablePixelFormatForGpuCompression(uVar1);
          lVar12 = *(long *)(this + 0x110);
          if (*(int *)(lVar12 + 0x1c) != 0) {
            uVar20 = 0;
            lVar16 = lVar15;
            puVar18 = (uint *)(this + 0x368);
            do {
              uVar2 = *(uint *)(PixelFormatUtil::s_pixelFormats + (uVar11 & 0xffffffff) * 0x18 + 8);
              uVar4 = ((uint)((int)(1L << ((ulong)*(uint *)(lVar12 + 8) & 0x3f)) +
                             *(int *)(lVar12 + 0xc) * 2) >> (ulong)((uint)uVar20 & 0x1f)) >>
                      (ulong)(uVar5 << 1);
              lVar12 = (**(code **)(*(long *)param_1 + 0x28))(param_1);
              uVar3 = *(uint *)(lVar12 + 0x80);
              local_110 = 0;
              uVar6 = 0;
              if (uVar3 != 0) {
                uVar6 = ((uVar3 + uVar4 * uVar2) - 1) / uVar3;
              }
              uVar7 = 0;
              if (uVar2 != 0) {
                uVar7 = (uVar6 * uVar3) / uVar2;
              }
              puVar18[-2] = uVar6 * uVar3;
              *puVar18 = uVar7;
              local_108 = CONCAT44(uVar7 * uVar4,uVar2);
              local_f8 = "MultiresTextureGpuUpdater CT";
              local_100 = 0x2001;
              uVar10 = (**(code **)(*(long *)param_1 + 0x120))(param_1,param_2,&local_110);
              *(undefined8 *)(*(long *)(this + 0x120) + lVar16 + 0x70) = uVar10;
              lVar12 = *(long *)(this + 0x110);
              if (*(char *)(lVar12 + 0x40) != '\0') {
                local_e8 = 0;
                local_e0 = 0;
                local_dc = 0xffffffff00000000;
                local_b7 = local_ec;
                uStack_c4 = 0;
                local_cc = 0x100000001;
                local_b5 = local_ea;
                local_b4 = 0x100000801;
                uStack_a4 = 0x3f80000000000000;
                local_ac = 0;
                local_d4 = uVar9 >> (ulong)((uint)uVar20 & 0x1f);
                local_9c = 0;
                local_b8 = *(MultiresTextureGpuUpdater *)(lVar12 + uVar13 * 8 + 0x24);
                local_98 = "MultiresTextureGpuUpdater UCT";
                uStack_d0 = local_d4;
                local_bc = uVar1;
                uVar10 = (**(code **)(*(long *)param_1 + 0x100))(param_1,param_2,&local_e8);
                *(undefined8 *)(*(long *)(this + 0x120) + lVar16 + 0xb0) = uVar10;
                lVar12 = *(long *)(this + 0x110);
              }
              uVar20 = uVar20 + 1;
              puVar18 = puVar18 + 1;
              lVar16 = lVar16 + 0x20;
            } while (uVar20 < *(uint *)(lVar12 + 0x1c));
          }
          uVar13 = uVar13 + 1;
          lVar15 = lVar15 + 8;
        } while (uVar13 < *(uint *)(lVar12 + 0x18));
      }
      lVar19 = lVar19 + 0xf8;
      local_168 = local_168 + 1;
      lVar17 = lVar17 + 0xf8;
    } while (local_168 < *(uint *)(this + 8));
  }
  local_b4 = 0x100000010;
  uStack_c4 = 0;
  local_cc = 0x100000001;
  local_e8 = 0;
  local_e0 = 0;
  local_bc = 0x1e;
  local_dc = 0xffffffff00000000;
  uStack_a4 = 0x3f80000000000000;
  local_ac = 0;
  local_9c = 0;
  local_b8 = (MultiresTextureGpuUpdater)0x0;
  local_98 = "MultiresTextureGpuUpdater DT";
  local_d4 = uVar9;
  uStack_d0 = uVar9;
  uVar10 = (**(code **)(*(long *)param_1 + 0x100))(param_1,param_2,&local_e8);
  *(undefined8 *)(this + 0x358) = uVar10;
  syncBlitAll(this,param_2,true);
  local_108 = 0;
  local_110 = CONCAT44(local_110._4_4_,0x10);
  local_100 = 8;
  uVar10 = (**(code **)(*(long *)param_1 + 0x118))(param_1,param_2,&local_110);
  *(undefined8 *)(this + 0x350) = uVar10;
  uVar13 = compileShaders(this,param_1);
  uVar9 = 0;
  if ((uVar13 & 1) != 0) {
    uVar9 = (***(code ***)this)(this,param_1,param_2);
  }
  if (*(long *)(lVar8 + 0x28) == local_90) {
    return uVar9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


