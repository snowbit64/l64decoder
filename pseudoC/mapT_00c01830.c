// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: mapT
// Entry Point: 00c01830
// Size: 1084 bytes
// Signature: undefined __thiscall mapT(Main * this, PerItemData * param_1, PerThreadData * param_2)


/* DictionaryCreator::Main::mapT(DictionaryCreator::PerItemData*, DictionaryCreator::PerThreadData*)
   const */

undefined8 __thiscall
DictionaryCreator::Main::mapT(Main *this,PerItemData *param_1,PerThreadData *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  __tree_iterator _Var7;
  Character *__dest;
  void *pvVar8;
  __tree_node_base **pp_Var10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  byte *__src;
  Character *pCVar16;
  ulong *puVar17;
  ulong __n;
  byte *pbVar18;
  ulong uVar19;
  byte *pbVar20;
  uint local_4d4;
  undefined8 local_4d0;
  ulong local_4c8;
  void *local_4c0;
  Character *local_4b8;
  ulong *local_4b0;
  ulong *local_4a8;
  __tree_end_node *local_4a0;
  ulong local_498;
  undefined8 uStack_490;
  void *local_488;
  undefined4 local_480;
  uint local_478 [256];
  uint local_78;
  long local_70;
  PerThreadData *pPVar9;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  __src = *(byte **)param_1;
  local_4b8 = (Character *)0x0;
  local_4b0 = (ulong *)0x0;
  local_4d4 = *(uint *)(param_1 + 8);
  local_4a8 = (ulong *)0x0;
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar19 = (ulong)uVar2;
  pbVar20 = *(byte **)(param_1 + 0x10);
  if (uVar2 == 0) {
    puVar17 = (ulong *)0x0;
  }
  else {
    uVar12 = 0;
    puVar17 = (ulong *)0x0;
    pbVar18 = pbVar20;
    while( true ) {
      pCVar16 = local_4b8;
      uVar19 = uVar19 - 1;
      bVar3 = *pbVar18;
      if (puVar17 == local_4a8) {
        __n = (long)local_4a8 - (long)local_4b8;
        uVar13 = ((long)__n >> 3) + 1;
        if (uVar13 >> 0x3d != 0) {
                    /* try { // try from 00c01c54 to 00c01c67 has its CatchHandler @ 00c01cd4 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar13 <= (ulong)((long)__n >> 2)) {
          uVar13 = (long)__n >> 2;
        }
        if (0x7ffffffffffffff7 < __n) {
          uVar13 = 0x1fffffffffffffff;
        }
        if (uVar13 == 0) {
          __dest = (Character *)0x0;
        }
        else {
          if (uVar13 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 00c0190c to 00c0190f has its CatchHandler @ 00c01cac */
          __dest = (Character *)operator_new(uVar13 << 3);
        }
        puVar17 = (ulong *)((long)(__dest + ((long)__n >> 3) * 8) + 8);
        *(ulong *)(__dest + ((long)__n >> 3) * 8) = uVar12 | bVar3;
        if (0 < (long)__n) {
          memcpy(__dest,pCVar16,__n);
        }
        local_4a8 = (ulong *)(__dest + uVar13 * 8);
        local_4b8 = __dest;
        local_4b0 = puVar17;
        if (pCVar16 != (Character *)0x0) {
          operator_delete(pCVar16);
        }
      }
      else {
        local_4b0 = puVar17 + 1;
        *puVar17 = uVar12 | bVar3;
        puVar17 = local_4b0;
      }
      if (uVar19 == 0) break;
      pbVar18 = pbVar18 + 1;
      uVar12 = uVar12 + 0x100000000;
    }
  }
                    /* try { // try from 00c01998 to 00c019ab has its CatchHandler @ 00c01c6c */
  pCVar16 = local_4b8;
  std::__ndk1::
  __sort<std::__ndk1::__less<DictionaryCreator::Main::Character,DictionaryCreator::Main::Character>&,DictionaryCreator::Main::Character*>
            (local_4b8,(Character *)puVar17,(__less *)local_478);
  uVar19 = 0;
  local_78 = 0;
  uVar12 = (long)puVar17 - (long)pCVar16 >> 3;
  do {
    uVar13 = (ulong)local_78;
    local_478[uVar19] = local_78;
    if (uVar13 < uVar12) {
      do {
        if (uVar19 != (byte)pCVar16[uVar13 * 8]) break;
        uVar13 = (ulong)((int)uVar13 + 1);
      } while (uVar13 < uVar12);
      local_78 = (uint)uVar13;
    }
    uVar19 = uVar19 + 1;
  } while (uVar19 != 0x100);
  if (local_4d4 == 0) {
LAB_00c01c14:
    if (pCVar16 != (Character *)0x0) {
      operator_delete(pCVar16);
    }
    if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return 1;
  }
  do {
    uVar1 = local_4d4;
    if (0x22 < local_4d4) {
      uVar1 = 0x23;
    }
    uVar4 = local_478[(ulong)*__src + 1] - local_478[*__src];
    if (uVar4 == 0) {
LAB_00c01acc:
      uVar14 = 1;
    }
    else {
      uVar19 = 0;
      uVar12 = 0;
      do {
        uVar14 = uVar2 - *(uint *)(pCVar16 + uVar19 * 8 + (ulong)local_478[*__src] * 8 + 4);
        if (uVar1 <= uVar14) {
          uVar14 = uVar1;
        }
        if (uVar14 != 0) {
          lVar15 = 0;
          do {
            if (__src[lVar15] !=
                pbVar20[lVar15 + (ulong)*(uint *)(pCVar16 +
                                                 uVar19 * 8 + (ulong)local_478[*__src] * 8 + 4)]) {
              uVar14 = (uint)lVar15;
              break;
            }
            lVar15 = lVar15 + 1;
          } while (uVar14 != (uint)lVar15);
        }
        uVar19 = uVar19 + 1;
        if (uVar14 <= (uint)uVar12) {
          uVar14 = (uint)uVar12;
        }
        uVar12 = (ulong)uVar14;
      } while (uVar19 != uVar4);
      if (uVar14 < 4) goto LAB_00c01acc;
      if (uVar14 < 0x17) {
        local_4d0 = CONCAT71(local_4d0._1_7_,(char)(uVar14 << 1));
        pvVar8 = (void *)((ulong)&local_4d0 | 1);
      }
      else {
        uVar19 = uVar12 + 0x10 & 0x1fffffff0;
                    /* try { // try from 00c01af4 to 00c01afb has its CatchHandler @ 00c01c74 */
        pvVar8 = operator_new(uVar19);
        local_4d0 = uVar19 | 1;
        local_4c8 = uVar12;
        local_4c0 = pvVar8;
      }
      memcpy(pvVar8,__src,uVar12);
      *(undefined *)((long)pvVar8 + uVar12) = 0;
                    /* try { // try from 00c01b24 to 00c01b2f has its CatchHandler @ 00c01cb8 */
      _Var7 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                          *)param_2,(basic_string *)&local_4d0);
      pPVar9 = (PerThreadData *)(ulong)_Var7;
      if (param_2 + 8 == pPVar9) {
                    /* try { // try from 00c01b4c to 00c01b57 has its CatchHandler @ 00c01c70 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)&local_498);
        local_480 = 1;
                    /* try { // try from 00c01b60 to 00c01bab has its CatchHandler @ 00c01c78 */
        pp_Var10 = std::__ndk1::
                   __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                   ::
                   __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                             ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                               *)param_2,&local_4a0,(basic_string *)&local_498);
        if (*pp_Var10 == (__tree_node_base *)0x0) {
          puVar11 = (undefined8 *)operator_new(0x40);
          pvVar8 = local_488;
          uVar6 = uStack_490;
          uVar19 = local_498;
          *puVar11 = 0;
          puVar11[1] = 0;
          uStack_490 = 0;
          local_488 = (void *)0x0;
          local_498 = 0;
          puVar11[6] = pvVar8;
          puVar11[5] = uVar6;
          puVar11[4] = uVar19;
          *(undefined4 *)(puVar11 + 7) = local_480;
          puVar11[2] = local_4a0;
          *pp_Var10 = (__tree_node_base *)puVar11;
          if (**(long **)param_2 != 0) {
            *(long *)param_2 = **(long **)param_2;
            puVar11 = (undefined8 *)*pp_Var10;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    (*(__tree_node_base **)(param_2 + 8),(__tree_node_base *)puVar11);
          *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 1;
        }
        if ((local_498 & 1) != 0) {
          operator_delete(local_488);
        }
      }
      else {
        *(int *)(pPVar9 + 0x38) = *(int *)(pPVar9 + 0x38) + 1;
      }
      if ((local_4d0 & 1) != 0) {
        operator_delete(local_4c0);
      }
    }
    local_4d4 = local_4d4 - uVar14;
    pCVar16 = local_4b8;
    if (local_4d4 == 0) goto LAB_00c01c14;
    __src = __src + uVar14;
  } while( true );
}


