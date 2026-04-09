// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCurrentTerrain
// Entry Point: 008f6c74
// Size: 608 bytes
// Signature: undefined __thiscall setCurrentTerrain(TerrainPatchOccluderManager * this, GeoMipMappingTerrain * param_1)


/* TerrainPatchOccluderManager::setCurrentTerrain(GeoMipMappingTerrain&) */

void __thiscall
TerrainPatchOccluderManager::setCurrentTerrain
          (TerrainPatchOccluderManager *this,GeoMipMappingTerrain *param_1)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  Decimator *this_00;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  undefined2 uVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  if (*(long *)(this + 0x68) != 0) {
    clear();
  }
  *(GeoMipMappingTerrain **)(this + 0x68) = param_1;
  Mutex::enterCriticalSection();
  lVar5 = *(long *)(this + 0x68);
  uVar15 = *(undefined8 *)(lVar5 + 0x274);
  *(undefined8 *)(this + 0xa0) = *(undefined8 *)(lVar5 + 0x27c);
  *(undefined8 *)(this + 0x98) = uVar15;
  uVar15 = *(undefined8 *)(lVar5 + 0x284);
  uVar21 = *(undefined8 *)(lVar5 + 0x29c);
  uVar20 = *(undefined8 *)(lVar5 + 0x294);
  uVar19 = *(undefined8 *)(lVar5 + 0x2ac);
  uVar18 = *(undefined8 *)(lVar5 + 0x2a4);
  uVar17 = *(undefined8 *)(lVar5 + 700);
  uVar16 = *(undefined8 *)(lVar5 + 0x2b4);
  *(undefined8 *)(this + 0xb0) = *(undefined8 *)(lVar5 + 0x28c);
  *(undefined8 *)(this + 0xa8) = uVar15;
  *(undefined8 *)(this + 0xc0) = uVar21;
  *(undefined8 *)(this + 0xb8) = uVar20;
  *(undefined8 *)(this + 0xd0) = uVar19;
  *(undefined8 *)(this + 200) = uVar18;
  *(undefined8 *)(this + 0xe0) = uVar17;
  *(undefined8 *)(this + 0xd8) = uVar16;
                    /* try { // try from 008f6ce0 to 008f6ce7 has its CatchHandler @ 008f6ee8 */
  Mutex::leaveCriticalSection();
  uVar3 = BaseTerrain::getHeightMapSize();
  *(undefined4 *)(this + 0xf0) = uVar3;
  fVar14 = (float)BaseTerrain::getUnitsPerPixel();
  uVar4 = *(uint *)(param_1 + 0x270);
  uVar11 = *(uint *)(param_1 + 0x19c);
  *(float *)(this + 0xf4) = fVar14;
  uVar15 = NEON_cnt((ulong)uVar4,1);
  uVar13 = NEON_uaddlv(uVar15,1);
  if ((int)CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar13) == 1) {
    bVar2 = (uVar4 & 0xffff0000) != 0;
    uVar7 = uVar4 >> 0x10;
    if (!bVar2) {
      uVar7 = uVar4;
    }
    uVar9 = (uint)bVar2;
    uVar6 = uVar9 << 4 | 8;
    uVar12 = uVar7 >> 8;
    if (uVar7 < 0x100) {
      uVar6 = uVar9 << 4;
      uVar12 = uVar7;
    }
    uVar7 = uVar6 | 4;
    uVar9 = uVar12 >> 4;
    if (uVar12 < 0x10) {
      uVar7 = uVar6;
      uVar9 = uVar12;
    }
    uVar6 = uVar7 | 2;
    uVar12 = uVar9 >> 2;
    if (uVar9 < 4) {
      uVar6 = uVar7;
      uVar12 = uVar9;
    }
    uVar7 = (uVar12 + uVar6) - 1;
  }
  else {
    uVar7 = 0;
  }
  uVar6 = *(uint *)(param_1 + 0x198);
  uVar11 = uVar11 >> (ulong)(uVar7 & 0x1f);
  *(uint *)(this + 0x100) = uVar7;
  *(uint *)(this + 0xf8) = uVar11;
  *(uint *)(this + 0x104) = (uVar4 << (ulong)(uVar6 & 0x1f)) + 1;
  this_00 = (Decimator *)operator_new(0x28);
                    /* try { // try from 008f6dc4 to 008f6ddf has its CatchHandler @ 008f6ed4 */
  Decimator::Decimator
            (this_00,*(ushort **)(param_1 + 0x80),*(int *)(this + 0xf0),*(int *)(this + 0xf0),uVar11
             ,uVar11,*(int *)(param_1 + 0x268) + 1,fVar14,*(float *)(param_1 + 0xa4),0.0,false);
  *(Decimator **)(this + 0xe8) = this_00;
  uVar4 = *(uint *)(this + 0xf8);
  lVar5 = *(long *)(this + 0x120) - *(long *)(this + 0x118) >> 7;
  uVar8 = (ulong)(uVar4 * uVar4);
  uVar10 = lVar5 * 0x6db6db6db6db6db7;
  if (uVar8 <= uVar10) {
    if (uVar8 <= uVar10 && uVar10 - uVar8 != 0) {
      *(ulong *)(this + 0x120) = *(long *)(this + 0x118) + uVar8 * 0x380;
    }
  }
  else {
    std::__ndk1::
    vector<TerrainPatchOccluderManager::PatchData,std::__ndk1::allocator<TerrainPatchOccluderManager::PatchData>>
    ::__append((vector<TerrainPatchOccluderManager::PatchData,std::__ndk1::allocator<TerrainPatchOccluderManager::PatchData>>
                *)(this + 0x118),uVar8 + lVar5 * -0x6db6db6db6db6db7);
    uVar4 = *(uint *)(this + 0xf8);
  }
  if (uVar4 != 0) {
    uVar11 = 0;
    do {
      uVar7 = 0;
      uVar6 = *(uint *)(this + 0x100);
      do {
        lVar5 = *(long *)(this + 0x118);
        uVar12 = 0;
        do {
          uVar9 = 1;
          do {
            GeoMipMappingTerrain::setOccluderData
                      (param_1,(uVar7 << (ulong)(uVar6 & 0x1f)) + uVar12,
                       (uVar9 + (uVar11 << (ulong)(uVar6 & 0x1f))) - 1,
                       (void *)(lVar5 + (ulong)(uVar7 + uVar4 * uVar11) * 0x380));
            uVar6 = *(uint *)(this + 0x100);
            uVar1 = uVar9 >> (ulong)(uVar6 & 0x1f);
            uVar9 = uVar9 + 1;
          } while (uVar1 == 0);
          uVar12 = uVar12 + 1;
        } while (uVar12 >> (ulong)(uVar6 & 0x1f) == 0);
        uVar4 = *(uint *)(this + 0xf8);
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar4);
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar4);
  }
  return;
}


