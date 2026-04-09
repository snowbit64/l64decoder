// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
// Entry Point: 00b41e04
// Size: 784 bytes
// Signature: pair __thiscall __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>(__hash_table<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>> * this, basic_string * param_1, basic_string * param_2)


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
   std::__ndk1::allocator<char> > >(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&&) */

pair __thiscall
std::__ndk1::
__hash_table<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
::
__emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
          (__hash_table<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
           *this,basic_string *param_1,basic_string *param_2)

{
  long *plVar1;
  void *pvVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  long **pplVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long **pplVar11;
  long lVar12;
  ulong uVar13;
  long **__s1;
  long *plVar14;
  long *unaff_x27;
  undefined2 uVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  float fVar19;
  long **local_80;
  long *plStack_78;
  undefined local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar10 = *(ulong *)(param_1 + 2);
  pvVar2 = *(void **)(param_1 + 4);
  if ((*(byte *)param_1 & 1) == 0) {
    pvVar2 = (void *)((long)param_1 + 1);
    uVar10 = (ulong)(*(byte *)param_1 >> 1);
  }
                    /* try { // try from 00b41e54 to 00b41e5b has its CatchHandler @ 00b42128 */
  plVar6 = (long *)__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                             ((__murmur2_or_cityhash<unsigned_long,64ul> *)&local_80,pvVar2,uVar10);
  plVar14 = *(long **)(this + 8);
  if (plVar14 != (long *)0x0) {
    uVar16 = NEON_cnt(plVar14,1);
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar10 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar10 < 2) {
      unaff_x27 = (long *)((long)plVar14 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x27 = plVar6;
      if (plVar14 <= plVar6) {
        uVar13 = 0;
        if (plVar14 != (long *)0x0) {
          uVar13 = (ulong)plVar6 / (ulong)plVar14;
        }
        unaff_x27 = (long *)((long)plVar6 - uVar13 * (long)plVar14);
      }
    }
    pplVar7 = *(long ***)(*(long *)this + (long)unaff_x27 * 8);
    if (pplVar7 != (long **)0x0) {
      pplVar7 = (long **)*pplVar7;
      pvVar2 = (void *)((long)param_1 + 1);
      plVar1 = (long *)(ulong)(*(byte *)param_1 >> 1);
      if ((*(byte *)param_1 & 1) != 0) {
        pvVar2 = *(void **)(param_1 + 4);
        plVar1 = *(long **)(param_1 + 2);
      }
      if (pplVar7 != (long **)0x0) {
        do {
          plVar8 = pplVar7[1];
          if (plVar8 != plVar6) {
            if (uVar10 < 2) {
              plVar8 = (long *)((ulong)plVar8 & (long)plVar14 - 1U);
            }
            else if (plVar14 <= plVar8) {
              uVar13 = 0;
              if (plVar14 != (long *)0x0) {
                uVar13 = (ulong)plVar8 / (ulong)plVar14;
              }
              plVar8 = (long *)((long)plVar8 - uVar13 * (long)plVar14);
            }
            if (plVar8 != unaff_x27) break;
          }
          bVar3 = *(byte *)(pplVar7 + 2);
          plVar8 = (long *)(ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            plVar8 = pplVar7[3];
          }
          if (plVar8 == plVar1) {
            __s1 = (long **)pplVar7[4];
            if ((bVar3 & 1) == 0) {
              __s1 = (long **)((long)pplVar7 + 0x11);
            }
            if ((bVar3 & 1) == 0) {
              if (plVar1 != (long *)0x0) {
                plVar8 = (long *)0x0;
                while (*(char *)((long)pplVar7 + (long)plVar8 + 0x11) ==
                       *(char *)((long)pvVar2 + (long)plVar8)) {
                  plVar8 = (long *)((long)plVar8 + 1);
                  if ((long *)(ulong)(bVar3 >> 1) == plVar8) goto LAB_00b41f90;
                }
                goto LAB_00b41ee0;
              }
            }
            else if (plVar1 != (long *)0x0) {
              uVar5 = memcmp(__s1,pvVar2,(size_t)plVar1);
              __s1 = (long **)(ulong)uVar5;
              if (uVar5 != 0) goto LAB_00b41ee0;
            }
LAB_00b41f90:
            uVar16 = 0;
            goto LAB_00b420dc;
          }
LAB_00b41ee0:
          pplVar7 = (long **)*pplVar7;
        } while (pplVar7 != (long **)0x0);
      }
    }
  }
  plVar1 = (long *)(this + 0x10);
  pplVar7 = (long **)operator_new(0x28);
  plVar18 = *(long **)(param_2 + 2);
  plVar17 = *(long **)param_2;
  *(undefined8 *)param_2 = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  plVar8 = *(long **)(param_2 + 4);
  *(undefined8 *)(param_2 + 4) = 0;
  lVar9 = *(long *)(this + 0x18);
  pplVar7[3] = plVar18;
  pplVar7[2] = plVar17;
  fVar19 = *(float *)(this + 0x20);
  pplVar7[4] = plVar8;
  *pplVar7 = (long *)0x0;
  pplVar7[1] = plVar6;
  local_70 = 1;
  local_80 = pplVar7;
  plStack_78 = plVar1;
  if ((plVar14 == (long *)0x0) ||
     (__s1 = pplVar7, fVar19 * (float)ZEXT89(plVar14) < (float)(unkuint9)(lVar9 + 1))) {
    if (plVar14 < (long *)0x3) {
      uVar10 = 1;
    }
    else {
      uVar10 = (ulong)(((ulong)plVar14 & (long)plVar14 - 1U) != 0);
    }
    uVar10 = uVar10 | (long)plVar14 << 1;
    uVar13 = (ulong)((float)(unkuint9)(lVar9 + 1) / fVar19);
    if (uVar13 <= uVar10) {
      uVar13 = uVar10;
    }
                    /* try { // try from 00b42028 to 00b4202f has its CatchHandler @ 00b42114 */
    __s1 = (long **)rehash(this,uVar13);
    plVar14 = *(long **)(this + 8);
    if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar14 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x27 = plVar6;
      if (plVar14 <= plVar6) {
        uVar10 = 0;
        if (plVar14 != (long *)0x0) {
          uVar10 = (ulong)plVar6 / (ulong)plVar14;
        }
        unaff_x27 = (long *)((long)plVar6 - uVar10 * (long)plVar14);
      }
    }
  }
  lVar9 = *(long *)this;
  pplVar11 = *(long ***)(lVar9 + (long)unaff_x27 * 8);
  if (pplVar11 == (long **)0x0) {
    lVar12 = *plVar1;
    *plVar1 = (long)pplVar7;
    *pplVar7 = (long *)lVar12;
    *(long **)(lVar9 + (long)unaff_x27 * 8) = plVar1;
    if (*local_80 != (long *)0x0) {
      plVar6 = (long *)(*local_80)[1];
      if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar14 - 1U);
      }
      else if (plVar14 <= plVar6) {
        uVar10 = 0;
        if (plVar14 != (long *)0x0) {
          uVar10 = (ulong)plVar6 / (ulong)plVar14;
        }
        plVar6 = (long *)((long)plVar6 - uVar10 * (long)plVar14);
      }
      *(long ***)(*(long *)this + (long)plVar6 * 8) = local_80;
    }
  }
  else {
    *pplVar7 = *pplVar11;
    *pplVar11 = (long *)pplVar7;
  }
  uVar16 = 1;
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  pplVar7 = local_80;
LAB_00b420dc:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return (pair)pplVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__s1,uVar16);
}


