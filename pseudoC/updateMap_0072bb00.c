// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateMap
// Entry Point: 0072bb00
// Size: 644 bytes
// Signature: undefined __thiscall updateMap(VehicleNavigationMapGenerator * this, float param_1, float param_2, float param_3, float param_4)


/* VehicleNavigationMapGenerator::updateMap(float, float, float, float) */

void __thiscall
VehicleNavigationMapGenerator::updateMap
          (VehicleNavigationMapGenerator *this,float param_1,float param_2,float param_3,
          float param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  ulong uVar19;
  
  fVar18 = *(float *)(*(long *)(this + 0x108) + 0xc0) * 64.0;
  uVar16 = NEON_ucvtf(*(undefined8 *)(*(long *)(this + 0x108) + 0xc4),4);
  fVar15 = (float)uVar16;
  fVar17 = (float)((ulong)uVar16 >> 0x20);
  uVar16 = CONCAT44((int)(float)(int)((param_3 + fVar17 * 0.5) / fVar18),
                    (int)(float)(int)((param_1 + fVar15 * 0.5) / fVar18));
  uVar19 = NEON_cmge(uVar16,CONCAT44((int)(float)(int)(fVar17 / fVar18),
                                     (int)(float)(int)(fVar15 / fVar18)),4);
  if ((uVar19 & 1) == 0) {
    iVar9 = (int)(float)(int)((param_2 + fVar15 * 0.5) / fVar18);
    iVar10 = (int)(float)(int)((param_4 + fVar17 * 0.5) / fVar18);
    if (((0 < iVar9) && ((uVar19 & 0x100000000) == 0)) && (0 < iVar10)) {
      iVar12 = (int)(float)(int)(fVar15 / fVar18) + -1;
      iVar13 = (int)(float)(int)(fVar17 / fVar18) + -1;
      uVar14 = NEON_smin(CONCAT44(iVar13,iVar12),uVar16,4);
      uVar19 = NEON_cmge(uVar16,0,4);
      uVar19 = uVar19 & uVar14;
      uVar16 = NEON_smin(CONCAT44(iVar10 + -1,iVar9 + -1),CONCAT44(iVar13,iVar12),4);
      uVar14 = NEON_cmhi(uVar19,uVar16,4);
      uVar11 = (uint)(uVar19 >> 0x20);
      uVar8 = (uint)((ulong)uVar16 >> 0x20);
      if ((uVar14 & 1) == 0) {
        uVar7 = (uint)uVar19;
        do {
          uVar5 = uVar11;
          uVar1 = uVar11 << 0x10;
          if ((uVar14 & 0x100000000) == 0) {
            do {
              uVar6 = (ulong)(uVar7 + *(int *)(*(long *)(this + 0x108) + 0xcc) * uVar5);
              if (*(char *)(*(long *)(*(long *)(this + 0x108) + 0xb8) + uVar6) == '\0') {
                lVar3 = *(long *)(this + 0x158);
                uVar2 = 0;
                if (*(long *)(this + 0x160) - lVar3 != 0) {
                  uVar2 = (*(long *)(this + 0x160) - lVar3) * 0x80 - 1;
                }
                uVar4 = *(long *)(this + 0x178) + *(long *)(this + 0x170);
                if (uVar2 == uVar4) {
                  std::__ndk1::
                  deque<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_short,unsigned_short>>>
                  ::__add_back_capacity();
                  lVar3 = *(long *)(this + 0x158);
                  uVar4 = *(long *)(this + 0x170) + *(long *)(this + 0x178);
                }
                *(uint *)(*(long *)(lVar3 + (uVar4 >> 7 & 0x1fffffffffffff8)) + (uVar4 & 0x3ff) * 4)
                     = uVar1 | uVar7 & 0xffff;
                lVar3 = *(long *)(*(long *)(this + 0x108) + 0xb8);
                *(long *)(this + 0x178) = *(long *)(this + 0x178) + 1;
                *(undefined *)(lVar3 + uVar6) = 1;
              }
              uVar5 = uVar5 + 1;
              uVar1 = uVar1 + 0x10000;
            } while (uVar5 <= uVar8);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 <= (uint)uVar16);
      }
      uVar5 = (uint)uVar19 << 6;
      uVar7 = (uint)uVar16 << 6 | 0x3f;
      uVar8 = uVar8 << 6 | 0x3f;
      VehicleNavigationPlanner::pausePlanning();
      VehicleNavigationPlanner::invalidateGridArea
                (*(VehicleNavigationPlanner **)(this + 0x138),uVar5,uVar7,uVar11 << 6,uVar8);
      lVar3 = *(long *)(this + 0x120);
      if (*(long *)(this + 0x128) != lVar3) {
        uVar19 = 0;
        do {
          VehicleNavigationAgentEntity::invalidateGridArea
                    (*(VehicleNavigationAgentEntity **)(lVar3 + uVar19 * 8),uVar5,uVar7,uVar11 << 6,
                     uVar8);
          lVar3 = *(long *)(this + 0x120);
          uVar19 = (ulong)((int)uVar19 + 1);
        } while (uVar19 < (ulong)(*(long *)(this + 0x128) - lVar3 >> 3));
      }
      this[0x148] = (VehicleNavigationMapGenerator)0x1;
    }
  }
  return;
}


