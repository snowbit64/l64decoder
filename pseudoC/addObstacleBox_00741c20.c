// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addObstacleBox
// Entry Point: 00741c20
// Size: 584 bytes
// Signature: undefined __thiscall addObstacleBox(VehicleNavigationGridAdapter * this, OrientedBox * param_1)


/* VehicleNavigationGridAdapter::addObstacleBox(OrientedBox const&) */

void __thiscall
VehicleNavigationGridAdapter::addObstacleBox
          (VehicleNavigationGridAdapter *this,OrientedBox *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  float local_88;
  float fStack_84;
  undefined4 local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  fVar13 = *(float *)param_1 + *(float *)(this + 0x34);
  fVar15 = fVar13 * *(float *)(this + 0x28);
  fVar16 = *(float *)(this + 0x28) * (*(float *)(this + 0x34) + *(float *)(param_1 + 4));
  fVar11 = (float)OrientedBox::computeWorldExtent();
  fVar12 = *(float *)(this + 0x28) * (*(float *)(this + 0x20) + fVar11);
  fVar13 = *(float *)(this + 0x28) * (*(float *)(this + 0x20) + fVar13);
  fVar14 = (float)(*(ushort *)(this + 10) - 1);
  fVar11 = fVar15 - fVar12;
  fVar15 = fVar15 + fVar12;
  fVar12 = fVar16 - fVar13;
  if (fVar11 < 0.0) {
    fVar11 = 0.0;
  }
  fVar16 = fVar16 + fVar13;
  if (fVar14 < fVar15) {
    fVar15 = fVar14;
  }
  if (fVar12 < 0.0) {
    fVar12 = 0.0;
  }
  if (fVar14 < fVar16) {
    fVar16 = fVar14;
  }
  uVar4 = (uint)fVar12;
  if (uVar4 <= (uint)(int)fVar16) {
    do {
      uVar4 = uVar4 & 0xffff;
      if ((uint)(int)fVar11 <= (uint)(int)fVar15) {
        uVar1 = (int)fVar11;
        do {
          fVar12 = *(float *)(this + 0x30);
          local_90 = 0x3f80000000000000;
          local_80 = 0;
          local_88 = fVar12 * 0.5;
          local_98 = NEON_fnmsub((float)(ulong)(uVar1 & 0xffff) + 0.5,fVar12,
                                 *(undefined4 *)(this + 0x34));
          uStack_94 = NEON_fnmsub((float)(ulong)uVar4 + 0.5,fVar12,*(undefined4 *)(this + 0x34));
          fStack_84 = local_88;
          uVar3 = OrientedBox::overlaps((OrientedBox *)&local_98,param_1,*(float *)(this + 0x20));
          if ((uVar3 & 1) != 0) {
            uVar7 = *(ulong *)(this + 0x60);
            lVar8 = *(long *)(this + 0x40);
            uVar3 = (ulong)(*(ushort *)(this + 10) * uVar4 + (uVar1 & 0xffff));
            uVar5 = uVar7 & uVar3;
            puVar6 = (ulong *)(lVar8 + uVar5 * 8);
            uVar10 = *(uint *)((long)puVar6 + 4);
            if (uVar10 == 0xffffffff) {
              uVar5 = 0;
            }
            else {
              uVar9 = 0;
              do {
                if (uVar10 < uVar9) {
                  uVar7 = uVar3 | (ulong)uVar9 << 0x20;
                  uVar3 = (ulong)*(uint *)puVar6;
                  uVar9 = *(uint *)((long)puVar6 + 4);
                  *puVar6 = uVar7;
                  uVar7 = *(ulong *)(this + 0x60);
                  lVar8 = *(long *)(this + 0x40);
                }
                uVar9 = uVar9 + 1;
                uVar5 = uVar7 & uVar5 + 1;
                puVar6 = (ulong *)(lVar8 + uVar5 * 8);
                uVar10 = *(uint *)((long)puVar6 + 4);
              } while (uVar10 != 0xffffffff);
              uVar5 = (ulong)uVar9 << 0x20;
            }
            *puVar6 = uVar5 | uVar3;
            uVar5 = (*(long *)(this + 0x58) + 1) * 2;
            uVar3 = *(long *)(this + 0x48) - *(long *)(this + 0x40) >> 3;
            *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
            if (uVar3 <= uVar5 && uVar5 - uVar3 != 0) {
              HashTable<unsigned_int,Hash<unsigned_int>>::rehash();
            }
          }
          uVar1 = uVar1 + 1;
        } while ((uVar1 & 0xffff) <= (uint)(int)fVar15);
      }
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffff) <= (uint)(int)fVar16);
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


