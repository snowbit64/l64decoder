// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updatePath
// Entry Point: 00743cac
// Size: 580 bytes
// Signature: undefined __thiscall updatePath(VehicleNavigationPlanner * this, VehicleNavigationAgent * param_1)


/* WARNING: Removing unreachable block (ram,0x00743e6c) */
/* WARNING: Removing unreachable block (ram,0x00743dc8) */
/* WARNING: Removing unreachable block (ram,0x00743dd4) */
/* WARNING: Removing unreachable block (ram,0x00743de0) */
/* WARNING: Removing unreachable block (ram,0x00743dec) */
/* WARNING: Removing unreachable block (ram,0x00743dc0) */
/* WARNING: Removing unreachable block (ram,0x00743e74) */
/* WARNING: Removing unreachable block (ram,0x00743e80) */
/* WARNING: Removing unreachable block (ram,0x00743e8c) */
/* WARNING: Removing unreachable block (ram,0x00743e98) */
/* VehicleNavigationPlanner::updatePath(VehicleNavigationAgent&) */

void __thiscall
VehicleNavigationPlanner::updatePath(VehicleNavigationPlanner *this,VehicleNavigationAgent *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined4 extraout_s0;
  undefined4 uVar17;
  
  lVar15 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(this + 0x98);
  uVar8 = *(long *)(param_1 + 0x18) - lVar15;
  uVar13 = uVar8 >> 3 & 0xffffffff;
  uVar10 = *(long *)(this + 0xa0) - lVar6 >> 4;
  if (uVar13 < uVar10 || uVar13 - uVar10 == 0) {
    if (uVar13 < uVar10) {
      *(ulong *)(this + 0xa0) = lVar6 + uVar13 * 0x10;
    }
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::pair<Candidate,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<Candidate,unsigned_int*>>>
    ::__append((vector<std::__ndk1::pair<Candidate,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<Candidate,unsigned_int*>>>
                *)(this + 0x98),uVar13 - uVar10);
    lVar15 = *(long *)(param_1 + 0x10);
  }
  uVar5 = VehicleNavigationAgent::getGridWidth();
  if ((int)(uVar8 >> 3) != 0) {
    lVar6 = 0;
    puVar11 = (uint *)(lVar15 + 2);
    do {
      uVar3 = *puVar11;
      uVar4 = *(ushort *)(puVar11 + 1);
      lVar15 = *(long *)(this + 0xb0);
      puVar1 = (undefined8 *)((long)puVar11 + -2);
      puVar2 = (undefined8 *)(*(long *)(this + 0x98) + lVar6);
      puVar11 = puVar11 + 2;
      lVar6 = lVar6 + 0x10;
      *puVar2 = *puVar1;
      puVar2[1] = lVar15 + (ulong)((uint)uVar4 +
                                  ((uVar3 >> 0x10) * (uVar5 & 0xffff) + (uVar3 & 0xffff)) * 8) * 4;
    } while (uVar13 * 0x10 - lVar6 != 0);
  }
  puVar16 = *(undefined4 **)(param_1 + 0x12e0);
  uVar17 = extraout_s0;
  for (puVar14 = *(undefined4 **)(param_1 + 0x12d8); puVar14 != puVar16; puVar14 = puVar14 + 7) {
    lVar15 = *(long *)(param_1 + 0x12f0);
    lVar6 = *(long *)(param_1 + 0x12f8);
    if (lVar15 == lVar6) {
      if (lVar15 == lVar6) goto LAB_00743d6c;
    }
    else {
      uVar17 = *puVar14;
      do {
        lVar15 = lVar15 + 0x1c;
      } while (lVar15 != lVar6);
LAB_00743d6c:
      uVar17 = FUN_0074727c(uVar17,param_1,this,param_1,puVar14);
    }
  }
  puVar14 = *(undefined4 **)(param_1 + 0x12f0);
  puVar16 = *(undefined4 **)(param_1 + 0x12f8);
  if (puVar14 != puVar16) {
    do {
      lVar15 = *(long *)(param_1 + 0x12d8);
      lVar6 = *(long *)(param_1 + 0x12e0);
      if (lVar15 == lVar6) {
        if (lVar15 == lVar6) goto LAB_00743e18;
      }
      else {
        uVar17 = *puVar14;
        do {
          lVar15 = lVar15 + 0x1c;
        } while (lVar15 != lVar6);
LAB_00743e18:
        uVar17 = FUN_0074727c(uVar17,param_1,this,param_1,puVar14);
      }
      puVar14 = puVar14 + 7;
    } while (puVar14 != puVar16);
    puVar14 = *(undefined4 **)(param_1 + 0x12f0);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x12d8);
  *(undefined4 **)(param_1 + 0x12d8) = puVar14;
  uVar9 = *(undefined8 *)(param_1 + 0x12e0);
  *(undefined4 **)(param_1 + 0x12e0) = puVar14;
  uVar12 = *(undefined8 *)(param_1 + 0x1300);
  *(undefined8 *)(param_1 + 0x12f0) = uVar7;
  *(undefined8 *)(param_1 + 0x12f8) = uVar9;
  *(undefined8 *)(param_1 + 0x1300) = *(undefined8 *)(param_1 + 0x12e8);
  *(undefined8 *)(param_1 + 0x12e8) = uVar12;
  return;
}


