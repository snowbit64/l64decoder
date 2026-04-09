// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: raycastShapesReport
// Entry Point: 009be8f8
// Size: 604 bytes
// Signature: undefined __cdecl raycastShapesReport(btAlignedObjectArray * param_1, Vector3 * param_2, Vector3 * param_3, IRaycastReport * param_4, float param_5, bool param_6, bool param_7)


/* Bt2SceneQueryUtil::raycastShapesReport(btAlignedObjectArray<Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData>&,
   Vector3 const&, Vector3 const&, IRaycastReport*, float, bool, bool) */

int Bt2SceneQueryUtil::raycastShapesReport
              (btAlignedObjectArray *param_1,Vector3 *param_2,Vector3 *param_3,
              IRaycastReport *param_4,float param_5,bool param_6,bool param_7)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  code *pcVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  uVar5 = *(uint *)(param_1 + 4);
  uVar12 = (ulong)uVar5;
  if ((int)uVar5 < 1) {
    if (param_7) {
      (**(code **)(*(long *)param_4 + 0x20))(0x7f7fffff,param_4,0,&local_98,&local_98,0,0,1);
    }
    iVar11 = 0;
  }
  else {
    uVar17 = *(undefined8 *)param_3;
    fVar14 = *(float *)(param_3 + 8);
    uVar19 = *(undefined8 *)param_2;
    fVar21 = *(float *)(param_2 + 8);
    if (uVar5 == 1) {
      uVar10 = 0;
    }
    else {
      uVar10 = (ulong)(uVar5 - 1);
      btAlignedObjectArray<Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData>::
      quickSortInternal<bool(Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData_const&,Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData_const&)>
                ((btAlignedObjectArray<Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData> *)
                 param_1,AllHitsRayResultCallback::HitData::sortFuncFractionAsc,0,uVar5 - 1);
    }
    fVar18 = (float)uVar19;
    fVar20 = (float)((ulong)uVar19 >> 0x20);
    lVar13 = 0;
    iVar11 = 0;
    do {
      lVar9 = *(long *)(param_1 + 0x10);
      puVar7 = *(uint **)(*(long *)(lVar9 + lVar13) + 0x108);
      if ((puVar7 != (uint *)0x0) && (uVar5 = *puVar7, (uVar5 & 0x101) == 1)) {
        lVar6 = lVar9 + lVar13;
        fVar15 = *(float *)(lVar6 + 0x18);
        if (param_6) {
          fVar16 = 1.0 - fVar15;
          lVar3 = *(long *)(puVar7 + 2);
          local_90 = NEON_fmadd(fVar16,fVar21,(fVar21 + fVar14 * param_5) * fVar15);
          local_98 = CONCAT44((fVar20 + (float)((ulong)uVar17 >> 0x20) * param_5) * fVar15 +
                              fVar20 * fVar16,
                              (fVar18 + (float)uVar17 * param_5) * fVar15 + fVar18 * fVar16);
          local_a8 = *(undefined4 *)(lVar6 + 8);
          local_a4 = *(undefined4 *)(lVar6 + 0xc);
          local_a0 = *(undefined4 *)(lVar6 + 0x10);
          lVar6 = lVar3;
          if ((uVar5 >> 3 & 1) == 0) {
            if ((uVar5 >> 4 & 1) == 0) {
              if ((uVar5 >> 7 & 1) == 0) {
                uVar5 = 0xffffffff;
              }
              else {
                uVar5 = 0xffffffff;
                lVar9 = *(long *)(*(long *)(puVar7 + 6) +
                                 (long)*(int *)(lVar9 + lVar13 + 0x20) * 0x10);
                if (lVar9 != 0) {
                  lVar6 = lVar9;
                }
              }
            }
            else {
              uVar5 = *(uint *)(lVar9 + lVar13 + 0x1c) >> 0x1f;
            }
          }
          else {
            uVar5 = puVar7[8];
          }
          iVar11 = iVar11 + 1;
          puVar4 = (undefined8 *)&local_a8;
          pcVar8 = *(code **)(*(long *)param_4 + 0x20);
        }
        else {
          puVar4 = &local_98;
          pcVar8 = *(code **)(*(long *)param_4 + 0x20);
          lVar3 = 0;
          uVar5 = 0;
          lVar6 = 0;
        }
        uVar2 = (*pcVar8)(fVar15 * param_5,param_4,lVar3,&local_98,puVar4,uVar5,lVar6,uVar10 == 0);
        if ((uVar2 & 1) == 0) break;
      }
      uVar10 = uVar10 - 1;
      lVar13 = lVar13 + 0x28;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  if (*(long *)(lVar1 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar11;
}


