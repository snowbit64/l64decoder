// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<bool(*&)(StructFieldRemapping::VaryingTemp_const&,StructFieldRemapping::VaryingTemp_const&),StructFieldRemapping::VaryingTemp*>
// Entry Point: 00c56f54
// Size: 944 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<bool(*&)(StructFieldRemapping::VaryingTemp_const&,StructFieldRemapping::VaryingTemp_const&),StructFieldRemapping::VaryingTemp*>(VaryingTemp * param_1, VaryingTemp * param_2, _func_bool_VaryingTemp_ptr_VaryingTemp_ptr * param_3)


/* bool std::__ndk1::__insertion_sort_incomplete<bool (*&)(StructFieldRemapping::VaryingTemp const&,
   StructFieldRemapping::VaryingTemp const&),
   StructFieldRemapping::VaryingTemp*>(StructFieldRemapping::VaryingTemp*,
   StructFieldRemapping::VaryingTemp*, bool (*&)(StructFieldRemapping::VaryingTemp const&,
   StructFieldRemapping::VaryingTemp const&)) */

bool std::__ndk1::
     __insertion_sort_incomplete<bool(*&)(StructFieldRemapping::VaryingTemp_const&,StructFieldRemapping::VaryingTemp_const&),StructFieldRemapping::VaryingTemp*>
               (VaryingTemp *param_1,VaryingTemp *param_2,
               _func_bool_VaryingTemp_ptr_VaryingTemp_ptr *param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 local_170;
  undefined8 uStack_168;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar5 = (long)param_2 - (long)param_1 >> 4;
  if (uVar5 < 6) {
    bVar3 = true;
    switch(uVar5) {
    default:
      goto switchD_00c56fb4_caseD_0;
    case 2:
      puVar7 = (undefined8 *)(param_2 + -0x10);
      uVar5 = (**(code **)param_3)(puVar7,param_1);
      if ((uVar5 & 1) != 0) {
        uVar13 = *puVar7;
        bVar3 = true;
        uVar15 = *(undefined8 *)(param_1 + 8);
        uVar14 = *(undefined8 *)param_1;
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + -8);
        *(undefined8 *)param_1 = uVar13;
        *(undefined8 *)(param_2 + -8) = uVar15;
        *puVar7 = uVar14;
        goto switchD_00c56fb4_caseD_0;
      }
      break;
    case 3:
      puVar7 = (undefined8 *)(param_1 + 0x10);
      puVar8 = (undefined8 *)(param_2 + -0x10);
      uVar5 = (**(code **)param_3)(puVar7,param_1);
      uVar4 = (**(code **)param_3)(puVar8,puVar7);
      if ((uVar5 & 1) == 0) {
        if ((uVar4 & 1) != 0) {
          uVar13 = *puVar8;
          uVar15 = *(undefined8 *)(param_1 + 0x18);
          uVar14 = *puVar7;
          *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + -8);
          *puVar7 = uVar13;
          *(undefined8 *)(param_2 + -8) = uVar15;
          *puVar8 = uVar14;
LAB_00c57150:
          puVar7 = (undefined8 *)(param_1 + 0x10);
          uVar5 = (**(code **)param_3)(puVar7,param_1);
          if ((uVar5 & 1) != 0) {
            bVar3 = true;
            uVar14 = *(undefined8 *)(param_1 + 8);
            uVar13 = *(undefined8 *)param_1;
            *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x18);
            *(undefined8 *)param_1 = *puVar7;
            *(undefined8 *)(param_1 + 0x18) = uVar14;
            *puVar7 = uVar13;
            goto switchD_00c56fb4_caseD_0;
          }
        }
      }
      else {
        if ((uVar4 & 1) != 0) {
          uVar13 = *puVar8;
          bVar3 = true;
          uVar15 = *(undefined8 *)(param_1 + 8);
          uVar14 = *(undefined8 *)param_1;
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + -8);
          *(undefined8 *)param_1 = uVar13;
          *(undefined8 *)(param_2 + -8) = uVar15;
          *puVar8 = uVar14;
          goto switchD_00c56fb4_caseD_0;
        }
        uVar14 = *(undefined8 *)(param_1 + 8);
        uVar13 = *(undefined8 *)param_1;
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x18);
        *(undefined8 *)param_1 = *puVar7;
        *(undefined8 *)(param_1 + 0x18) = uVar14;
        *puVar7 = uVar13;
        uVar5 = (**(code **)param_3)(puVar8,puVar7);
        if ((uVar5 & 1) != 0) {
          uVar13 = *puVar8;
          bVar3 = true;
          uVar15 = *(undefined8 *)(param_1 + 0x18);
          uVar14 = *puVar7;
          *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + -8);
          *puVar7 = uVar13;
          *(undefined8 *)(param_2 + -8) = uVar15;
          *puVar8 = uVar14;
          goto switchD_00c56fb4_caseD_0;
        }
      }
      break;
    case 4:
      __sort4<bool(*&)(StructFieldRemapping::VaryingTemp_const&,StructFieldRemapping::VaryingTemp_const&),StructFieldRemapping::VaryingTemp*>
                (param_1,param_1 + 0x10,param_1 + 0x20,param_2 + -0x10,param_3);
      break;
    case 5:
      puVar7 = (undefined8 *)(param_1 + 0x10);
      puVar8 = (undefined8 *)(param_1 + 0x20);
      puVar6 = (undefined8 *)(param_1 + 0x30);
      puVar9 = (undefined8 *)(param_2 + -0x10);
      __sort4<bool(*&)(StructFieldRemapping::VaryingTemp_const&,StructFieldRemapping::VaryingTemp_const&),StructFieldRemapping::VaryingTemp*>
                (param_1,(VaryingTemp *)puVar7,(VaryingTemp *)puVar8,(VaryingTemp *)puVar6,param_3);
      uVar5 = (**(code **)param_3)(puVar9,puVar6);
      if ((uVar5 & 1) != 0) {
        uVar13 = *puVar9;
        uVar15 = *(undefined8 *)(param_1 + 0x38);
        uVar14 = *puVar6;
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + -8);
        *puVar6 = uVar13;
        *(undefined8 *)(param_2 + -8) = uVar15;
        *puVar9 = uVar14;
        uVar5 = (**(code **)param_3)(puVar6,puVar8);
        if ((uVar5 & 1) != 0) {
          uVar14 = *(undefined8 *)(param_1 + 0x28);
          uVar13 = *puVar8;
          *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x38);
          *puVar8 = *puVar6;
          *(undefined8 *)(param_1 + 0x38) = uVar14;
          *puVar6 = uVar13;
          uVar5 = (**(code **)param_3)(puVar8,puVar7);
          if ((uVar5 & 1) != 0) {
            uVar14 = *(undefined8 *)(param_1 + 0x18);
            uVar13 = *puVar7;
            *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x28);
            *puVar7 = *puVar8;
            *(undefined8 *)(param_1 + 0x28) = uVar14;
            *puVar8 = uVar13;
            goto LAB_00c57150;
          }
        }
      }
    }
  }
  else {
    puVar7 = (undefined8 *)(param_1 + 0x10);
    puVar8 = (undefined8 *)(param_1 + 0x20);
    uVar5 = (**(code **)param_3)(puVar7,param_1);
    uVar4 = (**(code **)param_3)(puVar8,puVar7);
    if ((uVar5 & 1) == 0) {
      if ((uVar4 & 1) != 0) {
        uVar14 = *(undefined8 *)(param_1 + 0x18);
        uVar13 = *puVar7;
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x28);
        *puVar7 = *puVar8;
        *(undefined8 *)(param_1 + 0x28) = uVar14;
        *puVar8 = uVar13;
        uVar5 = (**(code **)param_3)(puVar7,param_1);
        if ((uVar5 & 1) != 0) {
          uVar14 = *(undefined8 *)(param_1 + 8);
          uVar13 = *(undefined8 *)param_1;
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x18);
          *(undefined8 *)param_1 = *puVar7;
          *(undefined8 *)(param_1 + 0x18) = uVar14;
          *puVar7 = uVar13;
        }
      }
    }
    else {
      if ((uVar4 & 1) == 0) {
        uVar14 = *(undefined8 *)(param_1 + 8);
        uVar13 = *(undefined8 *)param_1;
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x18);
        *(undefined8 *)param_1 = *puVar7;
        *(undefined8 *)(param_1 + 0x18) = uVar14;
        *puVar7 = uVar13;
        uVar5 = (**(code **)param_3)(puVar8,puVar7);
        if ((uVar5 & 1) == 0) goto LAB_00c57220;
        uVar14 = *(undefined8 *)(param_1 + 0x18);
        uVar13 = *puVar7;
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x28);
        *puVar7 = *puVar8;
      }
      else {
        uVar14 = *(undefined8 *)(param_1 + 8);
        uVar13 = *(undefined8 *)param_1;
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x28);
        *(undefined8 *)param_1 = *puVar8;
      }
      *(undefined8 *)(param_1 + 0x28) = uVar14;
      *puVar8 = uVar13;
    }
LAB_00c57220:
    if (param_1 + 0x30 != param_2) {
      lVar10 = 0;
      iVar11 = 0;
      puVar7 = (undefined8 *)(param_1 + 0x30);
      do {
        puVar6 = puVar7;
        uVar5 = (**(code **)param_3)(puVar6,puVar8);
        if ((uVar5 & 1) != 0) {
          uStack_168 = puVar6[1];
          local_170 = *puVar6;
          lVar2 = lVar10;
          do {
            lVar12 = lVar2;
            *(undefined8 *)(param_1 + lVar12 + 0x38) = *(undefined8 *)(param_1 + lVar12 + 0x28);
            *(undefined8 *)(param_1 + lVar12 + 0x30) = *(undefined8 *)(param_1 + lVar12 + 0x20);
            puVar7 = (undefined8 *)param_1;
            if (lVar12 == -0x20) goto LAB_00c5723c;
            uVar5 = (**(code **)param_3)(&local_170,param_1 + lVar12 + 0x10);
            lVar2 = lVar12 + -0x10;
          } while ((uVar5 & 1) != 0);
          puVar7 = (undefined8 *)(param_1 + lVar12 + 0x20);
LAB_00c5723c:
          iVar11 = iVar11 + 1;
          puVar7[1] = uStack_168;
          *puVar7 = local_170;
          if (iVar11 == 8) {
            bVar3 = puVar6 + 2 == (undefined8 *)param_2;
            goto switchD_00c56fb4_caseD_0;
          }
        }
        lVar10 = lVar10 + 0x10;
        puVar7 = puVar6 + 2;
        puVar8 = puVar6;
      } while (puVar6 + 2 != (undefined8 *)param_2);
    }
  }
  bVar3 = true;
switchD_00c56fb4_caseD_0:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar3;
}


