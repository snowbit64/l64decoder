// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: quickSortInternal<Bt2World::SortVehicleOnIslandPredicate>
// Entry Point: 00bb3640
// Size: 352 bytes
// Signature: void __thiscall quickSortInternal<Bt2World::SortVehicleOnIslandPredicate>(btAlignedObjectArray<Bt2VehicleSolverBase*> * this, SortVehicleOnIslandPredicate * param_1, int param_2, int param_3)


/* void 
   btAlignedObjectArray<Bt2VehicleSolverBase*>::quickSortInternal<Bt2World::SortVehicleOnIslandPredicate>(Bt2World::SortVehicleOnIslandPredicate
   const&, int, int) */

void __thiscall
btAlignedObjectArray<Bt2VehicleSolverBase*>::
quickSortInternal<Bt2World::SortVehicleOnIslandPredicate>
          (btAlignedObjectArray<Bt2VehicleSolverBase*> *this,SortVehicleOnIslandPredicate *param_1,
          int param_2,int param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar12;
  
  uVar7 = (ulong)(uint)param_2;
  do {
    iVar5 = (int)uVar7;
    iVar2 = iVar5 + param_3;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 1;
    }
    plVar13 = *(long **)(*(long *)(this + 0x10) + (long)(iVar2 >> 1) * 8);
    uVar12 = (ulong)(uint)param_3;
    do {
      while( true ) {
        uVar16 = -(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3;
        do {
          uVar8 = uVar7;
          plVar14 = *(long **)(*(long *)(this + 0x10) + uVar16);
          iVar2 = (**(code **)(*plVar13 + 0x10))(plVar13);
          iVar3 = (**(code **)(*plVar14 + 0x10))(plVar14);
          iVar6 = (int)uVar8;
          uVar7 = (ulong)(iVar6 + 1U);
          uVar16 = uVar16 + 8;
        } while (iVar3 < iVar2);
        uVar15 = -(uVar12 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3;
        do {
          uVar11 = uVar12;
          iVar2 = (**(code **)(**(long **)(*(long *)(this + 0x10) + uVar15) + 0x10))();
          iVar3 = (**(code **)(*plVar13 + 0x10))(plVar13);
          uVar9 = (uint)uVar11;
          uVar10 = uVar9 - 1;
          uVar12 = (ulong)uVar10;
          uVar15 = uVar15 - 8;
        } while (iVar3 < iVar2);
        if (iVar6 <= (int)uVar9) break;
        uVar7 = uVar8;
        uVar12 = uVar11;
        uVar10 = uVar9;
        if ((int)uVar9 < iVar6) goto LAB_00bb3764;
      }
      lVar1 = *(long *)(this + 0x10) + uVar16;
      uVar4 = *(undefined8 *)(lVar1 + -8);
      *(undefined8 *)(lVar1 + -8) = *(undefined8 *)(*(long *)(this + 0x10) + uVar15 + 8);
      *(undefined8 *)(*(long *)(this + 0x10) + uVar15 + 8) = uVar4;
    } while ((int)(iVar6 + 1U) <= (int)uVar10);
LAB_00bb3764:
    if (iVar5 < (int)uVar10) {
      quickSortInternal<Bt2World::SortVehicleOnIslandPredicate>(this,param_1,iVar5,uVar10);
    }
    if (param_3 <= (int)uVar7) {
      return;
    }
  } while( true );
}


