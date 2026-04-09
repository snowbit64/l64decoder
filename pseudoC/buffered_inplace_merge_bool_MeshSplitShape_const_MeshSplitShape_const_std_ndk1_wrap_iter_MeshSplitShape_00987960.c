// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __buffered_inplace_merge<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),std::__ndk1::__wrap_iter<MeshSplitShape**>>
// Entry Point: 00987960
// Size: 608 bytes
// Signature: void __cdecl __buffered_inplace_merge<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),std::__ndk1::__wrap_iter<MeshSplitShape**>>(__wrap_iter param_1, __wrap_iter param_2, __wrap_iter param_3, _func_bool_MeshSplitShape_ptr_MeshSplitShape_ptr * param_4, difference_type param_5, difference_type param_6, value_type * param_7)


/* void std::__ndk1::__buffered_inplace_merge<bool (*&)(MeshSplitShape const*, MeshSplitShape
   const*), std::__ndk1::__wrap_iter<MeshSplitShape**> >(std::__ndk1::__wrap_iter<MeshSplitShape**>,
   std::__ndk1::__wrap_iter<MeshSplitShape**>, std::__ndk1::__wrap_iter<MeshSplitShape**>, bool
   (*&)(MeshSplitShape const*, MeshSplitShape const*),
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<MeshSplitShape**> >::difference_type,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<MeshSplitShape**> >::difference_type,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<MeshSplitShape**> >::value_type*) */

void std::__ndk1::
     __buffered_inplace_merge<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),std::__ndk1::__wrap_iter<MeshSplitShape**>>
               (__wrap_iter param_1,__wrap_iter param_2,__wrap_iter param_3,
               _func_bool_MeshSplitShape_ptr_MeshSplitShape_ptr *param_4,difference_type param_5,
               difference_type param_6,value_type *param_7)

{
  undefined8 *__dest;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  code *pcVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar2 = (undefined8 *)(ulong)param_3;
  puVar1 = (undefined8 *)(ulong)param_2;
  __dest = (undefined8 *)(ulong)param_1;
  if (param_5 <= param_6) {
    if (__dest == puVar1) {
      return;
    }
    uVar7 = (long)puVar1 + (-8 - (long)__dest);
    puVar4 = __dest;
    puVar9 = (undefined8 *)param_7;
    if ((0x17 < uVar7) &&
       ((lVar6 = (uVar7 & 0xfffffffffffffff8) + 8, (value_type *)((long)__dest + lVar6) <= param_7
        || (param_7 + lVar6 <= __dest)))) {
      puVar4 = __dest + 2;
      uVar7 = (uVar7 >> 3) + 1;
      puVar9 = (undefined8 *)(param_7 + 0x10);
      uVar8 = uVar7 & 0x3ffffffffffffffc;
      puVar12 = (undefined8 *)(param_7 + uVar8 * 8);
      uVar10 = uVar8;
      do {
        puVar3 = puVar4 + -1;
        uVar5 = puVar4[-2];
        uVar14 = puVar4[1];
        uVar13 = *puVar4;
        puVar4 = puVar4 + 4;
        uVar10 = uVar10 - 4;
        puVar9[-1] = *puVar3;
        puVar9[-2] = uVar5;
        puVar9[1] = uVar14;
        *puVar9 = uVar13;
        puVar9 = puVar9 + 4;
      } while (uVar10 != 0);
      puVar4 = __dest + uVar8;
      puVar9 = puVar12;
      if (uVar7 == uVar8) goto LAB_00987b1c;
    }
    do {
      puVar3 = puVar4 + 1;
      puVar12 = puVar9 + 1;
      *puVar9 = *puVar4;
      puVar4 = puVar3;
      puVar9 = puVar12;
    } while (puVar3 != puVar1);
LAB_00987b1c:
    if (puVar12 == (undefined8 *)param_7) {
      return;
    }
    pcVar11 = *(code **)param_4;
    do {
      if (puVar1 == puVar2) {
        if ((long)puVar12 - (long)param_7 == 0) {
          return;
        }
        memmove(__dest,param_7,(long)puVar12 - (long)param_7);
        return;
      }
      uVar7 = (*pcVar11)(*puVar1,*(undefined8 *)param_7);
      if ((uVar7 & 1) == 0) {
        puVar4 = (undefined8 *)((long)param_7 + 8);
        uVar5 = *(undefined8 *)param_7;
      }
      else {
        uVar5 = *puVar1;
        puVar4 = (undefined8 *)param_7;
        puVar1 = puVar1 + 1;
      }
      *__dest = uVar5;
      param_7 = (value_type *)puVar4;
      __dest = __dest + 1;
    } while (puVar4 != puVar12);
    return;
  }
  if (puVar1 == puVar2) {
    return;
  }
  uVar7 = (long)puVar2 + (-8 - (long)puVar1);
  puVar4 = puVar1;
  puVar9 = (undefined8 *)param_7;
  if ((0x17 < uVar7) &&
     ((lVar6 = (uVar7 & 0xfffffffffffffff8) + 8, (value_type *)((long)puVar1 + lVar6) <= param_7 ||
      (param_7 + lVar6 <= puVar1)))) {
    puVar4 = puVar1 + 2;
    uVar7 = (uVar7 >> 3) + 1;
    puVar9 = (undefined8 *)(param_7 + 0x10);
    uVar8 = uVar7 & 0x3ffffffffffffffc;
    puVar12 = (undefined8 *)(param_7 + uVar8 * 8);
    uVar10 = uVar8;
    do {
      puVar3 = puVar4 + -1;
      uVar5 = puVar4[-2];
      uVar14 = puVar4[1];
      uVar13 = *puVar4;
      puVar4 = puVar4 + 4;
      uVar10 = uVar10 - 4;
      puVar9[-1] = *puVar3;
      puVar9[-2] = uVar5;
      puVar9[1] = uVar14;
      *puVar9 = uVar13;
      puVar9 = puVar9 + 4;
    } while (uVar10 != 0);
    puVar4 = puVar1 + uVar8;
    puVar9 = puVar12;
    if (uVar7 == uVar8) goto joined_r0x00987a34;
  }
  do {
    puVar3 = puVar4 + 1;
    puVar12 = puVar9 + 1;
    *puVar9 = *puVar4;
    puVar4 = puVar3;
    puVar9 = puVar12;
  } while (puVar3 != puVar2);
joined_r0x00987a34:
  while( true ) {
    if (puVar12 == (undefined8 *)param_7) {
      return;
    }
    puVar2 = puVar2 + -1;
    if (puVar1 == __dest) break;
    uVar7 = (**(code **)param_4)(puVar12[-1],puVar1[-1]);
    puVar4 = puVar12;
    puVar9 = puVar1;
    puVar3 = puVar1 + -1;
    if ((uVar7 & 1) == 0) {
      puVar4 = puVar12 + -1;
      puVar9 = puVar12;
      puVar3 = puVar1;
    }
    *puVar2 = puVar9[-1];
    puVar1 = puVar3;
    puVar12 = puVar4;
  }
  lVar6 = 0;
  do {
    *(undefined8 *)((long)puVar2 + lVar6) = *(undefined8 *)((long)puVar12 + lVar6 + -8);
    lVar6 = lVar6 + -8;
  } while ((value_type *)((long)puVar12 + lVar6) != param_7);
  return;
}


