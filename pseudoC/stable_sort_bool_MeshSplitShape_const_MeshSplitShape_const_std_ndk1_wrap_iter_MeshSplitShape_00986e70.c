// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __stable_sort<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),std::__ndk1::__wrap_iter<MeshSplitShape**>>
// Entry Point: 00986e70
// Size: 860 bytes
// Signature: void __cdecl __stable_sort<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),std::__ndk1::__wrap_iter<MeshSplitShape**>>(__wrap_iter param_1, __wrap_iter param_2, _func_bool_MeshSplitShape_ptr_MeshSplitShape_ptr * param_3, difference_type param_4, value_type * param_5, long param_6)


/* void std::__ndk1::__stable_sort<bool (*&)(MeshSplitShape const*, MeshSplitShape const*),
   std::__ndk1::__wrap_iter<MeshSplitShape**> >(std::__ndk1::__wrap_iter<MeshSplitShape**>,
   std::__ndk1::__wrap_iter<MeshSplitShape**>, bool (*&)(MeshSplitShape const*, MeshSplitShape
   const*), std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<MeshSplitShape**>
   >::difference_type, std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<MeshSplitShape**>
   >::value_type*, long) */

void std::__ndk1::
     __stable_sort<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),std::__ndk1::__wrap_iter<MeshSplitShape**>>
               (__wrap_iter param_1,__wrap_iter param_2,
               _func_bool_MeshSplitShape_ptr_MeshSplitShape_ptr *param_3,difference_type param_4,
               value_type *param_5,long param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  __wrap_iter _Var5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  value_type *pvVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar3 = (ulong)param_4;
  puVar6 = (undefined8 *)(ulong)param_2;
  puVar2 = (undefined8 *)(ulong)param_1;
  if (1 < uVar3) {
    if (uVar3 == 2) {
      uVar3 = (**(code **)param_3)(puVar6[-1],*puVar2);
      if ((uVar3 & 1) != 0) {
        uVar9 = *puVar2;
        *puVar2 = puVar6[-1];
        puVar6[-1] = uVar9;
      }
    }
    else if (uVar3 < 0x81) {
      if ((puVar2 != puVar6) && (puVar13 = puVar2 + 1, puVar13 != puVar6)) {
        lVar14 = 0;
        do {
          uVar9 = *puVar13;
          puVar7 = puVar2;
          lVar15 = lVar14;
          if (puVar13 != puVar2) {
            do {
              puVar11 = (undefined8 *)((long)puVar2 + lVar15);
              uVar3 = (**(code **)param_3)(uVar9,*puVar11);
              if ((uVar3 & 1) == 0) {
                puVar7 = puVar11 + 1;
                break;
              }
              lVar16 = lVar15 + -8;
              puVar11[1] = *(undefined8 *)((long)puVar2 + lVar15);
              lVar15 = lVar16;
            } while (lVar16 != -8);
          }
          puVar13 = puVar13 + 1;
          lVar14 = lVar14 + 8;
          *puVar7 = uVar9;
        } while (puVar13 != puVar6);
      }
    }
    else {
      uVar1 = param_4 >> 1;
      _Var5 = param_1 + uVar1 * 8;
      if (param_6 < (long)uVar3) {
        __stable_sort<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),std::__ndk1::__wrap_iter<MeshSplitShape**>>
                  (param_1,_Var5,param_3,uVar1,param_5,param_6);
        __stable_sort<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),std::__ndk1::__wrap_iter<MeshSplitShape**>>
                  (_Var5,param_2,param_3,param_4 - uVar1,param_5,param_6);
        __inplace_merge<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),std::__ndk1::__wrap_iter<MeshSplitShape**>>
                  (param_1,_Var5,param_2,param_3,uVar1,param_4 - uVar1,param_5,param_6);
        return;
      }
      __stable_sort_move<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),std::__ndk1::__wrap_iter<MeshSplitShape**>>
                (param_1,_Var5,param_3,uVar1,param_5);
      puVar6 = (undefined8 *)(param_5 + (ulong)uVar1 * 8);
      __stable_sort_move<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),std::__ndk1::__wrap_iter<MeshSplitShape**>>
                (_Var5,param_2,param_3,param_4 - uVar1,(value_type *)puVar6);
      puVar13 = (undefined8 *)(param_5 + uVar3 * 8);
      puVar2 = puVar2 + 2;
      puVar11 = (undefined8 *)param_5;
      puVar7 = puVar6;
      do {
        puVar8 = puVar2;
        if (puVar7 == puVar13) {
          if (puVar11 == puVar6) {
            return;
          }
          puVar2 = puVar8 + -2;
          pvVar10 = param_5 + ((ulong)uVar1 * 8 - (long)puVar11) + -8;
          if (((value_type *)0x17 < pvVar10) &&
             (((undefined8 *)((long)puVar11 + ((ulong)pvVar10 & 0xfffffffffffffff8) + 8) <= puVar2
              || ((undefined8 *)((long)puVar8 + (((ulong)pvVar10 & 0xfffffffffffffff8) - 8)) <=
                  puVar11)))) {
            uVar3 = ((ulong)pvVar10 >> 3) + 1;
            lVar14 = 0;
            uVar12 = uVar3 & 0x3ffffffffffffffc;
            puVar2 = puVar8 + ((uVar3 & 0x1ffffffffffffffc) - 2);
            uVar4 = uVar12;
            do {
              puVar13 = (undefined8 *)((long)puVar11 + lVar14);
              puVar7 = (undefined8 *)((long)puVar8 + lVar14);
              lVar14 = lVar14 + 0x20;
              uVar4 = uVar4 - 4;
              uVar9 = *puVar13;
              uVar19 = puVar13[3];
              uVar18 = puVar13[2];
              puVar7[-1] = puVar13[1];
              puVar7[-2] = uVar9;
              puVar7[1] = uVar19;
              *puVar7 = uVar18;
            } while (uVar4 != 0);
            puVar11 = puVar11 + uVar12;
            if (uVar3 == uVar12) {
              return;
            }
          }
          do {
            puVar13 = puVar11 + 1;
            *puVar2 = *puVar11;
            puVar2 = puVar2 + 1;
            puVar11 = puVar13;
          } while (puVar13 != puVar6);
          return;
        }
        uVar4 = (**(code **)param_3)(*puVar7,*puVar11);
        if ((uVar4 & 1) == 0) {
          puVar17 = puVar11 + 1;
          uVar9 = *puVar11;
        }
        else {
          uVar9 = *puVar7;
          puVar17 = puVar11;
          puVar7 = puVar7 + 1;
        }
        puVar8[-2] = uVar9;
        puVar2 = puVar8 + 1;
        puVar11 = puVar17;
      } while (puVar17 != puVar6);
      if (puVar7 != puVar13) {
        puVar8 = puVar8 + -1;
        pvVar10 = param_5 + (uVar3 * 8 - (long)puVar7) + -8;
        if (((value_type *)0x17 < pvVar10) &&
           (((undefined8 *)((long)puVar7 + ((ulong)pvVar10 & 0xfffffffffffffff8) + 8) <= puVar8 ||
            ((undefined8 *)((long)puVar2 + (((ulong)pvVar10 & 0xfffffffffffffff8) - 8)) <= puVar7)))
           ) {
          uVar3 = ((ulong)pvVar10 >> 3) + 1;
          lVar14 = 0;
          uVar12 = uVar3 & 0x3ffffffffffffffc;
          puVar8 = puVar2 + ((uVar3 & 0x1ffffffffffffffc) - 2);
          uVar4 = uVar12;
          do {
            puVar6 = (undefined8 *)((long)puVar7 + lVar14);
            puVar11 = (undefined8 *)((long)puVar2 + lVar14);
            lVar14 = lVar14 + 0x20;
            uVar4 = uVar4 - 4;
            uVar9 = *puVar6;
            uVar19 = puVar6[3];
            uVar18 = puVar6[2];
            puVar11[-1] = puVar6[1];
            puVar11[-2] = uVar9;
            puVar11[1] = uVar19;
            *puVar11 = uVar18;
          } while (uVar4 != 0);
          puVar7 = puVar7 + uVar12;
          if (uVar3 == uVar12) {
            return;
          }
        }
        do {
          puVar2 = puVar7 + 1;
          *puVar8 = *puVar7;
          puVar8 = puVar8 + 1;
          puVar7 = puVar2;
        } while (puVar2 != puVar13);
      }
    }
  }
  return;
}


