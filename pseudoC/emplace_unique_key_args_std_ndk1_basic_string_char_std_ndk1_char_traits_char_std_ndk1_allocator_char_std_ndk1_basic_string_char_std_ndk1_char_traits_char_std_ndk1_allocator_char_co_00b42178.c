// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
// Entry Point: 00b42178
// Size: 776 bytes
// Signature: pair __cdecl __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>(basic_string * param_1, basic_string * param_2)


/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::hash<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
   >::__emplace_unique_key_args<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&>(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

pair std::__ndk1::
     __hash_table<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
     ::
     __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
               (basic_string *param_1,basic_string *param_2)

{
  void *pvVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  long *plVar6;
  long **pplVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long **pplVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long *unaff_x27;
  undefined2 uVar16;
  undefined8 uVar17;
  float fVar18;
  long **local_80;
  long *plStack_78;
  undefined local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar11 = *(ulong *)(param_2 + 2);
  pvVar1 = *(void **)(param_2 + 4);
  if ((*(byte *)param_2 & 1) == 0) {
    pvVar1 = (void *)((long)param_2 + 1);
    uVar11 = (ulong)(*(byte *)param_2 >> 1);
  }
                    /* try { // try from 00b421c8 to 00b421cf has its CatchHandler @ 00b42498 */
  plVar6 = (long *)__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                             ((__murmur2_or_cityhash<unsigned_long,64ul> *)&local_80,pvVar1,uVar11);
  plVar15 = *(long **)(param_1 + 2);
  if (plVar15 != (long *)0x0) {
    uVar17 = NEON_cnt(plVar15,1);
    uVar16 = NEON_uaddlv(uVar17,1);
    uVar11 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
    if (uVar11 < 2) {
      unaff_x27 = (long *)((long)plVar15 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x27 = plVar6;
      if (plVar15 <= plVar6) {
        uVar14 = 0;
        if (plVar15 != (long *)0x0) {
          uVar14 = (ulong)plVar6 / (ulong)plVar15;
        }
        unaff_x27 = (long *)((long)plVar6 - uVar14 * (long)plVar15);
      }
    }
    pplVar7 = *(long ***)(*(long *)param_1 + (long)unaff_x27 * 8);
    if (pplVar7 != (long **)0x0) {
      pplVar7 = (long **)*pplVar7;
      pvVar1 = (void *)((long)param_2 + 1);
      plVar4 = (long *)(ulong)(*(byte *)param_2 >> 1);
      if ((*(byte *)param_2 & 1) != 0) {
        pvVar1 = *(void **)(param_2 + 4);
        plVar4 = *(long **)(param_2 + 2);
      }
      if (pplVar7 != (long **)0x0) {
        do {
          plVar8 = pplVar7[1];
          if (plVar8 != plVar6) {
            if (uVar11 < 2) {
              plVar8 = (long *)((ulong)plVar8 & (long)plVar15 - 1U);
            }
            else if (plVar15 <= plVar8) {
              uVar14 = 0;
              if (plVar15 != (long *)0x0) {
                uVar14 = (ulong)plVar8 / (ulong)plVar15;
              }
              plVar8 = (long *)((long)plVar8 - uVar14 * (long)plVar15);
            }
            if (plVar8 != unaff_x27) break;
          }
          bVar2 = *(byte *)(pplVar7 + 2);
          plVar8 = (long *)(ulong)(bVar2 >> 1);
          if ((bVar2 & 1) != 0) {
            plVar8 = pplVar7[3];
          }
          if (plVar8 == plVar4) {
            plVar8 = pplVar7[4];
            if ((bVar2 & 1) == 0) {
              plVar8 = (long *)((long)pplVar7 + 0x11);
            }
            if ((bVar2 & 1) == 0) {
              if (plVar4 != (long *)0x0) {
                plVar10 = (long *)0x0;
                while (*(char *)((long)pplVar7 + (long)plVar10 + 0x11) ==
                       *(char *)((long)pvVar1 + (long)plVar10)) {
                  plVar10 = (long *)((long)plVar10 + 1);
                  if ((long *)(ulong)(bVar2 >> 1) == plVar10) goto LAB_00b42304;
                }
                goto LAB_00b42254;
              }
            }
            else if (plVar4 != (long *)0x0) {
              uVar5 = memcmp(plVar8,pvVar1,(size_t)plVar4);
              plVar8 = (long *)(ulong)uVar5;
              if (uVar5 != 0) goto LAB_00b42254;
            }
LAB_00b42304:
            uVar17 = 0;
            goto LAB_00b42448;
          }
LAB_00b42254:
          pplVar7 = (long **)*pplVar7;
        } while (pplVar7 != (long **)0x0);
      }
    }
  }
  plVar4 = (long *)(param_1 + 4);
  pplVar7 = (long **)operator_new(0x28);
  local_70 = 0;
  local_80 = pplVar7;
  plStack_78 = plVar4;
                    /* try { // try from 00b42328 to 00b4232f has its CatchHandler @ 00b42484 */
  plVar8 = (long *)std::__ndk1::
                   basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                   basic_string((basic_string *)(pplVar7 + 2));
  lVar9 = *(long *)(param_1 + 6);
  fVar18 = (float)param_1[8];
  *pplVar7 = (long *)0x0;
  pplVar7[1] = plVar6;
  local_70 = 1;
  if ((plVar15 == (long *)0x0) || (fVar18 * (float)ZEXT89(plVar15) < (float)(unkuint9)(lVar9 + 1)))
  {
    if (plVar15 < (long *)0x3) {
      uVar11 = 1;
    }
    else {
      uVar11 = (ulong)(((ulong)plVar15 & (long)plVar15 - 1U) != 0);
    }
    uVar11 = uVar11 | (long)plVar15 << 1;
    uVar14 = (ulong)((float)(unkuint9)(lVar9 + 1) / fVar18);
    if (uVar14 <= uVar11) {
      uVar14 = uVar11;
    }
                    /* try { // try from 00b42394 to 00b4239b has its CatchHandler @ 00b42480 */
    plVar8 = (long *)rehash((__hash_table<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                             *)param_1,uVar14);
    plVar15 = *(long **)(param_1 + 2);
    if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar15 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x27 = plVar6;
      if (plVar15 <= plVar6) {
        uVar11 = 0;
        if (plVar15 != (long *)0x0) {
          uVar11 = (ulong)plVar6 / (ulong)plVar15;
        }
        unaff_x27 = (long *)((long)plVar6 - uVar11 * (long)plVar15);
      }
    }
  }
  lVar9 = *(long *)param_1;
  pplVar12 = *(long ***)(lVar9 + (long)unaff_x27 * 8);
  if (pplVar12 == (long **)0x0) {
    lVar13 = *plVar4;
    *plVar4 = (long)pplVar7;
    *pplVar7 = (long *)lVar13;
    *(long **)(lVar9 + (long)unaff_x27 * 8) = plVar4;
    if (*local_80 != (long *)0x0) {
      plVar6 = (long *)(*local_80)[1];
      if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar15 - 1U);
      }
      else if (plVar15 <= plVar6) {
        uVar11 = 0;
        if (plVar15 != (long *)0x0) {
          uVar11 = (ulong)plVar6 / (ulong)plVar15;
        }
        plVar6 = (long *)((long)plVar6 - uVar11 * (long)plVar15);
      }
      *(long ***)(*(long *)param_1 + (long)plVar6 * 8) = local_80;
    }
  }
  else {
    *pplVar7 = *pplVar12;
    *pplVar12 = (long *)pplVar7;
  }
  uVar17 = 1;
  *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + 1;
  pplVar7 = local_80;
LAB_00b42448:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return (pair)pplVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar8,uVar17);
}


