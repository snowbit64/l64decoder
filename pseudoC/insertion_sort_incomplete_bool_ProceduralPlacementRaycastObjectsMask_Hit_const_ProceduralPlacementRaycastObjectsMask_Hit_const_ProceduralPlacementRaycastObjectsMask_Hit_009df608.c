// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<bool(*&)(ProceduralPlacementRaycastObjectsMask::Hit_const&,ProceduralPlacementRaycastObjectsMask::Hit_const&),ProceduralPlacementRaycastObjectsMask::Hit*>
// Entry Point: 009df608
// Size: 1192 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<bool(*&)(ProceduralPlacementRaycastObjectsMask::Hit_const&,ProceduralPlacementRaycastObjectsMask::Hit_const&),ProceduralPlacementRaycastObjectsMask::Hit*>(Hit * param_1, Hit * param_2, _func_bool_Hit_ptr_Hit_ptr * param_3)


/* bool std::__ndk1::__insertion_sort_incomplete<bool
   (*&)(ProceduralPlacementRaycastObjectsMask::Hit const&,
   ProceduralPlacementRaycastObjectsMask::Hit const&),
   ProceduralPlacementRaycastObjectsMask::Hit*>(ProceduralPlacementRaycastObjectsMask::Hit*,
   ProceduralPlacementRaycastObjectsMask::Hit*, bool (*&)(ProceduralPlacementRaycastObjectsMask::Hit
   const&, ProceduralPlacementRaycastObjectsMask::Hit const&)) */

bool std::__ndk1::
     __insertion_sort_incomplete<bool(*&)(ProceduralPlacementRaycastObjectsMask::Hit_const&,ProceduralPlacementRaycastObjectsMask::Hit_const&),ProceduralPlacementRaycastObjectsMask::Hit*>
               (Hit *param_1,Hit *param_2,_func_bool_Hit_ptr_Hit_ptr *param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  long local_68;
  
  lVar1 = tpidr_el0;
  uVar5 = ((long)param_2 - (long)param_1 >> 3) * -0x3333333333333333;
  local_68 = *(long *)(lVar1 + 0x28);
  if (uVar5 < 6) {
    bVar3 = true;
    switch(uVar5) {
    default:
      goto switchD_009df674_caseD_0;
    case 2:
      puVar10 = (undefined8 *)(param_2 + -0x28);
      uVar5 = (**(code **)param_3)(puVar10,param_1);
      if ((uVar5 & 1) != 0) {
        uVar17 = *puVar10;
        uVar16 = *(undefined8 *)(param_2 + -0x10);
        uVar9 = *(undefined8 *)(param_2 + -0x18);
        bVar3 = true;
        uVar19 = *(undefined8 *)(param_1 + 8);
        uVar18 = *(undefined8 *)param_1;
        uVar21 = *(undefined8 *)(param_1 + 0x18);
        uVar20 = *(undefined8 *)(param_1 + 0x10);
        uVar8 = *(undefined4 *)(param_2 + -8);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + -0x20);
        *(undefined8 *)param_1 = uVar17;
        *(undefined8 *)(param_1 + 0x18) = uVar16;
        *(undefined8 *)(param_1 + 0x10) = uVar9;
        uVar9 = *(undefined8 *)(param_1 + 0x20);
        *(undefined4 *)(param_1 + 0x20) = uVar8;
        *(undefined8 *)(param_2 + -0x20) = uVar19;
        *puVar10 = uVar18;
        *(undefined8 *)(param_2 + -0x10) = uVar21;
        *(undefined8 *)(param_2 + -0x18) = uVar20;
        *(int *)(param_2 + -8) = (int)uVar9;
        goto switchD_009df674_caseD_0;
      }
      break;
    case 3:
      puVar10 = (undefined8 *)(param_1 + 0x28);
      puVar11 = (undefined8 *)(param_2 + -0x28);
      uVar5 = (**(code **)param_3)(puVar10,param_1);
      uVar4 = (**(code **)param_3)(puVar11,puVar10);
      if ((uVar5 & 1) != 0) {
        if ((uVar4 & 1) == 0) {
          uVar18 = *(undefined8 *)(param_1 + 8);
          uVar17 = *(undefined8 *)param_1;
          uVar16 = *(undefined8 *)(param_1 + 0x18);
          uVar9 = *(undefined8 *)(param_1 + 0x10);
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x30);
          *(undefined8 *)param_1 = *puVar10;
          *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x40);
          *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x38);
          *(undefined8 *)(param_1 + 0x30) = uVar18;
          *puVar10 = uVar17;
          *(undefined8 *)(param_1 + 0x40) = uVar16;
          *(undefined8 *)(param_1 + 0x38) = uVar9;
          uVar9 = *(undefined8 *)(param_1 + 0x20);
          *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x48);
          *(int *)(param_1 + 0x48) = (int)uVar9;
          uVar5 = (**(code **)param_3)(puVar11,puVar10);
          if ((uVar5 & 1) == 0) break;
          uVar17 = *puVar11;
          uVar16 = *(undefined8 *)(param_2 + -0x10);
          uVar9 = *(undefined8 *)(param_2 + -0x18);
          uVar19 = *(undefined8 *)(param_1 + 0x30);
          uVar18 = *puVar10;
          uVar21 = *(undefined8 *)(param_1 + 0x40);
          uVar20 = *(undefined8 *)(param_1 + 0x38);
          uVar8 = *(undefined4 *)(param_2 + -8);
          *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + -0x20);
          *puVar10 = uVar17;
          *(undefined8 *)(param_1 + 0x40) = uVar16;
          *(undefined8 *)(param_1 + 0x38) = uVar9;
          uVar7 = (undefined4)*(undefined8 *)(param_1 + 0x48);
          *(undefined4 *)(param_1 + 0x48) = uVar8;
        }
        else {
          uVar17 = *puVar11;
          uVar16 = *(undefined8 *)(param_2 + -0x10);
          uVar9 = *(undefined8 *)(param_2 + -0x18);
          uVar19 = *(undefined8 *)(param_1 + 8);
          uVar18 = *(undefined8 *)param_1;
          uVar21 = *(undefined8 *)(param_1 + 0x18);
          uVar20 = *(undefined8 *)(param_1 + 0x10);
          uVar8 = *(undefined4 *)(param_2 + -8);
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + -0x20);
          *(undefined8 *)param_1 = uVar17;
          *(undefined8 *)(param_1 + 0x18) = uVar16;
          *(undefined8 *)(param_1 + 0x10) = uVar9;
          uVar7 = (undefined4)*(undefined8 *)(param_1 + 0x20);
          *(undefined4 *)(param_1 + 0x20) = uVar8;
        }
        bVar3 = true;
        *(undefined8 *)(param_2 + -0x20) = uVar19;
        *puVar11 = uVar18;
        *(undefined8 *)(param_2 + -0x10) = uVar21;
        *(undefined8 *)(param_2 + -0x18) = uVar20;
        *(undefined4 *)(param_2 + -8) = uVar7;
        goto switchD_009df674_caseD_0;
      }
      if ((uVar4 & 1) != 0) {
        uVar17 = *puVar11;
        uVar16 = *(undefined8 *)(param_2 + -0x10);
        uVar9 = *(undefined8 *)(param_2 + -0x18);
        uVar19 = *(undefined8 *)(param_1 + 0x30);
        uVar18 = *puVar10;
        uVar21 = *(undefined8 *)(param_1 + 0x40);
        uVar20 = *(undefined8 *)(param_1 + 0x38);
        uVar8 = *(undefined4 *)(param_2 + -8);
        *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + -0x20);
        *puVar10 = uVar17;
        *(undefined8 *)(param_1 + 0x40) = uVar16;
        *(undefined8 *)(param_1 + 0x38) = uVar9;
        uVar9 = *(undefined8 *)(param_1 + 0x48);
        *(undefined4 *)(param_1 + 0x48) = uVar8;
        *(undefined8 *)(param_2 + -0x20) = uVar19;
        *puVar11 = uVar18;
        *(undefined8 *)(param_2 + -0x10) = uVar21;
        *(undefined8 *)(param_2 + -0x18) = uVar20;
        *(int *)(param_2 + -8) = (int)uVar9;
LAB_009df870:
        puVar10 = (undefined8 *)(param_1 + 0x28);
        uVar5 = (**(code **)param_3)(puVar10,param_1);
        if ((uVar5 & 1) != 0) {
          bVar3 = true;
          uVar18 = *(undefined8 *)(param_1 + 8);
          uVar17 = *(undefined8 *)param_1;
          uVar16 = *(undefined8 *)(param_1 + 0x18);
          uVar9 = *(undefined8 *)(param_1 + 0x10);
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x30);
          *(undefined8 *)param_1 = *puVar10;
          *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x40);
          *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x38);
          *(undefined8 *)(param_1 + 0x30) = uVar18;
          *puVar10 = uVar17;
          *(undefined8 *)(param_1 + 0x40) = uVar16;
          *(undefined8 *)(param_1 + 0x38) = uVar9;
          uVar9 = *(undefined8 *)(param_1 + 0x20);
          *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x48);
          *(int *)(param_1 + 0x48) = (int)uVar9;
          goto switchD_009df674_caseD_0;
        }
      }
      break;
    case 4:
      __sort4<bool(*&)(ProceduralPlacementRaycastObjectsMask::Hit_const&,ProceduralPlacementRaycastObjectsMask::Hit_const&),ProceduralPlacementRaycastObjectsMask::Hit*>
                (param_1,param_1 + 0x28,param_1 + 0x50,param_2 + -0x28,param_3);
      break;
    case 5:
      puVar10 = (undefined8 *)(param_1 + 0x28);
      puVar11 = (undefined8 *)(param_1 + 0x50);
      puVar6 = (undefined8 *)(param_1 + 0x78);
      puVar12 = (undefined8 *)(param_2 + -0x28);
      __sort4<bool(*&)(ProceduralPlacementRaycastObjectsMask::Hit_const&,ProceduralPlacementRaycastObjectsMask::Hit_const&),ProceduralPlacementRaycastObjectsMask::Hit*>
                (param_1,(Hit *)puVar10,(Hit *)puVar11,(Hit *)puVar6,param_3);
      uVar5 = (**(code **)param_3)(puVar12,puVar6);
      if ((uVar5 & 1) != 0) {
        uVar17 = *puVar12;
        uVar16 = *(undefined8 *)(param_2 + -0x10);
        uVar9 = *(undefined8 *)(param_2 + -0x18);
        uVar19 = *(undefined8 *)(param_1 + 0x80);
        uVar18 = *puVar6;
        uVar21 = *(undefined8 *)(param_1 + 0x90);
        uVar20 = *(undefined8 *)(param_1 + 0x88);
        uVar8 = *(undefined4 *)(param_2 + -8);
        *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + -0x20);
        *puVar6 = uVar17;
        *(undefined8 *)(param_1 + 0x90) = uVar16;
        *(undefined8 *)(param_1 + 0x88) = uVar9;
        uVar9 = *(undefined8 *)(param_1 + 0x98);
        *(undefined4 *)(param_1 + 0x98) = uVar8;
        *(undefined8 *)(param_2 + -0x20) = uVar19;
        *puVar12 = uVar18;
        *(undefined8 *)(param_2 + -0x10) = uVar21;
        *(undefined8 *)(param_2 + -0x18) = uVar20;
        *(int *)(param_2 + -8) = (int)uVar9;
        uVar5 = (**(code **)param_3)(puVar6,puVar11);
        if ((uVar5 & 1) != 0) {
          uVar18 = *(undefined8 *)(param_1 + 0x58);
          uVar17 = *puVar11;
          uVar16 = *(undefined8 *)(param_1 + 0x68);
          uVar9 = *(undefined8 *)(param_1 + 0x60);
          *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x80);
          *puVar11 = *puVar6;
          *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x90);
          *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x88);
          *(undefined8 *)(param_1 + 0x80) = uVar18;
          *puVar6 = uVar17;
          *(undefined8 *)(param_1 + 0x90) = uVar16;
          *(undefined8 *)(param_1 + 0x88) = uVar9;
          uVar9 = *(undefined8 *)(param_1 + 0x70);
          *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x98);
          *(int *)(param_1 + 0x98) = (int)uVar9;
          uVar5 = (**(code **)param_3)(puVar11,puVar10);
          if ((uVar5 & 1) != 0) {
            uVar18 = *(undefined8 *)(param_1 + 0x30);
            uVar17 = *puVar10;
            uVar16 = *(undefined8 *)(param_1 + 0x40);
            uVar9 = *(undefined8 *)(param_1 + 0x38);
            *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x58);
            *puVar10 = *puVar11;
            *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x68);
            *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x60);
            *(undefined8 *)(param_1 + 0x58) = uVar18;
            *puVar11 = uVar17;
            *(undefined8 *)(param_1 + 0x68) = uVar16;
            *(undefined8 *)(param_1 + 0x60) = uVar9;
            uVar9 = *(undefined8 *)(param_1 + 0x48);
            *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x70);
            *(int *)(param_1 + 0x70) = (int)uVar9;
            goto LAB_009df870;
          }
        }
      }
    }
  }
  else {
    puVar10 = (undefined8 *)(param_1 + 0x28);
    puVar11 = (undefined8 *)(param_1 + 0x50);
    uVar5 = (**(code **)param_3)(puVar10,param_1);
    uVar4 = (**(code **)param_3)(puVar11,puVar10);
    if ((uVar5 & 1) == 0) {
      if ((uVar4 & 1) != 0) {
        uVar18 = *(undefined8 *)(param_1 + 0x30);
        uVar17 = *puVar10;
        uVar16 = *(undefined8 *)(param_1 + 0x40);
        uVar9 = *(undefined8 *)(param_1 + 0x38);
        *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x58);
        *puVar10 = *puVar11;
        *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x68);
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x60);
        *(undefined8 *)(param_1 + 0x58) = uVar18;
        *puVar11 = uVar17;
        *(undefined8 *)(param_1 + 0x68) = uVar16;
        *(undefined8 *)(param_1 + 0x60) = uVar9;
        uVar9 = *(undefined8 *)(param_1 + 0x48);
        *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x70);
        *(int *)(param_1 + 0x70) = (int)uVar9;
        uVar5 = (**(code **)param_3)(puVar10,param_1);
        if ((uVar5 & 1) != 0) {
          uVar18 = *(undefined8 *)(param_1 + 8);
          uVar17 = *(undefined8 *)param_1;
          uVar16 = *(undefined8 *)(param_1 + 0x18);
          uVar9 = *(undefined8 *)(param_1 + 0x10);
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x30);
          *(undefined8 *)param_1 = *puVar10;
          *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x40);
          *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x38);
          *(undefined8 *)(param_1 + 0x30) = uVar18;
          *puVar10 = uVar17;
          *(undefined8 *)(param_1 + 0x40) = uVar16;
          *(undefined8 *)(param_1 + 0x38) = uVar9;
          uVar9 = *(undefined8 *)(param_1 + 0x20);
          *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x48);
          *(int *)(param_1 + 0x48) = (int)uVar9;
        }
      }
    }
    else {
      if ((uVar4 & 1) == 0) {
        uVar18 = *(undefined8 *)(param_1 + 8);
        uVar17 = *(undefined8 *)param_1;
        uVar16 = *(undefined8 *)(param_1 + 0x18);
        uVar9 = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x30);
        *(undefined8 *)param_1 = *puVar10;
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x40);
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x38);
        *(undefined8 *)(param_1 + 0x30) = uVar18;
        *puVar10 = uVar17;
        *(undefined8 *)(param_1 + 0x40) = uVar16;
        *(undefined8 *)(param_1 + 0x38) = uVar9;
        uVar9 = *(undefined8 *)(param_1 + 0x20);
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x48);
        *(int *)(param_1 + 0x48) = (int)uVar9;
        uVar5 = (**(code **)param_3)(puVar11,puVar10);
        if ((uVar5 & 1) == 0) goto LAB_009df9b0;
        uVar18 = *(undefined8 *)(param_1 + 0x30);
        uVar17 = *puVar10;
        uVar16 = *(undefined8 *)(param_1 + 0x40);
        uVar9 = *(undefined8 *)(param_1 + 0x38);
        *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x58);
        *puVar10 = *puVar11;
        *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x68);
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x60);
        uVar8 = (undefined4)*(undefined8 *)(param_1 + 0x48);
        *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x70);
      }
      else {
        uVar18 = *(undefined8 *)(param_1 + 8);
        uVar17 = *(undefined8 *)param_1;
        uVar16 = *(undefined8 *)(param_1 + 0x18);
        uVar9 = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x58);
        *(undefined8 *)param_1 = *puVar11;
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x68);
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x60);
        uVar8 = (undefined4)*(undefined8 *)(param_1 + 0x20);
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x70);
      }
      *(undefined8 *)(param_1 + 0x58) = uVar18;
      *puVar11 = uVar17;
      *(undefined8 *)(param_1 + 0x68) = uVar16;
      *(undefined8 *)(param_1 + 0x60) = uVar9;
      *(undefined4 *)(param_1 + 0x70) = uVar8;
    }
LAB_009df9b0:
    if (param_1 + 0x78 != param_2) {
      lVar13 = 0;
      iVar14 = 0;
      puVar10 = (undefined8 *)(param_1 + 0x78);
      do {
        puVar6 = puVar10;
        uVar5 = (**(code **)param_3)(puVar6,puVar11);
        if ((uVar5 & 1) != 0) {
          uStack_358 = puVar6[1];
          local_360 = *puVar6;
          uStack_348 = puVar6[3];
          uStack_350 = puVar6[2];
          local_340 = puVar6[4];
          lVar2 = lVar13;
          do {
            lVar15 = lVar2;
            *(undefined8 *)(param_1 + lVar15 + 0x80) = *(undefined8 *)(param_1 + lVar15 + 0x58);
            *(undefined8 *)(param_1 + lVar15 + 0x78) = *(undefined8 *)(param_1 + lVar15 + 0x50);
            *(undefined8 *)(param_1 + lVar15 + 0x90) = *(undefined8 *)(param_1 + lVar15 + 0x68);
            *(undefined8 *)(param_1 + lVar15 + 0x88) = *(undefined8 *)(param_1 + lVar15 + 0x60);
            *(undefined4 *)(param_1 + lVar15 + 0x98) = *(undefined4 *)(param_1 + lVar15 + 0x70);
            puVar10 = (undefined8 *)param_1;
            if (lVar15 == -0x50) goto LAB_009df9cc;
            uVar5 = (**(code **)param_3)(&local_360,param_1 + lVar15 + 0x28);
            lVar2 = lVar15 + -0x28;
          } while ((uVar5 & 1) != 0);
          puVar10 = (undefined8 *)(param_1 + lVar15 + 0x50);
LAB_009df9cc:
          iVar14 = iVar14 + 1;
          puVar10[1] = uStack_358;
          *puVar10 = local_360;
          puVar10[3] = uStack_348;
          puVar10[2] = uStack_350;
          *(undefined4 *)(puVar10 + 4) = (undefined4)local_340;
          if (iVar14 == 8) {
            bVar3 = puVar6 + 5 == (undefined8 *)param_2;
            goto switchD_009df674_caseD_0;
          }
        }
        lVar13 = lVar13 + 0x28;
        puVar10 = puVar6 + 5;
        puVar11 = puVar6;
      } while (puVar6 + 5 != (undefined8 *)param_2);
    }
  }
  bVar3 = true;
switchD_009df674_caseD_0:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar3;
}


