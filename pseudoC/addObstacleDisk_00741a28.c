// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addObstacleDisk
// Entry Point: 00741a28
// Size: 504 bytes
// Signature: undefined __thiscall addObstacleDisk(VehicleNavigationGridAdapter * this, Vector2 * param_1, float param_2)


/* VehicleNavigationGridAdapter::addObstacleDisk(Vector2 const&, float) */

void __thiscall
VehicleNavigationGridAdapter::addObstacleDisk
          (VehicleNavigationGridAdapter *this,Vector2 *param_1,float param_2)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar14 = (float)NEON_fmadd(*(undefined4 *)(this + 0xc),*(undefined4 *)(this + 0xc),
                             *(float *)(this + 0x10) * *(float *)(this + 0x10));
  fVar14 = SQRT(fVar14) + param_2;
  fVar17 = *(float *)(this + 0x28);
  fVar19 = fVar17 * (*(float *)(this + 0x34) + *(float *)(param_1 + 4));
  fVar15 = fVar17 * fVar14;
  uVar11 = (uint)(fVar19 - fVar15);
  uVar10 = (uint)(fVar15 + fVar19);
  if (uVar11 <= uVar10) {
    fVar17 = (*(float *)param_1 + *(float *)(this + 0x34)) * fVar17;
    uVar12 = (uint)(fVar17 - fVar15);
    uVar13 = (uint)(fVar17 + fVar15);
    do {
      if (uVar12 <= uVar13) {
        uVar1 = uVar12;
        do {
          fVar16 = *(float *)(this + 0x30);
          fVar19 = (float)NEON_fnmsub((float)(ulong)(uVar1 & 0xffff),fVar16,
                                      *(undefined4 *)(this + 0x34));
          fVar15 = *(float *)param_1;
          fVar17 = fVar19;
          if ((fVar19 <= fVar15) && (fVar17 = fVar16 + fVar19, fVar15 <= fVar16 + fVar19)) {
            fVar17 = fVar15;
          }
          fVar20 = (float)NEON_fnmsub((float)(ulong)(uVar11 & 0xffff),fVar16,
                                      *(undefined4 *)(this + 0x34));
          fVar18 = *(float *)(param_1 + 4);
          fVar19 = fVar20;
          if ((fVar20 <= fVar18) && (fVar19 = fVar16 + fVar20, fVar18 <= fVar16 + fVar20)) {
            fVar19 = fVar18;
          }
          fVar17 = (float)NEON_fmadd(fVar19 - fVar18,fVar19 - fVar18,
                                     (fVar17 - fVar15) * (fVar17 - fVar15));
          if (fVar17 <= fVar14 * fVar14) {
            uVar6 = *(ulong *)(this + 0x60);
            lVar7 = *(long *)(this + 0x40);
            uVar3 = (ulong)(uVar1 + uVar11 * *(ushort *)(this + 10));
            uVar4 = uVar6 & uVar3;
            puVar5 = (ulong *)(lVar7 + uVar4 * 8);
            uVar9 = *(uint *)((long)puVar5 + 4);
            if (uVar9 == 0xffffffff) {
              uVar4 = 0;
            }
            else {
              uVar8 = 0;
              do {
                if (uVar9 < uVar8) {
                  uVar6 = uVar3 | (ulong)uVar8 << 0x20;
                  uVar3 = (ulong)*(uint *)puVar5;
                  uVar8 = *(uint *)((long)puVar5 + 4);
                  *puVar5 = uVar6;
                  uVar6 = *(ulong *)(this + 0x60);
                  lVar7 = *(long *)(this + 0x40);
                }
                uVar8 = uVar8 + 1;
                uVar4 = uVar6 & uVar4 + 1;
                puVar5 = (ulong *)(lVar7 + uVar4 * 8);
                uVar9 = *(uint *)((long)puVar5 + 4);
              } while (uVar9 != 0xffffffff);
              uVar4 = (ulong)uVar8 << 0x20;
            }
            *puVar5 = uVar4 | uVar3;
            uVar4 = (*(long *)(this + 0x58) + 1) * 2;
            uVar3 = *(long *)(this + 0x48) - *(long *)(this + 0x40) >> 3;
            *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
            if (uVar3 <= uVar4 && uVar4 - uVar3 != 0) {
              HashTable<unsigned_int,Hash<unsigned_int>>::rehash();
            }
          }
          bVar2 = uVar1 != uVar13;
          uVar1 = uVar1 + 1;
        } while (bVar2);
      }
      bVar2 = uVar11 != uVar10;
      uVar11 = uVar11 + 1;
    } while (bVar2);
  }
  return;
}


