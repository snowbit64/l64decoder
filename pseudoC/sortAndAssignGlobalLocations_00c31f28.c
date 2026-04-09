// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sortAndAssignGlobalLocations
// Entry Point: 00c31f28
// Size: 2104 bytes
// Signature: undefined __cdecl sortAndAssignGlobalLocations(SharedContext * param_1, vector * * param_2, uint param_3)


/* IR_HllConvertUtil::sortAndAssignGlobalLocations(IR_HllConvertUtil::SharedContext&,
   std::__ndk1::vector<IR_HllConvertUtil::GlobalData,
   std::__ndk1::allocator<IR_HllConvertUtil::GlobalData> >**, unsigned int) */

bool IR_HllConvertUtil::sortAndAssignGlobalLocations
               (SharedContext *param_1,vector **param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  __tree_iterator _Var6;
  size_t sVar7;
  void *pvVar8;
  __tree_node_base **pp_Var9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  bool bVar15;
  void *pvVar16;
  char **ppcVar17;
  undefined8 *puVar18;
  char *pcVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  undefined8 local_a0;
  size_t sStack_98;
  void *local_90;
  __tree_node_base **local_88;
  __tree_node_base *local_80;
  long local_78;
  __tree_end_node *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  local_a4 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_80 = (__tree_node_base *)0x0;
  local_78 = 0;
  puVar1 = &local_a8;
  if (3 < *(int *)param_1 - 1U) {
    puVar1 = &local_a4;
  }
  puVar2 = &local_a4;
  if (*(int *)param_1 != 6) {
    puVar2 = &local_ac;
  }
  local_88 = &local_80;
  if (param_3 != 0) {
    uVar13 = 0;
    pvVar16 = (void *)((ulong)&local_a0 | 1);
    do {
      plVar22 = (long *)param_2[uVar13];
      lVar11 = *plVar22;
      if (plVar22[1] != lVar11) {
        uVar21 = 0;
        do {
          iVar4 = *(int *)(lVar11 + uVar21 * 0x40);
          if (iVar4 == 4) {
            ppcVar17 = (char **)(lVar11 + uVar21 * 0x40 + 8);
            pcVar19 = *ppcVar17;
            sVar7 = strlen(pcVar19);
            if (0xffffffffffffffef < sVar7) {
                    /* try { // try from 00c3272c to 00c32733 has its CatchHandler @ 00c327a0 */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (sVar7 < 0x17) {
              local_a0 = CONCAT71(local_a0._1_7_,(char)((int)sVar7 << 1));
              pvVar8 = pvVar16;
              if (sVar7 != 0) goto LAB_00c32198;
            }
            else {
              uVar20 = sVar7 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00c32180 to 00c32187 has its CatchHandler @ 00c3277c */
              pvVar8 = operator_new(uVar20);
              local_a0 = uVar20 | 1;
              sStack_98 = sVar7;
              local_90 = pvVar8;
LAB_00c32198:
              memcpy(pvVar8,pcVar19,sVar7);
            }
            *(undefined *)((long)pvVar8 + sVar7) = 0;
                    /* try { // try from 00c321ac to 00c321b7 has its CatchHandler @ 00c327a8 */
            _Var6 = std::__ndk1::
                    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                    ::
                    find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                              ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                                *)&local_88,(basic_string *)&local_a0);
            if ((local_a0 & 1) != 0) {
              operator_delete(local_90);
            }
            if (&local_80 != (__tree_node_base **)(ulong)_Var6) goto LAB_00c32004;
            pcVar19 = *ppcVar17;
            uVar3 = *puVar2;
            sVar7 = strlen(pcVar19);
            if (0xffffffffffffffef < sVar7) {
                    /* try { // try from 00c32754 to 00c3275b has its CatchHandler @ 00c3276c */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (sVar7 < 0x17) {
              local_a0 = CONCAT71(local_a0._1_7_,(char)((int)sVar7 << 1));
              pvVar8 = pvVar16;
              if (sVar7 != 0) goto LAB_00c32364;
            }
            else {
              uVar20 = sVar7 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00c3234c to 00c32353 has its CatchHandler @ 00c32760 */
              pvVar8 = operator_new(uVar20);
              local_a0 = uVar20 | 1;
              sStack_98 = sVar7;
              local_90 = pvVar8;
LAB_00c32364:
              memcpy(pvVar8,pcVar19,sVar7);
            }
            *(undefined *)((long)pvVar8 + sVar7) = 0;
                    /* try { // try from 00c32378 to 00c3239b has its CatchHandler @ 00c32788 */
            pp_Var9 = std::__ndk1::
                      __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                      ::
                      __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                                  *)&local_88,&local_70,(basic_string *)&local_a0);
            puVar18 = (undefined8 *)*pp_Var9;
            if (puVar18 == (undefined8 *)0x0) {
              puVar18 = (undefined8 *)operator_new(0x40);
              pvVar8 = local_90;
              sVar7 = sStack_98;
              uVar20 = local_a0;
              *(undefined4 *)(puVar18 + 7) = 0;
              sStack_98 = 0;
              local_90 = (void *)0x0;
              local_a0 = 0;
              puVar18[6] = pvVar8;
              puVar18[5] = sVar7;
              puVar18[4] = uVar20;
              *puVar18 = 0;
              puVar18[1] = 0;
              puVar18[2] = local_70;
              *pp_Var9 = (__tree_node_base *)puVar18;
              puVar10 = puVar18;
              if ((__tree_node_base **)*local_88 != (__tree_node_base **)0x0) {
                puVar10 = (undefined8 *)*pp_Var9;
                local_88 = (__tree_node_base **)*local_88;
              }
              std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                        (local_80,(__tree_node_base *)puVar10);
              local_78 = local_78 + 1;
            }
            *(uint *)(puVar18 + 7) = uVar3;
            puVar14 = puVar2;
            if ((local_a0 & 1) != 0) {
              operator_delete(local_90);
            }
LAB_00c31ff8:
            *puVar14 = *puVar14 + 1;
          }
          else if (iVar4 == 3) {
            ppcVar17 = (char **)(lVar11 + uVar21 * 0x40 + 8);
            pcVar19 = *ppcVar17;
            sVar7 = strlen(pcVar19);
            if (0xffffffffffffffef < sVar7) {
                    /* try { // try from 00c3273c to 00c32743 has its CatchHandler @ 00c32794 */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (sVar7 < 0x17) {
              local_a0 = CONCAT71(local_a0._1_7_,(char)((int)sVar7 << 1));
              pvVar8 = pvVar16;
              if (sVar7 != 0) goto LAB_00c32100;
            }
            else {
              uVar20 = sVar7 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00c320e8 to 00c320ef has its CatchHandler @ 00c32780 */
              pvVar8 = operator_new(uVar20);
              local_a0 = uVar20 | 1;
              sStack_98 = sVar7;
              local_90 = pvVar8;
LAB_00c32100:
              memcpy(pvVar8,pcVar19,sVar7);
            }
            *(undefined *)((long)pvVar8 + sVar7) = 0;
                    /* try { // try from 00c32114 to 00c3211f has its CatchHandler @ 00c32798 */
            _Var6 = std::__ndk1::
                    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                    ::
                    find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                              ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                                *)&local_88,(basic_string *)&local_a0);
            if ((local_a0 & 1) != 0) {
              operator_delete(local_90);
            }
            if (&local_80 == (__tree_node_base **)(ulong)_Var6) {
              pcVar19 = *ppcVar17;
              uVar3 = *puVar1;
              sVar7 = strlen(pcVar19);
              if (0xffffffffffffffef < sVar7) {
                    /* try { // try from 00c3274c to 00c32753 has its CatchHandler @ 00c32770 */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_length_error();
              }
              if (sVar7 < 0x17) {
                local_a0 = CONCAT71(local_a0._1_7_,(char)((int)sVar7 << 1));
                pvVar8 = pvVar16;
                if (sVar7 != 0) goto LAB_00c322c4;
              }
              else {
                uVar20 = sVar7 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00c322ac to 00c322b3 has its CatchHandler @ 00c32764 */
                pvVar8 = operator_new(uVar20);
                local_a0 = uVar20 | 1;
                sStack_98 = sVar7;
                local_90 = pvVar8;
LAB_00c322c4:
                memcpy(pvVar8,pcVar19,sVar7);
              }
              *(undefined *)((long)pvVar8 + sVar7) = 0;
                    /* try { // try from 00c322d8 to 00c322fb has its CatchHandler @ 00c3278c */
              pp_Var9 = std::__ndk1::
                        __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                        ::
                        __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                  ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                                    *)&local_88,&local_70,(basic_string *)&local_a0);
              puVar18 = (undefined8 *)*pp_Var9;
              if (puVar18 == (undefined8 *)0x0) {
                puVar18 = (undefined8 *)operator_new(0x40);
                pvVar8 = local_90;
                sVar7 = sStack_98;
                uVar20 = local_a0;
                *(undefined4 *)(puVar18 + 7) = 0;
                sStack_98 = 0;
                local_90 = (void *)0x0;
                local_a0 = 0;
                puVar18[6] = pvVar8;
                puVar18[5] = sVar7;
                puVar18[4] = uVar20;
                *puVar18 = 0;
                puVar18[1] = 0;
                puVar18[2] = local_70;
                *pp_Var9 = (__tree_node_base *)puVar18;
                puVar10 = puVar18;
                if ((__tree_node_base **)*local_88 != (__tree_node_base **)0x0) {
                  puVar10 = (undefined8 *)*pp_Var9;
                  local_88 = (__tree_node_base **)*local_88;
                }
                std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                          (local_80,(__tree_node_base *)puVar10);
                local_78 = local_78 + 1;
              }
              *(uint *)(puVar18 + 7) = uVar3;
              puVar14 = puVar1;
              if ((local_a0 & 1) != 0) {
                operator_delete(local_90);
              }
              goto LAB_00c31ff8;
            }
          }
          else if (iVar4 == 2) {
            ppcVar17 = (char **)(lVar11 + uVar21 * 0x40 + 8);
            pcVar19 = *ppcVar17;
            sVar7 = strlen(pcVar19);
            if (0xffffffffffffffef < sVar7) {
                    /* try { // try from 00c32734 to 00c3273b has its CatchHandler @ 00c3279c */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (sVar7 < 0x17) {
              local_a0 = CONCAT71(local_a0._1_7_,(char)((int)sVar7 << 1));
              pvVar8 = pvVar16;
              if (sVar7 != 0) goto LAB_00c32230;
            }
            else {
              uVar20 = sVar7 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00c32218 to 00c3221f has its CatchHandler @ 00c32778 */
              pvVar8 = operator_new(uVar20);
              local_a0 = uVar20 | 1;
              sStack_98 = sVar7;
              local_90 = pvVar8;
LAB_00c32230:
              memcpy(pvVar8,pcVar19,sVar7);
            }
            *(undefined *)((long)pvVar8 + sVar7) = 0;
                    /* try { // try from 00c32244 to 00c3224f has its CatchHandler @ 00c327a4 */
            _Var6 = std::__ndk1::
                    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                    ::
                    find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                              ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                                *)&local_88,(basic_string *)&local_a0);
            if ((local_a0 & 1) != 0) {
              operator_delete(local_90);
            }
            uVar3 = local_a4;
            if (&local_80 == (__tree_node_base **)(ulong)_Var6) {
              pcVar19 = *ppcVar17;
              sVar7 = strlen(pcVar19);
              if (0xffffffffffffffef < sVar7) {
                    /* try { // try from 00c32744 to 00c3274b has its CatchHandler @ 00c32774 */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_length_error();
              }
              if (sVar7 < 0x17) {
                local_a0 = CONCAT71(local_a0._1_7_,(char)((int)sVar7 << 1));
                pvVar8 = pvVar16;
                if (sVar7 != 0) goto LAB_00c32404;
              }
              else {
                uVar20 = sVar7 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00c323ec to 00c323f3 has its CatchHandler @ 00c32768 */
                pvVar8 = operator_new(uVar20);
                local_a0 = uVar20 | 1;
                sStack_98 = sVar7;
                local_90 = pvVar8;
LAB_00c32404:
                memcpy(pvVar8,pcVar19,sVar7);
              }
              *(undefined *)((long)pvVar8 + sVar7) = 0;
                    /* try { // try from 00c32418 to 00c3243b has its CatchHandler @ 00c32784 */
              pp_Var9 = std::__ndk1::
                        __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                        ::
                        __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                  ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                                    *)&local_88,&local_70,(basic_string *)&local_a0);
              puVar18 = (undefined8 *)*pp_Var9;
              if (puVar18 == (undefined8 *)0x0) {
                puVar18 = (undefined8 *)operator_new(0x40);
                pvVar8 = local_90;
                sVar7 = sStack_98;
                uVar20 = local_a0;
                *(undefined4 *)(puVar18 + 7) = 0;
                sStack_98 = 0;
                local_90 = (void *)0x0;
                local_a0 = 0;
                puVar18[6] = pvVar8;
                puVar18[5] = sVar7;
                puVar18[4] = uVar20;
                *puVar18 = 0;
                puVar18[1] = 0;
                puVar18[2] = local_70;
                *pp_Var9 = (__tree_node_base *)puVar18;
                puVar10 = puVar18;
                if ((__tree_node_base **)*local_88 != (__tree_node_base **)0x0) {
                  puVar10 = (undefined8 *)*pp_Var9;
                  local_88 = (__tree_node_base **)*local_88;
                }
                std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                          (local_80,(__tree_node_base *)puVar10);
                local_78 = local_78 + 1;
              }
              *(uint *)(puVar18 + 7) = uVar3;
              if ((local_a0 & 1) != 0) {
                operator_delete(local_90);
              }
              local_a4 = local_a4 + 1;
            }
          }
LAB_00c32004:
          lVar11 = *plVar22;
          uVar21 = (ulong)((int)uVar21 + 1);
        } while (uVar21 < (ulong)(plVar22[1] - lVar11 >> 6));
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != param_3);
    if (param_3 != 0) {
      uVar13 = 0;
      do {
        plVar22 = (long *)param_2[uVar13];
        lVar11 = *plVar22;
        lVar12 = plVar22[1];
        if (lVar12 != lVar11) {
          uVar21 = 0;
          do {
            if (*(int *)(lVar11 + uVar21 * 0x40) - 2U < 3) {
              pcVar19 = *(char **)(lVar11 + uVar21 * 0x40 + 8);
              sVar7 = strlen(pcVar19);
              if (0xffffffffffffffef < sVar7) {
                    /* try { // try from 00c32724 to 00c3272b has its CatchHandler @ 00c327ac */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_length_error();
              }
              if (sVar7 < 0x17) {
                local_a0 = CONCAT71(local_a0._1_7_,(char)((int)sVar7 << 1));
                pvVar16 = (void *)((ulong)&local_a0 | 1);
                if (sVar7 != 0) goto LAB_00c325ec;
              }
              else {
                uVar20 = sVar7 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00c325d4 to 00c325db has its CatchHandler @ 00c32790 */
                pvVar16 = operator_new(uVar20);
                local_a0 = uVar20 | 1;
                sStack_98 = sVar7;
                local_90 = pvVar16;
LAB_00c325ec:
                memcpy(pvVar16,pcVar19,sVar7);
              }
              *(undefined *)((long)pvVar16 + sVar7) = 0;
                    /* try { // try from 00c32600 to 00c32623 has its CatchHandler @ 00c327b4 */
              pp_Var9 = std::__ndk1::
                        __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                        ::
                        __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                  ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                                    *)&local_88,&local_70,(basic_string *)&local_a0);
              puVar18 = (undefined8 *)*pp_Var9;
              if (puVar18 == (undefined8 *)0x0) {
                puVar18 = (undefined8 *)operator_new(0x40);
                pvVar16 = local_90;
                sVar7 = sStack_98;
                uVar20 = local_a0;
                *(undefined4 *)(puVar18 + 7) = 0;
                sStack_98 = 0;
                local_90 = (void *)0x0;
                local_a0 = 0;
                puVar18[6] = pvVar16;
                puVar18[5] = sVar7;
                puVar18[4] = uVar20;
                *puVar18 = 0;
                puVar18[1] = 0;
                puVar18[2] = local_70;
                *pp_Var9 = (__tree_node_base *)puVar18;
                puVar10 = puVar18;
                if ((__tree_node_base **)*local_88 != (__tree_node_base **)0x0) {
                  puVar10 = (undefined8 *)*pp_Var9;
                  local_88 = (__tree_node_base **)*local_88;
                }
                std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                          (local_80,(__tree_node_base *)puVar10);
                local_78 = local_78 + 1;
              }
              *(undefined4 *)(lVar11 + uVar21 * 0x40 + 0x30) = *(undefined4 *)(puVar18 + 7);
              if ((local_a0 & 1) != 0) {
                operator_delete(local_90);
              }
              lVar11 = *plVar22;
              lVar12 = plVar22[1];
            }
            uVar21 = (ulong)((int)uVar21 + 1);
          } while (uVar21 < (ulong)(lVar12 - lVar11 >> 6));
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != param_3);
    }
  }
  if (local_a8 + local_a4 < 0x21) {
    bVar15 = *(int *)param_1 == 6 || *puVar2 < 0x11;
  }
  else {
    bVar15 = false;
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
             *)&local_88,(__tree_node *)local_80);
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar15;
}


