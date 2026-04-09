// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<bool(*&)(DensityMapSyncer::TempSendData_const&,DensityMapSyncer::TempSendData_const&),DensityMapSyncer::TempSendData*>
// Entry Point: 0085b070
// Size: 2264 bytes
// Signature: void __cdecl __sort<bool(*&)(DensityMapSyncer::TempSendData_const&,DensityMapSyncer::TempSendData_const&),DensityMapSyncer::TempSendData*>(TempSendData * param_1, TempSendData * param_2, _func_bool_TempSendData_ptr_TempSendData_ptr * param_3)


/* void std::__ndk1::__sort<bool (*&)(DensityMapSyncer::TempSendData const&,
   DensityMapSyncer::TempSendData const&),
   DensityMapSyncer::TempSendData*>(DensityMapSyncer::TempSendData*,
   DensityMapSyncer::TempSendData*, bool (*&)(DensityMapSyncer::TempSendData const&,
   DensityMapSyncer::TempSendData const&)) */

void std::__ndk1::
     __sort<bool(*&)(DensityMapSyncer::TempSendData_const&,DensityMapSyncer::TempSendData_const&),DensityMapSyncer::TempSendData*>
               (TempSendData *param_1,TempSendData *param_2,
               _func_bool_TempSendData_ptr_TempSendData_ptr *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 *puVar18;
  
  lVar4 = tpidr_el0;
  lVar9 = *(long *)(lVar4 + 0x28);
LAB_0085b0b8:
  puVar14 = (undefined8 *)((long)param_2 + -0xc);
  puVar15 = (undefined8 *)param_1;
LAB_0085b0c0:
  param_1 = (TempSendData *)puVar15;
  uVar10 = (long)param_2 - (long)param_1;
  switch(((long)uVar10 >> 2) * -0x5555555555555555) {
  case 0:
  case 1:
    goto switchD_0085b6b4_caseD_0;
  case 2:
    uVar10 = (**(code **)param_3)(puVar14,param_1);
    if ((uVar10 & 1) == 0) goto switchD_0085b6b4_caseD_0;
    break;
  case 3:
    puVar15 = (undefined8 *)((long)param_1 + 0xc);
    uVar10 = (**(code **)param_3)(puVar15,param_1);
    uVar8 = (**(code **)param_3)(puVar14,puVar15);
    if ((uVar10 & 1) == 0) {
      if ((uVar8 & 1) != 0) {
        uVar12 = *puVar15;
        uVar2 = *(undefined4 *)((long)param_1 + 0x14);
        uVar3 = *(undefined4 *)((long)param_2 + -4);
        *puVar15 = *puVar14;
        *(undefined4 *)((long)param_1 + 0x14) = uVar3;
        *(undefined4 *)((long)param_2 + -4) = uVar2;
        *puVar14 = uVar12;
        goto LAB_0085b85c;
      }
      goto switchD_0085b6b4_caseD_0;
    }
    if ((uVar8 & 1) == 0) {
      uVar2 = *(undefined4 *)((long)param_1 + 8);
      uVar12 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *puVar15;
      *(undefined4 *)((long)param_1 + 8) = *(undefined4 *)((long)param_1 + 0x14);
      *puVar15 = uVar12;
      *(undefined4 *)((long)param_1 + 0x14) = uVar2;
      uVar10 = (**(code **)param_3)(puVar14,puVar15);
      if ((uVar10 & 1) != 0) {
        uVar12 = *puVar15;
        uVar2 = *(undefined4 *)((long)param_1 + 0x14);
        uVar3 = *(undefined4 *)((long)param_2 + -4);
        *puVar15 = *puVar14;
        *(undefined4 *)((long)param_1 + 0x14) = uVar3;
        *(undefined4 *)((long)param_2 + -4) = uVar2;
        *puVar14 = uVar12;
      }
      goto switchD_0085b6b4_caseD_0;
    }
    break;
  case 4:
    __sort4<bool(*&)(DensityMapSyncer::TempSendData_const&,DensityMapSyncer::TempSendData_const&),DensityMapSyncer::TempSendData*>
              (param_1,(TempSendData *)((long)param_1 + 0xc),(TempSendData *)((long)param_1 + 0x18),
               (TempSendData *)puVar14,param_3);
    goto switchD_0085b6b4_caseD_0;
  case 5:
    puVar15 = (undefined8 *)((long)param_1 + 0xc);
    puVar19 = (undefined8 *)((long)param_1 + 0x18);
    puVar17 = (undefined8 *)((long)param_1 + 0x24);
    __sort4<bool(*&)(DensityMapSyncer::TempSendData_const&,DensityMapSyncer::TempSendData_const&),DensityMapSyncer::TempSendData*>
              (param_1,(TempSendData *)puVar15,(TempSendData *)puVar19,(TempSendData *)puVar17,
               param_3);
    uVar10 = (**(code **)param_3)(puVar14,puVar17);
    if ((uVar10 & 1) != 0) {
      uVar12 = *puVar17;
      uVar2 = *(undefined4 *)((long)param_1 + 0x2c);
      uVar3 = *(undefined4 *)((long)param_2 + -4);
      *puVar17 = *puVar14;
      *(undefined4 *)((long)param_1 + 0x2c) = uVar3;
      *(undefined4 *)((long)param_2 + -4) = uVar2;
      *puVar14 = uVar12;
      uVar10 = (**(code **)param_3)(puVar17,puVar19);
      if ((uVar10 & 1) != 0) {
        uVar12 = *puVar19;
        uVar2 = *(undefined4 *)((long)param_1 + 0x20);
        *puVar19 = *puVar17;
        *(undefined4 *)((long)param_1 + 0x20) = *(undefined4 *)((long)param_1 + 0x2c);
        *puVar17 = uVar12;
        *(undefined4 *)((long)param_1 + 0x2c) = uVar2;
        uVar10 = (**(code **)param_3)(puVar19,puVar15);
        if ((uVar10 & 1) != 0) {
          uVar12 = *puVar15;
          uVar2 = *(undefined4 *)((long)param_1 + 0x14);
          *puVar15 = *puVar19;
          *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_1 + 0x20);
          *puVar19 = uVar12;
          *(undefined4 *)((long)param_1 + 0x20) = uVar2;
LAB_0085b85c:
          puVar15 = (undefined8 *)((long)param_1 + 0xc);
          uVar10 = (**(code **)param_3)(puVar15,param_1);
          if ((uVar10 & 1) != 0) {
            uVar2 = *(undefined4 *)((long)param_1 + 8);
            uVar12 = *(undefined8 *)param_1;
            *(undefined8 *)param_1 = *puVar15;
            *(undefined4 *)((long)param_1 + 8) = *(undefined4 *)((long)param_1 + 0x14);
            *puVar15 = uVar12;
            *(undefined4 *)((long)param_1 + 0x14) = uVar2;
          }
        }
      }
    }
    goto switchD_0085b6b4_caseD_0;
  default:
    if ((long)uVar10 < 0x174) {
      __insertion_sort_3<bool(*&)(DensityMapSyncer::TempSendData_const&,DensityMapSyncer::TempSendData_const&),DensityMapSyncer::TempSendData*>
                (param_1,param_2,param_3);
      goto switchD_0085b6b4_caseD_0;
    }
    if (uVar10 < 0x2ed5) {
      puVar15 = (undefined8 *)((long)param_1 + (ulong)(((uint)uVar10 & 0xffff) / 0x18) * 0xc);
      uVar10 = (**(code **)param_3)(puVar15,param_1);
      uVar8 = (**(code **)param_3)(puVar14,puVar15);
      if ((uVar10 & 1) == 0) {
        if ((uVar8 & 1) == 0) {
          uVar7 = 0;
        }
        else {
          uVar2 = *(undefined4 *)(puVar15 + 1);
          uVar12 = *puVar15;
          uVar13 = *puVar14;
          *(undefined4 *)(puVar15 + 1) = *(undefined4 *)((long)param_2 + -4);
          *puVar15 = uVar13;
          *(undefined4 *)((long)param_2 + -4) = uVar2;
          *puVar14 = uVar12;
          uVar10 = (**(code **)param_3)(puVar15,param_1);
          if ((uVar10 & 1) == 0) goto LAB_0085b3b8;
          uVar2 = *(undefined4 *)((long)param_1 + 8);
          uVar7 = 2;
          uVar12 = *(undefined8 *)param_1;
          uVar13 = *puVar15;
          *(undefined4 *)((long)param_1 + 8) = *(undefined4 *)(puVar15 + 1);
          *(undefined8 *)param_1 = uVar13;
          *(undefined4 *)(puVar15 + 1) = uVar2;
          *puVar15 = uVar12;
        }
      }
      else {
        if ((uVar8 & 1) == 0) {
          uVar2 = *(undefined4 *)((long)param_1 + 8);
          uVar12 = *(undefined8 *)param_1;
          uVar13 = *puVar15;
          *(undefined4 *)((long)param_1 + 8) = *(undefined4 *)(puVar15 + 1);
          *(undefined8 *)param_1 = uVar13;
          *(undefined4 *)(puVar15 + 1) = uVar2;
          *puVar15 = uVar12;
          uVar10 = (**(code **)param_3)(puVar14,puVar15);
          if ((uVar10 & 1) == 0) {
LAB_0085b3b8:
            uVar7 = 1;
            goto LAB_0085b3cc;
          }
          local_70 = *(undefined4 *)(puVar15 + 1);
          uVar7 = 2;
          local_78 = *puVar15;
          uVar12 = *puVar14;
          *(undefined4 *)(puVar15 + 1) = *(undefined4 *)((long)param_2 + -4);
          *puVar15 = uVar12;
        }
        else {
          local_70 = *(undefined4 *)((long)param_1 + 8);
          uVar7 = 1;
          local_78 = *(undefined8 *)param_1;
          uVar12 = *puVar14;
          *(undefined4 *)((long)param_1 + 8) = *(undefined4 *)((long)param_2 + -4);
          *(undefined8 *)param_1 = uVar12;
        }
        *(undefined4 *)((long)param_2 + -4) = local_70;
        *puVar14 = local_78;
      }
    }
    else {
      puVar15 = (undefined8 *)((long)param_1 + (uVar10 / 0x18) * 0xc);
      lVar11 = (uVar10 / 0x30) * 0xc;
      puVar19 = (undefined8 *)((long)param_1 + lVar11);
      puVar17 = (undefined8 *)((long)puVar15 + lVar11);
      uVar7 = __sort4<bool(*&)(DensityMapSyncer::TempSendData_const&,DensityMapSyncer::TempSendData_const&),DensityMapSyncer::TempSendData*>
                        (param_1,(TempSendData *)puVar19,(TempSendData *)puVar15,
                         (TempSendData *)puVar17,param_3);
      uVar10 = (**(code **)param_3)(puVar14,puVar17);
      if ((uVar10 & 1) != 0) {
        uVar2 = *(undefined4 *)(puVar17 + 1);
        uVar12 = *puVar17;
        uVar13 = *puVar14;
        *(undefined4 *)(puVar17 + 1) = *(undefined4 *)((long)param_2 + -4);
        *puVar17 = uVar13;
        *(undefined4 *)((long)param_2 + -4) = uVar2;
        *puVar14 = uVar12;
        uVar10 = (**(code **)param_3)(puVar17,puVar15);
        if ((uVar10 & 1) == 0) {
          uVar7 = uVar7 + 1;
        }
        else {
          uVar2 = *(undefined4 *)(puVar15 + 1);
          uVar12 = *puVar15;
          uVar13 = *puVar17;
          *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar17 + 1);
          *puVar15 = uVar13;
          *(undefined4 *)(puVar17 + 1) = uVar2;
          *puVar17 = uVar12;
          uVar10 = (**(code **)param_3)(puVar15,puVar19);
          if ((uVar10 & 1) == 0) {
            uVar7 = uVar7 + 2;
          }
          else {
            uVar2 = *(undefined4 *)(puVar19 + 1);
            uVar12 = *puVar19;
            uVar13 = *puVar15;
            *(undefined4 *)(puVar19 + 1) = *(undefined4 *)(puVar15 + 1);
            *puVar19 = uVar13;
            *(undefined4 *)(puVar15 + 1) = uVar2;
            *puVar15 = uVar12;
            uVar10 = (**(code **)param_3)(puVar19,param_1);
            if ((uVar10 & 1) == 0) {
              uVar7 = uVar7 + 3;
            }
            else {
              uVar2 = *(undefined4 *)((long)param_1 + 8);
              uVar7 = uVar7 + 4;
              uVar12 = *(undefined8 *)param_1;
              uVar13 = *puVar19;
              *(undefined4 *)((long)param_1 + 8) = *(undefined4 *)(puVar19 + 1);
              *(undefined8 *)param_1 = uVar13;
              *(undefined4 *)(puVar19 + 1) = uVar2;
              *puVar19 = uVar12;
            }
          }
        }
      }
    }
LAB_0085b3cc:
    uVar10 = (**(code **)param_3)(param_1,puVar15);
    puVar19 = puVar14;
    if ((uVar10 & 1) == 0) {
      do {
        puVar17 = puVar19;
        puVar19 = (undefined8 *)((long)puVar17 + -0xc);
        if (puVar19 == (undefined8 *)param_1) {
          puVar19 = (undefined8 *)((long)param_1 + 0xc);
          uVar10 = (**(code **)param_3)(param_1,puVar14);
          puVar15 = puVar19;
          if ((uVar10 & 1) == 0) goto joined_r0x0085b5a4;
          goto LAB_0085b5fc;
        }
        uVar10 = (**(code **)param_3)(puVar19,puVar15);
      } while ((uVar10 & 1) == 0);
      uVar2 = *(undefined4 *)((long)param_1 + 8);
      uVar7 = uVar7 + 1;
      uVar12 = *(undefined8 *)param_1;
      uVar13 = *puVar19;
      *(undefined4 *)((long)param_1 + 8) = *(undefined4 *)((long)puVar17 + -4);
      *(undefined8 *)param_1 = uVar13;
      *(undefined4 *)((long)puVar17 + -4) = uVar2;
      *puVar19 = uVar12;
    }
    puVar17 = (undefined8 *)((long)param_1 + 0xc);
    puVar16 = puVar17;
    if (puVar17 < puVar19) {
      while( true ) {
        puVar17 = (undefined8 *)((long)puVar16 - 0xc);
        do {
          puVar18 = puVar17;
          puVar17 = (undefined8 *)((long)puVar18 + 0xc);
          uVar10 = (**(code **)param_3)(puVar17,puVar15);
        } while ((uVar10 & 1) != 0);
        puVar16 = puVar18 + 3;
        do {
          puVar20 = puVar19;
          puVar19 = (undefined8 *)((long)puVar20 + -0xc);
          uVar10 = (**(code **)param_3)(puVar19,puVar15);
        } while ((uVar10 & 1) == 0);
        if (puVar19 < puVar17) break;
        uVar2 = *(undefined4 *)((long)puVar18 + 0x14);
        uVar12 = *puVar17;
        uVar7 = uVar7 + 1;
        puVar1 = puVar19;
        if (puVar17 != puVar15) {
          puVar1 = puVar15;
        }
        uVar13 = *puVar19;
        *(undefined4 *)((long)puVar18 + 0x14) = *(undefined4 *)((long)puVar20 + -4);
        *puVar17 = uVar13;
        *(undefined4 *)((long)puVar20 + -4) = uVar2;
        *puVar19 = uVar12;
        puVar15 = puVar1;
      }
    }
    if ((puVar17 != puVar15) && (uVar10 = (**(code **)param_3)(puVar15,puVar17), (uVar10 & 1) != 0))
    {
      uVar2 = *(undefined4 *)(puVar17 + 1);
      uVar7 = uVar7 + 1;
      uVar12 = *puVar17;
      uVar13 = *puVar15;
      *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar15 + 1);
      *puVar17 = uVar13;
      *(undefined4 *)(puVar15 + 1) = uVar2;
      *puVar15 = uVar12;
    }
    if (uVar7 == 0) {
      bVar5 = __insertion_sort_incomplete<bool(*&)(DensityMapSyncer::TempSendData_const&,DensityMapSyncer::TempSendData_const&),DensityMapSyncer::TempSendData*>
                        (param_1,(TempSendData *)puVar17,param_3);
      bVar6 = __insertion_sort_incomplete<bool(*&)(DensityMapSyncer::TempSendData_const&,DensityMapSyncer::TempSendData_const&),DensityMapSyncer::TempSendData*>
                        ((TempSendData *)(undefined8 *)((long)puVar17 + 0xc),param_2,param_3);
      if (bVar6) goto LAB_0085b694;
      puVar15 = (undefined8 *)((long)puVar17 + 0xc);
      if (bVar5) goto LAB_0085b0c0;
    }
    if (((long)param_2 - (long)puVar17 >> 2) * -0x5555555555555555 <=
        ((long)puVar17 - (long)param_1 >> 2) * -0x5555555555555555) {
      __sort<bool(*&)(DensityMapSyncer::TempSendData_const&,DensityMapSyncer::TempSendData_const&),DensityMapSyncer::TempSendData*>
                ((TempSendData *)((long)puVar17 + 0xc),param_2,param_3);
      param_2 = (TempSendData *)puVar17;
      goto LAB_0085b0b8;
    }
    __sort<bool(*&)(DensityMapSyncer::TempSendData_const&,DensityMapSyncer::TempSendData_const&),DensityMapSyncer::TempSendData*>
              (param_1,(TempSendData *)puVar17,param_3);
    puVar15 = (undefined8 *)((long)puVar17 + 0xc);
    goto LAB_0085b0c0;
  }
  uVar2 = *(undefined4 *)((long)param_1 + 8);
  uVar12 = *(undefined8 *)param_1;
  uVar13 = *puVar14;
  *(undefined4 *)((long)param_1 + 8) = *(undefined4 *)((long)param_2 + -4);
  *(undefined8 *)param_1 = uVar13;
  *(undefined4 *)((long)param_2 + -4) = uVar2;
  *puVar14 = uVar12;
  goto switchD_0085b6b4_caseD_0;
joined_r0x0085b5a4:
  if (puVar15 == puVar14) goto switchD_0085b6b4_caseD_0;
  uVar10 = (**(code **)param_3)(param_1,puVar15);
  if ((uVar10 & 1) != 0) goto LAB_0085b5cc;
  puVar15 = (undefined8 *)((long)puVar15 + 0xc);
  goto joined_r0x0085b5a4;
LAB_0085b5cc:
  uVar2 = *(undefined4 *)(puVar15 + 1);
  uVar12 = *puVar15;
  uVar13 = *puVar14;
  *(undefined4 *)(puVar15 + 1) = *(undefined4 *)((long)param_2 + -4);
  puVar19 = (undefined8 *)((long)puVar15 + 0xc);
  *puVar15 = uVar13;
  *(undefined4 *)((long)param_2 + -4) = uVar2;
  *puVar14 = uVar12;
LAB_0085b5fc:
  puVar17 = puVar14;
  if (puVar19 == puVar14) goto switchD_0085b6b4_caseD_0;
  while( true ) {
    puVar15 = (undefined8 *)((long)puVar19 - 0xc);
    do {
      puVar16 = puVar15;
      puVar15 = (undefined8 *)((long)puVar16 + 0xc);
      uVar10 = (**(code **)param_3)(param_1,puVar15);
    } while ((uVar10 & 1) == 0);
    puVar19 = puVar16 + 3;
    do {
      puVar18 = puVar17;
      puVar17 = (undefined8 *)((long)puVar18 + -0xc);
      uVar10 = (**(code **)param_3)(param_1,puVar17);
    } while ((uVar10 & 1) != 0);
    if (puVar17 <= puVar15) break;
    uVar2 = *(undefined4 *)((long)puVar16 + 0x14);
    uVar12 = *puVar15;
    uVar13 = *puVar17;
    *(undefined4 *)((long)puVar16 + 0x14) = *(undefined4 *)((long)puVar18 + -4);
    *puVar15 = uVar13;
    *(undefined4 *)((long)puVar18 + -4) = uVar2;
    *puVar17 = uVar12;
  }
  goto LAB_0085b0c0;
LAB_0085b694:
  param_2 = (TempSendData *)puVar17;
  if (bVar5) {
switchD_0085b6b4_caseD_0:
    if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  goto LAB_0085b0b8;
}


