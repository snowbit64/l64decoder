// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocateGpuResources
// Entry Point: 00a99f2c
// Size: 1036 bytes
// Signature: undefined __thiscall allocateGpuResources(SoftVirtualTexture * this, IRenderDevice * param_1, ICommandBuffer * param_2)


/* SoftVirtualTexture::allocateGpuResources(IRenderDevice*, ICommandBuffer*) */

void __thiscall
SoftVirtualTexture::allocateGpuResources
          (SoftVirtualTexture *this,IRenderDevice *param_1,ICommandBuffer *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  void *pvVar7;
  uint uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long **pplVar14;
  PIXEL_FORMAT *pPVar15;
  SoftVirtualTexture *pSVar16;
  void *local_190;
  void *local_188;
  undefined4 uStack_180;
  undefined8 local_17c;
  undefined8 local_174;
  undefined8 local_16c;
  PIXEL_FORMAT local_164;
  undefined local_160;
  undefined8 local_15c;
  undefined8 local_154;
  undefined8 uStack_14c;
  undefined4 local_144;
  char *local_140;
  undefined8 local_138;
  undefined2 local_130;
  undefined8 local_12c;
  undefined8 local_124;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_110;
  undefined local_108;
  undefined8 local_104;
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined4 local_ec;
  char *local_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined4 local_94;
  char *local_90;
  uint local_88;
  int iStack_84;
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  if (*(long **)(this + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x60) + 8))();
  }
  *(undefined8 *)(this + 0x60) = 0;
  if (*(long **)(this + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x68) + 8))();
  }
  *(undefined8 *)(this + 0x68) = 0;
  if (*(long **)(this + 0x78) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x78) + 8))();
  }
  uVar8 = *(uint *)(this + 0x18);
  *(undefined8 *)(this + 0x78) = 0;
  if (uVar8 != 0) {
    uVar13 = 0;
    pplVar14 = (long **)(this + 0x80);
    do {
      if (*pplVar14 != (long *)0x0) {
        (**(code **)(**pplVar14 + 8))();
        uVar8 = *(uint *)(this + 0x18);
      }
      uVar13 = uVar13 + 1;
      *pplVar14 = (long *)0x0;
      pplVar14 = pplVar14 + 2;
    } while (uVar13 < uVar8);
  }
  local_d4 = 0xffffffff00000000;
  local_cc = *(undefined4 *)this;
  local_c0 = *(undefined4 *)(this + 4);
  local_e0 = 0;
  local_d8 = 0;
  local_c4 = 1;
  uStack_bc = 0;
  uStack_9c = 0x3f80000000000000;
  local_a4 = 0;
  local_94 = 0;
  local_b8 = 0x2900000003;
  local_90 = "SoftVirtualTexture Index Texture";
  local_b0 = 0;
  local_ac = 0x100000004;
  uStack_c8 = local_cc;
  lVar5 = (**(code **)(*(long *)param_1 + 0x100))(param_1,param_2,&local_e0);
  *(long *)(this + 0x60) = lVar5;
  if (lVar5 == 0) goto LAB_00a9a300;
  if (this[0x40] != (SoftVirtualTexture)0x0) {
    local_b8 = CONCAT44(5,(undefined4)local_b8);
    local_c0 = 1;
    local_90 = "SoftVirtualTexture Index Debug Texture";
    uVar6 = (**(code **)(*(long *)param_1 + 0x100))(param_1,param_2,&local_e0);
    *(undefined8 *)(this + 0x68) = uVar6;
  }
  local_138 = 0;
  local_11c = 0x100000001;
  local_104 = 0x100000004;
  local_130 = 0;
  local_124 = 0x100000010;
  local_114 = 0;
  local_108 = 0;
  local_12c = 0xffffffff00000000;
  uStack_f4 = 0x3f80000000000000;
  local_fc = 0;
  local_ec = 0;
  local_110 = 0x1b00000004;
  local_e8 = "SoftVirtualTexture Index Attribute Buffer";
  uVar6 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
  lVar5 = (**(code **)(*(long *)param_1 + 0x100))(param_1,uVar6,&local_138);
  *(long *)(this + 0x78) = lVar5;
  if (lVar5 == 0) goto LAB_00a9a300;
  if (*(int *)(this + 0x18) == 0) {
    uVar8 = 0;
  }
  else {
    uVar13 = 0;
    pPVar15 = (PIXEL_FORMAT *)(this + 0x20);
    pSVar16 = this + 0x8c;
    do {
      local_164 = *pPVar15;
      local_190 = (void *)0x0;
      local_16c = 0;
      uStack_14c = 0x3f80000000000000;
      local_154 = 0;
      local_17c = *(undefined8 *)(this + 0x10);
      local_144 = 0;
      local_188 = (void *)(CONCAT44(*(int *)(this + 0x1c) + -1,(int)local_188) & 0xffffffffffff0000)
      ;
      uStack_180 = 0xffffffff;
      local_160 = *(undefined *)(pPVar15 + 1);
      local_174 = 0x100000001;
      local_15c = 0x100001800;
      local_140 = "SoftVirtualTexture Palette Texture";
      uVar6 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
      lVar5 = (**(code **)(*(long *)param_1 + 0x100))(param_1,uVar6,&local_190);
      *(long *)(pSVar16 + -0xc) = lVar5;
      if (lVar5 == 0) {
        lVar5 = 0;
        goto LAB_00a9a300;
      }
      uVar4 = PixelFormatUtil::getMemorySize(1,1,1,*pPVar15);
      *(undefined4 *)(pSVar16 + -4) = uVar4;
      uVar13 = uVar13 + 1;
      *pSVar16 = (SoftVirtualTexture)
                 ((byte)PixelFormatUtil::s_pixelFormats[(ulong)*pPVar15 * 0x18 + 0xc] >> 1 & 1);
      uVar8 = *(uint *)(this + 0x18);
      pPVar15 = pPVar15 + 2;
      pSVar16 = pSVar16 + 0x10;
    } while (uVar13 < uVar8);
  }
  uVar1 = *(uint *)(this + 0x4c);
  uVar2 = uVar1 * uVar1;
  uVar13 = (ulong)uVar2;
  pvVar7 = operator_new__(uVar13 << 2);
  if (uVar2 != 0) {
    if (uVar2 < 8) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar13 & 0xfffffff8;
      puVar11 = (undefined8 *)((long)pvVar7 + 0x10);
      uVar12 = uVar9;
      do {
        puVar11[-1] = 0xffff00ffffff00ff;
        puVar11[-2] = 0xffff00ffffff00ff;
        puVar11[1] = 0xffff00ffffff00ff;
        *puVar11 = 0xffff00ffffff00ff;
        puVar11 = puVar11 + 4;
        uVar12 = uVar12 - 8;
      } while (uVar12 != 0);
      if (uVar9 == uVar13) goto LAB_00a9a2b0;
    }
    lVar5 = uVar13 - uVar9;
    puVar10 = (undefined4 *)((long)pvVar7 + uVar9 * 4);
    do {
      lVar5 = lVar5 + -1;
      *puVar10 = 0xffff00ff;
      puVar10 = puVar10 + 1;
    } while (lVar5 != 0);
  }
LAB_00a9a2b0:
  local_88 = uVar1 << 2;
  iStack_84 = (uVar1 & 0x3fffffff) << 1;
  local_190 = pvVar7;
  local_188 = pvVar7;
  if (uVar8 != 0) {
    uVar8 = 0;
    do {
      updateTileData(this,param_2,uVar8,0,&local_190,&local_88);
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(this + 0x18));
  }
  operator_delete__(pvVar7);
  lVar5 = 1;
LAB_00a9a300:
  if (*(long *)(lVar3 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar5);
  }
  return;
}


