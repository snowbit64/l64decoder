// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<bool(*&)(DensityMapSyncer::TempSendData_const&,DensityMapSyncer::TempSendData_const&),DensityMapSyncer::TempSendData*>
// Entry Point: 0085bd84
// Size: 1192 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<bool(*&)(DensityMapSyncer::TempSendData_const&,DensityMapSyncer::TempSendData_const&),DensityMapSyncer::TempSendData*>(TempSendData * param_1, TempSendData * param_2, _func_bool_TempSendData_ptr_TempSendData_ptr * param_3)


/* bool std::__ndk1::__insertion_sort_incomplete<bool (*&)(DensityMapSyncer::TempSendData const&,
   DensityMapSyncer::TempSendData const&),
   DensityMapSyncer::TempSendData*>(DensityMapSyncer::TempSendData*,
   DensityMapSyncer::TempSendData*, bool (*&)(DensityMapSyncer::TempSendData const&,
   DensityMapSyncer::TempSendData const&)) */

bool std::__ndk1::
     __insertion_sort_incomplete<bool(*&)(DensityMapSyncer::TempSendData_const&,DensityMapSyncer::TempSendData_const&),DensityMapSyncer::TempSendData*>
               (TempSendData *param_1,TempSendData *param_2,
               _func_bool_TempSendData_ptr_TempSendData_ptr *param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  undefined8 local_168;
  undefined4 local_160;
  long local_68;
  
  lVar2 = tpidr_el0;
  uVar6 = ((long)param_2 - (long)param_1 >> 2) * -0x5555555555555555;
  local_68 = *(long *)(lVar2 + 0x28);
  if (uVar6 < 6) {
    bVar4 = true;
    switch(uVar6) {
    default:
      goto switchD_0085bdf0_caseD_0;
    case 2:
      puVar10 = (undefined8 *)(param_2 + -0xc);
      uVar6 = (**(code **)param_3)(puVar10,param_1);
      if ((uVar6 & 1) != 0) {
        bVar4 = true;
        uVar9 = *(undefined4 *)(param_2 + -4);
        uVar8 = *(undefined8 *)param_1;
        uVar1 = *(undefined4 *)(param_1 + 8);
        *(undefined8 *)param_1 = *puVar10;
        *(undefined4 *)(param_1 + 8) = uVar9;
        *puVar10 = uVar8;
        *(undefined4 *)(param_2 + -4) = uVar1;
        goto switchD_0085bdf0_caseD_0;
      }
      break;
    case 3:
      puVar10 = (undefined8 *)(param_1 + 0xc);
      puVar11 = (undefined8 *)(param_2 + -0xc);
      uVar6 = (**(code **)param_3)(puVar10,param_1);
      uVar5 = (**(code **)param_3)(puVar11,puVar10);
      if ((uVar6 & 1) != 0) {
        if ((uVar5 & 1) == 0) {
          uVar8 = *(undefined8 *)param_1;
          uVar9 = *(undefined4 *)(param_1 + 8);
          *(undefined8 *)param_1 = *puVar10;
          *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x14);
          *puVar10 = uVar8;
          *(undefined4 *)(param_1 + 0x14) = uVar9;
          uVar6 = (**(code **)param_3)(puVar11,puVar10);
          if ((uVar6 & 1) == 0) break;
          uVar1 = *(undefined4 *)(param_2 + -4);
          uVar8 = *puVar10;
          uVar9 = *(undefined4 *)(param_1 + 0x14);
          *puVar10 = *puVar11;
          *(undefined4 *)(param_1 + 0x14) = uVar1;
        }
        else {
          uVar1 = *(undefined4 *)(param_2 + -4);
          uVar8 = *(undefined8 *)param_1;
          uVar9 = *(undefined4 *)(param_1 + 8);
          *(undefined8 *)param_1 = *puVar11;
          *(undefined4 *)(param_1 + 8) = uVar1;
        }
        bVar4 = true;
        *puVar11 = uVar8;
        *(undefined4 *)(param_2 + -4) = uVar9;
        goto switchD_0085bdf0_caseD_0;
      }
      if ((uVar5 & 1) != 0) {
        uVar9 = *(undefined4 *)(param_2 + -4);
        uVar8 = *puVar10;
        uVar1 = *(undefined4 *)(param_1 + 0x14);
        *puVar10 = *puVar11;
        *(undefined4 *)(param_1 + 0x14) = uVar9;
        *puVar11 = uVar8;
        *(undefined4 *)(param_2 + -4) = uVar1;
LAB_0085bff0:
        puVar10 = (undefined8 *)(param_1 + 0xc);
        uVar6 = (**(code **)param_3)(puVar10,param_1);
        if ((uVar6 & 1) != 0) {
          bVar4 = true;
          uVar8 = *(undefined8 *)param_1;
          uVar9 = *(undefined4 *)(param_1 + 8);
          *(undefined8 *)param_1 = *puVar10;
          *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x14);
          *puVar10 = uVar8;
          *(undefined4 *)(param_1 + 0x14) = uVar9;
          goto switchD_0085bdf0_caseD_0;
        }
      }
      break;
    case 4:
      __sort4<bool(*&)(DensityMapSyncer::TempSendData_const&,DensityMapSyncer::TempSendData_const&),DensityMapSyncer::TempSendData*>
                (param_1,param_1 + 0xc,param_1 + 0x18,param_2 + -0xc,param_3);
      break;
    case 5:
      puVar10 = (undefined8 *)(param_1 + 0xc);
      puVar11 = (undefined8 *)(param_1 + 0x18);
      puVar7 = (undefined8 *)(param_1 + 0x24);
      puVar12 = (undefined8 *)(param_2 + -0xc);
      __sort4<bool(*&)(DensityMapSyncer::TempSendData_const&,DensityMapSyncer::TempSendData_const&),DensityMapSyncer::TempSendData*>
                (param_1,(TempSendData *)puVar10,(TempSendData *)puVar11,(TempSendData *)puVar7,
                 param_3);
      uVar6 = (**(code **)param_3)(puVar12,puVar7);
      if ((uVar6 & 1) != 0) {
        uVar9 = *(undefined4 *)(param_2 + -4);
        uVar8 = *puVar7;
        uVar1 = *(undefined4 *)(param_1 + 0x2c);
        *puVar7 = *puVar12;
        *(undefined4 *)(param_1 + 0x2c) = uVar9;
        *puVar12 = uVar8;
        *(undefined4 *)(param_2 + -4) = uVar1;
        uVar6 = (**(code **)param_3)(puVar7,puVar11);
        if ((uVar6 & 1) != 0) {
          uVar8 = *puVar11;
          uVar9 = *(undefined4 *)(param_1 + 0x20);
          *puVar11 = *puVar7;
          *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x2c);
          *puVar7 = uVar8;
          *(undefined4 *)(param_1 + 0x2c) = uVar9;
          uVar6 = (**(code **)param_3)(puVar11,puVar10);
          if ((uVar6 & 1) != 0) {
            uVar8 = *puVar10;
            uVar9 = *(undefined4 *)(param_1 + 0x14);
            *puVar10 = *puVar11;
            *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x20);
            *puVar11 = uVar8;
            *(undefined4 *)(param_1 + 0x20) = uVar9;
            goto LAB_0085bff0;
          }
        }
      }
    }
  }
  else {
    puVar10 = (undefined8 *)(param_1 + 0xc);
    puVar11 = (undefined8 *)(param_1 + 0x18);
    uVar6 = (**(code **)param_3)(puVar10,param_1);
    uVar5 = (**(code **)param_3)(puVar11,puVar10);
    if ((uVar6 & 1) == 0) {
      if ((uVar5 & 1) != 0) {
        uVar8 = *puVar10;
        uVar9 = *(undefined4 *)(param_1 + 0x14);
        *puVar10 = *puVar11;
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x20);
        *puVar11 = uVar8;
        *(undefined4 *)(param_1 + 0x20) = uVar9;
        uVar6 = (**(code **)param_3)(puVar10,param_1);
        if ((uVar6 & 1) != 0) {
          uVar8 = *(undefined8 *)param_1;
          uVar9 = *(undefined4 *)(param_1 + 8);
          *(undefined8 *)param_1 = *puVar10;
          *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x14);
          *puVar10 = uVar8;
          *(undefined4 *)(param_1 + 0x14) = uVar9;
        }
      }
    }
    else {
      if ((uVar5 & 1) == 0) {
        uVar8 = *(undefined8 *)param_1;
        uVar9 = *(undefined4 *)(param_1 + 8);
        *(undefined8 *)param_1 = *puVar10;
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x14);
        *puVar10 = uVar8;
        *(undefined4 *)(param_1 + 0x14) = uVar9;
        uVar6 = (**(code **)param_3)(puVar11,puVar10);
        if ((uVar6 & 1) == 0) goto LAB_0085c130;
        uVar8 = *puVar10;
        uVar9 = *(undefined4 *)(param_1 + 0x14);
        *puVar10 = *puVar11;
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x20);
      }
      else {
        uVar8 = *(undefined8 *)param_1;
        uVar9 = *(undefined4 *)(param_1 + 8);
        *(undefined8 *)param_1 = *puVar11;
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x20);
      }
      *puVar11 = uVar8;
      *(undefined4 *)(param_1 + 0x20) = uVar9;
    }
LAB_0085c130:
    if (param_1 + 0x24 != param_2) {
      lVar13 = 0;
      iVar14 = 0;
      puVar10 = (undefined8 *)(param_1 + 0x24);
      do {
        puVar7 = puVar10;
        uVar6 = (**(code **)param_3)(puVar7,puVar11);
        if ((uVar6 & 1) != 0) {
          local_168 = *puVar7;
          local_160 = *(undefined4 *)(puVar7 + 1);
          lVar3 = lVar13;
          do {
            lVar15 = lVar3;
            *(undefined8 *)(param_1 + lVar15 + 0x24) = *(undefined8 *)(param_1 + lVar15 + 0x18);
            *(undefined4 *)(param_1 + lVar15 + 0x2c) = *(undefined4 *)(param_1 + lVar15 + 0x20);
            puVar10 = (undefined8 *)param_1;
            if (lVar15 == -0x18) goto LAB_0085c14c;
            uVar6 = (**(code **)param_3)(&local_168,param_1 + lVar15 + 0xc);
            lVar3 = lVar15 + -0xc;
          } while ((uVar6 & 1) != 0);
          puVar10 = (undefined8 *)(param_1 + lVar15 + 0x18);
LAB_0085c14c:
          iVar14 = iVar14 + 1;
          *puVar10 = local_168;
          *(undefined4 *)(puVar10 + 1) = local_160;
          if (iVar14 == 8) {
            bVar4 = (TempSendData *)((long)puVar7 + 0xc) == param_2;
            goto switchD_0085bdf0_caseD_0;
          }
        }
        lVar13 = lVar13 + 0xc;
        puVar10 = (undefined8 *)((long)puVar7 + 0xc);
        puVar11 = puVar7;
      } while ((undefined8 *)((long)puVar7 + 0xc) != (undefined8 *)param_2);
    }
  }
  bVar4 = true;
switchD_0085bdf0_caseD_0:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}


