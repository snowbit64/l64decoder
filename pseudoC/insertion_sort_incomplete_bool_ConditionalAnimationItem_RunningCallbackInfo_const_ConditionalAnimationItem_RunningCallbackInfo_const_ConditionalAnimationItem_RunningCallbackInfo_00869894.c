// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<bool(*&)(ConditionalAnimationItem::RunningCallbackInfo_const&,ConditionalAnimationItem::RunningCallbackInfo_const&),ConditionalAnimationItem::RunningCallbackInfo*>
// Entry Point: 00869894
// Size: 572 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<bool(*&)(ConditionalAnimationItem::RunningCallbackInfo_const&,ConditionalAnimationItem::RunningCallbackInfo_const&),ConditionalAnimationItem::RunningCallbackInfo*>(RunningCallbackInfo * param_1, RunningCallbackInfo * param_2, _func_bool_RunningCallbackInfo_ptr_RunningCallbackInfo_ptr * param_3)


/* bool std::__ndk1::__insertion_sort_incomplete<bool
   (*&)(ConditionalAnimationItem::RunningCallbackInfo const&,
   ConditionalAnimationItem::RunningCallbackInfo const&),
   ConditionalAnimationItem::RunningCallbackInfo*>(ConditionalAnimationItem::RunningCallbackInfo*,
   ConditionalAnimationItem::RunningCallbackInfo*, bool
   (*&)(ConditionalAnimationItem::RunningCallbackInfo const&,
   ConditionalAnimationItem::RunningCallbackInfo const&)) */

bool std::__ndk1::
     __insertion_sort_incomplete<bool(*&)(ConditionalAnimationItem::RunningCallbackInfo_const&,ConditionalAnimationItem::RunningCallbackInfo_const&),ConditionalAnimationItem::RunningCallbackInfo*>
               (RunningCallbackInfo *param_1,RunningCallbackInfo *param_2,
               _func_bool_RunningCallbackInfo_ptr_RunningCallbackInfo_ptr *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  uVar6 = ((long)param_2 - (long)param_1 >> 3) * -0x5555555555555555;
  local_68 = *(long *)(lVar3 + 0x28);
  if (5 < uVar6) {
    __sort3<bool(*&)(ConditionalAnimationItem::RunningCallbackInfo_const&,ConditionalAnimationItem::RunningCallbackInfo_const&),ConditionalAnimationItem::RunningCallbackInfo*>
              (param_1,param_1 + 0x18,param_1 + 0x30,param_3);
    if (param_1 + 0x48 != param_2) {
      lVar11 = 0;
      iVar12 = 0;
      puVar9 = (undefined8 *)(param_1 + 0x48);
      puVar10 = (undefined8 *)(param_1 + 0x30);
      do {
        puVar7 = puVar9;
        uVar6 = (**(code **)param_3)(puVar7,puVar10);
        if ((uVar6 & 1) != 0) {
          uStack_78 = puVar7[1];
          local_80 = *puVar7;
          local_70 = puVar7[2];
          lVar4 = lVar11;
          do {
            lVar13 = lVar4;
            *(undefined8 *)(param_1 + lVar13 + 0x50) = *(undefined8 *)(param_1 + lVar13 + 0x38);
            *(undefined8 *)(param_1 + lVar13 + 0x48) = *(undefined8 *)(param_1 + lVar13 + 0x30);
            *(undefined8 *)(param_1 + lVar13 + 0x58) = *(undefined8 *)(param_1 + lVar13 + 0x40);
            puVar9 = (undefined8 *)param_1;
            if (lVar13 == -0x30) goto LAB_00869a30;
            uVar6 = (**(code **)param_3)(&local_80,param_1 + lVar13 + 0x18);
            lVar4 = lVar13 + -0x18;
          } while ((uVar6 & 1) != 0);
          puVar9 = (undefined8 *)(param_1 + lVar13 + 0x30);
LAB_00869a30:
          *puVar9 = local_80;
          if (&local_80 != puVar9) {
            puVar9[1] = uStack_78;
            puVar9[2] = local_70;
          }
          iVar12 = iVar12 + 1;
          if (iVar12 == 8) {
            bVar5 = puVar7 + 3 == (undefined8 *)param_2;
            goto switchD_00869900_caseD_0;
          }
        }
        lVar11 = lVar11 + 0x18;
        puVar9 = puVar7 + 3;
        puVar10 = puVar7;
      } while (puVar7 + 3 != (undefined8 *)param_2);
    }
    goto LAB_00869a88;
  }
  bVar5 = true;
  switch(uVar6) {
  case 2:
    puVar9 = (undefined8 *)(param_2 + -0x18);
    uVar6 = (**(code **)param_3)(puVar9,param_1);
    if ((uVar6 & 1) != 0) {
      uVar1 = *(undefined8 *)param_1;
      uVar2 = *(undefined8 *)(param_1 + 8);
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)param_1 = *puVar9;
      if (puVar9 != (undefined8 *)param_1) {
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + -0x10);
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + -8);
      }
      bVar5 = true;
      *(undefined8 *)(param_2 + -0x18) = uVar1;
      *(undefined8 *)(param_2 + -0x10) = uVar2;
      *(undefined8 *)(param_2 + -8) = uVar8;
      break;
    }
    goto LAB_00869a88;
  case 3:
    __sort3<bool(*&)(ConditionalAnimationItem::RunningCallbackInfo_const&,ConditionalAnimationItem::RunningCallbackInfo_const&),ConditionalAnimationItem::RunningCallbackInfo*>
              (param_1,param_1 + 0x18,param_2 + -0x18,param_3);
    bVar5 = true;
    break;
  case 4:
    __sort4<bool(*&)(ConditionalAnimationItem::RunningCallbackInfo_const&,ConditionalAnimationItem::RunningCallbackInfo_const&),ConditionalAnimationItem::RunningCallbackInfo*>
              (param_1,param_1 + 0x18,param_1 + 0x30,param_2 + -0x18,param_3);
LAB_00869a88:
    bVar5 = true;
    break;
  case 5:
    FUN_00869730(param_1,param_1 + 0x18,param_1 + 0x30,param_1 + 0x48,param_2 + -0x18,param_3);
    bVar5 = true;
  }
switchD_00869900_caseD_0:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}


