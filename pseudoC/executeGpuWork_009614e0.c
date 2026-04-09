// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeGpuWork
// Entry Point: 009614e0
// Size: 900 bytes
// Signature: undefined __thiscall executeGpuWork(MultiresTextureGpuUpdater * this, ICommandBuffer * param_1)


/* MultiresTextureGpuUpdater::executeGpuWork(ICommandBuffer*) */

void __thiscall
MultiresTextureGpuUpdater::executeGpuWork(MultiresTextureGpuUpdater *this,ICommandBuffer *param_1)

{
  undefined8 *puVar1;
  IComputeCommandBuffer *pIVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  lVar5 = *(long *)(this + 0x120);
  lVar11 = *(long *)(this + 0x128) - lVar5;
  if (lVar11 != 0) {
    uVar10 = 0;
    iVar9 = 0;
    uVar7 = (lVar11 >> 3) * -0x1084210842108421;
    do {
      lVar4 = uVar10 * 0xf8;
      uVar10 = (ulong)((int)uVar10 + 1);
      if (*(int *)(lVar5 + lVar4 + 0x48) == 1) {
        iVar9 = iVar9 + 1;
      }
    } while (uVar10 <= uVar7 && uVar7 - uVar10 != 0);
    if (iVar9 != 0) {
      lVar4 = *(long *)(this + 0x138);
      if (lVar11 == 0) {
        uVar10 = 0;
      }
      else {
        uVar8 = 0;
        uVar10 = 0;
        do {
          if (*(int *)(lVar5 + uVar8 * 0xf8 + 0x48) == 1) {
            lVar11 = lVar5 + uVar8 * 0xf8;
            puVar1 = (undefined8 *)(lVar4 + uVar10 * 0x10);
            uVar10 = (ulong)((int)uVar10 + 1);
            lVar12 = *(long *)(lVar11 + 8);
            *puVar1 = *(undefined8 *)(lVar11 + 0x30);
            uVar14 = *(undefined4 *)(lVar12 + 0x10);
            *(undefined4 *)(puVar1 + 1) = uVar14;
            *(undefined4 *)((long)puVar1 + 0xc) = uVar14;
          }
          uVar8 = (ulong)((int)uVar8 + 1);
        } while (uVar8 <= uVar7 && uVar7 - uVar8 != 0);
      }
      (**(code **)(*(long *)this + 8))(this,param_1,uVar10);
      lVar5 = *(long *)(this + 0x120);
      lVar11 = *(long *)(this + 0x128);
      if (lVar11 != lVar5) {
        uVar7 = 0;
        uVar3 = 0;
        do {
          if (*(int *)(lVar5 + uVar7 * 0xf8 + 0x48) == 1) {
            doRender(this,param_1,(TileUpdateInfo *)(lVar5 + uVar7 * 0xf8),uVar3);
            lVar5 = *(long *)(this + 0x120);
            lVar11 = *(long *)(this + 0x128);
            uVar3 = uVar3 + 1;
          }
          uVar7 = (ulong)((int)uVar7 + 1);
          uVar10 = (lVar11 - lVar5 >> 3) * -0x1084210842108421;
        } while (uVar7 <= uVar10 && uVar10 - uVar7 != 0);
      }
      syncRenderAll(this,param_1);
      lVar5 = *(long *)(this + 0x120);
      lVar11 = *(long *)(this + 0x128);
      if (lVar11 != lVar5) {
        uVar7 = 0;
        do {
          if (*(int *)(lVar5 + uVar7 * 0xf8 + 0x48) == 1) {
            lVar5 = lVar5 + uVar7 * 0xf8;
            uVar15 = *(undefined4 *)(*(long *)(lVar5 + 8) + 4);
            uVar14 = *(undefined4 *)(*(long *)(lVar5 + 8) + 0x1c);
            (**(code **)(*(long *)this + 0x18))
                      (*(undefined4 *)(lVar5 + 0x20),*(undefined4 *)(lVar5 + 0x24),uVar15,uVar15,
                       this,param_1,uVar14,uVar14,*(undefined4 *)(this + 0x28),lVar5 + 0x50,
                       *(undefined8 *)(this + 0x358));
            lVar5 = *(long *)(this + 0x120);
            lVar11 = *(long *)(this + 0x128);
          }
          uVar7 = (ulong)((int)uVar7 + 1);
          uVar10 = (lVar11 - lVar5 >> 3) * -0x1084210842108421;
        } while (uVar7 <= uVar10 && uVar10 - uVar7 != 0);
      }
      syncDecalRenderAll(this,param_1);
      pIVar2 = (IComputeCommandBuffer *)(**(code **)(*(long *)param_1 + 0x18))(param_1);
      lVar5 = *(long *)(this + 0x120);
      lVar11 = *(long *)(this + 0x128);
      if (lVar11 != lVar5) {
        uVar7 = 0;
        do {
          if (*(int *)(lVar5 + uVar7 * 0xf8 + 0x48) == 1) {
            doCompression(this,pIVar2,(TileUpdateInfo *)(lVar5 + uVar7 * 0xf8));
            lVar5 = *(long *)(this + 0x120);
            lVar11 = *(long *)(this + 0x128);
          }
          uVar7 = (ulong)((int)uVar7 + 1);
          uVar10 = (lVar11 - lVar5 >> 3) * -0x1084210842108421;
        } while (uVar7 <= uVar10 && uVar10 - uVar7 != 0);
      }
      syncCompressionAll(this,param_1);
      lVar5 = *(long *)(this + 0x120);
      lVar11 = *(long *)(this + 0x128);
      if (lVar11 != lVar5) {
        uVar7 = 0;
        do {
          if (*(int *)(lVar5 + uVar7 * 0xf8 + 0x48) == 1) {
            doBlit(this,param_1,(TileUpdateInfo *)(lVar5 + uVar7 * 0xf8));
            lVar5 = *(long *)(this + 0x120);
            lVar11 = *(long *)(this + 0x128);
          }
          uVar7 = (ulong)((int)uVar7 + 1);
          uVar10 = (lVar11 - lVar5 >> 3) * -0x1084210842108421;
        } while (uVar7 <= uVar10 && uVar10 - uVar7 != 0);
      }
      syncBlitAll(this,param_1,false);
      lVar5 = *(long *)(this + 0x120);
      lVar11 = *(long *)(this + 0x128);
      if (lVar11 != lVar5) {
        uVar7 = 0;
        do {
          piVar13 = (int *)(lVar5 + uVar7 * 0xf8 + 0x48);
          if (*piVar13 == 1) {
            puVar6 = (uint *)(lVar5 + uVar7 * 0xf8);
            MultiresTexture::onTileUpdated
                      (*(MultiresTexture **)(this + 0x118),puVar6[0x13],*puVar6,puVar6[1],puVar6[4],
                       puVar6[5]);
            lVar5 = *(long *)(this + 0x120);
            lVar11 = *(long *)(this + 0x128);
            *piVar13 = 0;
          }
          uVar7 = (ulong)((int)uVar7 + 1);
          uVar10 = (lVar11 - lVar5 >> 3) * -0x1084210842108421;
        } while (uVar7 <= uVar10 && uVar10 - uVar7 != 0);
      }
    }
  }
  return;
}


