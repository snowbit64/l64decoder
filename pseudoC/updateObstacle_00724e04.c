// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateObstacle
// Entry Point: 00724e04
// Size: 444 bytes
// Signature: undefined __cdecl updateObstacle(Obstacle * param_1)


/* DynamicAvoidance::updateObstacle(Obstacle&) */

void DynamicAvoidance::updateObstacle(Obstacle *param_1)

{
  long *plVar1;
  long lVar2;
  long in_x1;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float in_s1;
  float fVar13;
  float in_s2;
  float in_s3;
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar1 = *(long **)(param_1 + 8);
  plVar9 = plVar1;
  for (; (plVar1 != *(long **)(param_1 + 0x10) && (plVar9 = plVar1, *plVar1 != in_x1));
      plVar1 = plVar1 + 4) {
    plVar9 = *(long **)(param_1 + 0x10);
  }
  fVar11 = (float)Obstacle::computeBounds();
  fVar12 = (float)NEON_fmadd(in_s2 - fVar11,0x3f000000,fVar11);
  fVar13 = (float)NEON_fmadd(in_s3 - in_s1,0x3f000000,in_s1);
  *(float *)(plVar9 + 2) = fVar12;
  *(float *)((long)plVar9 + 0x14) = fVar13;
  *(float *)(plVar9 + 1) = (in_s2 - fVar11) * 0.5 + 0.25;
  *(float *)((long)plVar9 + 0xc) = (in_s3 - in_s1) * 0.5 + 0.25;
  uVar10 = (long)(fVar13 / *(float *)param_1) * 0x127409f ^
           (long)(fVar12 / *(float *)param_1) * 0x70b209;
  if (uVar10 != plVar9[3]) {
    local_3c = (uint)((ulong)((long)plVar9 - *(long *)(param_1 + 8)) >> 5);
    HashTable<unsigned_int,DynamicAvoidance::ObstacleHash>::remove
              ((HashTable<unsigned_int,DynamicAvoidance::ObstacleHash> *)param_1,&local_3c);
    uVar3 = (ulong)local_3c;
    plVar9[3] = uVar10;
    uVar5 = *(ulong *)(param_1 + 0x40);
    lVar6 = *(long *)(param_1 + 0x20);
    uVar10 = uVar5 & *(ulong *)(*(long *)(param_1 + 8) + uVar3 * 0x20 + 0x18);
    puVar4 = (ulong *)(lVar6 + uVar10 * 8);
    uVar8 = *(uint *)((long)puVar4 + 4);
    if (uVar8 == 0xffffffff) {
      uVar10 = 0;
    }
    else {
      uVar7 = 0;
      do {
        if (uVar8 < uVar7) {
          uVar5 = uVar3 | (ulong)uVar7 << 0x20;
          uVar3 = (ulong)*(uint *)puVar4;
          uVar7 = *(uint *)((long)puVar4 + 4);
          *puVar4 = uVar5;
          uVar5 = *(ulong *)(param_1 + 0x40);
          lVar6 = *(long *)(param_1 + 0x20);
        }
        uVar7 = uVar7 + 1;
        uVar10 = uVar5 & uVar10 + 1;
        puVar4 = (ulong *)(lVar6 + uVar10 * 8);
        uVar8 = *(uint *)((long)puVar4 + 4);
      } while (uVar8 != 0xffffffff);
      uVar10 = (ulong)uVar7 << 0x20;
    }
    *puVar4 = uVar10 | uVar3;
    uVar3 = (*(long *)(param_1 + 0x38) + 1) * 2;
    uVar10 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 3;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
    if (uVar10 <= uVar3 && uVar3 - uVar10 != 0) {
      HashTable<unsigned_int,DynamicAvoidance::ObstacleHash>::rehash();
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


