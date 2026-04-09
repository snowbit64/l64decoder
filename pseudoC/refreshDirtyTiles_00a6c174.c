// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: refreshDirtyTiles
// Entry Point: 00a6c174
// Size: 772 bytes
// Signature: undefined __thiscall refreshDirtyTiles(DensityAnimationMap * this, IRenderDevice * param_1, ACCESS_MODE param_2)


/* DensityAnimationMap::refreshDirtyTiles(IRenderDevice*, RenderTargetDesc::ACCESS_MODE) */

void __thiscall
DensityAnimationMap::refreshDirtyTiles
          (DensityAnimationMap *this,IRenderDevice *param_1,ACCESS_MODE param_2)

{
  uint *puVar1;
  ACCESS_MODE AVar2;
  byte bVar3;
  size_t __n;
  uint uVar4;
  long lVar5;
  long *plVar6;
  void *__src;
  uint uVar7;
  ulong uVar8;
  void *__dest;
  long lVar9;
  int iVar10;
  char *local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined4 local_168 [2];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined8 uStack_10c;
  undefined local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined local_80;
  char *local_78;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  uVar8 = (*(long *)(this + 0x410) - *(long *)(this + 0x408) >> 2) * -0x5555555555555555;
  uVar7 = (uint)uVar8;
  if ((uVar8 & 0xfffffff0) != 0) {
    uVar7 = 0x10;
  }
  plVar6 = (long *)(**(code **)(*(long *)param_1 + 0x138))(param_1);
  if (uVar7 == 0) {
    iVar10 = 0;
  }
  else {
    lVar9 = 0;
    iVar10 = 0;
    do {
      puVar1 = (uint *)(*(long *)(this + 0x408) + lVar9);
      bVar3 = *(byte *)(puVar1 + 2);
      updateInfoTexture(this,(ICommandBuffer *)plVar6,*puVar1,puVar1[1]);
      lVar9 = lVar9 + 0xc;
      iVar10 = iVar10 + (bVar3 & 1);
    } while ((ulong)uVar7 * 0xc - lVar9 != 0);
  }
  local_150 = 0;
  local_168[0] = 1;
  AVar2 = param_2;
  if (iVar10 != 0) {
    AVar2 = 3;
  }
  local_148 = 0;
  local_134 = 0;
  local_78 = "DensityAnimationMap::refreshDirtyTiles";
  local_160 = *(undefined8 *)(this + 0x88);
  local_128 = 0;
  uStack_120 = 0;
  local_130 = 0;
  local_118 = 0;
  uStack_10c = 0x300000003;
  local_114 = 0x100000002;
  local_104 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_100 = 0;
  local_e8 = 0;
  uStack_dc = 0x300000003;
  local_e4 = 0x100000002;
  local_d4 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_b8 = 0;
  local_c0 = 0;
  uStack_ac = 0x300000003;
  local_b4 = 0x100000002;
  local_a4 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0x300000003;
  local_90 = 0x100000002;
  local_80 = 0;
  uStack_158 = 0;
  uStack_13c = CONCAT44(3,AVar2);
  local_144 = 0x100000000;
  (**(code **)(*plVar6 + 0x38))
            (plVar6,local_168,0,1,0,0,*(undefined4 *)(this + 0x6c),*(undefined4 *)(this + 0x6c));
  uStack_178 = *(undefined8 *)(this + 0x80);
  local_180 = "foliageCurStateTexture";
  local_170 = 0;
  AdhocShader::bindResourcesPs
            ((AdhocShader *)(this + 0xc0),(ICommandBuffer *)plVar6,(ShaderTexture *)&local_180,1,
             (ShaderStructBuffer *)0x0,0,(ShaderTexture *)0x0,0,(ShaderConstantBuffer *)0x0,0,
             (ShaderSampler *)0x0,0);
  FullScreenRenderController::render
            ((FullScreenRenderController *)(this + 0x2c0),(ICommandBuffer *)plVar6,0);
  AdhocShader::unbindResourcesPs
            ((AdhocShader *)(this + 0xc0),(ICommandBuffer *)plVar6,(ShaderTexture *)&local_180,1,
             (ShaderStructBuffer *)0x0,0,(ShaderTexture *)0x0,0,(ShaderConstantBuffer *)0x0,0,
             (ShaderSampler *)0x0,0);
  (**(code **)(*plVar6 + 0x40))(plVar6);
  if (uVar7 != 0) {
    lVar9 = 0;
    uVar4 = 0;
    if (*(uint *)(this + 0x50) != 0) {
      uVar4 = *(uint *)(this + 0x6c) / *(uint *)(this + 0x50);
    }
    do {
      puVar1 = (uint *)(*(long *)(this + 0x408) + lVar9);
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        iVar10 = iVar10 + -1;
        AVar2 = param_2;
        if (iVar10 != 0) {
          AVar2 = 3;
        }
        FullScreenRenderController::copyTile
                  ((FullScreenRenderController *)(this + 0x2c0),param_1,
                   *(ITextureObject **)(this + 0x88),AVar2,*puVar1 & uVar4 - 1,puVar1[1] & uVar4 - 1
                   ,*(uint *)(this + 0x50),*(ITextureObject **)(this + 0x98));
      }
      lVar9 = lVar9 + 0xc;
    } while (((ulong)uVar7 + (ulong)uVar7 * 2) * 4 - lVar9 != 0);
    if (uVar7 != 0) {
      __dest = *(void **)(this + 0x408);
      __src = (void *)((long)__dest + (ulong)uVar7 * 0xc);
      __n = *(long *)(this + 0x410) - (long)__src;
      if (__n != 0) {
        memmove(__dest,__src,__n);
      }
      *(size_t *)(this + 0x410) = (long)__dest + __n;
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


