// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addTerrain
// Entry Point: 00872eb4
// Size: 1616 bytes
// Signature: undefined __cdecl addTerrain(Matrix4x4 * param_1, GeoMipMappingTerrain * param_2, char * param_3, uint param_4, float param_5, vector * param_6, vector * param_7)


/* NavigationMeshGeneratorUtil::addTerrain(Matrix4x4 const&, GeoMipMappingTerrain*, char const*,
   unsigned int, float, std::__ndk1::vector<float, std::__ndk1::allocator<float> >&,
   std::__ndk1::vector<unsigned int, std::__ndk1::allocator<unsigned int> >&) */

void NavigationMeshGeneratorUtil::addTerrain
               (Matrix4x4 *param_1,GeoMipMappingTerrain *param_2,char *param_3,uint param_4,
               float param_5,vector *param_6,vector *param_7)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  void *pvVar12;
  uint *puVar13;
  void *__src;
  void *__s;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  long lVar17;
  uint uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  DensityMapModifier *this;
  uint uVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  undefined8 uVar33;
  undefined4 uVar34;
  float fVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined4 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  ulong local_100;
  long local_f8;
  DensityMapModifier aDStack_d0 [48];
  long local_a0;
  
  lVar4 = tpidr_el0;
  local_a0 = *(long *)(lVar4 + 0x28);
  fVar28 = (float)BaseTerrain::getTerrainHalfSize();
  fVar29 = (float)BaseTerrain::getUnitsPerPixel();
  DensityMapModifier::DensityMapModifier(aDStack_d0);
  if (param_5 <= 0.5) {
    if (param_5 <= 0.25) {
      if (param_5 <= 0.125) {
        if (param_5 <= 0.06125) {
          uVar14 = 0x10;
        }
        else {
          uVar14 = 8;
        }
      }
      else {
        uVar14 = 4;
      }
    }
    else {
      uVar14 = 2;
    }
  }
  else {
    uVar14 = 1;
  }
                    /* try { // try from 00872f8c to 00872f93 has its CatchHandler @ 00873530 */
  uVar8 = BaseTerrain::getHeightMapSize();
  fVar41 = 1.0;
  uVar26 = (uint)(((float)(uVar8 & 0xffffffff) + -0.5) / (float)(ulong)uVar14);
  uVar8 = (ulong)uVar26;
  if (param_3 == (char *)0x0) {
LAB_00873050:
    this = (DensityMapModifier *)0x0;
    fVar42 = 1.0;
  }
  else {
                    /* try { // try from 00872fb8 to 0087304f has its CatchHandler @ 00873534 */
    lVar9 = BaseTerrain::findInfoLayer((BaseTerrain *)param_2,param_3);
    if ((lVar9 == 0) || (*(long *)(lVar9 + 0x38) == 0)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0))
      {
                    /* try { // try from 008734c8 to 008734d3 has its CatchHandler @ 00873504 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "Warning: Navigation mesh cull info layer \'%s\' not found.\n",param_3);
      goto LAB_00873050;
    }
    DensityMapModifier::init(aDStack_d0,*(DensityMap **)(*(long *)(lVar9 + 0x38) + 0x20));
    uVar10 = (**(code **)(**(long **)(*(long *)(lVar9 + 0x38) + 0x20) + 0x48))();
    uVar11 = (**(code **)(**(long **)(*(long *)(lVar9 + 0x38) + 0x20) + 0x50))();
    this = aDStack_d0;
    fVar42 = (float)(uVar10 & 0xffffffff) / (float)uVar8;
    fVar41 = (float)(uVar11 & 0xffffffff) / (float)uVar8;
  }
  uVar10 = (ulong)(uVar26 * uVar26 * 3) << 2;
                    /* try { // try from 00873064 to 0087306b has its CatchHandler @ 0087352c */
  pvVar12 = operator_new__(uVar10);
  uVar3 = uVar26 - 1;
                    /* try { // try from 00873088 to 0087308b has its CatchHandler @ 00873528 */
  puVar13 = (uint *)operator_new__((ulong)(uVar3 * uVar3 * 6) << 2);
  if (uVar26 == 0) {
    uVar24 = 0;
  }
  else {
    uVar24 = 0;
    uVar15 = 0;
    uVar22 = 2;
    local_f8 = 0;
    local_100 = uVar8;
    do {
      uVar27 = 0;
      uVar11 = 0;
      fVar43 = fVar29 * ((float)(ulong)(uVar15 * uVar14) - fVar28);
      uVar23 = uVar22;
      do {
                    /* try { // try from 00873140 to 0087314f has its CatchHandler @ 0087353c */
        fVar30 = (float)BaseTerrain::getScaledHeightAtPoint
                                  ((BaseTerrain *)param_2,uVar27,uVar15 * uVar14);
        fVar32 = fVar29 * ((float)(ulong)uVar27 - fVar28);
        uVar34 = NEON_fmadd(fVar32,*(undefined4 *)param_1,fVar30 * *(float *)(param_1 + 0x10));
        uVar38 = NEON_fmadd(fVar32,*(undefined4 *)(param_1 + 4),fVar30 * *(float *)(param_1 + 0x14))
        ;
        uVar31 = NEON_fmadd(fVar32,*(undefined4 *)(param_1 + 8),fVar30 * *(float *)(param_1 + 0x18))
        ;
        fVar30 = (float)NEON_fmadd(fVar43,*(undefined4 *)(param_1 + 0x28),uVar31);
        fVar35 = (float)NEON_fmadd(fVar43,*(undefined4 *)(param_1 + 0x20),uVar34);
        fVar32 = (float)NEON_fmadd(fVar43,*(undefined4 *)(param_1 + 0x24),uVar38);
        fVar39 = *(float *)(param_1 + 0x30);
        fVar40 = *(float *)(param_1 + 0x34);
        *(float *)((long)pvVar12 + (ulong)uVar23 * 4) = *(float *)(param_1 + 0x38) + fVar30;
        *(float *)((long)pvVar12 + (ulong)(uVar23 - 2) * 4) = fVar39 + fVar35;
        *(float *)((long)pvVar12 + (ulong)(uVar23 - 1) * 4) = fVar40 + fVar32;
                    /* try { // try from 008731d0 to 008731db has its CatchHandler @ 00873538 */
        if ((((this == (DensityMapModifier *)0x0) ||
             (uVar6 = DensityMapModifier::readValue
                                (this,(int)(fVar42 * (float)(uVar11 & 0xffffffff)),
                                 (int)(fVar41 * (float)(ulong)uVar15)), (uVar6 & param_4) != 0)) &&
            (uVar15 < uVar3)) && (uVar11 < uVar3)) {
          iVar7 = (int)uVar11;
          uVar6 = (int)local_100 + iVar7;
          uVar18 = (int)local_f8 + iVar7;
          puVar13[uVar24 + 1] = uVar6;
          uVar6 = uVar6 + 1;
          puVar13[uVar24] = uVar18;
          puVar13[uVar24 + 2] = uVar6;
          uVar2 = uVar24 + 4;
          puVar13[uVar24 + 3] = uVar18;
          uVar18 = uVar24 + 5;
          uVar24 = uVar24 + 6;
          puVar13[uVar2] = uVar6;
          puVar13[uVar18] = (int)local_f8 + iVar7 + 1;
        }
        uVar11 = uVar11 + 1;
        uVar23 = uVar23 + 3;
        uVar27 = uVar27 + uVar14;
      } while (uVar8 != uVar11);
      uVar22 = uVar22 + uVar26 * 3;
      uVar15 = uVar15 + 1;
      local_f8 = local_f8 + uVar8;
      local_100 = local_100 + uVar8;
    } while (uVar15 != uVar26);
  }
                    /* try { // try from 00873250 to 00873257 has its CatchHandler @ 00873524 */
  __src = operator_new__(uVar10);
  uVar8 = (ulong)(uVar26 * uVar26) << 2;
                    /* try { // try from 00873264 to 0087326b has its CatchHandler @ 00873520 */
  __s = operator_new__(uVar8);
  memset(__s,0xff,uVar8);
  uVar14 = 0;
  if (uVar24 != 0) {
    uVar8 = (ulong)uVar24;
    puVar16 = puVar13;
    do {
      uVar26 = *puVar16;
      uVar3 = *(uint *)((long)__s + (ulong)uVar26 * 4);
      if (uVar3 == 0xffffffff) {
        uVar3 = uVar26 * 3;
        uVar15 = uVar14 * 3;
        *puVar16 = uVar14;
        *(uint *)((long)__s + (ulong)uVar26 * 4) = uVar14;
        uVar14 = uVar14 + 1;
        uVar34 = *(undefined4 *)((long)pvVar12 + (ulong)(uVar3 + 1) * 4);
        *(undefined4 *)((long)__src + (ulong)uVar15 * 4) =
             *(undefined4 *)((long)pvVar12 + (ulong)uVar3 * 4);
        uVar31 = *(undefined4 *)((long)pvVar12 + (ulong)(uVar3 + 2) * 4);
        *(undefined4 *)((long)__src + (ulong)(uVar15 + 1) * 4) = uVar34;
        *(undefined4 *)((long)__src + (ulong)(uVar15 + 2) * 4) = uVar31;
      }
      else {
        *puVar16 = uVar3;
      }
      puVar16 = puVar16 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  operator_delete__(__s);
  operator_delete__(pvVar12);
  lVar9 = *(long *)param_6;
  uVar8 = *(long *)(param_6 + 8) - lVar9 >> 2;
  uVar10 = uVar8 & 0xffffffff;
  uVar11 = (ulong)(((int)(uVar10 / 3) + uVar14) * 3);
  if (uVar8 < uVar11) {
                    /* try { // try from 0087333c to 00873343 has its CatchHandler @ 0087351c */
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append
              ((vector<float,std::__ndk1::allocator<float>> *)param_6,uVar11 - uVar8);
    lVar9 = *(long *)param_6;
  }
  else if (uVar11 < uVar8) {
    *(ulong *)(param_6 + 8) = lVar9 + uVar11 * 4;
  }
  iVar7 = (int)(uVar10 / 3);
  memcpy((void *)(lVar9 + (ulong)(iVar7 + ((uint)(uVar10 * 0xaaaaaaab >> 0x20) & 0xfffffffe)) * 4),
         __src,(ulong)uVar14 * 0xc);
  lVar9 = *(long *)param_7;
  uVar25 = *(long *)(param_7 + 8) - lVar9;
  uVar8 = (long)uVar25 >> 2;
  uVar11 = (ulong)(uVar24 + (int)uVar8);
  if (uVar8 < uVar11) {
                    /* try { // try from 0087338c to 00873393 has its CatchHandler @ 00873518 */
    std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::__append
              ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)param_7,uVar11 - uVar8);
    lVar9 = *(long *)param_7;
  }
  else if (uVar11 < uVar8) {
    *(ulong *)(param_7 + 8) = lVar9 + uVar11 * 4;
  }
  if (uVar24 == 0) goto LAB_008733e0;
  uVar11 = (ulong)uVar24;
  iVar21 = (int)(uVar10 / 3);
  if (uVar24 < 8) {
LAB_008733b8:
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    uVar25 = uVar25 >> 2;
    if ((!CARRY4((uint)uVar25,(uint)(uVar11 - 1))) && (uVar11 - 1 >> 0x20 == 0)) {
      if ((puVar13 < (uint *)(lVar9 + (uVar11 + (uVar25 & 0xffffffff)) * 4)) &&
         ((uint *)(lVar9 + (uVar25 & 0xffffffff) * 4) < puVar13 + uVar11)) goto LAB_008733b8;
      uVar10 = uVar11 & 0xfffffff8;
      puVar19 = (undefined8 *)(puVar13 + 4);
      uVar20 = uVar10;
      uVar25 = uVar8;
      do {
        puVar5 = puVar19 + -1;
        uVar33 = puVar19[-2];
        uVar37 = puVar19[1];
        uVar36 = *puVar19;
        puVar1 = (undefined8 *)(lVar9 + (uVar25 & 0xffffffff) * 4);
        puVar19 = puVar19 + 4;
        uVar25 = uVar25 + 8;
        uVar20 = uVar20 - 8;
        puVar1[1] = CONCAT44((int)((ulong)*puVar5 >> 0x20) + iVar21,(int)*puVar5 + iVar7);
        *puVar1 = CONCAT44((int)((ulong)uVar33 >> 0x20) + iVar7,(int)uVar33 + iVar7);
        puVar1[3] = CONCAT44((int)((ulong)uVar37 >> 0x20) + iVar21,(int)uVar37 + iVar7);
        puVar1[2] = CONCAT44((int)((ulong)uVar36 >> 0x20) + iVar7,(int)uVar36 + iVar7);
      } while (uVar20 != 0);
      if (uVar10 == uVar11) goto LAB_008733e0;
    }
  }
  uVar8 = uVar10 + uVar8;
  lVar17 = uVar11 - uVar10;
  puVar16 = puVar13 + uVar10;
  do {
    lVar17 = lVar17 + -1;
    *(uint *)(lVar9 + (uVar8 & 0xffffffff) * 4) = *puVar16 + iVar21;
    uVar8 = uVar8 + 1;
    puVar16 = puVar16 + 1;
  } while (lVar17 != 0);
LAB_008733e0:
  operator_delete__(puVar13);
  operator_delete__(__src);
  DensityMapModifier::~DensityMapModifier(aDStack_d0);
  if (*(long *)(lVar4 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


