// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<bool(*&)(StructFieldRemapping::VaryingTemp_const&,StructFieldRemapping::VaryingTemp_const&),StructFieldRemapping::VaryingTemp*>
// Entry Point: 00c5653c
// Size: 1724 bytes
// Signature: void __cdecl __sort<bool(*&)(StructFieldRemapping::VaryingTemp_const&,StructFieldRemapping::VaryingTemp_const&),StructFieldRemapping::VaryingTemp*>(VaryingTemp * param_1, VaryingTemp * param_2, _func_bool_VaryingTemp_ptr_VaryingTemp_ptr * param_3)


/* void std::__ndk1::__sort<bool (*&)(StructFieldRemapping::VaryingTemp const&,
   StructFieldRemapping::VaryingTemp const&),
   StructFieldRemapping::VaryingTemp*>(StructFieldRemapping::VaryingTemp*,
   StructFieldRemapping::VaryingTemp*, bool (*&)(StructFieldRemapping::VaryingTemp const&,
   StructFieldRemapping::VaryingTemp const&)) */

void std::__ndk1::
     __sort<bool(*&)(StructFieldRemapping::VaryingTemp_const&,StructFieldRemapping::VaryingTemp_const&),StructFieldRemapping::VaryingTemp*>
               (VaryingTemp *param_1,VaryingTemp *param_2,
               _func_bool_VaryingTemp_ptr_VaryingTemp_ptr *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
LAB_00c56578:
  puVar11 = (undefined8 *)((long)param_2 + -0x10);
  puVar12 = (undefined8 *)param_1;
LAB_00c56580:
  param_1 = (VaryingTemp *)puVar12;
  uVar10 = (long)param_2 - (long)param_1;
  uVar8 = (long)uVar10 >> 4;
  switch(uVar8) {
  case 0:
  case 1:
    goto switchD_00c56a0c_caseD_0;
  case 2:
    uVar8 = (**(code **)param_3)(puVar11,param_1);
    if ((uVar8 & 1) == 0) goto switchD_00c56a0c_caseD_0;
LAB_00c56a58:
    uVar19 = *(undefined8 *)((long)param_1 + 8);
    uVar18 = *(undefined8 *)param_1;
    uVar20 = *puVar11;
    *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_2 + -8);
    *(undefined8 *)param_1 = uVar20;
    break;
  case 3:
    puVar12 = (undefined8 *)((long)param_1 + 0x10);
    uVar8 = (**(code **)param_3)(puVar12,param_1);
    uVar10 = (**(code **)param_3)(puVar11,puVar12);
    if ((uVar8 & 1) == 0) {
      if ((uVar10 & 1) != 0) {
        uVar19 = *(undefined8 *)((long)param_1 + 0x18);
        uVar18 = *puVar12;
        uVar20 = *puVar11;
        *(undefined8 *)((long)param_1 + 0x18) = *(undefined8 *)((long)param_2 + -8);
        *puVar12 = uVar20;
        *(undefined8 *)((long)param_2 + -8) = uVar19;
        *puVar11 = uVar18;
        goto LAB_00c56b54;
      }
      goto switchD_00c56a0c_caseD_0;
    }
    if ((uVar10 & 1) != 0) goto LAB_00c56a58;
    uVar19 = *(undefined8 *)((long)param_1 + 8);
    uVar18 = *(undefined8 *)param_1;
    *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_1 + 0x18);
    *(undefined8 *)param_1 = *puVar12;
    *(undefined8 *)((long)param_1 + 0x18) = uVar19;
    *puVar12 = uVar18;
    uVar8 = (**(code **)param_3)(puVar11,puVar12);
    if ((uVar8 & 1) == 0) goto switchD_00c56a0c_caseD_0;
    uVar19 = *(undefined8 *)((long)param_1 + 0x18);
    uVar18 = *puVar12;
    uVar20 = *puVar11;
    *(undefined8 *)((long)param_1 + 0x18) = *(undefined8 *)((long)param_2 + -8);
    *puVar12 = uVar20;
    break;
  case 4:
    __sort4<bool(*&)(StructFieldRemapping::VaryingTemp_const&,StructFieldRemapping::VaryingTemp_const&),StructFieldRemapping::VaryingTemp*>
              (param_1,(VaryingTemp *)((long)param_1 + 0x10),(VaryingTemp *)((long)param_1 + 0x20),
               (VaryingTemp *)puVar11,param_3);
    goto switchD_00c56a0c_caseD_0;
  case 5:
    puVar12 = (undefined8 *)((long)param_1 + 0x10);
    puVar13 = (undefined8 *)((long)param_1 + 0x20);
    puVar15 = (undefined8 *)((long)param_1 + 0x30);
    __sort4<bool(*&)(StructFieldRemapping::VaryingTemp_const&,StructFieldRemapping::VaryingTemp_const&),StructFieldRemapping::VaryingTemp*>
              (param_1,(VaryingTemp *)puVar12,(VaryingTemp *)puVar13,(VaryingTemp *)puVar15,param_3)
    ;
    uVar8 = (**(code **)param_3)(puVar11,puVar15);
    if ((uVar8 & 1) != 0) {
      uVar19 = *(undefined8 *)((long)param_1 + 0x38);
      uVar18 = *puVar15;
      uVar20 = *puVar11;
      *(undefined8 *)((long)param_1 + 0x38) = *(undefined8 *)((long)param_2 + -8);
      *puVar15 = uVar20;
      *(undefined8 *)((long)param_2 + -8) = uVar19;
      *puVar11 = uVar18;
      uVar8 = (**(code **)param_3)(puVar15,puVar13);
      if ((uVar8 & 1) != 0) {
        uVar19 = *(undefined8 *)((long)param_1 + 0x28);
        uVar18 = *puVar13;
        *(undefined8 *)((long)param_1 + 0x28) = *(undefined8 *)((long)param_1 + 0x38);
        *puVar13 = *puVar15;
        *(undefined8 *)((long)param_1 + 0x38) = uVar19;
        *puVar15 = uVar18;
        uVar8 = (**(code **)param_3)(puVar13,puVar12);
        if ((uVar8 & 1) != 0) {
          uVar19 = *(undefined8 *)((long)param_1 + 0x18);
          uVar18 = *puVar12;
          *(undefined8 *)((long)param_1 + 0x18) = *(undefined8 *)((long)param_1 + 0x28);
          *puVar12 = *puVar13;
          *(undefined8 *)((long)param_1 + 0x28) = uVar19;
          *puVar13 = uVar18;
LAB_00c56b54:
          puVar12 = (undefined8 *)((long)param_1 + 0x10);
          uVar8 = (**(code **)param_3)(puVar12,param_1);
          if ((uVar8 & 1) != 0) {
            uVar19 = *(undefined8 *)((long)param_1 + 8);
            uVar18 = *(undefined8 *)param_1;
            *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_1 + 0x18);
            *(undefined8 *)param_1 = *puVar12;
            *(undefined8 *)((long)param_1 + 0x18) = uVar19;
            *puVar12 = uVar18;
          }
        }
      }
    }
    goto switchD_00c56a0c_caseD_0;
  default:
    if ((long)uVar10 < 0x1f0) {
      __insertion_sort_3<bool(*&)(StructFieldRemapping::VaryingTemp_const&,StructFieldRemapping::VaryingTemp_const&),StructFieldRemapping::VaryingTemp*>
                (param_1,param_2,param_3);
      goto switchD_00c56a0c_caseD_0;
    }
    uVar1 = uVar8;
    if ((long)uVar8 < 0) {
      uVar1 = uVar8 + 1;
    }
    puVar12 = (undefined8 *)((long)param_1 + (uVar1 & 0x1ffffffffffffffe) * 8);
    if (uVar10 < 0x3e71) {
      uVar8 = (**(code **)param_3)(puVar12,param_1);
      uVar10 = (**(code **)param_3)(puVar11,puVar12);
      if ((uVar8 & 1) == 0) {
        if ((uVar10 & 1) == 0) {
          uVar6 = 0;
        }
        else {
          uVar20 = puVar12[1];
          uVar18 = *puVar12;
          uVar19 = *puVar11;
          puVar12[1] = *(undefined8 *)((long)param_2 + -8);
          *puVar12 = uVar19;
          *(undefined8 *)((long)param_2 + -8) = uVar20;
          *puVar11 = uVar18;
          uVar8 = (**(code **)param_3)(puVar12,param_1);
          if ((uVar8 & 1) == 0) goto LAB_00c56798;
          uVar20 = *(undefined8 *)((long)param_1 + 8);
          uVar18 = *(undefined8 *)param_1;
          uVar6 = 2;
          uVar19 = *puVar12;
          *(undefined8 *)((long)param_1 + 8) = puVar12[1];
          *(undefined8 *)param_1 = uVar19;
          puVar12[1] = uVar20;
          *puVar12 = uVar18;
        }
      }
      else {
        if ((uVar10 & 1) == 0) {
          uVar20 = *(undefined8 *)((long)param_1 + 8);
          uVar18 = *(undefined8 *)param_1;
          uVar19 = *puVar12;
          *(undefined8 *)((long)param_1 + 8) = puVar12[1];
          *(undefined8 *)param_1 = uVar19;
          puVar12[1] = uVar20;
          *puVar12 = uVar18;
          uVar8 = (**(code **)param_3)(puVar11,puVar12);
          if ((uVar8 & 1) == 0) {
LAB_00c56798:
            uVar6 = 1;
            goto LAB_00c567ac;
          }
          uStack_78 = puVar12[1];
          local_80 = *puVar12;
          uVar6 = 2;
          uVar18 = *puVar11;
          puVar12[1] = *(undefined8 *)((long)param_2 + -8);
          *puVar12 = uVar18;
        }
        else {
          uStack_78 = *(undefined8 *)((long)param_1 + 8);
          local_80 = *(undefined8 *)param_1;
          uVar6 = 1;
          uVar18 = *puVar11;
          *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_2 + -8);
          *(undefined8 *)param_1 = uVar18;
        }
        *(undefined8 *)((long)param_2 + -8) = uStack_78;
        *puVar11 = local_80;
      }
    }
    else {
      uVar10 = uVar8 + 3;
      if (-1 < (long)uVar8) {
        uVar10 = uVar8;
      }
      lVar9 = (uVar10 & 0x3ffffffffffffffc) * 4;
      puVar13 = (undefined8 *)((long)param_1 + lVar9);
      puVar15 = (undefined8 *)((long)puVar12 + lVar9);
      uVar6 = __sort4<bool(*&)(StructFieldRemapping::VaryingTemp_const&,StructFieldRemapping::VaryingTemp_const&),StructFieldRemapping::VaryingTemp*>
                        (param_1,(VaryingTemp *)puVar13,(VaryingTemp *)puVar12,
                         (VaryingTemp *)puVar15,param_3);
      uVar8 = (**(code **)param_3)(puVar11,puVar15);
      if ((uVar8 & 1) != 0) {
        uVar20 = puVar15[1];
        uVar18 = *puVar15;
        uVar19 = *puVar11;
        puVar15[1] = *(undefined8 *)((long)param_2 + -8);
        *puVar15 = uVar19;
        *(undefined8 *)((long)param_2 + -8) = uVar20;
        *puVar11 = uVar18;
        uVar8 = (**(code **)param_3)(puVar15,puVar12);
        if ((uVar8 & 1) == 0) {
          uVar6 = uVar6 + 1;
        }
        else {
          uVar20 = puVar12[1];
          uVar18 = *puVar12;
          uVar19 = *puVar15;
          puVar12[1] = puVar15[1];
          *puVar12 = uVar19;
          puVar15[1] = uVar20;
          *puVar15 = uVar18;
          uVar8 = (**(code **)param_3)(puVar12,puVar13);
          if ((uVar8 & 1) == 0) {
            uVar6 = uVar6 + 2;
          }
          else {
            uVar20 = puVar13[1];
            uVar18 = *puVar13;
            uVar19 = *puVar12;
            puVar13[1] = puVar12[1];
            *puVar13 = uVar19;
            puVar12[1] = uVar20;
            *puVar12 = uVar18;
            uVar8 = (**(code **)param_3)(puVar13,param_1);
            if ((uVar8 & 1) == 0) {
              uVar6 = uVar6 + 3;
            }
            else {
              uVar20 = *(undefined8 *)((long)param_1 + 8);
              uVar18 = *(undefined8 *)param_1;
              uVar6 = uVar6 + 4;
              uVar19 = *puVar13;
              *(undefined8 *)((long)param_1 + 8) = puVar13[1];
              *(undefined8 *)param_1 = uVar19;
              puVar13[1] = uVar20;
              *puVar13 = uVar18;
            }
          }
        }
      }
    }
LAB_00c567ac:
    uVar8 = (**(code **)param_3)(param_1,puVar12);
    puVar13 = puVar11;
    if ((uVar8 & 1) == 0) {
      do {
        puVar15 = puVar13;
        puVar13 = puVar15 + -2;
        if (puVar13 == (undefined8 *)param_1) {
          puVar13 = (undefined8 *)((long)param_1 + 0x10);
          uVar8 = (**(code **)param_3)(param_1,puVar11);
          puVar12 = puVar13;
          if ((uVar8 & 1) == 0) goto joined_r0x00c5692c;
          goto LAB_00c5696c;
        }
        uVar8 = (**(code **)param_3)(puVar13,puVar12);
      } while ((uVar8 & 1) == 0);
      uVar20 = *(undefined8 *)((long)param_1 + 8);
      uVar18 = *(undefined8 *)param_1;
      uVar6 = uVar6 + 1;
      uVar19 = *puVar13;
      *(undefined8 *)((long)param_1 + 8) = puVar15[-1];
      *(undefined8 *)param_1 = uVar19;
      puVar15[-1] = uVar20;
      *puVar13 = uVar18;
    }
    puVar15 = (undefined8 *)((long)param_1 + 0x10);
    puVar14 = puVar15;
    if (puVar15 < puVar13) {
      while( true ) {
        puVar15 = puVar14 + -2;
        do {
          puVar16 = puVar15;
          puVar15 = puVar16 + 2;
          uVar8 = (**(code **)param_3)(puVar15,puVar12);
        } while ((uVar8 & 1) != 0);
        puVar14 = puVar16 + 4;
        do {
          puVar17 = puVar13;
          puVar13 = puVar17 + -2;
          uVar8 = (**(code **)param_3)(puVar13,puVar12);
        } while ((uVar8 & 1) == 0);
        if (puVar13 < puVar15) break;
        uVar19 = puVar16[3];
        uVar18 = *puVar15;
        uVar6 = uVar6 + 1;
        puVar2 = puVar13;
        if (puVar15 != puVar12) {
          puVar2 = puVar12;
        }
        uVar20 = *puVar13;
        puVar16[3] = puVar17[-1];
        *puVar15 = uVar20;
        puVar17[-1] = uVar19;
        *puVar13 = uVar18;
        puVar12 = puVar2;
      }
    }
    if ((puVar15 != puVar12) && (uVar8 = (**(code **)param_3)(puVar12,puVar15), (uVar8 & 1) != 0)) {
      uVar20 = puVar15[1];
      uVar18 = *puVar15;
      uVar6 = uVar6 + 1;
      uVar19 = *puVar12;
      puVar15[1] = puVar12[1];
      *puVar15 = uVar19;
      puVar12[1] = uVar20;
      *puVar12 = uVar18;
    }
    if (uVar6 == 0) {
      bVar4 = __insertion_sort_incomplete<bool(*&)(StructFieldRemapping::VaryingTemp_const&,StructFieldRemapping::VaryingTemp_const&),StructFieldRemapping::VaryingTemp*>
                        (param_1,(VaryingTemp *)puVar15,param_3);
      bVar5 = __insertion_sort_incomplete<bool(*&)(StructFieldRemapping::VaryingTemp_const&,StructFieldRemapping::VaryingTemp_const&),StructFieldRemapping::VaryingTemp*>
                        ((VaryingTemp *)(puVar15 + 2),param_2,param_3);
      if (bVar5) goto LAB_00c569ec;
      puVar12 = puVar15 + 2;
      if (bVar4) goto LAB_00c56580;
    }
    if ((long)param_2 - (long)puVar15 <= (long)puVar15 - (long)param_1) {
      __sort<bool(*&)(StructFieldRemapping::VaryingTemp_const&,StructFieldRemapping::VaryingTemp_const&),StructFieldRemapping::VaryingTemp*>
                ((VaryingTemp *)(puVar15 + 2),param_2,param_3);
      param_2 = (VaryingTemp *)puVar15;
      goto LAB_00c56578;
    }
    __sort<bool(*&)(StructFieldRemapping::VaryingTemp_const&,StructFieldRemapping::VaryingTemp_const&),StructFieldRemapping::VaryingTemp*>
              (param_1,(VaryingTemp *)puVar15,param_3);
    puVar12 = puVar15 + 2;
    goto LAB_00c56580;
  }
  *(undefined8 *)((long)param_2 + -8) = uVar19;
  *puVar11 = uVar18;
  goto switchD_00c56a0c_caseD_0;
joined_r0x00c5692c:
  if (puVar12 == puVar11) goto switchD_00c56a0c_caseD_0;
  uVar8 = (**(code **)param_3)(param_1,puVar12);
  if ((uVar8 & 1) != 0) goto LAB_00c56954;
  puVar12 = puVar12 + 2;
  goto joined_r0x00c5692c;
LAB_00c56954:
  uVar20 = puVar12[1];
  uVar18 = *puVar12;
  uVar19 = *puVar11;
  puVar13 = puVar12 + 2;
  puVar12[1] = *(undefined8 *)((long)param_2 + -8);
  *puVar12 = uVar19;
  *(undefined8 *)((long)param_2 + -8) = uVar20;
  *puVar11 = uVar18;
LAB_00c5696c:
  puVar15 = puVar11;
  if (puVar13 == puVar11) goto switchD_00c56a0c_caseD_0;
  while( true ) {
    puVar12 = puVar13 + -2;
    do {
      puVar14 = puVar12;
      puVar12 = puVar14 + 2;
      uVar8 = (**(code **)param_3)(param_1,puVar12);
    } while ((uVar8 & 1) == 0);
    puVar13 = puVar14 + 4;
    do {
      puVar16 = puVar15;
      puVar15 = puVar16 + -2;
      uVar8 = (**(code **)param_3)(param_1,puVar15);
    } while ((uVar8 & 1) != 0);
    if (puVar15 <= puVar12) break;
    uVar20 = puVar14[3];
    uVar18 = *puVar12;
    uVar19 = *puVar15;
    puVar14[3] = puVar16[-1];
    *puVar12 = uVar19;
    puVar16[-1] = uVar20;
    *puVar15 = uVar18;
  }
  goto LAB_00c56580;
LAB_00c569ec:
  param_2 = (VaryingTemp *)puVar15;
  if (bVar4) {
switchD_00c56a0c_caseD_0:
    if (*(long *)(lVar3 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  goto LAB_00c56578;
}


