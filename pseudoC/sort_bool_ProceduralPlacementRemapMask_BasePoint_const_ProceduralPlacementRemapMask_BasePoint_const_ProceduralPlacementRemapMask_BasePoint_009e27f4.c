// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<bool(*&)(ProceduralPlacementRemapMask::BasePoint_const&,ProceduralPlacementRemapMask::BasePoint_const&),ProceduralPlacementRemapMask::BasePoint*>
// Entry Point: 009e27f4
// Size: 1548 bytes
// Signature: void __cdecl __sort<bool(*&)(ProceduralPlacementRemapMask::BasePoint_const&,ProceduralPlacementRemapMask::BasePoint_const&),ProceduralPlacementRemapMask::BasePoint*>(BasePoint * param_1, BasePoint * param_2, _func_bool_BasePoint_ptr_BasePoint_ptr * param_3)


/* void std::__ndk1::__sort<bool (*&)(ProceduralPlacementRemapMask::BasePoint const&,
   ProceduralPlacementRemapMask::BasePoint const&),
   ProceduralPlacementRemapMask::BasePoint*>(ProceduralPlacementRemapMask::BasePoint*,
   ProceduralPlacementRemapMask::BasePoint*, bool (*&)(ProceduralPlacementRemapMask::BasePoint
   const&, ProceduralPlacementRemapMask::BasePoint const&)) */

void std::__ndk1::
     __sort<bool(*&)(ProceduralPlacementRemapMask::BasePoint_const&,ProceduralPlacementRemapMask::BasePoint_const&),ProceduralPlacementRemapMask::BasePoint*>
               (BasePoint *param_1,BasePoint *param_2,
               _func_bool_BasePoint_ptr_BasePoint_ptr *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined (*pauVar4) [16];
  bool bVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined (*pauVar12) [16];
  undefined (*pauVar13) [16];
  undefined (*pauVar14) [16];
  undefined (*pauVar15) [16];
  undefined (*pauVar16) [16];
  undefined auVar17 [16];
  
LAB_009e2820:
  pauVar12 = (undefined (*) [16])(*(undefined (*) [16])((long)param_2 + -0x10) + 8);
  pauVar13 = (undefined (*) [16])param_1;
LAB_009e2828:
  param_1 = (BasePoint *)pauVar13;
  uVar10 = (long)param_2 - (long)param_1;
  uVar8 = (long)uVar10 >> 3;
  switch(uVar8) {
  case 0:
  case 1:
    goto switchD_009e2c44_caseD_0;
  case 2:
    uVar8 = (**(code **)param_3)(pauVar12,param_1);
    if ((uVar8 & 1) == 0) {
      return;
    }
    uVar11 = *(undefined8 *)*(undefined (*) [16])param_1;
    *(undefined8 *)*(undefined (*) [16])param_1 = *(undefined8 *)*pauVar12;
    break;
  case 3:
    puVar1 = (undefined8 *)(*(undefined (*) [16])param_1 + 8);
    uVar8 = (**(code **)param_3)(puVar1,param_1);
    uVar10 = (**(code **)param_3)(pauVar12,puVar1);
    if ((uVar8 & 1) == 0) {
      if ((uVar10 & 1) == 0) {
        return;
      }
      uVar11 = *(undefined8 *)(*(undefined (*) [16])param_1 + 8);
      *(undefined8 *)(*(undefined (*) [16])param_1 + 8) = *(undefined8 *)*pauVar12;
      *(undefined8 *)*pauVar12 = uVar11;
      goto LAB_009e2d94;
    }
    uVar11 = *(undefined8 *)*(undefined (*) [16])param_1;
    if ((uVar10 & 1) != 0) {
      *(undefined8 *)*(undefined (*) [16])param_1 = *(undefined8 *)*pauVar12;
      *(undefined8 *)*pauVar12 = uVar11;
      return;
    }
    *(undefined8 *)*(undefined (*) [16])param_1 = *(undefined8 *)(*(undefined (*) [16])param_1 + 8);
    *(undefined8 *)(*(undefined (*) [16])param_1 + 8) = uVar11;
    uVar8 = (**(code **)param_3)(pauVar12,puVar1);
    if ((uVar8 & 1) == 0) {
      return;
    }
    uVar11 = *puVar1;
    *puVar1 = *(undefined8 *)*pauVar12;
    break;
  case 4:
    __sort4<bool(*&)(ProceduralPlacementRemapMask::BasePoint_const&,ProceduralPlacementRemapMask::BasePoint_const&),ProceduralPlacementRemapMask::BasePoint*>
              (param_1,(BasePoint *)(*(undefined (*) [16])param_1 + 8),
               (BasePoint *)((long)param_1 + 0x10),(BasePoint *)pauVar12,param_3);
    return;
  case 5:
    pauVar13 = (undefined (*) [16])((long)param_1 + 0x10);
    puVar1 = (undefined8 *)(*(undefined (*) [16])((long)param_1 + 0x10) + 8);
    __sort4<bool(*&)(ProceduralPlacementRemapMask::BasePoint_const&,ProceduralPlacementRemapMask::BasePoint_const&),ProceduralPlacementRemapMask::BasePoint*>
              (param_1,(BasePoint *)(*(undefined (*) [16])param_1 + 8),(BasePoint *)pauVar13,
               (BasePoint *)puVar1,param_3);
    uVar8 = (**(code **)param_3)(pauVar12,puVar1);
    if ((uVar8 & 1) == 0) {
      return;
    }
    uVar11 = *puVar1;
    *puVar1 = *(undefined8 *)*pauVar12;
    *(undefined8 *)*pauVar12 = uVar11;
    uVar8 = (**(code **)param_3)(puVar1,pauVar13);
    if ((uVar8 & 1) == 0) {
      return;
    }
    auVar17 = NEON_ext(*pauVar13,*pauVar13,8,1);
    *(long *)(*(undefined (*) [16])((long)param_1 + 0x10) + 8) = auVar17._8_8_;
    *(long *)*pauVar13 = auVar17._0_8_;
    uVar8 = (**(code **)param_3)(pauVar13,(BasePoint *)(*(undefined (*) [16])param_1 + 8));
    if ((uVar8 & 1) == 0) {
      return;
    }
    auVar17 = NEON_ext(*(undefined (*) [16])(*(undefined (*) [16])param_1 + 8),
                       *(undefined (*) [16])(*(undefined (*) [16])param_1 + 8),8,1);
    *(long *)*(undefined (*) [16])((long)param_1 + 0x10) = auVar17._8_8_;
    *(long *)(*(undefined (*) [16])param_1 + 8) = auVar17._0_8_;
LAB_009e2d94:
    uVar8 = (**(code **)param_3)(*(undefined (*) [16])param_1 + 8,param_1);
    if ((uVar8 & 1) == 0) {
      return;
    }
    auVar17 = NEON_ext(*(undefined (*) [16])param_1,*(undefined (*) [16])param_1,8,1);
    *(long *)(*(undefined (*) [16])param_1 + 8) = auVar17._8_8_;
    *(long *)*(undefined (*) [16])param_1 = auVar17._0_8_;
    return;
  default:
    if ((long)uVar10 < 0xf8) {
      __insertion_sort_3<bool(*&)(ProceduralPlacementRemapMask::BasePoint_const&,ProceduralPlacementRemapMask::BasePoint_const&),ProceduralPlacementRemapMask::BasePoint*>
                (param_1,param_2,param_3);
      return;
    }
    uVar3 = uVar8;
    if ((long)uVar8 < 0) {
      uVar3 = uVar8 + 1;
    }
    pauVar13 = (undefined (*) [16])(*(undefined (*) [16])param_1 + (uVar3 & 0x3ffffffffffffffe) * 4)
    ;
    if (uVar10 < 0x1f39) {
      uVar8 = (**(code **)param_3)(pauVar13,param_1);
      uVar10 = (**(code **)param_3)(pauVar12,pauVar13);
      if ((uVar8 & 1) == 0) {
        if ((uVar10 & 1) == 0) {
          uVar7 = 0;
        }
        else {
          uVar11 = *(undefined8 *)*pauVar13;
          *(undefined8 *)*pauVar13 = *(undefined8 *)*pauVar12;
          *(undefined8 *)*pauVar12 = uVar11;
          uVar8 = (**(code **)param_3)(pauVar13,param_1);
          if ((uVar8 & 1) == 0) goto LAB_009e29fc;
          uVar7 = 2;
          uVar11 = *(undefined8 *)*(undefined (*) [16])param_1;
          *(undefined8 *)*(undefined (*) [16])param_1 = *(undefined8 *)*pauVar13;
          *(undefined8 *)*pauVar13 = uVar11;
        }
      }
      else {
        uVar11 = *(undefined8 *)*(undefined (*) [16])param_1;
        if ((uVar10 & 1) == 0) {
          *(undefined8 *)*(undefined (*) [16])param_1 = *(undefined8 *)*pauVar13;
          *(undefined8 *)*pauVar13 = uVar11;
          uVar8 = (**(code **)param_3)(pauVar12,pauVar13);
          if ((uVar8 & 1) == 0) {
LAB_009e29fc:
            uVar7 = 1;
          }
          else {
            uVar7 = 2;
            uVar11 = *(undefined8 *)*pauVar13;
            *(undefined8 *)*pauVar13 = *(undefined8 *)*pauVar12;
            *(undefined8 *)*pauVar12 = uVar11;
          }
        }
        else {
          uVar7 = 1;
          *(undefined8 *)*(undefined (*) [16])param_1 = *(undefined8 *)*pauVar12;
          *(undefined8 *)*pauVar12 = uVar11;
        }
      }
    }
    else {
      uVar10 = uVar8 + 3;
      if (-1 < (long)uVar8) {
        uVar10 = uVar8;
      }
      lVar9 = (uVar10 & 0x7ffffffffffffffc) * 2;
      puVar1 = (undefined8 *)(*(undefined (*) [16])param_1 + lVar9);
      puVar2 = (undefined8 *)(*pauVar13 + lVar9);
      uVar7 = __sort4<bool(*&)(ProceduralPlacementRemapMask::BasePoint_const&,ProceduralPlacementRemapMask::BasePoint_const&),ProceduralPlacementRemapMask::BasePoint*>
                        (param_1,(BasePoint *)puVar1,(BasePoint *)pauVar13,(BasePoint *)puVar2,
                         param_3);
      uVar8 = (**(code **)param_3)(pauVar12,puVar2);
      if ((uVar8 & 1) != 0) {
        uVar11 = *puVar2;
        *puVar2 = *(undefined8 *)*pauVar12;
        *(undefined8 *)*pauVar12 = uVar11;
        uVar8 = (**(code **)param_3)(puVar2,pauVar13);
        if ((uVar8 & 1) == 0) {
          uVar7 = uVar7 + 1;
        }
        else {
          uVar11 = *(undefined8 *)*pauVar13;
          *(undefined8 *)*pauVar13 = *puVar2;
          *puVar2 = uVar11;
          uVar8 = (**(code **)param_3)(pauVar13,puVar1);
          if ((uVar8 & 1) == 0) {
            uVar7 = uVar7 + 2;
          }
          else {
            uVar11 = *puVar1;
            *puVar1 = *(undefined8 *)*pauVar13;
            *(undefined8 *)*pauVar13 = uVar11;
            uVar8 = (**(code **)param_3)(puVar1,param_1);
            if ((uVar8 & 1) == 0) {
              uVar7 = uVar7 + 3;
            }
            else {
              uVar7 = uVar7 + 4;
              uVar11 = *(undefined8 *)*(undefined (*) [16])param_1;
              *(undefined8 *)*(undefined (*) [16])param_1 = *puVar1;
              *puVar1 = uVar11;
            }
          }
        }
      }
    }
    uVar8 = (**(code **)param_3)(param_1,pauVar13);
    pauVar14 = pauVar12;
    if ((uVar8 & 1) == 0) goto LAB_009e2a28;
    goto LAB_009e2a5c;
  }
  *(undefined8 *)*pauVar12 = uVar11;
  return;
LAB_009e2a28:
  while (pauVar14 = (undefined (*) [16])(pauVar14[-1] + 8), pauVar14 != (undefined (*) [16])param_1)
  {
    uVar8 = (**(code **)param_3)(pauVar14,pauVar13);
    if ((uVar8 & 1) != 0) goto code_r0x009e2a48;
  }
  pauVar14 = (undefined (*) [16])(*(undefined (*) [16])param_1 + 8);
  uVar8 = (**(code **)param_3)(param_1,pauVar12);
  pauVar13 = pauVar14;
  if ((uVar8 & 1) == 0) {
    while( true ) {
      if (pauVar13 == pauVar12) {
        return;
      }
      uVar8 = (**(code **)param_3)(param_1,pauVar13);
      if ((uVar8 & 1) != 0) break;
      pauVar13 = (undefined (*) [16])(*pauVar13 + 8);
    }
    uVar11 = *(undefined8 *)*pauVar13;
    pauVar14 = (undefined (*) [16])(*pauVar13 + 8);
    *(undefined8 *)*pauVar13 = *(undefined8 *)*pauVar12;
    *(undefined8 *)*pauVar12 = uVar11;
  }
  pauVar16 = pauVar12;
  if (pauVar14 == pauVar12) {
    return;
  }
  while( true ) {
    pauVar13 = (undefined (*) [16])(pauVar14[-1] + 8);
    do {
      pauVar14 = pauVar13;
      pauVar13 = (undefined (*) [16])(*pauVar14 + 8);
      uVar8 = (**(code **)param_3)(param_1,pauVar13);
    } while ((uVar8 & 1) == 0);
    pauVar14 = pauVar14 + 1;
    do {
      pauVar16 = (undefined (*) [16])(pauVar16[-1] + 8);
      uVar8 = (**(code **)param_3)(param_1,pauVar16);
    } while ((uVar8 & 1) != 0);
    if (pauVar16 <= pauVar13) break;
    uVar11 = *(undefined8 *)*pauVar13;
    *(undefined8 *)*pauVar13 = *(undefined8 *)*pauVar16;
    *(undefined8 *)*pauVar16 = uVar11;
  }
  goto LAB_009e2828;
code_r0x009e2a48:
  uVar7 = uVar7 + 1;
  uVar11 = *(undefined8 *)*(undefined (*) [16])param_1;
  *(undefined8 *)*(undefined (*) [16])param_1 = *(undefined8 *)*pauVar14;
  *(undefined8 *)*pauVar14 = uVar11;
LAB_009e2a5c:
  pauVar16 = (undefined (*) [16])(*(undefined (*) [16])param_1 + 8);
  pauVar15 = pauVar16;
  if (pauVar16 < pauVar14) {
    while( true ) {
      pauVar16 = (undefined (*) [16])(pauVar15[-1] + 8);
      do {
        pauVar15 = pauVar16;
        pauVar16 = (undefined (*) [16])(*pauVar15 + 8);
        uVar8 = (**(code **)param_3)(pauVar16,pauVar13);
      } while ((uVar8 & 1) != 0);
      pauVar15 = pauVar15 + 1;
      do {
        pauVar14 = (undefined (*) [16])(pauVar14[-1] + 8);
        uVar8 = (**(code **)param_3)(pauVar14,pauVar13);
      } while ((uVar8 & 1) == 0);
      if (pauVar14 < pauVar16) break;
      uVar11 = *(undefined8 *)*pauVar16;
      uVar7 = uVar7 + 1;
      pauVar4 = pauVar14;
      if (pauVar16 != pauVar13) {
        pauVar4 = pauVar13;
      }
      *(undefined8 *)*pauVar16 = *(undefined8 *)*pauVar14;
      *(undefined8 *)*pauVar14 = uVar11;
      pauVar13 = pauVar4;
    }
  }
  if ((pauVar16 != pauVar13) && (uVar8 = (**(code **)param_3)(pauVar13,pauVar16), (uVar8 & 1) != 0))
  {
    uVar7 = uVar7 + 1;
    uVar11 = *(undefined8 *)*pauVar16;
    *(undefined8 *)*pauVar16 = *(undefined8 *)*pauVar13;
    *(undefined8 *)*pauVar13 = uVar11;
  }
  if (uVar7 == 0) {
    bVar5 = __insertion_sort_incomplete<bool(*&)(ProceduralPlacementRemapMask::BasePoint_const&,ProceduralPlacementRemapMask::BasePoint_const&),ProceduralPlacementRemapMask::BasePoint*>
                      (param_1,(BasePoint *)pauVar16,param_3);
    bVar6 = __insertion_sort_incomplete<bool(*&)(ProceduralPlacementRemapMask::BasePoint_const&,ProceduralPlacementRemapMask::BasePoint_const&),ProceduralPlacementRemapMask::BasePoint*>
                      ((BasePoint *)(undefined (*) [16])(*pauVar16 + 8),param_2,param_3);
    if (bVar6) goto LAB_009e2c24;
    pauVar13 = (undefined (*) [16])(*pauVar16 + 8);
    if (bVar5) goto LAB_009e2828;
  }
  if ((long)param_2 - (long)pauVar16 <= (long)pauVar16 - (long)param_1) {
    __sort<bool(*&)(ProceduralPlacementRemapMask::BasePoint_const&,ProceduralPlacementRemapMask::BasePoint_const&),ProceduralPlacementRemapMask::BasePoint*>
              ((BasePoint *)(*pauVar16 + 8),param_2,param_3);
    param_2 = (BasePoint *)pauVar16;
    goto LAB_009e2820;
  }
  __sort<bool(*&)(ProceduralPlacementRemapMask::BasePoint_const&,ProceduralPlacementRemapMask::BasePoint_const&),ProceduralPlacementRemapMask::BasePoint*>
            (param_1,(BasePoint *)pauVar16,param_3);
  pauVar13 = (undefined (*) [16])(*pauVar16 + 8);
  goto LAB_009e2828;
LAB_009e2c24:
  param_2 = (BasePoint *)pauVar16;
  if (bVar5) {
switchD_009e2c44_caseD_0:
    return;
  }
  goto LAB_009e2820;
}


