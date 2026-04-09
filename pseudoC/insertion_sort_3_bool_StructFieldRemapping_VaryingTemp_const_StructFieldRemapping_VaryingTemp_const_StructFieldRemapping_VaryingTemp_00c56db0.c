// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_3<bool(*&)(StructFieldRemapping::VaryingTemp_const&,StructFieldRemapping::VaryingTemp_const&),StructFieldRemapping::VaryingTemp*>
// Entry Point: 00c56db0
// Size: 420 bytes
// Signature: void __cdecl __insertion_sort_3<bool(*&)(StructFieldRemapping::VaryingTemp_const&,StructFieldRemapping::VaryingTemp_const&),StructFieldRemapping::VaryingTemp*>(VaryingTemp * param_1, VaryingTemp * param_2, _func_bool_VaryingTemp_ptr_VaryingTemp_ptr * param_3)


/* void std::__ndk1::__insertion_sort_3<bool (*&)(StructFieldRemapping::VaryingTemp const&,
   StructFieldRemapping::VaryingTemp const&),
   StructFieldRemapping::VaryingTemp*>(StructFieldRemapping::VaryingTemp*,
   StructFieldRemapping::VaryingTemp*, bool (*&)(StructFieldRemapping::VaryingTemp const&,
   StructFieldRemapping::VaryingTemp const&)) */

void std::__ndk1::
     __insertion_sort_3<bool(*&)(StructFieldRemapping::VaryingTemp_const&,StructFieldRemapping::VaryingTemp_const&),StructFieldRemapping::VaryingTemp*>
               (VaryingTemp *param_1,VaryingTemp *param_2,
               _func_bool_VaryingTemp_ptr_VaryingTemp_ptr *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  puVar5 = (undefined8 *)(param_1 + 0x10);
  puVar7 = (undefined8 *)(param_1 + 0x20);
  uVar3 = (**(code **)param_3)(puVar5,param_1);
  uVar4 = (**(code **)param_3)(puVar7,puVar5);
  if ((uVar3 & 1) == 0) {
    if ((uVar4 & 1) != 0) {
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      uVar10 = *puVar5;
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x28);
      *puVar5 = *puVar7;
      *(undefined8 *)(param_1 + 0x28) = uVar11;
      *puVar7 = uVar10;
      uVar3 = (**(code **)param_3)(puVar5,param_1);
      if ((uVar3 & 1) != 0) {
        uVar11 = *(undefined8 *)(param_1 + 8);
        uVar10 = *(undefined8 *)param_1;
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x18);
        *(undefined8 *)param_1 = *puVar5;
        *(undefined8 *)(param_1 + 0x18) = uVar11;
        *puVar5 = uVar10;
      }
    }
  }
  else {
    if ((uVar4 & 1) == 0) {
      uVar11 = *(undefined8 *)(param_1 + 8);
      uVar10 = *(undefined8 *)param_1;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)param_1 = *puVar5;
      *(undefined8 *)(param_1 + 0x18) = uVar11;
      *puVar5 = uVar10;
      uVar3 = (**(code **)param_3)(puVar7,puVar5);
      if ((uVar3 & 1) == 0) goto LAB_00c56e98;
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      uVar10 = *puVar5;
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x28);
      *puVar5 = *puVar7;
    }
    else {
      uVar11 = *(undefined8 *)(param_1 + 8);
      uVar10 = *(undefined8 *)param_1;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)param_1 = *puVar7;
    }
    *(undefined8 *)(param_1 + 0x28) = uVar11;
    *puVar7 = uVar10;
  }
LAB_00c56e98:
  if (param_1 + 0x30 != param_2) {
    lVar8 = 0;
    puVar5 = (undefined8 *)(param_1 + 0x30);
    do {
      puVar6 = puVar5;
      uVar3 = (**(code **)param_3)(puVar6,puVar7);
      if ((uVar3 & 1) != 0) {
        uStack_b8 = puVar6[1];
        local_c0 = *puVar6;
        lVar2 = lVar8;
        do {
          lVar9 = lVar2;
          *(undefined8 *)(param_1 + lVar9 + 0x38) = *(undefined8 *)(param_1 + lVar9 + 0x28);
          *(undefined8 *)(param_1 + lVar9 + 0x30) = *(undefined8 *)(param_1 + lVar9 + 0x20);
          puVar5 = (undefined8 *)param_1;
          if (lVar9 == -0x20) goto LAB_00c56eb0;
          uVar3 = (**(code **)param_3)(&local_c0,param_1 + lVar9 + 0x10);
          lVar2 = lVar9 + -0x10;
        } while ((uVar3 & 1) != 0);
        puVar5 = (undefined8 *)(param_1 + lVar9 + 0x20);
LAB_00c56eb0:
        puVar5[1] = uStack_b8;
        *puVar5 = local_c0;
      }
      lVar8 = lVar8 + 0x10;
      puVar5 = puVar6 + 2;
      puVar7 = puVar6;
    } while (puVar6 + 2 != (undefined8 *)param_2);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


