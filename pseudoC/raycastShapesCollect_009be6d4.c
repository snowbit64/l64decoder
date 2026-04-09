// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: raycastShapesCollect
// Entry Point: 009be6d4
// Size: 544 bytes
// Signature: undefined __cdecl raycastShapesCollect(Bt2World * param_1, btAlignedObjectArray * param_2, Vector3 * param_3, Vector3 * param_4, float param_5, bool param_6, uint param_7, bool param_8)


/* Bt2SceneQueryUtil::raycastShapesCollect(Bt2World*,
   btAlignedObjectArray<Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData>&, Vector3 const&,
   Vector3 const&, float, bool, unsigned int, bool) */

void Bt2SceneQueryUtil::raycastShapesCollect
               (Bt2World *param_1,btAlignedObjectArray *param_2,Vector3 *param_3,Vector3 *param_4,
               float param_5,bool param_6,uint param_7,bool param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  btAlignedObjectArray *pbVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined **local_b0;
  undefined4 local_a8;
  long local_a0;
  uint local_98;
  undefined4 local_94;
  btAlignedObjectArray *local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 local_78;
  float local_70;
  undefined4 local_6c;
  undefined8 local_68;
  float local_60;
  undefined4 local_5c;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  local_5c = 0;
  local_6c = 0;
  local_68 = *(undefined8 *)param_3;
  local_60 = *(float *)(param_3 + 8);
  local_78 = CONCAT44((float)((ulong)local_68 >> 0x20) +
                      (float)((ulong)*(undefined8 *)param_4 >> 0x20) * param_5,
                      (float)local_68 + (float)*(undefined8 *)param_4 * param_5);
  local_70 = local_60 + *(float *)(param_4 + 8) * param_5;
  local_98 = param_7;
  if (param_6) {
    local_a8 = 0x3f800000;
    local_a0 = 0;
    local_94 = 0;
    local_b0 = &PTR__RayResultCallback_00fe1dc8;
    (**(code **)(*(long *)param_1 + 0x40))(param_1,&local_68,&local_78,&local_b0);
    pbVar7 = local_90;
    lVar6 = local_a0;
    uVar5 = local_a8;
    if (local_a0 != 0) {
      uVar9 = *(uint *)(param_2 + 4);
      if (uVar9 == *(uint *)(param_2 + 8)) {
        iVar3 = uVar9 << 1;
        if (uVar9 == 0) {
          iVar3 = 1;
        }
        if ((int)uVar9 < iVar3) {
          if (iVar3 == 0) {
            lVar8 = 0;
          }
          else {
            lVar8 = btAlignedAllocInternal((long)iVar3 * 0x28,0x10);
            uVar9 = *(uint *)(param_2 + 4);
          }
          if (0 < (int)uVar9) {
            lVar11 = 0;
            do {
              puVar1 = (undefined8 *)(lVar8 + lVar11);
              puVar2 = (undefined8 *)(*(long *)(param_2 + 0x10) + lVar11);
              lVar11 = lVar11 + 0x28;
              uVar15 = *puVar2;
              uVar14 = puVar2[3];
              uVar13 = puVar2[2];
              uVar12 = puVar2[4];
              puVar1[1] = puVar2[1];
              *puVar1 = uVar15;
              puVar1[3] = uVar14;
              puVar1[2] = uVar13;
              puVar1[4] = uVar12;
            } while ((ulong)uVar9 * 0x28 - lVar11 != 0);
          }
          if ((*(void **)(param_2 + 0x10) != (void *)0x0) &&
             (param_2[0x18] != (btAlignedObjectArray)0x0)) {
            btAlignedFreeInternal(*(void **)(param_2 + 0x10));
          }
          uVar9 = *(uint *)(param_2 + 4);
          *(long *)(param_2 + 0x10) = lVar8;
          *(int *)(param_2 + 8) = iVar3;
          param_2[0x18] = (btAlignedObjectArray)0x1;
        }
      }
      plVar10 = (long *)(*(long *)(param_2 + 0x10) + (long)(int)uVar9 * 0x28);
      *plVar10 = lVar6;
      plVar10[2] = lStack_88;
      plVar10[1] = (long)pbVar7;
      *(undefined4 *)(plVar10 + 3) = uVar5;
      *(undefined8 *)((long)plVar10 + 0x1c) = local_80;
      *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    }
  }
  else {
    local_a8 = 0x3f800000;
    local_a0 = 0;
    local_94 = 0;
    local_b0 = &PTR__RayResultCallback_00fe1e68;
    local_90 = param_2;
    (**(code **)(*(long *)param_1 + 0x40))
              (param_1,&local_68,&local_78,&local_b0,param_6,param_7,param_8);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


