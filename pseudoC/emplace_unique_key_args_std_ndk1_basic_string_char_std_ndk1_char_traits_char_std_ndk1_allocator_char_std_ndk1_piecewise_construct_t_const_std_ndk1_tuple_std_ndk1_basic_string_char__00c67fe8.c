// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
// Entry Point: 00c67fe8
// Size: 828 bytes
// Signature: pair __cdecl __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>(basic_string * param_1, piecewise_construct_t * param_2, tuple * param_3, tuple * param_4)


/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, UserBlockManager::UserDetails>,
   void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, UserBlockManager::UserDetails>,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, UserBlockManager::UserDetails>,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, UserBlockManager::UserDetails>,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, UserBlockManager::UserDetails> >
   >::__emplace_unique_key_args<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&&>, std::__ndk1::tuple<> >(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&&>&&, std::__ndk1::tuple<>&&) */

pair std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>>>
     ::
     __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
               (basic_string *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  basic_string *pbVar1;
  piecewise_construct_t *ppVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long **__s1;
  long **pplVar13;
  long *plVar14;
  long *unaff_x27;
  undefined2 uVar15;
  undefined8 uVar16;
  float fVar17;
  long **local_80;
  basic_string *pbStack_78;
  undefined local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar11 = *(ulong *)(param_2 + 8);
  ppVar2 = *(piecewise_construct_t **)(param_2 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    ppVar2 = param_2 + 1;
    uVar11 = (ulong)((byte)*param_2 >> 1);
  }
                    /* try { // try from 00c68038 to 00c6803f has its CatchHandler @ 00c68348 */
  plVar6 = (long *)__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                             ((__murmur2_or_cityhash<unsigned_long,64ul> *)&local_80,ppVar2,uVar11);
  plVar14 = *(long **)(param_1 + 2);
  if (plVar14 != (long *)0x0) {
    uVar16 = NEON_cnt(plVar14,1);
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar11 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar11 < 2) {
      unaff_x27 = (long *)((long)plVar14 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x27 = plVar6;
      if (plVar14 <= plVar6) {
        uVar12 = 0;
        if (plVar14 != (long *)0x0) {
          uVar12 = (ulong)plVar6 / (ulong)plVar14;
        }
        unaff_x27 = (long *)((long)plVar6 - uVar12 * (long)plVar14);
      }
    }
    puVar7 = *(undefined8 **)(*(long *)param_1 + (long)unaff_x27 * 8);
    if (puVar7 != (undefined8 *)0x0) {
      pplVar13 = (long **)*puVar7;
      ppVar2 = param_2 + 1;
      plVar10 = (long *)(ulong)((byte)*param_2 >> 1);
      if (((byte)*param_2 & 1) != 0) {
        ppVar2 = *(piecewise_construct_t **)(param_2 + 0x10);
        plVar10 = *(long **)(param_2 + 8);
      }
      if (pplVar13 != (long **)0x0) {
        do {
          plVar8 = pplVar13[1];
          if (plVar8 != plVar6) {
            if (uVar11 < 2) {
              plVar8 = (long *)((ulong)plVar8 & (long)plVar14 - 1U);
            }
            else if (plVar14 <= plVar8) {
              uVar12 = 0;
              if (plVar14 != (long *)0x0) {
                uVar12 = (ulong)plVar8 / (ulong)plVar14;
              }
              plVar8 = (long *)((long)plVar8 - uVar12 * (long)plVar14);
            }
            if (plVar8 != unaff_x27) break;
          }
          bVar3 = *(byte *)(pplVar13 + 2);
          plVar8 = (long *)(ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            plVar8 = pplVar13[3];
          }
          if (plVar8 == plVar10) {
            __s1 = (long **)pplVar13[4];
            if ((bVar3 & 1) == 0) {
              __s1 = (long **)((long)pplVar13 + 0x11);
            }
            if ((bVar3 & 1) == 0) {
              if (plVar10 != (long *)0x0) {
                plVar8 = (long *)0x0;
                while (*(piecewise_construct_t *)((long)pplVar13 + (long)plVar8 + 0x11) ==
                       ppVar2[(long)plVar8]) {
                  plVar8 = (long *)((long)plVar8 + 1);
                  if ((long *)(ulong)(bVar3 >> 1) == plVar8) goto LAB_00c68174;
                }
                goto LAB_00c680c4;
              }
            }
            else if (plVar10 != (long *)0x0) {
              uVar5 = memcmp(__s1,ppVar2,(size_t)plVar10);
              __s1 = (long **)(ulong)uVar5;
              if (uVar5 != 0) goto LAB_00c680c4;
            }
LAB_00c68174:
            uVar16 = 0;
            goto LAB_00c682ec;
          }
LAB_00c680c4:
          pplVar13 = (long **)*pplVar13;
        } while (pplVar13 != (long **)0x0);
      }
    }
  }
  pbVar1 = param_1 + 4;
  __s1 = (long **)operator_new(0x78);
  pplVar13 = *(long ***)param_4;
  plVar8 = *pplVar13;
  plVar10 = pplVar13[2];
  __s1[3] = pplVar13[1];
  __s1[2] = plVar8;
  __s1[4] = plVar10;
  pplVar13[1] = (long *)0x0;
  pplVar13[2] = (long *)0x0;
  *pplVar13 = (long *)0x0;
  lVar9 = *(long *)(param_1 + 6);
  local_70 = 1;
  fVar17 = (float)param_1[8];
  *__s1 = (long *)0x0;
  __s1[1] = plVar6;
  __s1[6] = (long *)0x0;
  __s1[5] = (long *)0x0;
  __s1[8] = (long *)0x0;
  __s1[7] = (long *)0x0;
  __s1[10] = (long *)0x0;
  __s1[9] = (long *)0x0;
  __s1[0xc] = (long *)0x0;
  __s1[0xb] = (long *)0x0;
  __s1[0xe] = (long *)0x0;
  __s1[0xd] = (long *)0x0;
  local_80 = __s1;
  pbStack_78 = pbVar1;
  if ((plVar14 == (long *)0x0) || (fVar17 * (float)ZEXT89(plVar14) < (float)(unkuint9)(lVar9 + 1)))
  {
    if (plVar14 < (long *)0x3) {
      uVar11 = 1;
    }
    else {
      uVar11 = (ulong)(((ulong)plVar14 & (long)plVar14 - 1U) != 0);
    }
    uVar11 = uVar11 | (long)plVar14 << 1;
    uVar12 = (ulong)((float)(unkuint9)(lVar9 + 1) / fVar17);
    if (uVar12 <= uVar11) {
      uVar12 = uVar11;
    }
                    /* try { // try from 00c68224 to 00c6822b has its CatchHandler @ 00c68324 */
    __s1 = (long **)rehash((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>>>
                            *)param_1,uVar12);
    plVar14 = *(long **)(param_1 + 2);
    if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar14 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x27 = plVar6;
      if (plVar14 <= plVar6) {
        uVar11 = 0;
        if (plVar14 != (long *)0x0) {
          uVar11 = (ulong)plVar6 / (ulong)plVar14;
        }
        unaff_x27 = (long *)((long)plVar6 - uVar11 * (long)plVar14);
      }
    }
  }
  pplVar13 = *(long ***)(*(long *)param_1 + (long)unaff_x27 * 8);
  if (pplVar13 == (long **)0x0) {
    *local_80 = *(long **)(param_1 + 4);
    *(long ***)(param_1 + 4) = local_80;
    *(basic_string **)(*(long *)param_1 + (long)unaff_x27 * 8) = pbVar1;
    if (*local_80 != (long *)0x0) {
      plVar6 = (long *)(*local_80)[1];
      if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar14 - 1U);
      }
      else if (plVar14 <= plVar6) {
        uVar11 = 0;
        if (plVar14 != (long *)0x0) {
          uVar11 = (ulong)plVar6 / (ulong)plVar14;
        }
        plVar6 = (long *)((long)plVar6 - uVar11 * (long)plVar14);
      }
      *(long ***)(*(long *)param_1 + (long)plVar6 * 8) = local_80;
    }
  }
  else {
    *local_80 = *pplVar13;
    *pplVar13 = (long *)local_80;
  }
  uVar16 = 1;
  *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + 1;
  pplVar13 = local_80;
LAB_00c682ec:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return (pair)pplVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__s1,uVar16);
}


