// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_3<bool(*&)(DensityMapSyncer::TempSendData_const&,DensityMapSyncer::TempSendData_const&),DensityMapSyncer::TempSendData*>
// Entry Point: 0085bb7c
// Size: 520 bytes
// Signature: void __cdecl __insertion_sort_3<bool(*&)(DensityMapSyncer::TempSendData_const&,DensityMapSyncer::TempSendData_const&),DensityMapSyncer::TempSendData*>(TempSendData * param_1, TempSendData * param_2, _func_bool_TempSendData_ptr_TempSendData_ptr * param_3)


/* void std::__ndk1::__insertion_sort_3<bool (*&)(DensityMapSyncer::TempSendData const&,
   DensityMapSyncer::TempSendData const&),
   DensityMapSyncer::TempSendData*>(DensityMapSyncer::TempSendData*,
   DensityMapSyncer::TempSendData*, bool (*&)(DensityMapSyncer::TempSendData const&,
   DensityMapSyncer::TempSendData const&)) */

void std::__ndk1::
     __insertion_sort_3<bool(*&)(DensityMapSyncer::TempSendData_const&,DensityMapSyncer::TempSendData_const&),DensityMapSyncer::TempSendData*>
               (TempSendData *param_1,TempSendData *param_2,
               _func_bool_TempSendData_ptr_TempSendData_ptr *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 local_b8;
  undefined4 local_b0;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  puVar5 = (undefined8 *)(param_1 + 0xc);
  puVar9 = (undefined8 *)(param_1 + 0x18);
  uVar3 = (**(code **)param_3)(puVar5,param_1);
  uVar4 = (**(code **)param_3)(puVar9,puVar5);
  if ((uVar3 & 1) == 0) {
    if ((uVar4 & 1) != 0) {
      uVar7 = *puVar5;
      uVar8 = *(undefined4 *)(param_1 + 0x14);
      *puVar5 = *puVar9;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x20);
      *puVar9 = uVar7;
      *(undefined4 *)(param_1 + 0x20) = uVar8;
      uVar3 = (**(code **)param_3)(puVar5,param_1);
      if ((uVar3 & 1) != 0) {
        uVar7 = *(undefined8 *)param_1;
        uVar8 = *(undefined4 *)(param_1 + 8);
        *(undefined8 *)param_1 = *puVar5;
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x14);
        *puVar5 = uVar7;
        *(undefined4 *)(param_1 + 0x14) = uVar8;
      }
    }
  }
  else {
    if ((uVar4 & 1) == 0) {
      uVar7 = *(undefined8 *)param_1;
      uVar8 = *(undefined4 *)(param_1 + 8);
      *(undefined8 *)param_1 = *puVar5;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x14);
      *puVar5 = uVar7;
      *(undefined4 *)(param_1 + 0x14) = uVar8;
      uVar3 = (**(code **)param_3)(puVar9,puVar5);
      if ((uVar3 & 1) == 0) goto LAB_0085bcb0;
      uVar7 = *puVar5;
      uVar8 = *(undefined4 *)(param_1 + 0x14);
      *puVar5 = *puVar9;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x20);
    }
    else {
      uVar7 = *(undefined8 *)param_1;
      uVar8 = *(undefined4 *)(param_1 + 8);
      *(undefined8 *)param_1 = *puVar9;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x20);
    }
    *puVar9 = uVar7;
    *(undefined4 *)(param_1 + 0x20) = uVar8;
  }
LAB_0085bcb0:
  if (param_1 + 0x24 != param_2) {
    lVar10 = 0;
    puVar5 = (undefined8 *)(param_1 + 0x24);
    do {
      puVar6 = puVar5;
      uVar3 = (**(code **)param_3)(puVar6,puVar9);
      if ((uVar3 & 1) != 0) {
        local_b8 = *puVar6;
        local_b0 = *(undefined4 *)(puVar6 + 1);
        lVar2 = lVar10;
        do {
          lVar11 = lVar2;
          *(undefined8 *)(param_1 + lVar11 + 0x24) = *(undefined8 *)(param_1 + lVar11 + 0x18);
          *(undefined4 *)(param_1 + lVar11 + 0x2c) = *(undefined4 *)(param_1 + lVar11 + 0x20);
          puVar5 = (undefined8 *)param_1;
          if (lVar11 == -0x18) goto LAB_0085bcc8;
          uVar3 = (**(code **)param_3)(&local_b8,param_1 + lVar11 + 0xc);
          lVar2 = lVar11 + -0xc;
        } while ((uVar3 & 1) != 0);
        puVar5 = (undefined8 *)(param_1 + lVar11 + 0x18);
LAB_0085bcc8:
        *puVar5 = local_b8;
        *(undefined4 *)(puVar5 + 1) = local_b0;
      }
      lVar10 = lVar10 + 0xc;
      puVar5 = (undefined8 *)((long)puVar6 + 0xc);
      puVar9 = puVar6;
    } while ((undefined8 *)((long)puVar6 + 0xc) != (undefined8 *)param_2);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


