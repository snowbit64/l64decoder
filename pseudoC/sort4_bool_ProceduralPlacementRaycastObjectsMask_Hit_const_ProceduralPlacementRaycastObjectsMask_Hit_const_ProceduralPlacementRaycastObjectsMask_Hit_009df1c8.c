// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort4<bool(*&)(ProceduralPlacementRaycastObjectsMask::Hit_const&,ProceduralPlacementRaycastObjectsMask::Hit_const&),ProceduralPlacementRaycastObjectsMask::Hit*>
// Entry Point: 009df1c8
// Size: 564 bytes
// Signature: uint __cdecl __sort4<bool(*&)(ProceduralPlacementRaycastObjectsMask::Hit_const&,ProceduralPlacementRaycastObjectsMask::Hit_const&),ProceduralPlacementRaycastObjectsMask::Hit*>(Hit * param_1, Hit * param_2, Hit * param_3, Hit * param_4, _func_bool_Hit_ptr_Hit_ptr * param_5)


/* unsigned int std::__ndk1::__sort4<bool (*&)(ProceduralPlacementRaycastObjectsMask::Hit const&,
   ProceduralPlacementRaycastObjectsMask::Hit const&),
   ProceduralPlacementRaycastObjectsMask::Hit*>(ProceduralPlacementRaycastObjectsMask::Hit*,
   ProceduralPlacementRaycastObjectsMask::Hit*, ProceduralPlacementRaycastObjectsMask::Hit*,
   ProceduralPlacementRaycastObjectsMask::Hit*, bool (*&)(ProceduralPlacementRaycastObjectsMask::Hit
   const&, ProceduralPlacementRaycastObjectsMask::Hit const&)) */

uint std::__ndk1::
     __sort4<bool(*&)(ProceduralPlacementRaycastObjectsMask::Hit_const&,ProceduralPlacementRaycastObjectsMask::Hit_const&),ProceduralPlacementRaycastObjectsMask::Hit*>
               (Hit *param_1,Hit *param_2,Hit *param_3,Hit *param_4,
               _func_bool_Hit_ptr_Hit_ptr *param_5)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  uVar3 = (**(code **)param_5)(param_2,param_1);
  uVar4 = (**(code **)param_5)(param_3,param_2);
  if ((uVar3 & 1) == 0) {
    if ((uVar4 & 1) == 0) {
      uVar8 = 0;
      goto LAB_009df318;
    }
    uVar10 = *(undefined8 *)param_3;
    uVar9 = *(undefined8 *)(param_3 + 0x18);
    uVar7 = *(undefined8 *)(param_3 + 0x10);
    uVar12 = *(undefined8 *)(param_2 + 8);
    uVar11 = *(undefined8 *)param_2;
    uVar14 = *(undefined8 *)(param_2 + 0x18);
    uVar13 = *(undefined8 *)(param_2 + 0x10);
    uVar1 = *(undefined4 *)(param_3 + 0x20);
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)param_2 = uVar10;
    *(undefined8 *)(param_2 + 0x18) = uVar9;
    *(undefined8 *)(param_2 + 0x10) = uVar7;
    uVar7 = *(undefined8 *)(param_2 + 0x20);
    *(undefined4 *)(param_2 + 0x20) = uVar1;
    *(undefined8 *)(param_3 + 8) = uVar12;
    *(undefined8 *)param_3 = uVar11;
    *(undefined8 *)(param_3 + 0x18) = uVar14;
    *(undefined8 *)(param_3 + 0x10) = uVar13;
    *(int *)(param_3 + 0x20) = (int)uVar7;
    uVar3 = (**(code **)param_5)(param_2,param_1);
    if ((uVar3 & 1) != 0) {
      uVar10 = *(undefined8 *)param_2;
      uVar9 = *(undefined8 *)(param_2 + 0x18);
      uVar7 = *(undefined8 *)(param_2 + 0x10);
      uVar8 = 2;
      uVar12 = *(undefined8 *)(param_1 + 8);
      uVar11 = *(undefined8 *)param_1;
      uVar14 = *(undefined8 *)(param_1 + 0x18);
      uVar13 = *(undefined8 *)(param_1 + 0x10);
      uVar1 = *(undefined4 *)(param_2 + 0x20);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)param_1 = uVar10;
      *(undefined8 *)(param_1 + 0x18) = uVar9;
      *(undefined8 *)(param_1 + 0x10) = uVar7;
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x20) = uVar1;
      *(undefined8 *)(param_2 + 8) = uVar12;
      *(undefined8 *)param_2 = uVar11;
      *(undefined8 *)(param_2 + 0x18) = uVar14;
      *(undefined8 *)(param_2 + 0x10) = uVar13;
      *(int *)(param_2 + 0x20) = (int)uVar7;
      goto LAB_009df318;
    }
LAB_009df314:
    uVar8 = 1;
  }
  else {
    if ((uVar4 & 1) == 0) {
      uVar10 = *(undefined8 *)param_2;
      uVar9 = *(undefined8 *)(param_2 + 0x18);
      uVar7 = *(undefined8 *)(param_2 + 0x10);
      uVar12 = *(undefined8 *)(param_1 + 8);
      uVar11 = *(undefined8 *)param_1;
      uVar14 = *(undefined8 *)(param_1 + 0x18);
      uVar13 = *(undefined8 *)(param_1 + 0x10);
      uVar1 = *(undefined4 *)(param_2 + 0x20);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)param_1 = uVar10;
      *(undefined8 *)(param_1 + 0x18) = uVar9;
      *(undefined8 *)(param_1 + 0x10) = uVar7;
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x20) = uVar1;
      *(undefined8 *)(param_2 + 8) = uVar12;
      *(undefined8 *)param_2 = uVar11;
      *(undefined8 *)(param_2 + 0x18) = uVar14;
      *(undefined8 *)(param_2 + 0x10) = uVar13;
      *(int *)(param_2 + 0x20) = (int)uVar7;
      uVar3 = (**(code **)param_5)(param_3,param_2);
      if ((uVar3 & 1) == 0) goto LAB_009df314;
      uVar10 = *(undefined8 *)param_3;
      uVar9 = *(undefined8 *)(param_3 + 0x18);
      uVar7 = *(undefined8 *)(param_3 + 0x10);
      uVar8 = 2;
      uVar12 = *(undefined8 *)(param_2 + 8);
      uVar11 = *(undefined8 *)param_2;
      uVar14 = *(undefined8 *)(param_2 + 0x18);
      uVar13 = *(undefined8 *)(param_2 + 0x10);
      uVar1 = *(undefined4 *)(param_3 + 0x20);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)param_2 = uVar10;
      *(undefined8 *)(param_2 + 0x18) = uVar9;
      *(undefined8 *)(param_2 + 0x10) = uVar7;
      uVar6 = (undefined4)*(undefined8 *)(param_2 + 0x20);
      *(undefined4 *)(param_2 + 0x20) = uVar1;
    }
    else {
      uVar10 = *(undefined8 *)param_3;
      uVar9 = *(undefined8 *)(param_3 + 0x18);
      uVar7 = *(undefined8 *)(param_3 + 0x10);
      uVar8 = 1;
      uVar12 = *(undefined8 *)(param_1 + 8);
      uVar11 = *(undefined8 *)param_1;
      uVar14 = *(undefined8 *)(param_1 + 0x18);
      uVar13 = *(undefined8 *)(param_1 + 0x10);
      uVar1 = *(undefined4 *)(param_3 + 0x20);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)param_1 = uVar10;
      *(undefined8 *)(param_1 + 0x18) = uVar9;
      *(undefined8 *)(param_1 + 0x10) = uVar7;
      uVar6 = (undefined4)*(undefined8 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x20) = uVar1;
    }
    *(undefined8 *)(param_3 + 8) = uVar12;
    *(undefined8 *)param_3 = uVar11;
    *(undefined8 *)(param_3 + 0x18) = uVar14;
    *(undefined8 *)(param_3 + 0x10) = uVar13;
    *(undefined4 *)(param_3 + 0x20) = uVar6;
  }
LAB_009df318:
  uVar3 = (**(code **)param_5)(param_4,param_3);
  if ((uVar3 & 1) != 0) {
    uVar10 = *(undefined8 *)param_4;
    uVar9 = *(undefined8 *)(param_4 + 0x18);
    uVar7 = *(undefined8 *)(param_4 + 0x10);
    uVar12 = *(undefined8 *)(param_3 + 8);
    uVar11 = *(undefined8 *)param_3;
    uVar14 = *(undefined8 *)(param_3 + 0x18);
    uVar13 = *(undefined8 *)(param_3 + 0x10);
    uVar1 = *(undefined4 *)(param_4 + 0x20);
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_4 + 8);
    *(undefined8 *)param_3 = uVar10;
    *(undefined8 *)(param_3 + 0x18) = uVar9;
    *(undefined8 *)(param_3 + 0x10) = uVar7;
    uVar7 = *(undefined8 *)(param_3 + 0x20);
    *(undefined4 *)(param_3 + 0x20) = uVar1;
    *(undefined8 *)(param_4 + 8) = uVar12;
    *(undefined8 *)param_4 = uVar11;
    *(undefined8 *)(param_4 + 0x18) = uVar14;
    *(undefined8 *)(param_4 + 0x10) = uVar13;
    *(int *)(param_4 + 0x20) = (int)uVar7;
    uVar3 = (**(code **)param_5)(param_3,param_2);
    if ((uVar3 & 1) == 0) {
      uVar8 = uVar8 + 1;
    }
    else {
      uVar10 = *(undefined8 *)param_3;
      uVar9 = *(undefined8 *)(param_3 + 0x18);
      uVar7 = *(undefined8 *)(param_3 + 0x10);
      uVar12 = *(undefined8 *)(param_2 + 8);
      uVar11 = *(undefined8 *)param_2;
      uVar14 = *(undefined8 *)(param_2 + 0x18);
      uVar13 = *(undefined8 *)(param_2 + 0x10);
      uVar1 = *(undefined4 *)(param_3 + 0x20);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)param_2 = uVar10;
      *(undefined8 *)(param_2 + 0x18) = uVar9;
      *(undefined8 *)(param_2 + 0x10) = uVar7;
      uVar7 = *(undefined8 *)(param_2 + 0x20);
      *(undefined4 *)(param_2 + 0x20) = uVar1;
      *(undefined8 *)(param_3 + 8) = uVar12;
      *(undefined8 *)param_3 = uVar11;
      *(undefined8 *)(param_3 + 0x18) = uVar14;
      *(undefined8 *)(param_3 + 0x10) = uVar13;
      *(int *)(param_3 + 0x20) = (int)uVar7;
      uVar3 = (**(code **)param_5)(param_2,param_1);
      if ((uVar3 & 1) == 0) {
        uVar8 = uVar8 + 2;
      }
      else {
        uVar10 = *(undefined8 *)param_2;
        uVar9 = *(undefined8 *)(param_2 + 0x18);
        uVar7 = *(undefined8 *)(param_2 + 0x10);
        uVar8 = uVar8 + 3;
        uVar12 = *(undefined8 *)(param_1 + 8);
        uVar11 = *(undefined8 *)param_1;
        uVar14 = *(undefined8 *)(param_1 + 0x18);
        uVar13 = *(undefined8 *)(param_1 + 0x10);
        uVar1 = *(undefined4 *)(param_2 + 0x20);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)param_1 = uVar10;
        *(undefined8 *)(param_1 + 0x18) = uVar9;
        *(undefined8 *)(param_1 + 0x10) = uVar7;
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        *(undefined4 *)(param_1 + 0x20) = uVar1;
        *(undefined8 *)(param_2 + 8) = uVar12;
        *(undefined8 *)param_2 = uVar11;
        *(undefined8 *)(param_2 + 0x18) = uVar14;
        *(undefined8 *)(param_2 + 0x10) = uVar13;
        *(int *)(param_2 + 0x20) = (int)uVar7;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


