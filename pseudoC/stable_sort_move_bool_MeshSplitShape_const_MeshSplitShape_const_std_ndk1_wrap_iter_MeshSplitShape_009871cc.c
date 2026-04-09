// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __stable_sort_move<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),std::__ndk1::__wrap_iter<MeshSplitShape**>>
// Entry Point: 009871cc
// Size: 792 bytes
// Signature: void __cdecl __stable_sort_move<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),std::__ndk1::__wrap_iter<MeshSplitShape**>>(__wrap_iter param_1, __wrap_iter param_2, _func_bool_MeshSplitShape_ptr_MeshSplitShape_ptr * param_3, difference_type param_4, value_type * param_5)


/* void std::__ndk1::__stable_sort_move<bool (*&)(MeshSplitShape const*, MeshSplitShape const*),
   std::__ndk1::__wrap_iter<MeshSplitShape**> >(std::__ndk1::__wrap_iter<MeshSplitShape**>,
   std::__ndk1::__wrap_iter<MeshSplitShape**>, bool (*&)(MeshSplitShape const*, MeshSplitShape
   const*), std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<MeshSplitShape**>
   >::difference_type, std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<MeshSplitShape**>
   >::value_type*) */

void std::__ndk1::
     __stable_sort_move<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),std::__ndk1::__wrap_iter<MeshSplitShape**>>
               (__wrap_iter param_1,__wrap_iter param_2,
               _func_bool_MeshSplitShape_ptr_MeshSplitShape_ptr *param_3,difference_type param_4,
               value_type *param_5)

{
  value_type *pvVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  value_type *pvVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar2 = (ulong)param_4;
  puVar4 = (undefined8 *)(ulong)param_2;
  puVar5 = (undefined8 *)(ulong)param_1;
  if (uVar2 == 0) {
    return;
  }
  puVar8 = puVar5;
  puVar9 = (undefined8 *)param_5;
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      if (8 < uVar2) {
        uVar12 = (ulong)(param_4 >> 1);
        puVar8 = puVar5 + uVar12;
        __stable_sort<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),std::__ndk1::__wrap_iter<MeshSplitShape**>>
                  (param_1,(__wrap_iter)puVar8,param_3,param_4 >> 1,param_5,uVar12);
        __stable_sort<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),std::__ndk1::__wrap_iter<MeshSplitShape**>>
                  ((__wrap_iter)puVar8,param_2,param_3,(difference_type)(uVar2 - uVar12),
                   param_5 + uVar12 * 8,uVar2 - uVar12);
        pvVar1 = param_5 + 0x10;
        puVar6 = puVar5;
        puVar9 = puVar8;
        while (pvVar10 = pvVar1, puVar9 != puVar4) {
          uVar2 = (**(code **)param_3)(*puVar9,*puVar6);
          if ((uVar2 & 1) == 0) {
            puVar13 = puVar6 + 1;
            uVar3 = *puVar6;
          }
          else {
            uVar3 = *puVar9;
            puVar13 = puVar6;
            puVar9 = puVar9 + 1;
          }
          *(undefined8 *)(pvVar10 + -0x10) = uVar3;
          pvVar1 = pvVar10 + 8;
          puVar6 = puVar13;
          if (puVar13 == puVar8) {
            if (puVar9 != puVar4) {
              puVar5 = (undefined8 *)(pvVar10 + -8);
              uVar2 = (long)puVar4 + (-8 - (long)puVar9);
              if ((0x17 < uVar2) &&
                 (((undefined8 *)((long)puVar9 + (uVar2 & 0xfffffffffffffff8) + 8) <= puVar5 ||
                  (pvVar1 + ((uVar2 & 0xfffffffffffffff8) - 8) <= puVar9)))) {
                uVar2 = (uVar2 >> 3) + 1;
                lVar11 = 0;
                uVar7 = uVar2 & 0x3ffffffffffffffc;
                puVar5 = (undefined8 *)(pvVar1 + (uVar2 & 0x1ffffffffffffffc) * 8 + -0x10);
                uVar12 = uVar7;
                do {
                  puVar8 = (undefined8 *)((long)puVar9 + lVar11);
                  puVar6 = (undefined8 *)(pvVar1 + lVar11);
                  lVar11 = lVar11 + 0x20;
                  uVar12 = uVar12 - 4;
                  uVar3 = *puVar8;
                  uVar16 = puVar8[3];
                  uVar15 = puVar8[2];
                  puVar6[-1] = puVar8[1];
                  puVar6[-2] = uVar3;
                  puVar6[1] = uVar16;
                  *puVar6 = uVar15;
                } while (uVar12 != 0);
                puVar9 = puVar9 + uVar7;
                if (uVar2 == uVar7) {
                  return;
                }
              }
              do {
                puVar8 = puVar9 + 1;
                *puVar5 = *puVar9;
                puVar5 = puVar5 + 1;
                puVar9 = puVar8;
              } while (puVar8 != puVar4);
            }
            return;
          }
        }
        if (puVar6 == puVar8) {
          return;
        }
        puVar4 = (undefined8 *)(pvVar10 + -0x10);
        uVar2 = (long)puVar5 + (uVar12 * 8 - (long)puVar6) + -8;
        if ((0x17 < uVar2) &&
           (((undefined8 *)((long)puVar6 + (uVar2 & 0xfffffffffffffff8) + 8) <= puVar4 ||
            (pvVar10 + ((uVar2 & 0xfffffffffffffff8) - 8) <= puVar6)))) {
          uVar2 = (uVar2 >> 3) + 1;
          lVar11 = 0;
          uVar7 = uVar2 & 0x3ffffffffffffffc;
          puVar4 = (undefined8 *)(pvVar10 + (uVar2 & 0x1ffffffffffffffc) * 8 + -0x10);
          uVar12 = uVar7;
          do {
            puVar5 = (undefined8 *)((long)puVar6 + lVar11);
            puVar9 = (undefined8 *)(pvVar10 + lVar11);
            lVar11 = lVar11 + 0x20;
            uVar12 = uVar12 - 4;
            uVar3 = *puVar5;
            uVar16 = puVar5[3];
            uVar15 = puVar5[2];
            puVar9[-1] = puVar5[1];
            puVar9[-2] = uVar3;
            puVar9[1] = uVar16;
            *puVar9 = uVar15;
          } while (uVar12 != 0);
          puVar6 = puVar6 + uVar7;
          if (uVar2 == uVar7) {
            return;
          }
        }
        do {
          puVar5 = puVar6 + 1;
          *puVar4 = *puVar6;
          puVar4 = puVar4 + 1;
          puVar6 = puVar5;
        } while (puVar5 != puVar8);
        return;
      }
      if (puVar5 == puVar4) {
        return;
      }
      uVar3 = *puVar5;
      *(undefined8 *)param_5 = uVar3;
      if (puVar5 + 1 == puVar4) {
        return;
      }
      lVar11 = 0;
      puVar5 = puVar5 + 1;
      puVar8 = (undefined8 *)param_5;
      do {
        puVar9 = puVar8 + 1;
        uVar2 = (**(code **)param_3)(*puVar5,uVar3);
        puVar6 = puVar9;
        if (((uVar2 & 1) != 0) &&
           (puVar8[1] = *puVar8, puVar6 = (undefined8 *)param_5, lVar14 = lVar11,
           puVar8 != (undefined8 *)param_5)) {
          do {
            puVar6 = (undefined8 *)(param_5 + lVar14);
            uVar2 = (**(code **)param_3)(*puVar5,puVar6[-1]);
            if ((uVar2 & 1) == 0) break;
            lVar14 = lVar14 + -8;
            *puVar6 = puVar6[-1];
            puVar6 = (undefined8 *)param_5;
          } while (lVar14 != 0);
        }
        *puVar6 = *puVar5;
        if (puVar5 + 1 == puVar4) {
          return;
        }
        uVar3 = *puVar9;
        lVar11 = lVar11 + 8;
        puVar5 = puVar5 + 1;
        puVar8 = puVar9;
      } while( true );
    }
    puVar4 = puVar4 + -1;
    uVar2 = (**(code **)param_3)(*puVar4,*puVar5);
    if ((uVar2 & 1) == 0) {
      puVar8 = puVar4;
      puVar4 = puVar5;
    }
    puVar9 = (undefined8 *)(param_5 + 8);
    *(undefined8 *)param_5 = *puVar4;
  }
  *puVar9 = *puVar8;
  return;
}


