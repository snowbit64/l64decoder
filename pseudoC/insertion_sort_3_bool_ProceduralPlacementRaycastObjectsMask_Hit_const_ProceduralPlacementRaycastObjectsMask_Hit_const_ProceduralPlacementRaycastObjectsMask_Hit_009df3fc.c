// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_3<bool(*&)(ProceduralPlacementRaycastObjectsMask::Hit_const&,ProceduralPlacementRaycastObjectsMask::Hit_const&),ProceduralPlacementRaycastObjectsMask::Hit*>
// Entry Point: 009df3fc
// Size: 524 bytes
// Signature: void __cdecl __insertion_sort_3<bool(*&)(ProceduralPlacementRaycastObjectsMask::Hit_const&,ProceduralPlacementRaycastObjectsMask::Hit_const&),ProceduralPlacementRaycastObjectsMask::Hit*>(Hit * param_1, Hit * param_2, _func_bool_Hit_ptr_Hit_ptr * param_3)


/* void std::__ndk1::__insertion_sort_3<bool (*&)(ProceduralPlacementRaycastObjectsMask::Hit const&,
   ProceduralPlacementRaycastObjectsMask::Hit const&),
   ProceduralPlacementRaycastObjectsMask::Hit*>(ProceduralPlacementRaycastObjectsMask::Hit*,
   ProceduralPlacementRaycastObjectsMask::Hit*, bool (*&)(ProceduralPlacementRaycastObjectsMask::Hit
   const&, ProceduralPlacementRaycastObjectsMask::Hit const&)) */

void std::__ndk1::
     __insertion_sort_3<bool(*&)(ProceduralPlacementRaycastObjectsMask::Hit_const&,ProceduralPlacementRaycastObjectsMask::Hit_const&),ProceduralPlacementRaycastObjectsMask::Hit*>
               (Hit *param_1,Hit *param_2,_func_bool_Hit_ptr_Hit_ptr *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  puVar5 = (undefined8 *)(param_1 + 0x28);
  puVar9 = (undefined8 *)(param_1 + 0x50);
  uVar3 = (**(code **)param_3)(puVar5,param_1);
  uVar4 = (**(code **)param_3)(puVar9,puVar5);
  if ((uVar3 & 1) == 0) {
    if ((uVar4 & 1) != 0) {
      uVar14 = *(undefined8 *)(param_1 + 0x30);
      uVar13 = *puVar5;
      uVar12 = *(undefined8 *)(param_1 + 0x40);
      uVar8 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x58);
      *puVar5 = *puVar9;
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0x58) = uVar14;
      *puVar9 = uVar13;
      *(undefined8 *)(param_1 + 0x68) = uVar12;
      *(undefined8 *)(param_1 + 0x60) = uVar8;
      uVar8 = *(undefined8 *)(param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x70);
      *(int *)(param_1 + 0x70) = (int)uVar8;
      uVar3 = (**(code **)param_3)(puVar5,param_1);
      if ((uVar3 & 1) != 0) {
        uVar14 = *(undefined8 *)(param_1 + 8);
        uVar13 = *(undefined8 *)param_1;
        uVar12 = *(undefined8 *)(param_1 + 0x18);
        uVar8 = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x30);
        *(undefined8 *)param_1 = *puVar5;
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x40);
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x38);
        *(undefined8 *)(param_1 + 0x30) = uVar14;
        *puVar5 = uVar13;
        *(undefined8 *)(param_1 + 0x40) = uVar12;
        *(undefined8 *)(param_1 + 0x38) = uVar8;
        uVar8 = *(undefined8 *)(param_1 + 0x20);
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x48);
        *(int *)(param_1 + 0x48) = (int)uVar8;
      }
    }
  }
  else {
    if ((uVar4 & 1) == 0) {
      uVar14 = *(undefined8 *)(param_1 + 8);
      uVar13 = *(undefined8 *)param_1;
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)param_1 = *puVar5;
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x30) = uVar14;
      *puVar5 = uVar13;
      *(undefined8 *)(param_1 + 0x40) = uVar12;
      *(undefined8 *)(param_1 + 0x38) = uVar8;
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x48);
      *(int *)(param_1 + 0x48) = (int)uVar8;
      uVar3 = (**(code **)param_3)(puVar9,puVar5);
      if ((uVar3 & 1) == 0) goto LAB_009df530;
      uVar14 = *(undefined8 *)(param_1 + 0x30);
      uVar13 = *puVar5;
      uVar12 = *(undefined8 *)(param_1 + 0x40);
      uVar8 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x58);
      *puVar5 = *puVar9;
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x60);
      uVar7 = (undefined4)*(undefined8 *)(param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x70);
    }
    else {
      uVar14 = *(undefined8 *)(param_1 + 8);
      uVar13 = *(undefined8 *)param_1;
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x58);
      *(undefined8 *)param_1 = *puVar9;
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x60);
      uVar7 = (undefined4)*(undefined8 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x70);
    }
    *(undefined8 *)(param_1 + 0x58) = uVar14;
    *puVar9 = uVar13;
    *(undefined8 *)(param_1 + 0x68) = uVar12;
    *(undefined8 *)(param_1 + 0x60) = uVar8;
    *(undefined4 *)(param_1 + 0x70) = uVar7;
  }
LAB_009df530:
  if (param_1 + 0x78 != param_2) {
    lVar10 = 0;
    puVar5 = (undefined8 *)(param_1 + 0x78);
    do {
      puVar6 = puVar5;
      uVar3 = (**(code **)param_3)(puVar6,puVar9);
      if ((uVar3 & 1) != 0) {
        uStack_168 = puVar6[1];
        local_170 = *puVar6;
        uStack_158 = puVar6[3];
        uStack_160 = puVar6[2];
        local_150 = puVar6[4];
        lVar2 = lVar10;
        do {
          lVar11 = lVar2;
          *(undefined8 *)(param_1 + lVar11 + 0x80) = *(undefined8 *)(param_1 + lVar11 + 0x58);
          *(undefined8 *)(param_1 + lVar11 + 0x78) = *(undefined8 *)(param_1 + lVar11 + 0x50);
          *(undefined8 *)(param_1 + lVar11 + 0x90) = *(undefined8 *)(param_1 + lVar11 + 0x68);
          *(undefined8 *)(param_1 + lVar11 + 0x88) = *(undefined8 *)(param_1 + lVar11 + 0x60);
          *(undefined4 *)(param_1 + lVar11 + 0x98) = *(undefined4 *)(param_1 + lVar11 + 0x70);
          puVar5 = (undefined8 *)param_1;
          if (lVar11 == -0x50) goto LAB_009df548;
          uVar3 = (**(code **)param_3)(&local_170,param_1 + lVar11 + 0x28);
          lVar2 = lVar11 + -0x28;
        } while ((uVar3 & 1) != 0);
        puVar5 = (undefined8 *)(param_1 + lVar11 + 0x50);
LAB_009df548:
        puVar5[1] = uStack_168;
        *puVar5 = local_170;
        puVar5[3] = uStack_158;
        puVar5[2] = uStack_160;
        *(undefined4 *)(puVar5 + 4) = (undefined4)local_150;
      }
      lVar10 = lVar10 + 0x28;
      puVar5 = puVar6 + 5;
      puVar9 = puVar6;
    } while (puVar6 + 5 != (undefined8 *)param_2);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


