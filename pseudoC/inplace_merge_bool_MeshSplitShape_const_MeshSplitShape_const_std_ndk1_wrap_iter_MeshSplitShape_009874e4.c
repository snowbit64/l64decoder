// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __inplace_merge<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),std::__ndk1::__wrap_iter<MeshSplitShape**>>
// Entry Point: 009874e4
// Size: 1148 bytes
// Signature: void __cdecl __inplace_merge<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),std::__ndk1::__wrap_iter<MeshSplitShape**>>(__wrap_iter param_1, __wrap_iter param_2, __wrap_iter param_3, _func_bool_MeshSplitShape_ptr_MeshSplitShape_ptr * param_4, difference_type param_5, difference_type param_6, value_type * param_7, long param_8)


/* void std::__ndk1::__inplace_merge<bool (*&)(MeshSplitShape const*, MeshSplitShape const*),
   std::__ndk1::__wrap_iter<MeshSplitShape**> >(std::__ndk1::__wrap_iter<MeshSplitShape**>,
   std::__ndk1::__wrap_iter<MeshSplitShape**>, std::__ndk1::__wrap_iter<MeshSplitShape**>, bool
   (*&)(MeshSplitShape const*, MeshSplitShape const*),
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<MeshSplitShape**> >::difference_type,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<MeshSplitShape**> >::difference_type,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<MeshSplitShape**> >::value_type*, long) */

void std::__ndk1::
     __inplace_merge<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),std::__ndk1::__wrap_iter<MeshSplitShape**>>
               (__wrap_iter param_1,__wrap_iter param_2,__wrap_iter param_3,
               _func_bool_MeshSplitShape_ptr_MeshSplitShape_ptr *param_4,difference_type param_5,
               difference_type param_6,value_type *param_7,long param_8)

{
  undefined8 *puVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  
  puVar3 = (undefined8 *)(ulong)param_1;
  puVar16 = (undefined8 *)(ulong)param_2;
  puVar4 = (undefined8 *)(ulong)param_3;
  uVar7 = (ulong)param_5;
  uVar5 = (ulong)param_6;
  do {
    if (uVar5 == 0) {
      return;
    }
    if (((long)uVar7 <= param_8) || ((long)uVar5 <= param_8)) {
      __buffered_inplace_merge<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),std::__ndk1::__wrap_iter<MeshSplitShape**>>
                ((__wrap_iter)puVar3,(__wrap_iter)puVar16,(__wrap_iter)puVar4,param_4,
                 (difference_type)uVar7,(difference_type)uVar5,param_7);
      return;
    }
    if (uVar7 == 0) {
      return;
    }
    lVar22 = 0;
    lVar26 = -uVar7;
    while (uVar7 = (**(code **)param_4)(*puVar16,*(undefined8 *)((long)puVar3 + lVar22)),
          (uVar7 & 1) == 0) {
      bVar6 = lVar26 == -1;
      lVar26 = lVar26 + 1;
      lVar22 = lVar22 + 8;
      if (bVar6) {
        return;
      }
    }
    lVar10 = -lVar26;
    puVar1 = (undefined8 *)((long)puVar3 + lVar22);
    if (lVar10 < (long)uVar5) {
      uVar9 = uVar5;
      if ((long)uVar5 < 0) {
        uVar9 = uVar5 + 1;
      }
      uVar9 = (long)uVar9 >> 1;
      lVar10 = (long)puVar16 + (-lVar22 - (long)puVar3);
      puVar25 = puVar16 + uVar9;
      puVar24 = puVar1;
      if (lVar10 != 0) {
        uVar7 = lVar10 >> 3;
        do {
          uVar21 = uVar7 >> 1;
          uVar8 = (**(code **)param_4)(*puVar25,puVar24[uVar21]);
          uVar17 = uVar7 + ~uVar21;
          uVar7 = uVar21;
          if ((uVar8 & 1) == 0) {
            uVar7 = uVar17;
            puVar24 = puVar24 + uVar21 + 1;
          }
        } while (uVar7 != 0);
      }
      uVar7 = (long)puVar24 + (-lVar22 - (long)puVar3) >> 3;
    }
    else {
      if (lVar26 == -1) {
        uVar18 = *(undefined8 *)((long)puVar3 + lVar22);
        *(undefined8 *)((long)puVar3 + lVar22) = *puVar16;
        *puVar16 = uVar18;
        return;
      }
      if (0 < lVar26) {
        lVar10 = lVar10 + 1;
      }
      uVar7 = lVar10 >> 1;
      puVar25 = puVar16;
      if ((long)puVar4 - (long)puVar16 != 0) {
        uVar9 = (long)puVar4 - (long)puVar16 >> 3;
        do {
          uVar8 = uVar9 >> 1;
          uVar17 = (**(code **)param_4)
                             (puVar25[uVar8],*(undefined8 *)((long)puVar3 + lVar22 + uVar7 * 8));
          uVar9 = uVar9 + ~uVar8;
          puVar24 = puVar25 + uVar8 + 1;
          if ((uVar17 & 1) == 0) {
            uVar9 = uVar8;
            puVar24 = puVar25;
          }
          puVar25 = puVar24;
        } while (uVar9 != 0);
      }
      puVar24 = (undefined8 *)((long)puVar3 + lVar22 + uVar7 * 8);
      uVar9 = (long)puVar25 - (long)puVar16 >> 3;
    }
    puVar23 = puVar25;
    if ((puVar24 != puVar16) && (puVar23 = puVar24, puVar16 != puVar25)) {
      if (puVar24 + 1 == puVar16) {
        uVar18 = *puVar24;
        sVar2 = (long)puVar25 - (long)puVar16;
        if (sVar2 != 0) {
          memmove(puVar24,puVar16,sVar2);
        }
        *(undefined8 *)((long)puVar24 + sVar2) = uVar18;
        puVar23 = (undefined8 *)((long)puVar24 + sVar2);
      }
      else if (puVar16 + 1 == puVar25) {
        uVar18 = puVar25[-1];
        sVar2 = (long)(puVar25 + -1) - (long)puVar24;
        puVar23 = puVar25;
        if (sVar2 != 0) {
          puVar23 = (undefined8 *)((long)puVar25 - sVar2);
          memmove(puVar23,puVar24,sVar2);
        }
        *puVar24 = uVar18;
      }
      else {
        lVar13 = (long)puVar16 - (long)puVar24 >> 3;
        lVar11 = (long)puVar25 - (long)puVar16 >> 3;
        lVar10 = lVar13;
        lVar20 = lVar11;
        if (lVar13 == lVar11) {
          uVar17 = (long)puVar16 + (-8 - (long)puVar24);
          puVar12 = puVar16;
          puVar14 = puVar24;
          puVar23 = puVar16;
          if ((7 < uVar17) &&
             (((undefined8 *)((long)puVar16 + (uVar17 & 0xfffffffffffffff8) + 8) <= puVar24 ||
              ((undefined8 *)((long)puVar24 + (uVar17 & 0xfffffffffffffff8) + 8) <= puVar16)))) {
            lVar10 = 0;
            uVar17 = (uVar17 >> 3) + 1;
            uVar21 = uVar17 & 0x3ffffffffffffffe;
            uVar8 = uVar21;
            do {
              uVar18 = *(undefined8 *)((long)puVar16 + lVar10);
              uVar8 = uVar8 - 2;
              uVar28 = ((undefined8 *)((long)puVar24 + lVar10))[1];
              uVar27 = *(undefined8 *)((long)puVar24 + lVar10);
              ((undefined8 *)((long)puVar24 + lVar10))[1] =
                   ((undefined8 *)((long)puVar16 + lVar10))[1];
              *(undefined8 *)((long)puVar24 + lVar10) = uVar18;
              ((undefined8 *)((long)puVar16 + lVar10))[1] = uVar28;
              *(undefined8 *)((long)puVar16 + lVar10) = uVar27;
              lVar10 = lVar10 + 0x10;
            } while (uVar8 != 0);
            puVar12 = puVar16 + uVar21;
            puVar14 = puVar24 + uVar21;
            if (uVar17 == uVar21) goto LAB_00987860;
          }
          do {
            uVar18 = *puVar14;
            puVar15 = puVar14 + 1;
            *puVar14 = *puVar12;
            *puVar12 = uVar18;
            puVar12 = puVar12 + 1;
            puVar14 = puVar15;
          } while (puVar15 != puVar16);
        }
        else {
          do {
            lVar19 = lVar20;
            lVar20 = 0;
            if (lVar19 != 0) {
              lVar20 = lVar10 / lVar19;
            }
            lVar20 = lVar10 - lVar20 * lVar19;
            lVar10 = lVar19;
          } while (lVar20 != 0);
          if (lVar19 != 0) {
            puVar16 = puVar24 + lVar19;
            do {
              puVar16 = puVar16 + -1;
              uVar18 = *puVar16;
              puVar12 = puVar16;
              puVar23 = puVar16 + lVar13;
              do {
                puVar14 = puVar23;
                lVar10 = (long)puVar25 - (long)puVar14 >> 3;
                puVar23 = puVar14 + lVar13;
                if (lVar10 <= lVar13) {
                  puVar23 = puVar24 + (lVar13 - lVar10);
                }
                *puVar12 = *puVar14;
                puVar12 = puVar14;
              } while (puVar23 != puVar16);
              *puVar14 = uVar18;
            } while (puVar16 != puVar24);
          }
          puVar23 = puVar24 + lVar11;
        }
      }
    }
LAB_00987860:
    if ((long)(uVar7 + uVar9) < (long)((uVar5 - (uVar7 + uVar9)) - lVar26)) {
      __inplace_merge<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),std::__ndk1::__wrap_iter<MeshSplitShape**>>
                ((__wrap_iter)puVar3 + (int)lVar22,(__wrap_iter)puVar24,(__wrap_iter)puVar23,param_4
                 ,(difference_type)uVar7,(difference_type)uVar9,param_7,param_8);
      puVar3 = puVar23;
      puVar16 = puVar25;
      uVar7 = -(uVar7 + lVar26);
      uVar5 = uVar5 - uVar9;
    }
    else {
      __inplace_merge<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),std::__ndk1::__wrap_iter<MeshSplitShape**>>
                ((__wrap_iter)puVar23,(__wrap_iter)puVar25,(__wrap_iter)puVar4,param_4,
                 (difference_type)-(uVar7 + lVar26),(difference_type)(uVar5 - uVar9),param_7,param_8
                );
      puVar3 = puVar1;
      puVar16 = puVar24;
      puVar4 = puVar23;
      uVar5 = uVar9;
    }
  } while( true );
}


