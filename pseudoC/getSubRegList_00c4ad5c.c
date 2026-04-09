// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSubRegList
// Entry Point: 00c4ad5c
// Size: 616 bytes
// Signature: undefined __thiscall getSubRegList(IR_Section * this, IR_Type * param_1, uint * param_2, uint param_3, uint param_4, RegList * param_5, RegList * param_6)


/* IR_Section::getSubRegList(IR_Type*, unsigned int const*, unsigned int, unsigned int,
   IR_Section::RegList&, IR_Section::RegList&) */

ulong __thiscall
IR_Section::getSubRegList
          (IR_Section *this,IR_Type *param_1,uint *param_2,uint param_3,uint param_4,
          RegList *param_5,RegList *param_6)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 *puVar5;
  ulong uVar6;
  char **ppcVar7;
  undefined4 *puVar8;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  void *pvVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  uint local_70;
  uint local_6c;
  long local_68;
  undefined4 *puVar9;
  
  lVar2 = tpidr_el0;
  uVar14 = (ulong)param_4;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar6 = uVar14;
  if (param_4 < param_3) {
    do {
      uVar14 = uVar6;
      if ((*(int *)param_1 != 3) || ((*(IR_Struct **)((long)param_1 + 8))[0x55] != (IR_Struct)0x0))
      break;
      iVar13 = (int)uVar14;
      if (-1 < (int)param_2[uVar14]) break;
      uVar6 = (ulong)param_2[uVar14] & 0x7fffffff;
      if (*(int *)(*(long *)(*(long *)this + 0x80) + uVar6 * 0x18) != 0xc) break;
      ppcVar7 = (char **)(*(long *)(*(long *)this + 0x80) + uVar6 * 0x18 + 8);
      IR_Struct::getReplacementRegInfoForField
                (*(IR_Struct **)((long)param_1 + 8),*ppcVar7,&local_6c,&local_70);
      std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::
      insert<std::__ndk1::__wrap_iter<unsigned_int*>>
                ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)param_6,
                 (__wrap_iter)*(undefined8 *)(param_6 + 8),(__wrap_iter)*(undefined8 *)param_5,
                 (__wrap_iter)*(undefined8 *)param_5 + local_6c * 4);
      std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::
      insert<std::__ndk1::__wrap_iter<unsigned_int*>>
                ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)param_6,
                 (__wrap_iter)*(undefined8 *)(param_6 + 8),
                 (int)*(undefined8 *)param_5 + local_6c * 4 + local_70 * 4,
                 (__wrap_iter)*(undefined8 *)(param_5 + 8));
      uVar6 = (ulong)local_70;
      pvVar16 = *(void **)param_5;
      if (local_70 == 0) {
        puVar5 = (undefined4 *)0x0;
        puVar17 = (undefined4 *)0x0;
        puVar19 = (undefined4 *)0x0;
      }
      else {
        uVar15 = (ulong)local_6c;
        puVar18 = (undefined4 *)((long)pvVar16 + uVar15 * 4);
        puVar5 = (undefined4 *)operator_new(uVar6 * 4);
        puVar19 = puVar5 + uVar6;
        uVar14 = uVar6 - 1 & 0x3fffffffffffffff;
        puVar8 = puVar18;
        puVar17 = puVar5;
        if ((6 < uVar14) &&
           (((undefined4 *)((long)pvVar16 + (uVar6 + 0x3fffffffffffffff + uVar15) * 4 + 4) <= puVar5
            || (puVar5 + uVar6 + 0x4000000000000000 <= puVar18)))) {
          uVar14 = uVar14 + 1;
          uVar10 = uVar14 & 0x7ffffffffffffff8;
          puVar12 = (undefined8 *)((long)pvVar16 + uVar15 * 4 + 0x10);
          puVar17 = puVar5 + uVar10;
          puVar11 = (undefined8 *)(puVar5 + 4);
          uVar15 = uVar10;
          do {
            puVar3 = puVar12 + -1;
            uVar20 = puVar12[-2];
            uVar22 = puVar12[1];
            uVar21 = *puVar12;
            puVar12 = puVar12 + 4;
            uVar15 = uVar15 - 8;
            puVar11[-1] = *puVar3;
            puVar11[-2] = uVar20;
            puVar11[1] = uVar22;
            *puVar11 = uVar21;
            puVar11 = puVar11 + 4;
          } while (uVar15 != 0);
          puVar8 = puVar18 + uVar10;
          if (uVar14 == uVar10) goto joined_r0x00c4aecc;
        }
        puVar18 = puVar17;
        do {
          puVar9 = puVar8 + 1;
          puVar17 = puVar18 + 1;
          *puVar18 = *puVar8;
          puVar8 = puVar9;
          puVar18 = puVar17;
        } while (puVar9 != puVar18 + uVar6);
      }
joined_r0x00c4aecc:
      if (pvVar16 != (void *)0x0) {
        *(void **)(param_5 + 8) = pvVar16;
        operator_delete(pvVar16);
        *(undefined8 *)param_5 = 0;
        *(undefined8 *)(param_5 + 8) = 0;
        *(undefined8 *)(param_5 + 0x10) = 0;
      }
      uVar14 = (ulong)param_3;
      *(undefined4 **)param_5 = puVar5;
      *(undefined4 **)(param_5 + 8) = puVar17;
      *(undefined4 **)(param_5 + 0x10) = puVar19;
      lVar4 = IR_Struct::getField(*(IR_Struct **)((long)param_1 + 8),*ppcVar7,(uint *)0x0);
      uVar1 = iVar13 + 1;
      param_1 = *(IR_Type **)(lVar4 + 0x10);
      uVar6 = (ulong)uVar1;
    } while (uVar1 != param_3);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
}


