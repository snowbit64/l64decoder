// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort4<bool(*&)(DensityMapSyncer::TempSendData_const&,DensityMapSyncer::TempSendData_const&),DensityMapSyncer::TempSendData*>
// Entry Point: 0085b948
// Size: 564 bytes
// Signature: uint __cdecl __sort4<bool(*&)(DensityMapSyncer::TempSendData_const&,DensityMapSyncer::TempSendData_const&),DensityMapSyncer::TempSendData*>(TempSendData * param_1, TempSendData * param_2, TempSendData * param_3, TempSendData * param_4, _func_bool_TempSendData_ptr_TempSendData_ptr * param_5)


/* unsigned int std::__ndk1::__sort4<bool (*&)(DensityMapSyncer::TempSendData const&,
   DensityMapSyncer::TempSendData const&),
   DensityMapSyncer::TempSendData*>(DensityMapSyncer::TempSendData*,
   DensityMapSyncer::TempSendData*, DensityMapSyncer::TempSendData*,
   DensityMapSyncer::TempSendData*, bool (*&)(DensityMapSyncer::TempSendData const&,
   DensityMapSyncer::TempSendData const&)) */

uint std::__ndk1::
     __sort4<bool(*&)(DensityMapSyncer::TempSendData_const&,DensityMapSyncer::TempSendData_const&),DensityMapSyncer::TempSendData*>
               (TempSendData *param_1,TempSendData *param_2,TempSendData *param_3,
               TempSendData *param_4,_func_bool_TempSendData_ptr_TempSendData_ptr *param_5)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  uint uVar8;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  uVar3 = (**(code **)param_5)(param_2,param_1);
  uVar4 = (**(code **)param_5)(param_3,param_2);
  if ((uVar3 & 1) == 0) {
    if ((uVar4 & 1) == 0) {
      uVar8 = 0;
      goto LAB_0085ba98;
    }
    uVar7 = *(undefined4 *)(param_3 + 8);
    uVar6 = *(undefined8 *)param_2;
    uVar1 = *(undefined4 *)(param_2 + 8);
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined4 *)(param_2 + 8) = uVar7;
    *(undefined8 *)param_3 = uVar6;
    *(undefined4 *)(param_3 + 8) = uVar1;
    uVar3 = (**(code **)param_5)(param_2,param_1);
    if ((uVar3 & 1) != 0) {
      uVar8 = 2;
      uVar7 = *(undefined4 *)(param_2 + 8);
      uVar6 = *(undefined8 *)param_1;
      uVar1 = *(undefined4 *)(param_1 + 8);
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined4 *)(param_1 + 8) = uVar7;
      *(undefined8 *)param_2 = uVar6;
      *(undefined4 *)(param_2 + 8) = uVar1;
      goto LAB_0085ba98;
    }
LAB_0085ba94:
    uVar8 = 1;
  }
  else {
    if ((uVar4 & 1) == 0) {
      uVar7 = *(undefined4 *)(param_2 + 8);
      uVar6 = *(undefined8 *)param_1;
      uVar1 = *(undefined4 *)(param_1 + 8);
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined4 *)(param_1 + 8) = uVar7;
      *(undefined8 *)param_2 = uVar6;
      *(undefined4 *)(param_2 + 8) = uVar1;
      uVar3 = (**(code **)param_5)(param_3,param_2);
      if ((uVar3 & 1) == 0) goto LAB_0085ba94;
      uVar8 = 2;
      uVar1 = *(undefined4 *)(param_3 + 8);
      uVar6 = *(undefined8 *)param_2;
      uVar7 = *(undefined4 *)(param_2 + 8);
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      *(undefined4 *)(param_2 + 8) = uVar1;
    }
    else {
      uVar8 = 1;
      uVar1 = *(undefined4 *)(param_3 + 8);
      uVar6 = *(undefined8 *)param_1;
      uVar7 = *(undefined4 *)(param_1 + 8);
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
      *(undefined4 *)(param_1 + 8) = uVar1;
    }
    *(undefined8 *)param_3 = uVar6;
    *(undefined4 *)(param_3 + 8) = uVar7;
  }
LAB_0085ba98:
  uVar3 = (**(code **)param_5)(param_4,param_3);
  if ((uVar3 & 1) != 0) {
    uVar7 = *(undefined4 *)(param_4 + 8);
    uVar6 = *(undefined8 *)param_3;
    uVar1 = *(undefined4 *)(param_3 + 8);
    *(undefined8 *)param_3 = *(undefined8 *)param_4;
    *(undefined4 *)(param_3 + 8) = uVar7;
    *(undefined8 *)param_4 = uVar6;
    *(undefined4 *)(param_4 + 8) = uVar1;
    uVar3 = (**(code **)param_5)(param_3,param_2);
    if ((uVar3 & 1) == 0) {
      uVar8 = uVar8 + 1;
    }
    else {
      uVar7 = *(undefined4 *)(param_3 + 8);
      uVar6 = *(undefined8 *)param_2;
      uVar1 = *(undefined4 *)(param_2 + 8);
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      *(undefined4 *)(param_2 + 8) = uVar7;
      *(undefined8 *)param_3 = uVar6;
      *(undefined4 *)(param_3 + 8) = uVar1;
      uVar3 = (**(code **)param_5)(param_2,param_1);
      if ((uVar3 & 1) == 0) {
        uVar8 = uVar8 + 2;
      }
      else {
        uVar8 = uVar8 + 3;
        uVar7 = *(undefined4 *)(param_2 + 8);
        uVar6 = *(undefined8 *)param_1;
        uVar1 = *(undefined4 *)(param_1 + 8);
        *(undefined8 *)param_1 = *(undefined8 *)param_2;
        *(undefined4 *)(param_1 + 8) = uVar7;
        *(undefined8 *)param_2 = uVar6;
        *(undefined4 *)(param_2 + 8) = uVar1;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


