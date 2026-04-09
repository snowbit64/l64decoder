// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<bool(*&)(ProceduralPlacementRaycastObjectsMask::Hit_const&,ProceduralPlacementRaycastObjectsMask::Hit_const&),ProceduralPlacementRaycastObjectsMask::Hit*>
// Entry Point: 009de8ec
// Size: 2268 bytes
// Signature: void __cdecl __sort<bool(*&)(ProceduralPlacementRaycastObjectsMask::Hit_const&,ProceduralPlacementRaycastObjectsMask::Hit_const&),ProceduralPlacementRaycastObjectsMask::Hit*>(Hit * param_1, Hit * param_2, _func_bool_Hit_ptr_Hit_ptr * param_3)


/* void std::__ndk1::__sort<bool (*&)(ProceduralPlacementRaycastObjectsMask::Hit const&,
   ProceduralPlacementRaycastObjectsMask::Hit const&),
   ProceduralPlacementRaycastObjectsMask::Hit*>(ProceduralPlacementRaycastObjectsMask::Hit*,
   ProceduralPlacementRaycastObjectsMask::Hit*, bool (*&)(ProceduralPlacementRaycastObjectsMask::Hit
   const&, ProceduralPlacementRaycastObjectsMask::Hit const&)) */

void std::__ndk1::
     __sort<bool(*&)(ProceduralPlacementRaycastObjectsMask::Hit_const&,ProceduralPlacementRaycastObjectsMask::Hit_const&),ProceduralPlacementRaycastObjectsMask::Hit*>
               (Hit *param_1,Hit *param_2,_func_bool_Hit_ptr_Hit_ptr *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  lVar3 = tpidr_el0;
  lVar8 = *(long *)(lVar3 + 0x28);
LAB_009de934:
  puVar12 = (undefined8 *)((long)param_2 + -0x28);
  puVar13 = (undefined8 *)param_1;
LAB_009de93c:
  param_1 = (Hit *)puVar13;
  uVar9 = (long)param_2 - (long)param_1;
  switch(((long)uVar9 >> 3) * -0x3333333333333333) {
  case 0:
  case 1:
    goto switchD_009def34_caseD_0;
  case 2:
    uVar9 = (**(code **)param_3)(puVar12,param_1);
    if ((uVar9 & 1) == 0) goto switchD_009def34_caseD_0;
    break;
  case 3:
    puVar13 = (undefined8 *)((long)param_1 + 0x28);
    uVar9 = (**(code **)param_3)(puVar13,param_1);
    uVar7 = (**(code **)param_3)(puVar12,puVar13);
    if ((uVar9 & 1) == 0) {
      if ((uVar7 & 1) != 0) {
        uVar20 = *(undefined8 *)((long)param_1 + 0x30);
        uVar19 = *puVar13;
        uVar11 = *(undefined8 *)((long)param_1 + 0x40);
        uVar22 = *(undefined8 *)((long)param_1 + 0x38);
        uVar10 = *(undefined8 *)((long)param_1 + 0x48);
        uVar24 = *puVar12;
        uVar23 = *(undefined8 *)((long)param_2 + -0x10);
        uVar21 = *(undefined8 *)((long)param_2 + -0x18);
        uVar2 = *(undefined4 *)((long)param_2 + -8);
        *(undefined8 *)((long)param_1 + 0x30) = *(undefined8 *)((long)param_2 + -0x20);
        *puVar13 = uVar24;
        *(undefined8 *)((long)param_1 + 0x40) = uVar23;
        *(undefined8 *)((long)param_1 + 0x38) = uVar21;
        *(undefined4 *)((long)param_1 + 0x48) = uVar2;
        *(int *)((long)param_2 + -8) = (int)uVar10;
        *(undefined8 *)((long)param_2 + -0x20) = uVar20;
        *puVar12 = uVar19;
        *(undefined8 *)((long)param_2 + -0x10) = uVar11;
        *(undefined8 *)((long)param_2 + -0x18) = uVar22;
        goto LAB_009df0dc;
      }
      goto switchD_009def34_caseD_0;
    }
    if ((uVar7 & 1) == 0) {
      uVar11 = *(undefined8 *)((long)param_1 + 8);
      uVar22 = *(undefined8 *)param_1;
      uVar20 = *(undefined8 *)((long)param_1 + 0x18);
      uVar19 = *(undefined8 *)((long)param_1 + 0x10);
      uVar10 = *(undefined8 *)((long)param_1 + 0x20);
      *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_1 + 0x30);
      *(undefined8 *)param_1 = *puVar13;
      *(undefined8 *)((long)param_1 + 0x18) = *(undefined8 *)((long)param_1 + 0x40);
      *(undefined8 *)((long)param_1 + 0x10) = *(undefined8 *)((long)param_1 + 0x38);
      *(undefined4 *)((long)param_1 + 0x20) = *(undefined4 *)((long)param_1 + 0x48);
      local_70 = (undefined4)uVar10;
      *(undefined8 *)((long)param_1 + 0x30) = uVar11;
      *puVar13 = uVar22;
      *(undefined8 *)((long)param_1 + 0x40) = uVar20;
      *(undefined8 *)((long)param_1 + 0x38) = uVar19;
      *(undefined4 *)((long)param_1 + 0x48) = local_70;
      uVar9 = (**(code **)param_3)(puVar12,puVar13);
      if ((uVar9 & 1) != 0) {
        uVar20 = *(undefined8 *)((long)param_1 + 0x30);
        uVar19 = *puVar13;
        uVar11 = *(undefined8 *)((long)param_1 + 0x40);
        uVar22 = *(undefined8 *)((long)param_1 + 0x38);
        uVar10 = *(undefined8 *)((long)param_1 + 0x48);
        uVar24 = *puVar12;
        uVar23 = *(undefined8 *)((long)param_2 + -0x10);
        uVar21 = *(undefined8 *)((long)param_2 + -0x18);
        uVar2 = *(undefined4 *)((long)param_2 + -8);
        *(undefined8 *)((long)param_1 + 0x30) = *(undefined8 *)((long)param_2 + -0x20);
        *puVar13 = uVar24;
        *(undefined8 *)((long)param_1 + 0x40) = uVar23;
        *(undefined8 *)((long)param_1 + 0x38) = uVar21;
        *(undefined4 *)((long)param_1 + 0x48) = uVar2;
        *(int *)((long)param_2 + -8) = (int)uVar10;
        *(undefined8 *)((long)param_2 + -0x20) = uVar20;
        *puVar12 = uVar19;
        *(undefined8 *)((long)param_2 + -0x10) = uVar11;
        *(undefined8 *)((long)param_2 + -0x18) = uVar22;
      }
      goto switchD_009def34_caseD_0;
    }
    break;
  case 4:
    __sort4<bool(*&)(ProceduralPlacementRaycastObjectsMask::Hit_const&,ProceduralPlacementRaycastObjectsMask::Hit_const&),ProceduralPlacementRaycastObjectsMask::Hit*>
              (param_1,(Hit *)((long)param_1 + 0x28),(Hit *)((long)param_1 + 0x50),(Hit *)puVar12,
               param_3);
    goto switchD_009def34_caseD_0;
  case 5:
    puVar13 = (undefined8 *)((long)param_1 + 0x28);
    puVar14 = (undefined8 *)((long)param_1 + 0x50);
    puVar16 = (undefined8 *)((long)param_1 + 0x78);
    __sort4<bool(*&)(ProceduralPlacementRaycastObjectsMask::Hit_const&,ProceduralPlacementRaycastObjectsMask::Hit_const&),ProceduralPlacementRaycastObjectsMask::Hit*>
              (param_1,(Hit *)puVar13,(Hit *)puVar14,(Hit *)puVar16,param_3);
    uVar9 = (**(code **)param_3)(puVar12,puVar16);
    if ((uVar9 & 1) != 0) {
      uVar20 = *(undefined8 *)((long)param_1 + 0x80);
      uVar19 = *puVar16;
      uVar11 = *(undefined8 *)((long)param_1 + 0x90);
      uVar22 = *(undefined8 *)((long)param_1 + 0x88);
      uVar10 = *(undefined8 *)((long)param_1 + 0x98);
      uVar24 = *puVar12;
      uVar23 = *(undefined8 *)((long)param_2 + -0x10);
      uVar21 = *(undefined8 *)((long)param_2 + -0x18);
      uVar2 = *(undefined4 *)((long)param_2 + -8);
      *(undefined8 *)((long)param_1 + 0x80) = *(undefined8 *)((long)param_2 + -0x20);
      *puVar16 = uVar24;
      *(undefined8 *)((long)param_1 + 0x90) = uVar23;
      *(undefined8 *)((long)param_1 + 0x88) = uVar21;
      *(undefined4 *)((long)param_1 + 0x98) = uVar2;
      *(int *)((long)param_2 + -8) = (int)uVar10;
      *(undefined8 *)((long)param_2 + -0x20) = uVar20;
      *puVar12 = uVar19;
      *(undefined8 *)((long)param_2 + -0x10) = uVar11;
      *(undefined8 *)((long)param_2 + -0x18) = uVar22;
      uVar9 = (**(code **)param_3)(puVar16,puVar14);
      if ((uVar9 & 1) != 0) {
        uVar22 = *(undefined8 *)((long)param_1 + 0x58);
        uVar20 = *puVar14;
        uVar19 = *(undefined8 *)((long)param_1 + 0x68);
        uVar10 = *(undefined8 *)((long)param_1 + 0x60);
        *(undefined8 *)((long)param_1 + 0x58) = *(undefined8 *)((long)param_1 + 0x80);
        *puVar14 = *puVar16;
        *(undefined8 *)((long)param_1 + 0x68) = *(undefined8 *)((long)param_1 + 0x90);
        *(undefined8 *)((long)param_1 + 0x60) = *(undefined8 *)((long)param_1 + 0x88);
        *(undefined8 *)((long)param_1 + 0x80) = uVar22;
        *puVar16 = uVar20;
        *(undefined8 *)((long)param_1 + 0x90) = uVar19;
        *(undefined8 *)((long)param_1 + 0x88) = uVar10;
        uVar10 = *(undefined8 *)((long)param_1 + 0x70);
        *(undefined4 *)((long)param_1 + 0x70) = *(undefined4 *)((long)param_1 + 0x98);
        *(int *)((long)param_1 + 0x98) = (int)uVar10;
        uVar9 = (**(code **)param_3)(puVar14,puVar13);
        if ((uVar9 & 1) != 0) {
          uVar22 = *(undefined8 *)((long)param_1 + 0x30);
          uVar20 = *puVar13;
          uVar19 = *(undefined8 *)((long)param_1 + 0x40);
          uVar10 = *(undefined8 *)((long)param_1 + 0x38);
          *(undefined8 *)((long)param_1 + 0x30) = *(undefined8 *)((long)param_1 + 0x58);
          *puVar13 = *puVar14;
          *(undefined8 *)((long)param_1 + 0x40) = *(undefined8 *)((long)param_1 + 0x68);
          *(undefined8 *)((long)param_1 + 0x38) = *(undefined8 *)((long)param_1 + 0x60);
          *(undefined8 *)((long)param_1 + 0x58) = uVar22;
          *puVar14 = uVar20;
          *(undefined8 *)((long)param_1 + 0x68) = uVar19;
          *(undefined8 *)((long)param_1 + 0x60) = uVar10;
          uVar10 = *(undefined8 *)((long)param_1 + 0x48);
          *(undefined4 *)((long)param_1 + 0x48) = *(undefined4 *)((long)param_1 + 0x70);
          *(int *)((long)param_1 + 0x70) = (int)uVar10;
LAB_009df0dc:
          puVar13 = (undefined8 *)((long)param_1 + 0x28);
          uVar9 = (**(code **)param_3)(puVar13,param_1);
          if ((uVar9 & 1) != 0) {
            uVar11 = *(undefined8 *)((long)param_1 + 8);
            uVar22 = *(undefined8 *)param_1;
            uVar20 = *(undefined8 *)((long)param_1 + 0x18);
            uVar19 = *(undefined8 *)((long)param_1 + 0x10);
            uVar10 = *(undefined8 *)((long)param_1 + 0x20);
            *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_1 + 0x30);
            *(undefined8 *)param_1 = *puVar13;
            *(undefined8 *)((long)param_1 + 0x18) = *(undefined8 *)((long)param_1 + 0x40);
            *(undefined8 *)((long)param_1 + 0x10) = *(undefined8 *)((long)param_1 + 0x38);
            *(undefined4 *)((long)param_1 + 0x20) = *(undefined4 *)((long)param_1 + 0x48);
            local_70 = (undefined4)uVar10;
            *(undefined8 *)((long)param_1 + 0x30) = uVar11;
            *puVar13 = uVar22;
            *(undefined8 *)((long)param_1 + 0x40) = uVar20;
            *(undefined8 *)((long)param_1 + 0x38) = uVar19;
            *(undefined4 *)((long)param_1 + 0x48) = local_70;
          }
        }
      }
    }
    goto switchD_009def34_caseD_0;
  default:
    if ((long)uVar9 < 0x4d8) {
      __insertion_sort_3<bool(*&)(ProceduralPlacementRaycastObjectsMask::Hit_const&,ProceduralPlacementRaycastObjectsMask::Hit_const&),ProceduralPlacementRaycastObjectsMask::Hit*>
                (param_1,param_2,param_3);
      goto switchD_009def34_caseD_0;
    }
    if (uVar9 < 0x9c19) {
      puVar13 = (undefined8 *)((long)param_1 + (ulong)(((uint)uVar9 & 0xffff) / 0x50) * 5 * 8);
      uVar9 = (**(code **)param_3)(puVar13,param_1);
      uVar7 = (**(code **)param_3)(puVar12,puVar13);
      if ((uVar9 & 1) == 0) {
        if ((uVar7 & 1) == 0) {
          uVar6 = 0;
        }
        else {
          uVar24 = puVar13[1];
          uVar21 = *puVar13;
          uVar22 = puVar13[3];
          uVar19 = puVar13[2];
          uVar10 = puVar13[4];
          uVar23 = *puVar12;
          uVar11 = *(undefined8 *)((long)param_2 + -0x10);
          uVar20 = *(undefined8 *)((long)param_2 + -0x18);
          uVar2 = *(undefined4 *)((long)param_2 + -8);
          puVar13[1] = *(undefined8 *)((long)param_2 + -0x20);
          *puVar13 = uVar23;
          puVar13[3] = uVar11;
          puVar13[2] = uVar20;
          *(undefined4 *)(puVar13 + 4) = uVar2;
          local_70 = (undefined4)uVar10;
          *(undefined8 *)((long)param_2 + -0x20) = uVar24;
          *puVar12 = uVar21;
          *(undefined8 *)((long)param_2 + -0x10) = uVar22;
          *(undefined8 *)((long)param_2 + -0x18) = uVar19;
          *(undefined4 *)((long)param_2 + -8) = local_70;
          uVar9 = (**(code **)param_3)(puVar13,param_1);
          if ((uVar9 & 1) == 0) goto LAB_009dec34;
          uVar24 = *(undefined8 *)((long)param_1 + 8);
          uVar21 = *(undefined8 *)param_1;
          uVar22 = *(undefined8 *)((long)param_1 + 0x18);
          uVar19 = *(undefined8 *)((long)param_1 + 0x10);
          uVar6 = 2;
          uVar10 = *(undefined8 *)((long)param_1 + 0x20);
          uVar23 = *puVar13;
          uVar11 = puVar13[3];
          uVar20 = puVar13[2];
          uVar2 = *(undefined4 *)(puVar13 + 4);
          *(undefined8 *)((long)param_1 + 8) = puVar13[1];
          *(undefined8 *)param_1 = uVar23;
          *(undefined8 *)((long)param_1 + 0x18) = uVar11;
          *(undefined8 *)((long)param_1 + 0x10) = uVar20;
          *(undefined4 *)((long)param_1 + 0x20) = uVar2;
          local_70 = (undefined4)uVar10;
          puVar13[1] = uVar24;
          *puVar13 = uVar21;
          puVar13[3] = uVar22;
          puVar13[2] = uVar19;
          *(undefined4 *)(puVar13 + 4) = local_70;
        }
      }
      else {
        if ((uVar7 & 1) == 0) {
          uVar24 = *(undefined8 *)((long)param_1 + 8);
          uVar21 = *(undefined8 *)param_1;
          uVar22 = *(undefined8 *)((long)param_1 + 0x18);
          uVar19 = *(undefined8 *)((long)param_1 + 0x10);
          uVar10 = *(undefined8 *)((long)param_1 + 0x20);
          uVar23 = *puVar13;
          uVar11 = puVar13[3];
          uVar20 = puVar13[2];
          uVar2 = *(undefined4 *)(puVar13 + 4);
          *(undefined8 *)((long)param_1 + 8) = puVar13[1];
          *(undefined8 *)param_1 = uVar23;
          *(undefined8 *)((long)param_1 + 0x18) = uVar11;
          *(undefined8 *)((long)param_1 + 0x10) = uVar20;
          *(undefined4 *)((long)param_1 + 0x20) = uVar2;
          local_70 = (undefined4)uVar10;
          puVar13[1] = uVar24;
          *puVar13 = uVar21;
          puVar13[3] = uVar22;
          puVar13[2] = uVar19;
          *(undefined4 *)(puVar13 + 4) = local_70;
          uVar9 = (**(code **)param_3)(puVar12,puVar13);
          if ((uVar9 & 1) == 0) {
LAB_009dec34:
            uVar6 = 1;
            goto LAB_009dec48;
          }
          uStack_88 = puVar13[1];
          local_90 = *puVar13;
          uStack_78 = puVar13[3];
          uStack_80 = puVar13[2];
          uVar6 = 2;
          local_70 = (undefined4)puVar13[4];
          uVar20 = *puVar12;
          uVar19 = *(undefined8 *)((long)param_2 + -0x10);
          uVar10 = *(undefined8 *)((long)param_2 + -0x18);
          uVar2 = *(undefined4 *)((long)param_2 + -8);
          puVar13[1] = *(undefined8 *)((long)param_2 + -0x20);
          *puVar13 = uVar20;
          puVar13[3] = uVar19;
          puVar13[2] = uVar10;
          *(undefined4 *)(puVar13 + 4) = uVar2;
        }
        else {
          uStack_88 = *(undefined8 *)((long)param_1 + 8);
          local_90 = *(undefined8 *)param_1;
          uStack_78 = *(undefined8 *)((long)param_1 + 0x18);
          uStack_80 = *(undefined8 *)((long)param_1 + 0x10);
          uVar6 = 1;
          local_70 = (undefined4)*(undefined8 *)((long)param_1 + 0x20);
          uVar20 = *puVar12;
          uVar19 = *(undefined8 *)((long)param_2 + -0x10);
          uVar10 = *(undefined8 *)((long)param_2 + -0x18);
          uVar2 = *(undefined4 *)((long)param_2 + -8);
          *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_2 + -0x20);
          *(undefined8 *)param_1 = uVar20;
          *(undefined8 *)((long)param_1 + 0x18) = uVar19;
          *(undefined8 *)((long)param_1 + 0x10) = uVar10;
          *(undefined4 *)((long)param_1 + 0x20) = uVar2;
        }
        *(undefined4 *)((long)param_2 + -8) = local_70;
        *(undefined8 *)((long)param_2 + -0x20) = uStack_88;
        *puVar12 = local_90;
        *(undefined8 *)((long)param_2 + -0x10) = uStack_78;
        *(undefined8 *)((long)param_2 + -0x18) = uStack_80;
      }
    }
    else {
      puVar13 = (undefined8 *)((long)param_1 + (uVar9 / 0x50) * 5 * 8);
      puVar14 = (undefined8 *)((long)param_1 + (uVar9 / 0xa0) * 5 * 8);
      puVar16 = puVar13 + (uVar9 / 0xa0) * 5;
      uVar6 = __sort4<bool(*&)(ProceduralPlacementRaycastObjectsMask::Hit_const&,ProceduralPlacementRaycastObjectsMask::Hit_const&),ProceduralPlacementRaycastObjectsMask::Hit*>
                        (param_1,(Hit *)puVar14,(Hit *)puVar13,(Hit *)puVar16,param_3);
      uVar9 = (**(code **)param_3)(puVar12,puVar16);
      if ((uVar9 & 1) != 0) {
        uVar24 = puVar16[1];
        uVar21 = *puVar16;
        uVar22 = puVar16[3];
        uVar19 = puVar16[2];
        uVar10 = puVar16[4];
        uVar23 = *puVar12;
        uVar11 = *(undefined8 *)((long)param_2 + -0x10);
        uVar20 = *(undefined8 *)((long)param_2 + -0x18);
        uVar2 = *(undefined4 *)((long)param_2 + -8);
        puVar16[1] = *(undefined8 *)((long)param_2 + -0x20);
        *puVar16 = uVar23;
        puVar16[3] = uVar11;
        puVar16[2] = uVar20;
        *(undefined4 *)(puVar16 + 4) = uVar2;
        local_70 = (undefined4)uVar10;
        *(undefined8 *)((long)param_2 + -0x20) = uVar24;
        *puVar12 = uVar21;
        *(undefined8 *)((long)param_2 + -0x10) = uVar22;
        *(undefined8 *)((long)param_2 + -0x18) = uVar19;
        *(undefined4 *)((long)param_2 + -8) = local_70;
        uVar9 = (**(code **)param_3)(puVar16,puVar13);
        if ((uVar9 & 1) == 0) {
          uVar6 = uVar6 + 1;
        }
        else {
          uVar24 = puVar13[1];
          uVar21 = *puVar13;
          uVar22 = puVar13[3];
          uVar19 = puVar13[2];
          uVar10 = puVar13[4];
          uVar23 = *puVar16;
          uVar11 = puVar16[3];
          uVar20 = puVar16[2];
          uVar2 = *(undefined4 *)(puVar16 + 4);
          puVar13[1] = puVar16[1];
          *puVar13 = uVar23;
          puVar13[3] = uVar11;
          puVar13[2] = uVar20;
          *(undefined4 *)(puVar13 + 4) = uVar2;
          local_70 = (undefined4)uVar10;
          puVar16[1] = uVar24;
          *puVar16 = uVar21;
          puVar16[3] = uVar22;
          puVar16[2] = uVar19;
          *(undefined4 *)(puVar16 + 4) = local_70;
          uVar9 = (**(code **)param_3)(puVar13,puVar14);
          if ((uVar9 & 1) == 0) {
            uVar6 = uVar6 + 2;
          }
          else {
            uVar24 = puVar14[1];
            uVar21 = *puVar14;
            uVar22 = puVar14[3];
            uVar19 = puVar14[2];
            uVar10 = puVar14[4];
            uVar23 = *puVar13;
            uVar11 = puVar13[3];
            uVar20 = puVar13[2];
            uVar2 = *(undefined4 *)(puVar13 + 4);
            puVar14[1] = puVar13[1];
            *puVar14 = uVar23;
            puVar14[3] = uVar11;
            puVar14[2] = uVar20;
            *(undefined4 *)(puVar14 + 4) = uVar2;
            local_70 = (undefined4)uVar10;
            puVar13[1] = uVar24;
            *puVar13 = uVar21;
            puVar13[3] = uVar22;
            puVar13[2] = uVar19;
            *(undefined4 *)(puVar13 + 4) = local_70;
            uVar9 = (**(code **)param_3)(puVar14,param_1);
            if ((uVar9 & 1) == 0) {
              uVar6 = uVar6 + 3;
            }
            else {
              uVar24 = *(undefined8 *)((long)param_1 + 8);
              uVar21 = *(undefined8 *)param_1;
              uVar22 = *(undefined8 *)((long)param_1 + 0x18);
              uVar19 = *(undefined8 *)((long)param_1 + 0x10);
              uVar6 = uVar6 + 4;
              uVar10 = *(undefined8 *)((long)param_1 + 0x20);
              uVar23 = *puVar14;
              uVar11 = puVar14[3];
              uVar20 = puVar14[2];
              uVar2 = *(undefined4 *)(puVar14 + 4);
              *(undefined8 *)((long)param_1 + 8) = puVar14[1];
              *(undefined8 *)param_1 = uVar23;
              *(undefined8 *)((long)param_1 + 0x18) = uVar11;
              *(undefined8 *)((long)param_1 + 0x10) = uVar20;
              *(undefined4 *)((long)param_1 + 0x20) = uVar2;
              local_70 = (undefined4)uVar10;
              puVar14[1] = uVar24;
              *puVar14 = uVar21;
              puVar14[3] = uVar22;
              puVar14[2] = uVar19;
              *(undefined4 *)(puVar14 + 4) = local_70;
            }
          }
        }
      }
    }
LAB_009dec48:
    uVar9 = (**(code **)param_3)(param_1,puVar13);
    puVar14 = puVar12;
    if ((uVar9 & 1) == 0) {
      do {
        puVar16 = puVar14;
        puVar14 = puVar16 + -5;
        if (puVar14 == (undefined8 *)param_1) {
          puVar14 = (undefined8 *)((long)param_1 + 0x28);
          uVar9 = (**(code **)param_3)(param_1,puVar12);
          if ((uVar9 & 1) == 0) goto joined_r0x009dee20;
          goto LAB_009dee7c;
        }
        uVar9 = (**(code **)param_3)(puVar14,puVar13);
      } while ((uVar9 & 1) == 0);
      uVar24 = *(undefined8 *)((long)param_1 + 8);
      uVar21 = *(undefined8 *)param_1;
      uVar22 = *(undefined8 *)((long)param_1 + 0x18);
      uVar19 = *(undefined8 *)((long)param_1 + 0x10);
      uVar6 = uVar6 + 1;
      uVar10 = *(undefined8 *)((long)param_1 + 0x20);
      uVar23 = *puVar14;
      uVar11 = puVar16[-2];
      uVar20 = puVar16[-3];
      uVar2 = *(undefined4 *)(puVar16 + -1);
      *(undefined8 *)((long)param_1 + 8) = puVar16[-4];
      *(undefined8 *)param_1 = uVar23;
      *(undefined8 *)((long)param_1 + 0x18) = uVar11;
      *(undefined8 *)((long)param_1 + 0x10) = uVar20;
      *(undefined4 *)((long)param_1 + 0x20) = uVar2;
      local_70 = (undefined4)uVar10;
      puVar16[-4] = uVar24;
      *puVar14 = uVar21;
      puVar16[-2] = uVar22;
      puVar16[-3] = uVar19;
      *(undefined4 *)(puVar16 + -1) = local_70;
    }
    puVar16 = (undefined8 *)((long)param_1 + 0x28);
    puVar15 = puVar16;
    if (puVar16 < puVar14) {
      while( true ) {
        puVar16 = puVar15 + -5;
        do {
          puVar17 = puVar16;
          puVar16 = puVar17 + 5;
          uVar9 = (**(code **)param_3)(puVar16,puVar13);
        } while ((uVar9 & 1) != 0);
        puVar15 = puVar17 + 10;
        do {
          puVar18 = puVar14;
          puVar14 = puVar18 + -5;
          uVar9 = (**(code **)param_3)(puVar14,puVar13);
        } while ((uVar9 & 1) == 0);
        if (puVar14 < puVar16) break;
        uVar22 = puVar17[6];
        uVar20 = *puVar16;
        uVar19 = puVar17[8];
        uVar10 = puVar17[7];
        uVar6 = uVar6 + 1;
        puVar1 = puVar14;
        if (puVar16 != puVar13) {
          puVar1 = puVar13;
        }
        uVar11 = puVar17[9];
        uVar24 = *puVar14;
        uVar23 = puVar18[-2];
        uVar21 = puVar18[-3];
        uVar2 = *(undefined4 *)(puVar18 + -1);
        puVar17[6] = puVar18[-4];
        *puVar16 = uVar24;
        puVar17[8] = uVar23;
        puVar17[7] = uVar21;
        *(undefined4 *)(puVar17 + 9) = uVar2;
        local_70 = (undefined4)uVar11;
        puVar18[-4] = uVar22;
        *puVar14 = uVar20;
        puVar18[-2] = uVar19;
        puVar18[-3] = uVar10;
        *(undefined4 *)(puVar18 + -1) = local_70;
        puVar13 = puVar1;
      }
    }
    if ((puVar16 != puVar13) && (uVar9 = (**(code **)param_3)(puVar13,puVar16), (uVar9 & 1) != 0)) {
      uVar24 = puVar16[1];
      uVar21 = *puVar16;
      uVar22 = puVar16[3];
      uVar19 = puVar16[2];
      uVar6 = uVar6 + 1;
      uVar10 = puVar16[4];
      uVar23 = *puVar13;
      uVar11 = puVar13[3];
      uVar20 = puVar13[2];
      uVar2 = *(undefined4 *)(puVar13 + 4);
      puVar16[1] = puVar13[1];
      *puVar16 = uVar23;
      puVar16[3] = uVar11;
      puVar16[2] = uVar20;
      *(undefined4 *)(puVar16 + 4) = uVar2;
      local_70 = (undefined4)uVar10;
      puVar13[1] = uVar24;
      *puVar13 = uVar21;
      puVar13[3] = uVar22;
      puVar13[2] = uVar19;
      *(undefined4 *)(puVar13 + 4) = local_70;
    }
    if (uVar6 == 0) {
      bVar4 = __insertion_sort_incomplete<bool(*&)(ProceduralPlacementRaycastObjectsMask::Hit_const&,ProceduralPlacementRaycastObjectsMask::Hit_const&),ProceduralPlacementRaycastObjectsMask::Hit*>
                        (param_1,(Hit *)puVar16,param_3);
      bVar5 = __insertion_sort_incomplete<bool(*&)(ProceduralPlacementRaycastObjectsMask::Hit_const&,ProceduralPlacementRaycastObjectsMask::Hit_const&),ProceduralPlacementRaycastObjectsMask::Hit*>
                        ((Hit *)(puVar16 + 5),param_2,param_3);
      if (bVar5) goto LAB_009def14;
      puVar13 = puVar16 + 5;
      if (bVar4) goto LAB_009de93c;
    }
    if (((long)param_2 - (long)puVar16 >> 3) * -0x3333333333333333 <=
        ((long)puVar16 - (long)param_1 >> 3) * -0x3333333333333333) {
      __sort<bool(*&)(ProceduralPlacementRaycastObjectsMask::Hit_const&,ProceduralPlacementRaycastObjectsMask::Hit_const&),ProceduralPlacementRaycastObjectsMask::Hit*>
                ((Hit *)(puVar16 + 5),param_2,param_3);
      param_2 = (Hit *)puVar16;
      goto LAB_009de934;
    }
    __sort<bool(*&)(ProceduralPlacementRaycastObjectsMask::Hit_const&,ProceduralPlacementRaycastObjectsMask::Hit_const&),ProceduralPlacementRaycastObjectsMask::Hit*>
              (param_1,(Hit *)puVar16,param_3);
    puVar13 = puVar16 + 5;
    goto LAB_009de93c;
  }
  uVar24 = *(undefined8 *)((long)param_1 + 8);
  uVar21 = *(undefined8 *)param_1;
  uVar22 = *(undefined8 *)((long)param_1 + 0x18);
  uVar19 = *(undefined8 *)((long)param_1 + 0x10);
  uVar10 = *(undefined8 *)((long)param_1 + 0x20);
  uVar23 = *puVar12;
  uVar11 = *(undefined8 *)((long)param_2 + -0x10);
  uVar20 = *(undefined8 *)((long)param_2 + -0x18);
  uVar2 = *(undefined4 *)((long)param_2 + -8);
  *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_2 + -0x20);
  *(undefined8 *)param_1 = uVar23;
  *(undefined8 *)((long)param_1 + 0x18) = uVar11;
  *(undefined8 *)((long)param_1 + 0x10) = uVar20;
  *(undefined4 *)((long)param_1 + 0x20) = uVar2;
  local_70 = (undefined4)uVar10;
  *(undefined8 *)((long)param_2 + -0x20) = uVar24;
  *puVar12 = uVar21;
  *(undefined8 *)((long)param_2 + -0x10) = uVar22;
  *(undefined8 *)((long)param_2 + -0x18) = uVar19;
  *(undefined4 *)((long)param_2 + -8) = local_70;
  goto switchD_009def34_caseD_0;
joined_r0x009dee20:
  if (puVar14 == puVar12) goto switchD_009def34_caseD_0;
  uVar9 = (**(code **)param_3)(param_1,puVar14);
  if ((uVar9 & 1) != 0) goto LAB_009dee48;
  puVar14 = puVar14 + 5;
  goto joined_r0x009dee20;
LAB_009dee48:
  uVar24 = puVar14[1];
  uVar21 = *puVar14;
  uVar22 = puVar14[3];
  uVar19 = puVar14[2];
  uVar10 = puVar14[4];
  uVar23 = *puVar12;
  uVar11 = *(undefined8 *)((long)param_2 + -0x10);
  uVar20 = *(undefined8 *)((long)param_2 + -0x18);
  uVar2 = *(undefined4 *)((long)param_2 + -8);
  puVar14[1] = *(undefined8 *)((long)param_2 + -0x20);
  *puVar14 = uVar23;
  puVar14[3] = uVar11;
  puVar14[2] = uVar20;
  *(undefined4 *)(puVar14 + 4) = uVar2;
  puVar14 = puVar14 + 5;
  local_70 = (undefined4)uVar10;
  *(undefined8 *)((long)param_2 + -0x20) = uVar24;
  *puVar12 = uVar21;
  *(undefined8 *)((long)param_2 + -0x10) = uVar22;
  *(undefined8 *)((long)param_2 + -0x18) = uVar19;
  *(undefined4 *)((long)param_2 + -8) = local_70;
LAB_009dee7c:
  puVar16 = puVar12;
  if (puVar14 == puVar12) goto switchD_009def34_caseD_0;
  while( true ) {
    puVar13 = puVar14 + -5;
    do {
      puVar15 = puVar13;
      puVar13 = puVar15 + 5;
      uVar9 = (**(code **)param_3)(param_1,puVar13);
    } while ((uVar9 & 1) == 0);
    puVar14 = puVar15 + 10;
    do {
      puVar17 = puVar16;
      puVar16 = puVar17 + -5;
      uVar9 = (**(code **)param_3)(param_1,puVar16);
    } while ((uVar9 & 1) != 0);
    if (puVar16 <= puVar13) break;
    uVar24 = puVar15[6];
    uVar21 = *puVar13;
    uVar22 = puVar15[8];
    uVar19 = puVar15[7];
    uVar10 = puVar15[9];
    uVar23 = *puVar16;
    uVar11 = puVar17[-2];
    uVar20 = puVar17[-3];
    uVar2 = *(undefined4 *)(puVar17 + -1);
    puVar15[6] = puVar17[-4];
    *puVar13 = uVar23;
    puVar15[8] = uVar11;
    puVar15[7] = uVar20;
    *(undefined4 *)(puVar15 + 9) = uVar2;
    local_70 = (undefined4)uVar10;
    puVar17[-4] = uVar24;
    *puVar16 = uVar21;
    puVar17[-2] = uVar22;
    puVar17[-3] = uVar19;
    *(undefined4 *)(puVar17 + -1) = local_70;
  }
  goto LAB_009de93c;
LAB_009def14:
  param_2 = (Hit *)puVar16;
  if (bVar4) {
switchD_009def34_caseD_0:
    if (*(long *)(lVar3 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  goto LAB_009de934;
}


