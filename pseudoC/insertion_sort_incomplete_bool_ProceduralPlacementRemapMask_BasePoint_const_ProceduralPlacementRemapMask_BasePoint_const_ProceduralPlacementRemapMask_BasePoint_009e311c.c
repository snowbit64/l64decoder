// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<bool(*&)(ProceduralPlacementRemapMask::BasePoint_const&,ProceduralPlacementRemapMask::BasePoint_const&),ProceduralPlacementRemapMask::BasePoint*>
// Entry Point: 009e311c
// Size: 900 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<bool(*&)(ProceduralPlacementRemapMask::BasePoint_const&,ProceduralPlacementRemapMask::BasePoint_const&),ProceduralPlacementRemapMask::BasePoint*>(BasePoint * param_1, BasePoint * param_2, _func_bool_BasePoint_ptr_BasePoint_ptr * param_3)


/* bool std::__ndk1::__insertion_sort_incomplete<bool (*&)(ProceduralPlacementRemapMask::BasePoint
   const&, ProceduralPlacementRemapMask::BasePoint const&),
   ProceduralPlacementRemapMask::BasePoint*>(ProceduralPlacementRemapMask::BasePoint*,
   ProceduralPlacementRemapMask::BasePoint*, bool (*&)(ProceduralPlacementRemapMask::BasePoint
   const&, ProceduralPlacementRemapMask::BasePoint const&)) */

bool std::__ndk1::
     __insertion_sort_incomplete<bool(*&)(ProceduralPlacementRemapMask::BasePoint_const&,ProceduralPlacementRemapMask::BasePoint_const&),ProceduralPlacementRemapMask::BasePoint*>
               (BasePoint *param_1,BasePoint *param_2,
               _func_bool_BasePoint_ptr_BasePoint_ptr *param_3)

{
  undefined (*pauVar1) [16];
  long lVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  undefined auVar15 [16];
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar6 = (long)param_2 - (long)param_1 >> 3;
  if (uVar6 < 6) {
    bVar4 = true;
    switch(uVar6) {
    default:
      goto switchD_009e3178_caseD_0;
    case 2:
      puVar10 = (undefined8 *)(param_2 + -8);
      uVar6 = (**(code **)param_3)(puVar10,param_1);
      if ((uVar6 & 1) != 0) {
        bVar4 = true;
        uVar7 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = *puVar10;
        *puVar10 = uVar7;
        goto switchD_009e3178_caseD_0;
      }
      break;
    case 3:
      puVar10 = (undefined8 *)(param_1 + 8);
      puVar11 = (undefined8 *)(param_2 + -8);
      uVar6 = (**(code **)param_3)(puVar10,param_1);
      uVar5 = (**(code **)param_3)(puVar11,puVar10);
      if ((uVar6 & 1) == 0) {
        if ((uVar5 & 1) != 0) {
          uVar7 = *(undefined8 *)(param_1 + 8);
          *(undefined8 *)(param_1 + 8) = *puVar11;
          *puVar11 = uVar7;
LAB_009e3310:
          uVar6 = (**(code **)param_3)(param_1 + 8,param_1);
          if ((uVar6 & 1) != 0) {
            bVar4 = true;
            auVar15 = NEON_ext(*(undefined (*) [16])param_1,*(undefined (*) [16])param_1,8,1);
            *(long *)(param_1 + 8) = auVar15._8_8_;
            *(long *)param_1 = auVar15._0_8_;
            goto switchD_009e3178_caseD_0;
          }
        }
      }
      else {
        uVar7 = *(undefined8 *)param_1;
        if ((uVar5 & 1) != 0) {
          bVar4 = true;
          *(undefined8 *)param_1 = *puVar11;
          *puVar11 = uVar7;
          goto switchD_009e3178_caseD_0;
        }
        *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)(param_1 + 8) = uVar7;
        uVar6 = (**(code **)param_3)(puVar11,puVar10);
        if ((uVar6 & 1) != 0) {
          bVar4 = true;
          uVar7 = *puVar10;
          *puVar10 = *puVar11;
          *puVar11 = uVar7;
          goto switchD_009e3178_caseD_0;
        }
      }
      break;
    case 4:
      __sort4<bool(*&)(ProceduralPlacementRemapMask::BasePoint_const&,ProceduralPlacementRemapMask::BasePoint_const&),ProceduralPlacementRemapMask::BasePoint*>
                (param_1,param_1 + 8,param_1 + 0x10,param_2 + -8,param_3);
      break;
    case 5:
      pauVar1 = (undefined (*) [16])(param_1 + 0x10);
      puVar10 = (undefined8 *)(param_1 + 0x18);
      puVar11 = (undefined8 *)(param_2 + -8);
      __sort4<bool(*&)(ProceduralPlacementRemapMask::BasePoint_const&,ProceduralPlacementRemapMask::BasePoint_const&),ProceduralPlacementRemapMask::BasePoint*>
                (param_1,param_1 + 8,(BasePoint *)pauVar1,(BasePoint *)puVar10,param_3);
      uVar6 = (**(code **)param_3)(puVar11,puVar10);
      if ((uVar6 & 1) != 0) {
        uVar7 = *puVar10;
        *puVar10 = *puVar11;
        *puVar11 = uVar7;
        uVar6 = (**(code **)param_3)(puVar10,pauVar1);
        if ((uVar6 & 1) != 0) {
          auVar15 = NEON_ext(*pauVar1,*pauVar1,8,1);
          *(long *)(param_1 + 0x18) = auVar15._8_8_;
          *(long *)*pauVar1 = auVar15._0_8_;
          uVar6 = (**(code **)param_3)(pauVar1,param_1 + 8);
          if ((uVar6 & 1) != 0) {
            auVar15 = NEON_ext(*(undefined (*) [16])(param_1 + 8),*(undefined (*) [16])(param_1 + 8)
                               ,8,1);
            *(long *)(param_1 + 0x10) = auVar15._8_8_;
            *(long *)(param_1 + 8) = auVar15._0_8_;
            goto LAB_009e3310;
          }
        }
      }
    }
  }
  else {
    pauVar1 = (undefined (*) [16])(param_1 + 8);
    puVar10 = (undefined8 *)(param_1 + 0x10);
    uVar6 = (**(code **)param_3)(pauVar1,param_1);
    uVar5 = (**(code **)param_3)(puVar10,pauVar1);
    if ((uVar6 & 1) == 0) {
      if ((uVar5 & 1) != 0) {
        auVar15 = NEON_ext(*(undefined (*) [16])(param_1 + 8),*(undefined (*) [16])(param_1 + 8),8,1
                          );
        *(long *)(param_1 + 0x10) = auVar15._8_8_;
        *(long *)(param_1 + 8) = auVar15._0_8_;
        uVar6 = (**(code **)param_3)(pauVar1,param_1);
        if ((uVar6 & 1) != 0) {
          auVar15 = NEON_ext(*(undefined (*) [16])param_1,*(undefined (*) [16])param_1,8,1);
          *(long *)(param_1 + 8) = auVar15._8_8_;
          *(long *)param_1 = auVar15._0_8_;
        }
      }
    }
    else {
      uVar7 = *(undefined8 *)param_1;
      if ((uVar5 & 1) == 0) {
        *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)(param_1 + 8) = uVar7;
        uVar6 = (**(code **)param_3)(puVar10,pauVar1);
        if ((uVar6 & 1) != 0) {
          auVar15 = NEON_ext(*pauVar1,*pauVar1,8,1);
          *(long *)(param_1 + 0x10) = auVar15._8_8_;
          *(long *)*pauVar1 = auVar15._0_8_;
        }
      }
      else {
        uVar9 = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)(param_1 + 0x10) = uVar7;
        *(undefined8 *)param_1 = uVar9;
      }
    }
    if (param_1 + 0x18 != param_2) {
      lVar12 = 0;
      iVar13 = 0;
      puVar11 = (undefined8 *)(param_1 + 0x18);
      do {
        puVar8 = puVar11;
        uVar6 = (**(code **)param_3)(puVar8,puVar10);
        if ((uVar6 & 1) != 0) {
          local_60 = *puVar8;
          lVar3 = lVar12;
          do {
            lVar14 = lVar3;
            *(undefined8 *)(param_1 + lVar14 + 0x18) = *(undefined8 *)(param_1 + lVar14 + 0x10);
            puVar10 = (undefined8 *)param_1;
            if (lVar14 == -0x10) goto LAB_009e33dc;
            uVar6 = (**(code **)param_3)(&local_60,param_1 + lVar14 + 8);
            lVar3 = lVar14 + -8;
          } while ((uVar6 & 1) != 0);
          puVar10 = (undefined8 *)(param_1 + lVar14 + 0x10);
LAB_009e33dc:
          iVar13 = iVar13 + 1;
          *puVar10 = local_60;
          if (iVar13 == 8) {
            bVar4 = puVar8 + 1 == (undefined8 *)param_2;
            goto switchD_009e3178_caseD_0;
          }
        }
        lVar12 = lVar12 + 8;
        puVar11 = puVar8 + 1;
        puVar10 = puVar8;
      } while (puVar8 + 1 != (undefined8 *)param_2);
    }
  }
  bVar4 = true;
switchD_009e3178_caseD_0:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}


