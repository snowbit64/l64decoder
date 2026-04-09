// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCollisionShapeFromCaches
// Entry Point: 0098e2f0
// Size: 612 bytes
// Signature: undefined __thiscall getCollisionShapeFromCaches(Bt2PhysicsColShapeCache * this, ulonglong param_1, Vector3 * param_2, bool param_3)


/* WARNING: Removing unreachable block (ram,0x0098e308) */
/* WARNING: Removing unreachable block (ram,0x0098e304) */
/* WARNING: Removing unreachable block (ram,0x0098e398) */
/* Bt2PhysicsColShapeCache::getCollisionShapeFromCaches(unsigned long long, Vector3 const&, bool) */

Bt2PhysicsColShapeCache * __thiscall
Bt2PhysicsColShapeCache::getCollisionShapeFromCaches
          (Bt2PhysicsColShapeCache *this,ulonglong param_1,Vector3 *param_2,bool param_3)

{
  Bt2PhysicsColShapeCache **ppBVar1;
  bool bVar2;
  bool bVar3;
  btBvhTriangleMeshShape *pbVar4;
  Bt2PhysicsColShapeCache *pBVar5;
  long lVar6;
  Bt2PhysicsColShapeCache BVar7;
  Bt2PhysicsColShapeCache **ppBVar8;
  Bt2PhysicsColShapeCache **ppBVar9;
  Bt2PhysicsColShapeCache **ppBVar10;
  Bt2PhysicsColShapeCache **ppBVar11;
  float fVar12;
  float fVar13;
  
  fVar12 = *(float *)param_2;
  fVar13 = *(float *)(param_2 + 4);
  ppBVar10 = (Bt2PhysicsColShapeCache **)(this + 8);
  ppBVar8 = (Bt2PhysicsColShapeCache **)*ppBVar10;
  ppBVar9 = ppBVar10;
  ppBVar11 = ppBVar8;
  if (ppBVar8 != (Bt2PhysicsColShapeCache **)0x0) {
    do {
      bVar2 = param_1 <= ppBVar11[4];
      if ((ppBVar11[4] == (Bt2PhysicsColShapeCache *)param_1) &&
         (bVar2 = param_3 <= (byte)*(Bt2PhysicsColShapeCache *)((long)ppBVar11 + 0x34),
         *(Bt2PhysicsColShapeCache *)((long)ppBVar11 + 0x34) == (Bt2PhysicsColShapeCache)param_3)) {
        if (fVar12 == *(float *)(ppBVar11 + 5)) {
          if (fVar13 == *(float *)((long)ppBVar11 + 0x2c)) {
            bVar2 = *(float *)(ppBVar11 + 6) < *(float *)(param_2 + 8);
          }
          else {
            bVar2 = *(float *)((long)ppBVar11 + 0x2c) < fVar13;
          }
        }
        else {
          bVar2 = *(float *)(ppBVar11 + 5) < fVar12;
        }
      }
      else {
        bVar2 = !bVar2;
      }
      lVar6 = 8;
      if (!bVar2) {
        lVar6 = 0;
        ppBVar9 = ppBVar11;
      }
      ppBVar1 = (Bt2PhysicsColShapeCache **)((long)ppBVar11 + lVar6);
      ppBVar11 = (Bt2PhysicsColShapeCache **)*ppBVar1;
    } while ((Bt2PhysicsColShapeCache **)*ppBVar1 != (Bt2PhysicsColShapeCache **)0x0);
    BVar7 = (Bt2PhysicsColShapeCache)param_3;
    if (ppBVar9 != ppBVar10) {
      if (ppBVar9[4] == (Bt2PhysicsColShapeCache *)param_1) {
        if (*(Bt2PhysicsColShapeCache *)((long)ppBVar9 + 0x34) == (Bt2PhysicsColShapeCache)param_3)
        {
          if (*(float *)(ppBVar9 + 5) == fVar12) {
            if (*(float *)((long)ppBVar9 + 0x2c) == fVar13) {
              if (*(float *)(ppBVar9 + 6) <= *(float *)(param_2 + 8)) goto LAB_0098e538;
            }
            else if (*(float *)((long)ppBVar9 + 0x2c) <= fVar13) {
LAB_0098e538:
              pBVar5 = ppBVar9[7];
              lVar6 = *(long *)(pBVar5 + 0x10);
              *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
              return pBVar5;
            }
          }
          else if (*(float *)(ppBVar9 + 5) <= fVar12) goto LAB_0098e538;
        }
        else {
          if ((byte)*(Bt2PhysicsColShapeCache *)((long)ppBVar9 + 0x34) <= param_3)
          goto LAB_0098e538;
          BVar7 = (Bt2PhysicsColShapeCache)0x0;
        }
      }
      else if (ppBVar9[4] <= param_1) goto LAB_0098e538;
    }
    if (ppBVar8 == (Bt2PhysicsColShapeCache **)0x0) {
      return (Bt2PhysicsColShapeCache *)0x0;
    }
    ppBVar9 = (Bt2PhysicsColShapeCache **)(this + 8);
    do {
      bVar2 = param_1 <= ppBVar8[4];
      if ((ppBVar8[4] == (Bt2PhysicsColShapeCache *)param_1) &&
         (bVar2 = (byte)BVar7 <= (byte)*(Bt2PhysicsColShapeCache *)((long)ppBVar8 + 0x34),
         *(Bt2PhysicsColShapeCache *)((long)ppBVar8 + 0x34) == BVar7)) {
        bVar2 = *(float *)(ppBVar8 + 5) < 1.0;
        if ((*(float *)(ppBVar8 + 5) == 1.0) &&
           (bVar2 = *(float *)((long)ppBVar8 + 0x2c) < 1.0, *(float *)((long)ppBVar8 + 0x2c) == 1.0)
           ) {
          bVar2 = *(float *)(ppBVar8 + 6) < 1.0;
        }
      }
      else {
        bVar2 = !bVar2;
      }
      lVar6 = 8;
      if (!bVar2) {
        lVar6 = 0;
        ppBVar9 = ppBVar8;
      }
      ppBVar8 = *(Bt2PhysicsColShapeCache ***)((long)ppBVar8 + lVar6);
    } while (ppBVar8 != (Bt2PhysicsColShapeCache **)0x0);
    if (ppBVar9 == (Bt2PhysicsColShapeCache **)(this + 8)) {
      return (Bt2PhysicsColShapeCache *)0x0;
    }
    bVar3 = param_1 <= ppBVar9[4];
    bVar2 = ppBVar9[4] == (Bt2PhysicsColShapeCache *)param_1;
    if (bVar2) {
      bVar3 = (byte)BVar7 <= (byte)*(Bt2PhysicsColShapeCache *)((long)ppBVar9 + 0x34);
      bVar2 = *(Bt2PhysicsColShapeCache *)((long)ppBVar9 + 0x34) == BVar7;
      if (bVar2) {
        if (*(float *)(ppBVar9 + 5) == 1.0) {
          fVar13 = *(float *)((long)ppBVar9 + 0x2c);
          if (fVar13 == 1.0) {
            fVar13 = *(float *)(ppBVar9 + 6);
          }
          if (1.0 < fVar13) {
            return (Bt2PhysicsColShapeCache *)0x0;
          }
        }
        else if (1.0 < *(float *)(ppBVar9 + 5)) {
          return (Bt2PhysicsColShapeCache *)0x0;
        }
        goto LAB_0098e488;
      }
    }
    if (!bVar3 || bVar2) {
LAB_0098e488:
      pbVar4 = (btBvhTriangleMeshShape *)ppBVar9[7];
      *(int *)(*(long *)(pbVar4 + 0x10) + 8) = *(int *)(*(long *)(pbVar4 + 0x10) + 8) + 1;
      if (((fVar12 == 1.0) && (*(float *)(param_2 + 4) == 1.0)) && (*(float *)(param_2 + 8) == 1.0))
      {
        return (Bt2PhysicsColShapeCache *)pbVar4;
      }
      if (!param_3) {
        pBVar5 = (Bt2PhysicsColShapeCache *)
                 createAndCacheScaledTriangleColShape(this,param_1,pbVar4,param_2);
        return pBVar5;
      }
      pBVar5 = (Bt2PhysicsColShapeCache *)
               createAndCacheScaledConvexColShape
                         (this,param_1,(btConvexPointCloudShape *)pbVar4,param_2);
      return pBVar5;
    }
  }
  return (Bt2PhysicsColShapeCache *)0x0;
}


