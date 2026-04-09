// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: generatePlacementCollisionMap
// Entry Point: 0089e150
// Size: 948 bytes
// Signature: undefined __cdecl generatePlacementCollisionMap(BitVector * param_1, TerrainTransformGroup * param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, uint param_8)


/* TerrainCollisionMapUtil::generatePlacementCollisionMap(BitVector*, TerrainTransformGroup*,
   unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */

void TerrainCollisionMapUtil::generatePlacementCollisionMap
               (BitVector *param_1,TerrainTransformGroup *param_2,uint param_3,uint param_4,
               uint param_5,uint param_6,uint param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined uVar5;
  undefined uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  Bt2ScenegraphPhysicsContext *this;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined **local_140;
  byte local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  float local_f0;
  undefined4 local_ec;
  float local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long local_a0;
  
  lVar9 = tpidr_el0;
  local_a0 = *(long *)(lVar9 + 0x28);
  if (*(uint *)(param_1 + 8) < param_4 * param_4) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar13 != 0))
    {
                    /* try { // try from 0089e4c8 to 0089e4d3 has its CatchHandler @ 0089e504 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Generating placement collision map with invalid bit vector. At least %u bits required but only %u are available.\n"
                      ,(ulong)(param_4 * param_4),(ulong)*(uint *)(param_1 + 8));
  }
  else {
    uVar3 = param_4;
    if (param_7 <= param_4) {
      uVar3 = param_7;
    }
    uVar4 = param_4;
    if (param_8 <= param_4) {
      uVar4 = param_8;
    }
    ScenegraphPhysicsContextManager::getInstance();
    this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
    fVar22 = (float)BaseTerrain::getTerrainHalfSize();
    fVar23 = (float)BaseTerrain::getUnitsPerPixel();
    iVar13 = BaseTerrain::getHeightMapSize();
    fVar24 = (float)BaseTerrain::getUnitsPerPixel();
    fVar24 = (fVar24 * (float)(ulong)(iVar13 - 1)) / (float)(ulong)param_4;
    uVar14 = BaseTerrain::getHeightMapSize();
    RawTransformGroup::updateWorldTransformation();
    uStack_d8 = *(undefined8 *)(param_2 + 0xc0);
    local_e0 = *(undefined8 *)(param_2 + 0xb8);
    uStack_c8 = *(undefined8 *)(param_2 + 0xd0);
    uStack_d0 = *(undefined8 *)(param_2 + 200);
    uStack_b8 = *(undefined8 *)(param_2 + 0xe0);
    local_c0 = *(undefined8 *)(param_2 + 0xd8);
    local_f0 = fVar24 * 1.1 * 0.5;
    uStack_a8 = *(undefined8 *)(param_2 + 0xf0);
    uStack_b0 = *(undefined8 *)(param_2 + 0xe8);
    local_ec = 0x42200000;
    local_e8 = local_f0;
    if (param_6 < uVar4) {
      iVar13 = param_6 * param_4;
      fVar30 = (float)(uVar14 & 0xffffffff) / (float)(ulong)param_4;
      do {
        if (param_5 < uVar3) {
          fVar28 = (float)NEON_fmadd((float)(ulong)param_6,fVar24,fVar23 * -fVar22);
          uVar21 = param_5;
          do {
            fVar29 = (float)NEON_fmadd((float)(ulong)uVar21,fVar24,fVar23 * -fVar22);
            fVar25 = (float)BaseTerrain::getInterpolatedHeightAtPoint
                                      ((BaseTerrain *)(param_2 + 0x170),
                                       fVar30 * (float)(ulong)uVar21,fVar30 * (float)(ulong)param_6)
            ;
            uStack_128 = uStack_d8;
            uVar10 = uStack_128;
            local_130 = local_e0;
            local_118 = uStack_c8;
            uVar11 = local_118;
            local_120 = uStack_d0;
            local_138 = 0;
            local_118._0_4_ = (float)uStack_c8;
            local_134 = 0;
            uStack_128._0_4_ = (undefined4)uStack_d8;
            uVar26 = NEON_fmadd(fVar29,(undefined4)uStack_128,fVar25 * (float)local_118);
            uStack_108 = uStack_b8;
            uVar12 = uStack_108;
            local_110 = local_c0;
            uStack_108._0_4_ = (undefined4)uStack_b8;
            fVar27 = (float)NEON_fmadd(fVar28,(undefined4)uStack_108,uVar26);
            local_f8._0_4_ = (float)uStack_a8;
            local_100 = CONCAT44((float)((ulong)uStack_d0 >> 0x20) * fVar25 +
                                 (float)((ulong)local_e0 >> 0x20) * fVar29 +
                                 (float)((ulong)local_c0 >> 0x20) * fVar28 +
                                 (float)((ulong)uStack_b0 >> 0x20),
                                 (float)uStack_d0 * fVar25 + (float)local_e0 * fVar29 +
                                 (float)local_c0 * fVar28 + (float)uStack_b0);
            local_f8 = CONCAT44((int)((ulong)uStack_a8 >> 0x20),fVar27 + (float)local_f8);
            local_140 = &PTR__IPhysicsEntityReport_00fdd2f0;
            uStack_128 = uVar10;
            local_118 = uVar11;
            uStack_108 = uVar12;
            Bt2ScenegraphPhysicsContext::overlapBoxShapes
                      (this,(Matrix4x4 *)&local_130,(Vector3 *)&local_f0,
                       (IPhysicsEntityReport *)&local_140,param_3,false,true,true,0,
                       (TransformGroup **)0x0,0);
            uVar2 = iVar13 + uVar21;
            lVar16 = *(long *)param_1;
            uVar14 = (ulong)(uVar2 >> 3) & 0xffff;
            lVar15 = *(long *)(lVar16 + (ulong)(uVar2 >> 0x13) * 8);
            uVar7 = 1 << (ulong)(uVar2 & 7);
            uVar8 = (uint)local_138 << (ulong)(uVar2 & 7);
            if ((uint)uVar14 < 0xfffd) {
              *(uint *)(lVar15 + uVar14) = *(uint *)(lVar15 + uVar14) & (uVar7 ^ 0xffffffff) | uVar8
              ;
            }
            else {
              uVar1 = (uVar2 >> 3) + 1;
              uVar2 = (uVar2 >> 3) + 2;
              lVar19 = (ulong)(uVar1 >> 0x10) * 8;
              lVar20 = (ulong)(uVar2 >> 0x10) * 8;
              uVar18 = (ulong)uVar1 & 0xffff;
              uVar17 = (ulong)uVar2 & 0xffff;
              uVar5 = *(undefined *)(*(long *)(lVar16 + lVar19) + uVar18);
              uVar6 = *(undefined *)(*(long *)(lVar16 + lVar20) + uVar17);
              *(byte *)(lVar15 + uVar14) =
                   *(byte *)(lVar15 + uVar14) & ((byte)uVar7 ^ 0xff) | (byte)uVar8;
              *(undefined *)(*(long *)(*(long *)param_1 + lVar19) + uVar18) = uVar5;
              *(undefined *)(*(long *)(*(long *)param_1 + lVar20) + uVar17) = uVar6;
            }
            uVar21 = uVar21 + 1;
          } while (uVar3 != uVar21);
        }
        param_6 = param_6 + 1;
        iVar13 = iVar13 + param_4;
      } while (param_6 != uVar4);
    }
  }
  if (*(long *)(lVar9 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


