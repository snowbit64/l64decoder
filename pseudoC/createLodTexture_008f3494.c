// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createLodTexture
// Entry Point: 008f3494
// Size: 584 bytes
// Signature: undefined __cdecl createLodTexture(IRenderDevice * param_1, BaseTerrain * param_2)


/* TerrainLodTexture::createLodTexture(IRenderDevice*, BaseTerrain*) */

undefined8 TerrainLodTexture::createLodTexture(IRenderDevice *param_1,BaseTerrain *param_2)

{
  uint uVar1;
  long lVar2;
  ResourceManager *pRVar3;
  Texture *pTVar4;
  void *pvVar5;
  undefined8 uVar6;
  ITextureObject *pIVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  void *local_90;
  undefined2 local_88;
  undefined8 local_84;
  int local_7c;
  int iStack_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined4 local_64;
  undefined local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pRVar3 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(pRVar3,*(Resource **)(param_1 + 0x20));
  pRVar3 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(pRVar3,*(Resource **)(param_1 + 0x28));
  pTVar4 = (Texture *)operator_new(0x78);
                    /* try { // try from 008f34e0 to 008f34fb has its CatchHandler @ 008f36e8 */
  Texture::Texture(pTVar4,"TerrainDistanceTextureArray",2,8,false,3);
  *(Texture **)(param_1 + 0x20) = pTVar4;
  FUN_00f276d0(1,pTVar4 + 8);
  pRVar3 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::add(pRVar3,*(Resource **)(param_1 + 0x20),(ResourceDesc *)0x0,false);
  pvVar5 = *(void **)(param_1 + 0x18);
  local_90 = (void *)0x0;
  local_64 = 0x22;
  local_88 = 0;
  uStack_6c = 0;
  local_74 = 0x100000001;
  local_7c = *(int *)(param_1 + 8);
  local_5c = 0x100008004;
  local_84 = 0xffffffff00000000;
  uStack_4c = 0x3f80000000000000;
  local_54 = 0;
  local_44 = 0;
  iStack_78 = local_7c;
  if (pvVar5 != (void *)0x0) goto LAB_008f3620;
  uVar1 = local_7c * local_7c;
  uVar13 = (ulong)uVar1;
  pvVar5 = operator_new__(uVar13 << 1);
  *(void **)(param_1 + 0x18) = pvVar5;
  if (uVar1 == 0) goto LAB_008f3620;
  if (uVar1 < 8) {
    uVar8 = 0;
  }
  else {
    if (uVar1 < 0x20) {
      uVar9 = 0;
    }
    else {
      uVar8 = uVar13 & 0xffffffe0;
      puVar11 = (undefined8 *)((long)pvVar5 + 0x20);
      uVar9 = uVar8;
      do {
        uVar9 = uVar9 - 0x20;
        puVar11[-3] = 0xff00ff00ff00ff00;
        puVar11[-4] = 0xff00ff00ff00ff00;
        puVar11[-1] = 0xff00ff00ff00ff00;
        puVar11[-2] = 0xff00ff00ff00ff00;
        puVar11[1] = 0xff00ff00ff00ff00;
        *puVar11 = 0xff00ff00ff00ff00;
        puVar11[3] = 0xff00ff00ff00ff00;
        puVar11[2] = 0xff00ff00ff00ff00;
        puVar11 = puVar11 + 8;
      } while (uVar9 != 0);
      if (uVar8 == uVar13) goto LAB_008f3620;
      uVar9 = uVar8;
      if ((uVar1 & 0x18) == 0) goto LAB_008f3600;
    }
    uVar8 = uVar13 & 0xfffffff8;
    lVar12 = uVar9 << 1;
    lVar10 = uVar9 - uVar8;
    do {
      ((undefined8 *)((long)pvVar5 + lVar12))[1] = 0xff00ff00ff00ff00;
      *(undefined8 *)((long)pvVar5 + lVar12) = 0xff00ff00ff00ff00;
      lVar12 = lVar12 + 0x10;
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0);
    if (uVar8 == uVar13) goto LAB_008f3620;
  }
LAB_008f3600:
  lVar10 = uVar13 - uVar8;
  lVar12 = (long)pvVar5 + uVar8 * 2 + 1;
  do {
    *(undefined2 *)(lVar12 + -1) = 0xff00;
    lVar12 = lVar12 + 2;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
LAB_008f3620:
  local_60 = 0;
  local_40 = "TerrainLodTypeMapTexture";
  local_90 = pvVar5;
  uVar6 = (**(code **)(*(long *)param_2 + 0x138))(param_2);
  pIVar7 = (ITextureObject *)(**(code **)(*(long *)param_2 + 0x100))(param_2,uVar6,&local_90);
  pTVar4 = (Texture *)operator_new(0x78);
                    /* try { // try from 008f366c to 008f3687 has its CatchHandler @ 008f36dc */
  Texture::Texture(pTVar4,"BaseTerrainLodTypeMapTexture",2,pIVar7,false,true);
  *(Texture **)(param_1 + 0x28) = pTVar4;
  FUN_00f276d0(1,pTVar4 + 8);
  pRVar3 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::add(pRVar3,*(Resource **)(param_1 + 0x28),(ResourceDesc *)0x0,false);
  param_1[0x30] = (IRenderDevice)0x0;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


