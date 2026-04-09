// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort4<bool(*&)(StructFieldRemapping::VaryingTemp_const&,StructFieldRemapping::VaryingTemp_const&),StructFieldRemapping::VaryingTemp*>
// Entry Point: 00c56bf8
// Size: 440 bytes
// Signature: uint __cdecl __sort4<bool(*&)(StructFieldRemapping::VaryingTemp_const&,StructFieldRemapping::VaryingTemp_const&),StructFieldRemapping::VaryingTemp*>(VaryingTemp * param_1, VaryingTemp * param_2, VaryingTemp * param_3, VaryingTemp * param_4, _func_bool_VaryingTemp_ptr_VaryingTemp_ptr * param_5)


/* unsigned int std::__ndk1::__sort4<bool (*&)(StructFieldRemapping::VaryingTemp const&,
   StructFieldRemapping::VaryingTemp const&),
   StructFieldRemapping::VaryingTemp*>(StructFieldRemapping::VaryingTemp*,
   StructFieldRemapping::VaryingTemp*, StructFieldRemapping::VaryingTemp*,
   StructFieldRemapping::VaryingTemp*, bool (*&)(StructFieldRemapping::VaryingTemp const&,
   StructFieldRemapping::VaryingTemp const&)) */

uint std::__ndk1::
     __sort4<bool(*&)(StructFieldRemapping::VaryingTemp_const&,StructFieldRemapping::VaryingTemp_const&),StructFieldRemapping::VaryingTemp*>
               (VaryingTemp *param_1,VaryingTemp *param_2,VaryingTemp *param_3,VaryingTemp *param_4,
               _func_bool_VaryingTemp_ptr_VaryingTemp_ptr *param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)param_5)(param_2,param_1);
  uVar3 = (**(code **)param_5)(param_3,param_2);
  if ((uVar2 & 1) == 0) {
    if ((uVar3 & 1) == 0) {
      uVar5 = 0;
      goto LAB_00c56cfc;
    }
    uVar6 = *(undefined8 *)param_3;
    uVar8 = *(undefined8 *)(param_2 + 8);
    uVar7 = *(undefined8 *)param_2;
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)param_2 = uVar6;
    *(undefined8 *)(param_3 + 8) = uVar8;
    *(undefined8 *)param_3 = uVar7;
    uVar2 = (**(code **)param_5)(param_2,param_1);
    if ((uVar2 & 1) != 0) {
      uVar6 = *(undefined8 *)param_2;
      uVar5 = 2;
      uVar8 = *(undefined8 *)(param_1 + 8);
      uVar7 = *(undefined8 *)param_1;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)param_1 = uVar6;
      *(undefined8 *)(param_2 + 8) = uVar8;
      *(undefined8 *)param_2 = uVar7;
      goto LAB_00c56cfc;
    }
LAB_00c56cf8:
    uVar5 = 1;
  }
  else {
    if ((uVar3 & 1) == 0) {
      uVar6 = *(undefined8 *)param_2;
      uVar8 = *(undefined8 *)(param_1 + 8);
      uVar7 = *(undefined8 *)param_1;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)param_1 = uVar6;
      *(undefined8 *)(param_2 + 8) = uVar8;
      *(undefined8 *)param_2 = uVar7;
      uVar2 = (**(code **)param_5)(param_3,param_2);
      if ((uVar2 & 1) == 0) goto LAB_00c56cf8;
      uVar6 = *(undefined8 *)param_3;
      uVar5 = 2;
      uVar8 = *(undefined8 *)(param_2 + 8);
      uVar7 = *(undefined8 *)param_2;
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)param_2 = uVar6;
    }
    else {
      uVar6 = *(undefined8 *)param_3;
      uVar5 = 1;
      uVar8 = *(undefined8 *)(param_1 + 8);
      uVar7 = *(undefined8 *)param_1;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)param_1 = uVar6;
    }
    *(undefined8 *)(param_3 + 8) = uVar8;
    *(undefined8 *)param_3 = uVar7;
  }
LAB_00c56cfc:
  uVar2 = (**(code **)param_5)(param_4,param_3);
  if ((uVar2 & 1) != 0) {
    uVar6 = *(undefined8 *)param_4;
    uVar8 = *(undefined8 *)(param_3 + 8);
    uVar7 = *(undefined8 *)param_3;
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_4 + 8);
    *(undefined8 *)param_3 = uVar6;
    *(undefined8 *)(param_4 + 8) = uVar8;
    *(undefined8 *)param_4 = uVar7;
    uVar2 = (**(code **)param_5)(param_3,param_2);
    if ((uVar2 & 1) == 0) {
      uVar5 = uVar5 + 1;
    }
    else {
      uVar6 = *(undefined8 *)param_3;
      uVar8 = *(undefined8 *)(param_2 + 8);
      uVar7 = *(undefined8 *)param_2;
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)param_2 = uVar6;
      *(undefined8 *)(param_3 + 8) = uVar8;
      *(undefined8 *)param_3 = uVar7;
      uVar2 = (**(code **)param_5)(param_2,param_1);
      if ((uVar2 & 1) == 0) {
        uVar5 = uVar5 + 2;
      }
      else {
        uVar6 = *(undefined8 *)param_2;
        uVar5 = uVar5 + 3;
        uVar8 = *(undefined8 *)(param_1 + 8);
        uVar7 = *(undefined8 *)param_1;
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)param_1 = uVar6;
        *(undefined8 *)(param_2 + 8) = uVar8;
        *(undefined8 *)param_2 = uVar7;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


