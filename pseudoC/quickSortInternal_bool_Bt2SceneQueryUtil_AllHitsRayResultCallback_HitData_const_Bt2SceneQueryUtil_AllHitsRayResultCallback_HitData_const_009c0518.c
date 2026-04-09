// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: quickSortInternal<bool(Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData_const&,Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData_const&)>
// Entry Point: 009c0518
// Size: 396 bytes
// Signature: void __thiscall quickSortInternal<bool(Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData_const&,Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData_const&)>(btAlignedObjectArray<Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData> * this, _func_bool_HitData_ptr_HitData_ptr * param_1, int param_2, int param_3)


/* void 
   btAlignedObjectArray<Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData>::quickSortInternal<bool
   (Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData const&,
   Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData const&)>(bool (
   const&)(Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData const&,
   Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData const&), int, int) */

void __thiscall
btAlignedObjectArray<Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData>::
quickSortInternal<bool(Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData_const&,Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData_const&)>
          (btAlignedObjectArray<Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData> *this,
          _func_bool_HitData_ptr_HitData_ptr *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  long lVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_68;
  
  lVar2 = tpidr_el0;
  iVar7 = param_3 + param_2;
  local_68 = *(long *)(lVar2 + 0x28);
  if (iVar7 < 0) {
    iVar7 = iVar7 + 1;
  }
  puVar4 = (undefined8 *)(*(long *)(this + 0x10) + (long)(iVar7 >> 1) * 0x28);
  uStack_b8 = puVar4[1];
  local_c0 = *puVar4;
  uStack_a8 = puVar4[3];
  uStack_b0 = puVar4[2];
  local_a0 = puVar4[4];
  iVar7 = param_2;
  iVar9 = param_3;
  do {
    while( true ) {
      lVar10 = (long)iVar7 * 0x28;
      do {
        iVar6 = iVar7;
        bVar3 = (*param_1)((HitData *)(*(long *)(this + 0x10) + lVar10),(HitData *)&local_c0);
        iVar7 = iVar6 + 1;
        lVar10 = lVar10 + 0x28;
      } while ((bVar3 & 1U) != 0);
      lVar11 = (long)iVar9 * 0x28 + 0x28;
      do {
        iVar8 = iVar9;
        bVar3 = (*param_1)((HitData *)&local_c0,(HitData *)(*(long *)(this + 0x10) + lVar11 + -0x28)
                          );
        iVar9 = iVar8 + -1;
        lVar11 = lVar11 + -0x28;
      } while ((bVar3 & 1U) != 0);
      if (iVar6 <= iVar8) break;
      iVar9 = iVar8;
      iVar7 = iVar6;
      if (iVar8 < iVar6) goto LAB_009c0638;
    }
    puVar4 = (undefined8 *)(*(long *)(this + 0x10) + lVar11);
    lVar10 = *(long *)(this + 0x10) + lVar10;
    uVar5 = *puVar4;
    uVar15 = puVar4[3];
    uVar14 = puVar4[2];
    uVar1 = *(undefined4 *)(puVar4 + 4);
    uVar17 = *(undefined8 *)(lVar10 + -0x20);
    uVar16 = *(undefined8 *)(lVar10 + -0x28);
    *(undefined8 *)(lVar10 + -0x20) = puVar4[1];
    *(undefined8 *)(lVar10 + -0x28) = uVar5;
    uVar13 = *(undefined8 *)(lVar10 + -0x10);
    uVar12 = *(undefined8 *)(lVar10 + -0x18);
    *(undefined8 *)(lVar10 + -0x10) = uVar15;
    *(undefined8 *)(lVar10 + -0x18) = uVar14;
    uVar5 = *(undefined8 *)(lVar10 + -8);
    *(undefined4 *)(lVar10 + -8) = uVar1;
    puVar4 = (undefined8 *)(*(long *)(this + 0x10) + lVar11);
    *(int *)(puVar4 + 4) = (int)uVar5;
    puVar4[1] = uVar17;
    *puVar4 = uVar16;
    puVar4[3] = uVar13;
    puVar4[2] = uVar12;
  } while (iVar7 <= iVar9);
LAB_009c0638:
  if (param_2 < iVar9) {
    quickSortInternal<bool(Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData_const&,Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData_const&)>
              (this,param_1,param_2,iVar9);
  }
  if (iVar7 < param_3) {
    quickSortInternal<bool(Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData_const&,Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData_const&)>
              (this,param_1,iVar7,param_3);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


