// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addDynamicLayer
// Entry Point: 008f3db0
// Size: 908 bytes
// Signature: undefined __thiscall addDynamicLayer(TerrainLodTexture * this, DensityMap * param_1, uint param_2, uint param_3, uint param_4, uint param_5, DistanceTextureDesc * param_6, bool param_7, uint param_8, uchar * param_9)


/* TerrainLodTexture::addDynamicLayer(DensityMap*, unsigned int, unsigned int, unsigned int,
   unsigned int, TerrainLodTexture::DistanceTextureDesc*, bool, unsigned int, unsigned char const*)
    */

void __thiscall
TerrainLodTexture::addDynamicLayer
          (TerrainLodTexture *this,DensityMap *param_1,uint param_2,uint param_3,uint param_4,
          uint param_5,DistanceTextureDesc *param_6,bool param_7,uint param_8,uchar *param_9)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  DensityMapModifier *this_00;
  void *pvVar6;
  ulong uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  DensityMap **ppDVar13;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*(long *)(this + 0x20) != 0) && (*(long *)(*(long *)(this + 0x20) + 0x68) != 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 008f4100 to 008f410b has its CatchHandler @ 008f413c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Can\'t add dynamic lod texture layers when texture is already created.\n"
                     );
    goto LAB_008f40c0;
  }
  lVar12 = *(long *)(this + 0x60);
  lVar11 = *(long *)(this + 0x68) - lVar12;
  if (lVar11 != 0) {
    uVar7 = 0;
    uVar9 = (lVar11 >> 3) * -0x3333333333333333;
    do {
      ppDVar13 = (DensityMap **)(lVar12 + uVar7 * 0x28);
      if (*ppDVar13 == param_1) goto LAB_008f4020;
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (uVar7 <= uVar9 && uVar9 - uVar7 != 0);
  }
  uVar7 = DensityMap::getSquareSize();
  if ((uint)uVar7 < 2) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    do {
      uVar4 = (uint)uVar7;
      iVar5 = iVar5 + 1;
      uVar7 = uVar7 >> 1 & 0x7fffffff;
    } while (3 < uVar4);
  }
  iVar5 = iVar5 - *(int *)(this + 0x10);
  iVar1 = iVar5 - *(int *)(this + 0x3c);
  if (iVar1 != 0 && *(int *)(this + 0x3c) <= iVar5) {
    lVar12 = *(long *)(this + 0x60);
    *(int *)(this + 0x3c) = iVar5;
    lVar11 = *(long *)(this + 0x68) - lVar12;
    if (lVar11 != 0) {
      uVar7 = 0;
      uVar9 = (lVar11 >> 3) * -0x3333333333333333;
      do {
        lVar11 = lVar12 + uVar7 * 0x28;
        uVar7 = (ulong)((int)uVar7 + 1);
        *(int *)(lVar11 + 0x20) = iVar1 + *(int *)(lVar11 + 0x20);
      } while (uVar7 <= uVar9 && uVar9 - uVar7 != 0);
    }
  }
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  FUN_008f4168(this + 0x60,&local_90);
  lVar12 = *(long *)(this + 0x68);
  ppDVar13 = (DensityMap **)(lVar12 + -0x28);
  *ppDVar13 = param_1;
  this_00 = (DensityMapModifier *)operator_new(0x30);
                    /* try { // try from 008f3f38 to 008f3f3f has its CatchHandler @ 008f4154 */
  DensityMapModifier::DensityMapModifier(this_00,param_1);
  *(DensityMapModifier **)(lVar12 + -0x20) = this_00;
  uVar3 = DensityMap::getSquareSize();
  *(undefined4 *)(lVar12 + -0xc) = uVar3;
  *(int *)(lVar12 + -8) = *(int *)(this + 0x3c) - iVar5;
  uVar4 = (**(code **)(*(long *)param_1 + 0x60))(param_1);
  uVar4 = ~(-1 << (ulong)(uVar4 & 0x1f));
  *(short *)(lVar12 + -0x10) = (short)uVar4;
  pvVar6 = operator_new__(((ulong)uVar4 & 0xffff) * 200 + 200);
  uVar7 = (ulong)*(ushort *)(lVar12 + -0x10);
  *(void **)(lVar12 + -0x18) = pvVar6;
  if (uVar7 == 0) {
    uVar9 = 0;
LAB_008f3fd4:
    lVar12 = (uVar7 - uVar9) + 1;
    puVar8 = (undefined4 *)((long)pvVar6 + uVar9 * 200 + 0xc0);
    do {
      lVar12 = lVar12 + -1;
      *puVar8 = 0;
      puVar8 = puVar8 + 0x32;
    } while (lVar12 != 0);
  }
  else {
    puVar8 = (undefined4 *)((long)pvVar6 + 0x188);
    uVar9 = uVar7 + 1 & 0x1fffe;
    uVar10 = uVar9;
    do {
      puVar8[-0x32] = 0;
      uVar10 = uVar10 - 2;
      *puVar8 = 0;
      puVar8 = puVar8 + 100;
    } while (uVar10 != 0);
    if (uVar7 + 1 != uVar9) goto LAB_008f3fd4;
  }
  uVar4 = (**(code **)(*(long *)param_1 + 0x58))(param_1);
  DensityMap::addDirtyListener(param_1,(DirtyListener *)this,false,0,uVar4);
LAB_008f4020:
  if (param_2 == 0xffffffff) {
    uVar4 = 0xffffffff;
    do {
      uVar4 = uVar4 + 1;
      addTypeMapping(this,(DensityMapMapping *)ppDVar13,uVar4,param_3,param_4,param_5,param_6,
                     param_7,param_8,param_9);
    } while (uVar4 < *(ushort *)(ppDVar13 + 3));
  }
  else {
    addTypeMapping(this,(DensityMapMapping *)ppDVar13,param_2,param_3,param_4,param_5,param_6,
                   param_7,param_8,param_9);
  }
  if (this[0x38] == (TerrainLodTexture)0x0) {
    addDirtyRegion(this,0,0,*(uint *)(this + 8),*(uint *)(this + 8));
  }
LAB_008f40c0:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


