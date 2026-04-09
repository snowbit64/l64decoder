// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_3<bool(*&)(ProceduralPlacementRemapMask::BasePoint_const&,ProceduralPlacementRemapMask::BasePoint_const&),ProceduralPlacementRemapMask::BasePoint*>
// Entry Point: 009e2f88
// Size: 404 bytes
// Signature: void __cdecl __insertion_sort_3<bool(*&)(ProceduralPlacementRemapMask::BasePoint_const&,ProceduralPlacementRemapMask::BasePoint_const&),ProceduralPlacementRemapMask::BasePoint*>(BasePoint * param_1, BasePoint * param_2, _func_bool_BasePoint_ptr_BasePoint_ptr * param_3)


/* void std::__ndk1::__insertion_sort_3<bool (*&)(ProceduralPlacementRemapMask::BasePoint const&,
   ProceduralPlacementRemapMask::BasePoint const&),
   ProceduralPlacementRemapMask::BasePoint*>(ProceduralPlacementRemapMask::BasePoint*,
   ProceduralPlacementRemapMask::BasePoint*, bool (*&)(ProceduralPlacementRemapMask::BasePoint
   const&, ProceduralPlacementRemapMask::BasePoint const&)) */

void std::__ndk1::
     __insertion_sort_3<bool(*&)(ProceduralPlacementRemapMask::BasePoint_const&,ProceduralPlacementRemapMask::BasePoint_const&),ProceduralPlacementRemapMask::BasePoint*>
               (BasePoint *param_1,BasePoint *param_2,
               _func_bool_BasePoint_ptr_BasePoint_ptr *param_3)

{
  undefined (*pauVar1) [16];
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined auVar13 [16];
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pauVar1 = (undefined (*) [16])(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 0x10);
  uVar5 = (**(code **)param_3)(pauVar1,param_1);
  uVar6 = (**(code **)param_3)(puVar8,pauVar1);
  if ((uVar5 & 1) == 0) {
    if ((uVar6 & 1) != 0) {
      auVar13 = NEON_ext(*(undefined (*) [16])(param_1 + 8),*(undefined (*) [16])(param_1 + 8),8,1);
      *(long *)(param_1 + 0x10) = auVar13._8_8_;
      *(long *)(param_1 + 8) = auVar13._0_8_;
      uVar5 = (**(code **)param_3)(pauVar1,param_1);
      if ((uVar5 & 1) != 0) {
        auVar13 = NEON_ext(*(undefined (*) [16])param_1,*(undefined (*) [16])param_1,8,1);
        *(long *)(param_1 + 8) = auVar13._8_8_;
        *(long *)param_1 = auVar13._0_8_;
      }
    }
  }
  else {
    uVar7 = *(undefined8 *)param_1;
    if ((uVar6 & 1) == 0) {
      *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 8) = uVar7;
      uVar5 = (**(code **)param_3)(puVar8,pauVar1);
      if ((uVar5 & 1) != 0) {
        auVar13 = NEON_ext(*pauVar1,*pauVar1,8,1);
        *(long *)(param_1 + 0x10) = auVar13._8_8_;
        *(long *)*pauVar1 = auVar13._0_8_;
      }
    }
    else {
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = uVar7;
      *(undefined8 *)param_1 = uVar10;
    }
  }
  if (param_1 + 0x18 != param_2) {
    lVar11 = 0;
    puVar3 = (undefined8 *)(param_1 + 0x18);
    do {
      puVar9 = puVar3;
      uVar5 = (**(code **)param_3)(puVar9,puVar8);
      if ((uVar5 & 1) != 0) {
        local_60 = *puVar9;
        lVar4 = lVar11;
        do {
          lVar12 = lVar4;
          *(undefined8 *)(param_1 + lVar12 + 0x18) = *(undefined8 *)(param_1 + lVar12 + 0x10);
          puVar8 = (undefined8 *)param_1;
          if (lVar12 == -0x10) goto LAB_009e3078;
          uVar5 = (**(code **)param_3)(&local_60,param_1 + lVar12 + 8);
          lVar4 = lVar12 + -8;
        } while ((uVar5 & 1) != 0);
        puVar8 = (undefined8 *)(param_1 + lVar12 + 0x10);
LAB_009e3078:
        *puVar8 = local_60;
      }
      lVar11 = lVar11 + 8;
      puVar3 = puVar9 + 1;
      puVar8 = puVar9;
    } while (puVar9 + 1 != (undefined8 *)param_2);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


