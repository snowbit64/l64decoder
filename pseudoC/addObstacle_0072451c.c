// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addObstacle
// Entry Point: 0072451c
// Size: 1000 bytes
// Signature: undefined __cdecl addObstacle(Obstacle * param_1)


/* DynamicAvoidance::addObstacle(Obstacle&) */

void DynamicAvoidance::addObstacle(Obstacle *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long in_x1;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float in_s1;
  float fVar18;
  undefined8 uVar19;
  float in_s2;
  float in_s3;
  float fVar20;
  
  if (param_1[0x88] != (Obstacle)0x0) {
    param_1[0x88] = (Obstacle)0x0;
    Event::wait((Event *)(param_1 + 0xe8),0xffffffff);
  }
  lVar7 = *(long *)(param_1 + 8);
  uVar13 = *(long *)(param_1 + 0x10) - lVar7;
  uVar12 = (long)uVar13 >> 5;
  uVar5 = (ulong)((uint)uVar12 + 1);
  if (uVar5 < uVar12 || uVar5 - uVar12 == 0) {
    if (uVar5 < uVar12) {
      *(ulong *)(param_1 + 0x10) = lVar7 + uVar5 * 0x20;
    }
  }
  else {
    std::__ndk1::
    vector<DynamicAvoidance::ObstacleWrapper,std::__ndk1::allocator<DynamicAvoidance::ObstacleWrapper>>
    ::__append((vector<DynamicAvoidance::ObstacleWrapper,std::__ndk1::allocator<DynamicAvoidance::ObstacleWrapper>>
                *)(param_1 + 8),uVar5 - uVar12);
  }
  iVar4 = *(int *)(in_x1 + 0x1c);
  if (iVar4 != 0) {
    puVar11 = (uint *)(param_1 + 0x78);
    if (*puVar11 != (uint)uVar12) {
      HashTable<unsigned_int,DynamicAvoidance::ObstacleHash>::remove
                ((HashTable<unsigned_int,DynamicAvoidance::ObstacleHash> *)param_1,puVar11);
      uVar9 = uVar13 >> 5 & 0xffffffff;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x78) * 0x20);
      puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + uVar9 * 0x20);
      uVar19 = *puVar1;
      uVar17 = puVar1[3];
      uVar16 = puVar1[2];
      puVar2[1] = puVar1[1];
      *puVar2 = uVar19;
      puVar2[3] = uVar17;
      puVar2[2] = uVar16;
      lVar7 = *(long *)(param_1 + 0x20);
      uVar13 = *(ulong *)(param_1 + 0x40);
      uVar5 = uVar13 & *(ulong *)(*(long *)(param_1 + 8) + uVar9 * 0x20 + 0x18);
      puVar6 = (ulong *)(lVar7 + uVar5 * 8);
      uVar10 = *(uint *)((long)puVar6 + 4);
      if (uVar10 == 0xffffffff) {
        uVar12 = 0;
      }
      else {
        uVar8 = 0;
        do {
          if (uVar10 < uVar8) {
            uVar9 = uVar12 & 0xffffffff;
            uVar13 = (ulong)uVar8;
            uVar12 = (ulong)*(uint *)puVar6;
            uVar8 = *(uint *)((long)puVar6 + 4);
            *puVar6 = uVar9 | uVar13 << 0x20;
            uVar13 = *(ulong *)(param_1 + 0x40);
            lVar7 = *(long *)(param_1 + 0x20);
          }
          uVar8 = uVar8 + 1;
          uVar5 = uVar13 & uVar5 + 1;
          puVar6 = (ulong *)(lVar7 + uVar5 * 8);
          uVar10 = *(uint *)((long)puVar6 + 4);
        } while (uVar10 != 0xffffffff);
        uVar9 = uVar12 & 0xffffffff;
        uVar12 = (ulong)uVar8 << 0x20;
      }
      *puVar6 = uVar12 | uVar9;
      uVar5 = (*(long *)(param_1 + 0x38) + 1) * 2;
      uVar12 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 3;
      *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
      if (uVar12 <= uVar5 && uVar5 - uVar12 != 0) {
        HashTable<unsigned_int,DynamicAvoidance::ObstacleHash>::rehash();
      }
      in_s1 = (float)uVar19;
      uVar12 = (ulong)*puVar11;
      iVar4 = *(int *)(in_x1 + 0x1c);
    }
    uVar10 = (uint)uVar12 + 1;
    *puVar11 = uVar10;
    if (iVar4 != 1) {
      puVar11 = (uint *)(param_1 + 0x7c);
      if ((uint)uVar12 != *puVar11) {
        HashTable<unsigned_int,DynamicAvoidance::ObstacleHash>::remove
                  ((HashTable<unsigned_int,DynamicAvoidance::ObstacleHash> *)param_1,puVar11);
        uVar9 = uVar12 & 0xffffffff;
        puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x7c) * 0x20);
        puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + uVar9 * 0x20);
        uVar19 = *puVar1;
        uVar17 = puVar1[3];
        uVar16 = puVar1[2];
        puVar2[1] = puVar1[1];
        *puVar2 = uVar19;
        puVar2[3] = uVar17;
        puVar2[2] = uVar16;
        lVar7 = *(long *)(param_1 + 0x20);
        uVar13 = *(ulong *)(param_1 + 0x40);
        uVar5 = uVar13 & *(ulong *)(*(long *)(param_1 + 8) + uVar9 * 0x20 + 0x18);
        puVar6 = (ulong *)(lVar7 + uVar5 * 8);
        uVar10 = *(uint *)((long)puVar6 + 4);
        if (uVar10 == 0xffffffff) {
          uVar12 = 0;
        }
        else {
          uVar8 = 0;
          do {
            if (uVar10 < uVar8) {
              uVar9 = uVar12 & 0xffffffff;
              uVar13 = (ulong)uVar8;
              uVar12 = (ulong)*(uint *)puVar6;
              uVar8 = *(uint *)((long)puVar6 + 4);
              *puVar6 = uVar9 | uVar13 << 0x20;
              uVar13 = *(ulong *)(param_1 + 0x40);
              lVar7 = *(long *)(param_1 + 0x20);
            }
            uVar8 = uVar8 + 1;
            uVar5 = uVar13 & uVar5 + 1;
            puVar6 = (ulong *)(lVar7 + uVar5 * 8);
            uVar10 = *(uint *)((long)puVar6 + 4);
          } while (uVar10 != 0xffffffff);
          uVar9 = uVar12 & 0xffffffff;
          uVar12 = (ulong)uVar8 << 0x20;
        }
        *puVar6 = uVar12 | uVar9;
        uVar5 = (*(long *)(param_1 + 0x38) + 1) * 2;
        uVar12 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 3;
        *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
        if (uVar12 <= uVar5 && uVar5 - uVar12 != 0) {
          HashTable<unsigned_int,DynamicAvoidance::ObstacleHash>::rehash();
        }
        in_s1 = (float)uVar19;
        uVar12 = (ulong)*puVar11;
        uVar10 = *puVar11 + 1;
      }
      *puVar11 = uVar10;
    }
  }
  fVar14 = (float)Obstacle::computeBounds();
  fVar20 = *(float *)param_1;
  fVar15 = (float)NEON_fmadd(in_s2 - fVar14,0x3f000000,fVar14);
  fVar18 = (float)NEON_fmadd(in_s3 - in_s1,0x3f000000,in_s1);
  uVar9 = uVar12 & 0xffffffff;
  plVar3 = (long *)(*(long *)(param_1 + 8) + uVar9 * 0x20);
  *plVar3 = in_x1;
  plVar3[1] = CONCAT44((in_s3 - in_s1) * 0.5 + 0.25,(in_s2 - fVar14) * 0.5 + 0.25);
  plVar3[2] = CONCAT44(fVar18,fVar15);
  plVar3[3] = (long)(fVar18 / fVar20) * 0x127409f ^ (long)(fVar15 / fVar20) * 0x70b209;
  uVar13 = *(ulong *)(param_1 + 0x40);
  lVar7 = *(long *)(param_1 + 0x20);
  uVar5 = uVar13 & *(ulong *)(*(long *)(param_1 + 8) + uVar9 * 0x20 + 0x18);
  puVar6 = (ulong *)(lVar7 + uVar5 * 8);
  uVar10 = *(uint *)((long)puVar6 + 4);
  if (uVar10 == 0xffffffff) {
    uVar12 = 0;
  }
  else {
    uVar8 = 0;
    do {
      if (uVar10 < uVar8) {
        uVar9 = uVar12 & 0xffffffff;
        uVar13 = (ulong)uVar8;
        uVar12 = (ulong)*(uint *)puVar6;
        uVar8 = *(uint *)((long)puVar6 + 4);
        *puVar6 = uVar9 | uVar13 << 0x20;
        uVar13 = *(ulong *)(param_1 + 0x40);
        lVar7 = *(long *)(param_1 + 0x20);
      }
      uVar8 = uVar8 + 1;
      uVar5 = uVar13 & uVar5 + 1;
      puVar6 = (ulong *)(lVar7 + uVar5 * 8);
      uVar10 = *(uint *)((long)puVar6 + 4);
    } while (uVar10 != 0xffffffff);
    uVar9 = uVar12 & 0xffffffff;
    uVar12 = (ulong)uVar8 << 0x20;
  }
  *puVar6 = uVar12 | uVar9;
  uVar5 = (*(long *)(param_1 + 0x38) + 1) * 2;
  uVar12 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 3;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
  if (uVar12 <= uVar5 && uVar5 - uVar12 != 0) {
    HashTable<unsigned_int,DynamicAvoidance::ObstacleHash>::rehash();
  }
  lVar7 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 5;
  std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>::resize
            ((vector<bool,std::__ndk1::allocator<bool>> *)(param_1 + 0x48),
             (ulong)((lVar7 + -1) * lVar7) >> 1,false);
  return;
}


