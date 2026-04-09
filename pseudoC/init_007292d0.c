// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 007292d0
// Size: 1828 bytes
// Signature: undefined __thiscall init(VehicleNavigationMapGenerator * this, VehicleNavigationPlanner * param_1, TerrainTransformGroup * param_2, float param_3, float param_4, char * param_5, uint param_6, uint param_7, uint param_8, float param_9, bool param_10)


/* VehicleNavigationMapGenerator::init(VehicleNavigationPlanner*, TerrainTransformGroup*, float,
   float, char const*, unsigned int, unsigned int, unsigned int, float, bool) */

undefined8 __thiscall
VehicleNavigationMapGenerator::init
          (VehicleNavigationMapGenerator *this,VehicleNavigationPlanner *param_1,
          TerrainTransformGroup *param_2,float param_3,float param_4,char *param_5,uint param_6,
          uint param_7,uint param_8,float param_9,bool param_10)

{
  BaseTerrain *this_00;
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  DynamicAvoidance *this_01;
  VehicleNavigationManager *this_02;
  long lVar11;
  SharedData *this_03;
  void *pvVar12;
  undefined8 *puVar13;
  UpdateManager *this_04;
  uint uVar14;
  int iVar15;
  uint uVar16;
  char *pcVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  undefined2 uVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  uint local_bc;
  
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x260) = 0;
  this[0x1e0] = (VehicleNavigationMapGenerator)0x0;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x80000000;
  this_01 = (DynamicAvoidance *)operator_new(0x148);
                    /* try { // try from 00729354 to 00729357 has its CatchHandler @ 00729a24 */
  DynamicAvoidance::DynamicAvoidance(this_01);
  *(DynamicAvoidance **)(this + 0x140) = this_01;
  DynamicAvoidance::setNumClasses(this_01,0x10);
  DynamicAvoidance::setIgnorePair(*(DynamicAvoidance **)(this + 0x140),3,3,true);
  DynamicAvoidance::setIgnorePair(*(DynamicAvoidance **)(this + 0x140),3,1,true);
  this_02 = (VehicleNavigationManager *)VehicleNavigationManager::getInstance();
  VehicleNavigationManager::registerMapGenerator(this_02,this);
  *(VehicleNavigationPlanner **)(this + 0x138) = param_1;
  *(float *)(this + 0x60) = param_3;
  *(TerrainTransformGroup **)(this + 0x110) = param_2;
  RawTransformGroup::updateWorldTransformation();
  Matrix4x4::invert3x4((Matrix4x4 *)(this + 0x1a0),(Matrix4x4 *)(param_2 + 0xb8));
  lVar20 = *(long *)(this + 0x110);
  this_00 = (BaseTerrain *)(lVar20 + 0x170);
  fVar23 = (float)BaseTerrain::getTerrainHalfSize();
  fVar24 = (float)BaseTerrain::getUnitsPerPixel();
  uVar5 = (int)(fVar23 * fVar24) << 1;
  uVar19 = (uint)((1.0 / param_3) * (float)(ulong)uVar5);
  uVar8 = BaseTerrain::findInfoLayerIndex(this_00,param_5);
  if ((int)uVar8 < 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar15 != 0))
    {
                    /* try { // try from 00729984 to 0072998f has its CatchHandler @ 007299f8 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      local_bc = 0;
      pcVar17 = "Error: Missing AI block info layer. Using default values.\n";
      goto LAB_007299c8;
    }
    local_bc = 0;
    pcVar17 = "Error: Missing AI block info layer. Using default values.\n";
  }
  else {
    lVar11 = BaseTerrain::getInfoLayer(this_00,uVar8);
    uVar9 = (**(code **)(**(long **)(*(long *)(lVar11 + 0x38) + 0x20) + 0x48))();
    uVar10 = (**(code **)(**(long **)(*(long *)(lVar11 + 0x38) + 0x20) + 0x50))();
    uVar14 = uVar19;
    uVar2 = uVar9;
    if (uVar9 <= uVar19) {
      uVar14 = uVar9;
      uVar2 = uVar19;
    }
    uVar14 = (uint)((float)(ulong)uVar2 / (float)(ulong)uVar14);
    uVar25 = NEON_cnt((ulong)uVar14,1);
    uVar22 = NEON_uaddlv(uVar25,1);
    if ((int)CONCAT62((int6)((ulong)uVar25 >> 0x10),uVar22) == 1) {
      bVar7 = (uVar14 & 0xffff0000) != 0;
      uVar2 = uVar14 >> 0x10;
      if (!bVar7) {
        uVar2 = uVar14;
      }
      uVar16 = (uint)bVar7;
      uVar3 = uVar16 << 4 | 8;
      uVar6 = uVar2 >> 8;
      if (uVar2 < 0x100) {
        uVar3 = uVar16 << 4;
        uVar6 = uVar2;
      }
      uVar2 = uVar3 | 4;
      uVar16 = uVar6 >> 4;
      if (uVar6 < 0x10) {
        uVar2 = uVar3;
        uVar16 = uVar6;
      }
      uVar3 = uVar2 | 2;
      uVar6 = uVar16 >> 2;
      if (uVar16 < 4) {
        uVar3 = uVar2;
        uVar6 = uVar16;
      }
      local_bc = (uVar6 + uVar3) - 1;
      if (local_bc == 0) goto LAB_00729514;
      if (uVar19 < uVar9) {
        if (uVar9 >> (ulong)(local_bc & 0x1f) == uVar19 &&
            uVar10 >> (ulong)(local_bc & 0x1f) == uVar19) goto LAB_0072956c;
      }
      else {
        uVar14 = uVar19 >> (ulong)(local_bc & 0x1f);
        local_bc = -local_bc;
        if (uVar14 == uVar9 && uVar14 == uVar10) goto LAB_0072956c;
      }
    }
    else {
LAB_00729514:
      local_bc = 0;
      if (uVar14 == 1) goto LAB_0072956c;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar15 != 0))
    {
                    /* try { // try from 007299b0 to 007299bb has its CatchHandler @ 007299f4 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      uVar8 = 0xffffffff;
      pcVar17 = "Error: AI block info layer has invalid size. Using default values.\n";
LAB_007299c8:
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    else {
      uVar8 = 0xffffffff;
      pcVar17 = "Error: AI block info layer has invalid size. Using default values.\n";
    }
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar17);
LAB_0072956c:
  lVar11 = *(long *)(*(long *)(this + 0x110) + 0x178);
  if ((int)((ulong)(*(long *)(*(long *)(this + 0x110) + 0x180) - lVar11) >> 4) * -0x45d1745d != 0) {
    lVar18 = 0;
    uVar21 = 0;
    do {
      lVar1 = lVar11 + lVar18;
      if ((ulong)(*(long *)(lVar1 + 0x98) - *(long *)(lVar1 + 0x90)) < 0x18) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
           iVar15 != 0)) {
                    /* try { // try from 00729688 to 0072968f has its CatchHandler @ 00729a00 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        lVar11 = lVar11 + lVar18;
        lVar1 = lVar11 + 0x11;
        if ((*(byte *)(lVar11 + 0x10) & 1) != 0) {
          lVar1 = *(long *)(lVar11 + 0x20);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error in terrain layer \'%s\': Missing terrain layer attribute for AI priority.\n"
                           ,lVar1);
      }
      else {
        fVar23 = *(float *)(*(long *)(lVar1 + 0x90) + 0x14);
        if ((fVar23 < 1.0 || fVar23 != 16.0) && (fVar23 < 1.0 || 16.0 <= fVar23)) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar15 != 0)) {
                    /* try { // try from 007296c0 to 007296c7 has its CatchHandler @ 007299fc */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          lVar11 = lVar11 + lVar18;
          lVar4 = lVar11 + 0x11;
          if ((*(byte *)(lVar11 + 0x10) & 1) != 0) {
            lVar4 = *(long *)(lVar11 + 0x20);
          }
          LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                             0x3ff0000000000000,0x4030000000000000,
                             (double)*(float *)(*(long *)(lVar1 + 0x90) + 0x14),
                             "Error in terrain layer \'%s\': Value out of range for terrain layer attribute \'AI priority\' (%d), allowed range: [%f %f], value: %f.\n"
                             ,lVar4,5);
        }
      }
      uVar21 = uVar21 + 1;
      lVar18 = lVar18 + 0xb0;
      lVar11 = *(long *)(*(long *)(this + 0x110) + 0x178);
    } while (uVar21 < (uint)((int)((ulong)(*(long *)(*(long *)(this + 0x110) + 0x180) - lVar11) >> 4
                                  ) * -0x45d1745d));
  }
  this_03 = (SharedData *)operator_new(0x118);
                    /* try { // try from 007296f8 to 0072970b has its CatchHandler @ 00729a18 */
  SharedData::SharedData(this_03,uVar19,1.0 / param_3,param_10);
  *(SharedData **)(this + 0x108) = this_03;
  lVar11 = *(long *)(this + 0x110);
  *(float *)(this_03 + 0xc0) = param_3;
  *(float *)(this_03 + 0xd0) = param_4;
  *(uint *)(this_03 + 0xc4) = uVar5;
  *(uint *)(this_03 + 200) = uVar5;
  *(float *)(this_03 + 0xd4) = param_9;
  *(undefined4 *)(this_03 + 0xd8) = *(undefined4 *)(lVar20 + 0x210);
  *(uint *)(this_03 + 0xdc) = param_7;
  *(uint *)(this_03 + 0xe0) = param_8;
  RawTransformGroup::updateWorldTransformation();
  lVar20 = *(long *)(this + 0x108);
  uVar25 = *(undefined8 *)(lVar11 + 0xe8);
  uVar27 = *(undefined8 *)(lVar11 + 0xe0);
  uVar26 = *(undefined8 *)(lVar11 + 0xd8);
  uVar29 = *(undefined8 *)(lVar11 + 0xd0);
  uVar28 = *(undefined8 *)(lVar11 + 200);
  uVar31 = *(undefined8 *)(lVar11 + 0xc0);
  uVar30 = *(undefined8 *)(lVar11 + 0xb8);
  *(undefined8 *)(lVar20 + 0xa0) = *(undefined8 *)(lVar11 + 0xf0);
  *(undefined8 *)(lVar20 + 0x98) = uVar25;
  *(undefined8 *)(lVar20 + 0x90) = uVar27;
  *(undefined8 *)(lVar20 + 0x88) = uVar26;
  *(undefined8 *)(lVar20 + 0x80) = uVar29;
  *(undefined8 *)(lVar20 + 0x78) = uVar28;
  *(undefined8 *)(lVar20 + 0x70) = uVar31;
  *(undefined8 *)(lVar20 + 0x68) = uVar30;
  ScenegraphPhysicsContextManager::getInstance();
  uVar25 = ScenegraphPhysicsContextManager::getContext();
  *(undefined8 *)(*(long *)(this + 0x108) + 0xa8) = uVar25;
  lVar20 = RawTransformGroup::getPhysicsObject();
  lVar11 = *(long *)(this + 0x108);
  *(undefined8 *)(lVar11 + 0xb0) = *(undefined8 *)(lVar20 + 0x30);
  *(uint *)(lVar11 + 0xe4) = uVar8;
  *(uint *)(lVar11 + 0xe8) = param_6;
  *(uint *)(lVar11 + 0xec) = local_bc;
  FUN_00f276d0(1,lVar11 + 8);
  if (uVar19 != 0) {
    uVar8 = 0;
    do {
      uVar14 = 0;
      do {
        VehicleNavigationMap::setCellCost
                  ((VehicleNavigationMap *)(*(long *)(this + 0x108) + 0x10),1.0,(ushort)uVar8,
                   (ushort)uVar14);
        uVar14 = uVar14 + 1;
      } while (uVar19 != uVar14);
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar19);
  }
  lVar20 = *(long *)(this + 0x108);
  iVar15 = (int)((float)(ulong)uVar5 / (param_3 * 64.0));
  *(int *)(lVar20 + 0xcc) = iVar15;
  pvVar12 = operator_new__((ulong)(uint)(iVar15 * iVar15));
  *(void **)(lVar20 + 0xb8) = pvVar12;
  memset(pvVar12,0,(ulong)(uint)(iVar15 * iVar15));
  this[0x148] = (VehicleNavigationMapGenerator)0x1;
  VehicleNavigationPlanner::pausePlanning();
  lVar20 = 0;
  do {
    puVar13 = (undefined8 *)operator_new(0x48);
    *(undefined4 *)(puVar13 + 2) = 0;
    *puVar13 = &PTR__PhysicsTask_00fda6a8;
    puVar13[1] = &PTR__PhysicsTask_00fda6d8;
                    /* try { // try from 00729860 to 00729873 has its CatchHandler @ 00729a34 */
    pvVar12 = operator_new__(0x4204);
    puVar13[4] = pvVar12;
    pvVar12 = operator_new__(0x4000);
    puVar13[5] = pvVar12;
    *(undefined4 *)((long)puVar13 + 0x3c) = 0;
    *(undefined4 *)(puVar13 + 8) = 0;
    *(undefined *)((long)puVar13 + 0x39) = 1;
    *(undefined8 **)(this + lVar20 + 0x68) = puVar13;
    FUN_00f276d0(1,puVar13 + 2);
    lVar20 = lVar20 + 8;
    puVar13[3] = *(undefined8 *)(this + 0x108);
  } while (lVar20 != 0x50);
  lVar20 = 0;
  do {
    puVar13 = (undefined8 *)operator_new(0x48);
    *(undefined4 *)(puVar13 + 2) = 0;
    *puVar13 = &PTR__PhysicsTask_00fda6a8;
    puVar13[1] = &PTR__PhysicsTask_00fda6d8;
                    /* try { // try from 007298cc to 007298df has its CatchHandler @ 00729a30 */
    pvVar12 = operator_new__(0x4204);
    puVar13[4] = pvVar12;
    pvVar12 = operator_new__(0x4000);
    puVar13[5] = pvVar12;
    *(undefined4 *)((long)puVar13 + 0x3c) = 0;
    *(undefined4 *)(puVar13 + 8) = 0;
    *(undefined *)((long)puVar13 + 0x39) = 1;
    *(undefined8 **)(this + lVar20 + 0xb8) = puVar13;
    FUN_00f276d0(1,puVar13 + 2);
    lVar20 = lVar20 + 8;
    puVar13[3] = *(undefined8 *)(this + 0x108);
  } while (lVar20 != 0x50);
  *(undefined4 *)(this + 0x118) = 0;
  this_04 = (UpdateManager *)UpdateManager::getInstance();
  UpdateManager::addUpdateable(this_04,(Updateable *)(this + 0x20),false);
  return 1;
}


