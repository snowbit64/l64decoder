// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateLodTexture
// Entry Point: 008f36fc
// Size: 628 bytes
// Signature: undefined __cdecl updateLodTexture(IRenderDevice * param_1, bool param_2, BaseTerrain * param_3)


/* TerrainLodTexture::updateLodTexture(IRenderDevice*, bool, BaseTerrain*) */

void TerrainLodTexture::updateLodTexture(IRenderDevice *param_1,bool param_2,BaseTerrain *param_3)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  void *local_b8;
  uint local_b0;
  long local_68;
  
  plVar9 = (long *)(ulong)param_2;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar11 = (ulong)param_3 & 0xffffffff;
  if ((*(long *)(param_1 + 0x20) != 0) && (*(long *)(*(long *)(param_1 + 0x20) + 0x68) == 0)) {
    createLODTextureArray(param_1,(BaseTerrain *)plVar9);
  }
  if (*(long *)(param_1 + 0x68) != *(long *)(param_1 + 0x60)) {
    uVar13 = 0;
    do {
      uVar7 = DensityMap::isLoaded();
      if ((uVar7 & 1) == 0) goto LAB_008f393c;
      uVar13 = (ulong)((int)uVar13 + 1);
      uVar7 = (*(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60) >> 3) * -0x3333333333333333;
    } while (uVar13 <= uVar7 && uVar7 - uVar13 != 0);
  }
  lVar10 = *(long *)(param_1 + 0x80);
  if (lVar10 != *(long *)(param_1 + 0x78)) {
    lVar10 = *(long *)(param_1 + 0x78);
    uVar13 = 0;
    uVar7 = 1;
    do {
      puVar1 = (uint *)(lVar10 + uVar13 * 0x10);
      updateRegion((uint)param_1,*puVar1,puVar1[1],puVar1[2],(BaseTerrain *)(ulong)puVar1[3]);
      if (puVar1[2] - *puVar1 == *(int *)(param_1 + 8)) {
        uVar11 = (ulong)((uint)(puVar1[3] - puVar1[1] == puVar1[2] - *puVar1) | (uint)uVar11);
      }
      lVar10 = *(long *)(param_1 + 0x78);
      bVar4 = uVar7 < (ulong)(*(long *)(param_1 + 0x80) - lVar10 >> 4);
      uVar13 = uVar7;
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (bVar4);
  }
  uVar5 = *(uint *)(param_1 + 0x34);
  *(long *)(param_1 + 0x80) = lVar10;
  iVar2 = 0;
  if (uVar5 < 0x33) {
    iVar2 = uVar5 + 1;
  }
  *(int *)(param_1 + 0x34) = iVar2;
  if (((0x32 < uVar5) || ((uVar11 & 1) != 0)) && (param_1[0x30] != (IRenderDevice)0x0)) {
    if ((*(long *)(param_1 + 0x28) != 0) && (*(long *)(param_1 + 0x18) != 0)) {
      plVar12 = *(long **)(*(long *)(param_1 + 0x28) + 0x68);
      uVar5 = (**(code **)(*plVar12 + 0x20))(plVar12);
      uVar6 = (**(code **)(*plVar12 + 0x28))(plVar12);
      uVar8 = (**(code **)(*plVar9 + 0x138))(plVar9);
      (**(code **)(*plVar12 + 0x68))(plVar12,uVar8,0,0,0,0,uVar5,uVar6,0,1,1,&local_b8);
      PixelFormatUtil::convertPixelFormat
                (*(void **)(param_1 + 0x18),0,0,2,local_b8,local_b0,0,2,uVar5,uVar6,1);
      uVar8 = (**(code **)(*plVar9 + 0x138))(plVar9);
      (**(code **)(*plVar12 + 0x70))(plVar12,uVar8,&local_b8);
    }
    param_1[0x30] = (IRenderDevice)0x0;
  }
LAB_008f393c:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


