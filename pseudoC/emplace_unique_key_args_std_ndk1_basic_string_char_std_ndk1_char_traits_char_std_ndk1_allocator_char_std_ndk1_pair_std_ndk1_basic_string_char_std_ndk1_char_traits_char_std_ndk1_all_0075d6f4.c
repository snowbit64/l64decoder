// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>>
// Entry Point: 0075d6f4
// Size: 784 bytes
// Signature: pair __thiscall __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>>(__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>>> * this, basic_string * param_1, pair * param_2)


/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, JSONUtil::Atom*>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, JSONUtil::Atom*>,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, JSONUtil::Atom*>,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, JSONUtil::Atom*>,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, JSONUtil::Atom*> >
   >::__emplace_unique_key_args<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, JSONUtil::Atom*>
   >(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, JSONUtil::Atom*>&&) */

pair __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>>>
::
__emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>>
          (__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>>>
           *this,basic_string *param_1,pair *param_2)

{
  long *plVar1;
  void *pvVar2;
  long *plVar3;
  byte bVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  long **pplVar8;
  long *plVar9;
  ulong uVar10;
  long **pplVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long **__s1;
  long *plVar15;
  long *unaff_x27;
  undefined2 uVar16;
  undefined8 uVar17;
  long *plVar18;
  long *plVar19;
  float fVar20;
  long **local_80;
  long *plStack_78;
  undefined local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar10 = *(ulong *)(param_1 + 2);
  pvVar2 = *(void **)(param_1 + 4);
  if ((*(byte *)param_1 & 1) == 0) {
    pvVar2 = (void *)((long)param_1 + 1);
    uVar10 = (ulong)(*(byte *)param_1 >> 1);
  }
                    /* try { // try from 0075d744 to 0075d74b has its CatchHandler @ 0075da18 */
  plVar7 = (long *)__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                             ((__murmur2_or_cityhash<unsigned_long,64ul> *)&local_80,pvVar2,uVar10);
  plVar15 = *(long **)(this + 8);
  if (plVar15 != (long *)0x0) {
    uVar17 = NEON_cnt(plVar15,1);
    uVar16 = NEON_uaddlv(uVar17,1);
    uVar10 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
    if (uVar10 < 2) {
      unaff_x27 = (long *)((long)plVar15 - 1U & (ulong)plVar7);
    }
    else {
      unaff_x27 = plVar7;
      if (plVar15 <= plVar7) {
        uVar14 = 0;
        if (plVar15 != (long *)0x0) {
          uVar14 = (ulong)plVar7 / (ulong)plVar15;
        }
        unaff_x27 = (long *)((long)plVar7 - uVar14 * (long)plVar15);
      }
    }
    pplVar8 = *(long ***)(*(long *)this + (long)unaff_x27 * 8);
    if (pplVar8 != (long **)0x0) {
      pplVar8 = (long **)*pplVar8;
      pvVar2 = (void *)((long)param_1 + 1);
      plVar1 = (long *)(ulong)(*(byte *)param_1 >> 1);
      if ((*(byte *)param_1 & 1) != 0) {
        pvVar2 = *(void **)(param_1 + 4);
        plVar1 = *(long **)(param_1 + 2);
      }
      if (pplVar8 != (long **)0x0) {
        do {
          plVar9 = pplVar8[1];
          if (plVar9 != plVar7) {
            if (uVar10 < 2) {
              plVar9 = (long *)((ulong)plVar9 & (long)plVar15 - 1U);
            }
            else if (plVar15 <= plVar9) {
              uVar14 = 0;
              if (plVar15 != (long *)0x0) {
                uVar14 = (ulong)plVar9 / (ulong)plVar15;
              }
              plVar9 = (long *)((long)plVar9 - uVar14 * (long)plVar15);
            }
            if (plVar9 != unaff_x27) break;
          }
          bVar4 = *(byte *)(pplVar8 + 2);
          plVar9 = (long *)(ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            plVar9 = pplVar8[3];
          }
          if (plVar9 == plVar1) {
            __s1 = (long **)pplVar8[4];
            if ((bVar4 & 1) == 0) {
              __s1 = (long **)((long)pplVar8 + 0x11);
            }
            if ((bVar4 & 1) == 0) {
              if (plVar1 != (long *)0x0) {
                plVar9 = (long *)0x0;
                while (*(char *)((long)pplVar8 + (long)plVar9 + 0x11) ==
                       *(char *)((long)pvVar2 + (long)plVar9)) {
                  plVar9 = (long *)((long)plVar9 + 1);
                  if ((long *)(ulong)(bVar4 >> 1) == plVar9) goto LAB_0075d880;
                }
                goto LAB_0075d7d0;
              }
            }
            else if (plVar1 != (long *)0x0) {
              uVar6 = memcmp(__s1,pvVar2,(size_t)plVar1);
              __s1 = (long **)(ulong)uVar6;
              if (uVar6 != 0) goto LAB_0075d7d0;
            }
LAB_0075d880:
            uVar17 = 0;
            goto LAB_0075d9cc;
          }
LAB_0075d7d0:
          pplVar8 = (long **)*pplVar8;
        } while (pplVar8 != (long **)0x0);
      }
    }
  }
  plVar1 = (long *)(this + 0x10);
  pplVar8 = (long **)operator_new(0x30);
  plVar9 = *(long **)(param_2 + 4);
  plVar3 = *(long **)(param_2 + 6);
  *(undefined8 *)(param_2 + 4) = 0;
  plVar19 = *(long **)(param_2 + 2);
  plVar18 = *(long **)param_2;
  *(undefined8 *)param_2 = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  lVar13 = *(long *)(this + 0x18);
  fVar20 = *(float *)(this + 0x20);
  *pplVar8 = (long *)0x0;
  pplVar8[1] = plVar7;
  pplVar8[4] = plVar9;
  pplVar8[5] = plVar3;
  pplVar8[3] = plVar19;
  pplVar8[2] = plVar18;
  local_70 = 1;
  local_80 = pplVar8;
  plStack_78 = plVar1;
  if ((plVar15 == (long *)0x0) ||
     (__s1 = pplVar8, fVar20 * (float)ZEXT89(plVar15) < (float)(unkuint9)(lVar13 + 1))) {
    if (plVar15 < (long *)0x3) {
      uVar10 = 1;
    }
    else {
      uVar10 = (ulong)(((ulong)plVar15 & (long)plVar15 - 1U) != 0);
    }
    uVar10 = uVar10 | (long)plVar15 << 1;
    uVar14 = (ulong)((float)(unkuint9)(lVar13 + 1) / fVar20);
    if (uVar14 <= uVar10) {
      uVar14 = uVar10;
    }
                    /* try { // try from 0075d918 to 0075d91f has its CatchHandler @ 0075da04 */
    __s1 = (long **)rehash(this,uVar14);
    plVar15 = *(long **)(this + 8);
    if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar15 - 1U & (ulong)plVar7);
    }
    else {
      unaff_x27 = plVar7;
      if (plVar15 <= plVar7) {
        uVar10 = 0;
        if (plVar15 != (long *)0x0) {
          uVar10 = (ulong)plVar7 / (ulong)plVar15;
        }
        unaff_x27 = (long *)((long)plVar7 - uVar10 * (long)plVar15);
      }
    }
  }
  lVar13 = *(long *)this;
  pplVar11 = *(long ***)(lVar13 + (long)unaff_x27 * 8);
  if (pplVar11 == (long **)0x0) {
    lVar12 = *plVar1;
    *plVar1 = (long)pplVar8;
    *pplVar8 = (long *)lVar12;
    *(long **)(lVar13 + (long)unaff_x27 * 8) = plVar1;
    if (*local_80 != (long *)0x0) {
      plVar7 = (long *)(*local_80)[1];
      if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar15 - 1U);
      }
      else if (plVar15 <= plVar7) {
        uVar10 = 0;
        if (plVar15 != (long *)0x0) {
          uVar10 = (ulong)plVar7 / (ulong)plVar15;
        }
        plVar7 = (long *)((long)plVar7 - uVar10 * (long)plVar15);
      }
      *(long ***)(*(long *)this + (long)plVar7 * 8) = local_80;
    }
  }
  else {
    *pplVar8 = *pplVar11;
    *pplVar11 = (long *)pplVar8;
  }
  uVar17 = 1;
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  pplVar8 = local_80;
LAB_0075d9cc:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return (pair)pplVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__s1,uVar17);
}


