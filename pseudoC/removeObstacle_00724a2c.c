// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeObstacle
// Entry Point: 00724a2c
// Size: 984 bytes
// Signature: undefined __thiscall removeObstacle(DynamicAvoidance * this, Obstacle * param_1)


/* DynamicAvoidance::removeObstacle(Obstacle&) */

void __thiscall DynamicAvoidance::removeObstacle(DynamicAvoidance *this,Obstacle *param_1)

{
  Obstacle **ppOVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  Obstacle **ppOVar4;
  long lVar5;
  ulong uVar6;
  Obstacle **ppOVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint local_40;
  uint local_3c;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  if (this[0x88] != (DynamicAvoidance)0x0) {
    this[0x88] = (DynamicAvoidance)0x0;
    Event::wait((Event *)(this + 0xe8),0xffffffff);
  }
  ppOVar4 = *(Obstacle ***)(this + 8);
  ppOVar7 = ppOVar4;
  for (ppOVar1 = ppOVar4;
      (ppOVar1 != *(Obstacle ***)(this + 0x10) && (ppOVar7 = ppOVar1, *ppOVar1 != param_1));
      ppOVar1 = ppOVar1 + 4) {
    ppOVar7 = *(Obstacle ***)(this + 0x10);
  }
  local_3c = (uint)((ulong)((long)ppOVar7 - (long)ppOVar4) >> 5);
  HashTable<unsigned_int,DynamicAvoidance::ObstacleHash>::remove
            ((HashTable<unsigned_int,DynamicAvoidance::ObstacleHash> *)this,&local_3c);
  puVar14 = (uint *)(this + 0x7c);
  if ((local_3c < *puVar14) && (uVar13 = *puVar14 - 1, *puVar14 = uVar13, local_3c != uVar13)) {
    HashTable<unsigned_int,DynamicAvoidance::ObstacleHash>::remove
              ((HashTable<unsigned_int,DynamicAvoidance::ObstacleHash> *)this,puVar14);
    uVar6 = (ulong)local_3c;
    puVar2 = (undefined8 *)(*(long *)(this + 8) + (ulong)*(uint *)(this + 0x7c) * 0x20);
    puVar3 = (undefined8 *)(*(long *)(this + 8) + uVar6 * 0x20);
    uVar17 = *puVar2;
    uVar16 = puVar2[3];
    uVar15 = puVar2[2];
    puVar3[1] = puVar2[1];
    *puVar3 = uVar17;
    puVar3[3] = uVar16;
    puVar3[2] = uVar15;
    lVar11 = *(long *)(this + 0x20);
    uVar10 = *(ulong *)(this + 0x40);
    uVar8 = uVar10 & *(ulong *)(*(long *)(this + 8) + uVar6 * 0x20 + 0x18);
    puVar9 = (ulong *)(lVar11 + uVar8 * 8);
    uVar13 = *(uint *)((long)puVar9 + 4);
    if (uVar13 == 0xffffffff) {
      uVar8 = 0;
    }
    else {
      uVar12 = 0;
      do {
        if (uVar13 < uVar12) {
          uVar10 = uVar6 | (ulong)uVar12 << 0x20;
          uVar6 = (ulong)*(uint *)puVar9;
          uVar12 = *(uint *)((long)puVar9 + 4);
          *puVar9 = uVar10;
          uVar10 = *(ulong *)(this + 0x40);
          lVar11 = *(long *)(this + 0x20);
        }
        uVar12 = uVar12 + 1;
        uVar8 = uVar10 & uVar8 + 1;
        puVar9 = (ulong *)(lVar11 + uVar8 * 8);
        uVar13 = *(uint *)((long)puVar9 + 4);
      } while (uVar13 != 0xffffffff);
      uVar8 = (ulong)uVar12 << 0x20;
    }
    *puVar9 = uVar8 | uVar6;
    uVar8 = (*(long *)(this + 0x38) + 1) * 2;
    uVar6 = *(long *)(this + 0x28) - *(long *)(this + 0x20) >> 3;
    *(long *)(this + 0x38) = *(long *)(this + 0x38) + 1;
    if (uVar6 <= uVar8 && uVar8 - uVar6 != 0) {
      HashTable<unsigned_int,DynamicAvoidance::ObstacleHash>::rehash();
    }
    local_3c = *puVar14;
  }
  puVar14 = (uint *)(this + 0x78);
  if ((local_3c < *puVar14) && (uVar13 = *puVar14 - 1, *puVar14 = uVar13, local_3c != uVar13)) {
    HashTable<unsigned_int,DynamicAvoidance::ObstacleHash>::remove
              ((HashTable<unsigned_int,DynamicAvoidance::ObstacleHash> *)this,puVar14);
    uVar6 = (ulong)local_3c;
    puVar2 = (undefined8 *)(*(long *)(this + 8) + (ulong)*(uint *)(this + 0x78) * 0x20);
    puVar3 = (undefined8 *)(*(long *)(this + 8) + uVar6 * 0x20);
    uVar17 = *puVar2;
    uVar16 = puVar2[3];
    uVar15 = puVar2[2];
    puVar3[1] = puVar2[1];
    *puVar3 = uVar17;
    puVar3[3] = uVar16;
    puVar3[2] = uVar15;
    lVar11 = *(long *)(this + 0x20);
    uVar10 = *(ulong *)(this + 0x40);
    uVar8 = uVar10 & *(ulong *)(*(long *)(this + 8) + uVar6 * 0x20 + 0x18);
    puVar9 = (ulong *)(lVar11 + uVar8 * 8);
    uVar13 = *(uint *)((long)puVar9 + 4);
    if (uVar13 == 0xffffffff) {
      uVar8 = 0;
    }
    else {
      uVar12 = 0;
      do {
        if (uVar13 < uVar12) {
          uVar10 = uVar6 | (ulong)uVar12 << 0x20;
          uVar6 = (ulong)*(uint *)puVar9;
          uVar12 = *(uint *)((long)puVar9 + 4);
          *puVar9 = uVar10;
          uVar10 = *(ulong *)(this + 0x40);
          lVar11 = *(long *)(this + 0x20);
        }
        uVar12 = uVar12 + 1;
        uVar8 = uVar10 & uVar8 + 1;
        puVar9 = (ulong *)(lVar11 + uVar8 * 8);
        uVar13 = *(uint *)((long)puVar9 + 4);
      } while (uVar13 != 0xffffffff);
      uVar8 = (ulong)uVar12 << 0x20;
    }
    *puVar9 = uVar8 | uVar6;
    uVar8 = (*(long *)(this + 0x38) + 1) * 2;
    uVar6 = *(long *)(this + 0x28) - *(long *)(this + 0x20) >> 3;
    *(long *)(this + 0x38) = *(long *)(this + 0x38) + 1;
    if (uVar6 <= uVar8 && uVar8 - uVar6 != 0) {
      HashTable<unsigned_int,DynamicAvoidance::ObstacleHash>::rehash();
    }
    local_3c = *puVar14;
  }
  local_40 = (int)((ulong)(*(long *)(this + 0x10) - *(long *)(this + 8)) >> 5) - 1;
  if (local_3c != local_40) {
    HashTable<unsigned_int,DynamicAvoidance::ObstacleHash>::remove
              ((HashTable<unsigned_int,DynamicAvoidance::ObstacleHash> *)this,&local_40);
    uVar6 = (ulong)local_3c;
    puVar2 = (undefined8 *)(*(long *)(this + 8) + (ulong)local_40 * 0x20);
    puVar3 = (undefined8 *)(*(long *)(this + 8) + uVar6 * 0x20);
    uVar17 = *puVar2;
    uVar16 = puVar2[3];
    uVar15 = puVar2[2];
    puVar3[1] = puVar2[1];
    *puVar3 = uVar17;
    puVar3[3] = uVar16;
    puVar3[2] = uVar15;
    lVar11 = *(long *)(this + 0x20);
    uVar10 = *(ulong *)(this + 0x40);
    uVar8 = uVar10 & *(ulong *)(*(long *)(this + 8) + uVar6 * 0x20 + 0x18);
    puVar9 = (ulong *)(lVar11 + uVar8 * 8);
    uVar13 = *(uint *)((long)puVar9 + 4);
    if (uVar13 == 0xffffffff) {
      uVar8 = 0;
    }
    else {
      uVar12 = 0;
      do {
        if (uVar13 < uVar12) {
          uVar10 = uVar6 | (ulong)uVar12 << 0x20;
          uVar6 = (ulong)*(uint *)puVar9;
          uVar12 = *(uint *)((long)puVar9 + 4);
          *puVar9 = uVar10;
          uVar10 = *(ulong *)(this + 0x40);
          lVar11 = *(long *)(this + 0x20);
        }
        uVar12 = uVar12 + 1;
        uVar8 = uVar10 & uVar8 + 1;
        puVar9 = (ulong *)(lVar11 + uVar8 * 8);
        uVar13 = *(uint *)((long)puVar9 + 4);
      } while (uVar13 != 0xffffffff);
      uVar8 = (ulong)uVar12 << 0x20;
    }
    *puVar9 = uVar8 | uVar6;
    uVar8 = (*(long *)(this + 0x38) + 1) * 2;
    uVar6 = *(long *)(this + 0x28) - *(long *)(this + 0x20) >> 3;
    *(long *)(this + 0x38) = *(long *)(this + 0x38) + 1;
    if (uVar6 <= uVar8 && uVar8 - uVar6 != 0) {
      HashTable<unsigned_int,DynamicAvoidance::ObstacleHash>::rehash();
    }
  }
  lVar11 = (*(long *)(this + 0x10) + -0x20) - *(long *)(this + 8) >> 5;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + -0x20;
  std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>::resize
            ((vector<bool,std::__ndk1::allocator<bool>> *)(this + 0x48),
             (ulong)((lVar11 + -1) * lVar11) >> 1,false);
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


