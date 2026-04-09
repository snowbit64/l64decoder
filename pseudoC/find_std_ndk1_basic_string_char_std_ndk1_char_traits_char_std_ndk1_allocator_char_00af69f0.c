// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
// Entry Point: 00af69f0
// Size: 444 bytes
// Signature: __hash_const_iterator __thiscall find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>(__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>>> * this, basic_string * param_1)


/* std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, JSONUtil::Atom*>, void*>*>
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
   >::find<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

__hash_const_iterator __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>>>
::find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
          (__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>>>
           *this,basic_string *param_1)

{
  size_t sVar1;
  void *pvVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  size_t __n;
  int iVar6;
  ulong uVar7;
  long **pplVar8;
  ulong uVar9;
  void *__s1;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  __murmur2_or_cityhash<unsigned_long,64ul> a_Stack_70 [8];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar7 = *(ulong *)(param_1 + 2);
  pvVar2 = *(void **)(param_1 + 4);
  if ((*(byte *)param_1 & 1) == 0) {
    pvVar2 = (void *)((long)param_1 + 1);
    uVar7 = (ulong)(*(byte *)param_1 >> 1);
  }
                    /* try { // try from 00af6a3c to 00af6a43 has its CatchHandler @ 00af6bac */
  uVar7 = __murmur2_or_cityhash<unsigned_long,64ul>::operator()(a_Stack_70,pvVar2,uVar7);
  uVar11 = *(ulong *)(this + 8);
  if (uVar11 != 0) {
    uVar15 = NEON_cnt(uVar11,1);
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar12 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar7;
    }
    else {
      uVar13 = uVar7;
      if (uVar11 <= uVar7) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = uVar7 / uVar11;
        }
        uVar13 = uVar7 - uVar13 * uVar11;
      }
    }
    pplVar8 = *(long ***)(*(long *)this + uVar13 * 8);
    if (pplVar8 != (long **)0x0) {
      plVar10 = *pplVar8;
      pvVar2 = (void *)((long)param_1 + 1);
      __n = (ulong)(*(byte *)param_1 >> 1);
      if ((*(byte *)param_1 & 1) != 0) {
        pvVar2 = *(void **)(param_1 + 4);
        __n = *(size_t *)(param_1 + 2);
      }
      if (plVar10 != (long *)0x0) {
        do {
          uVar9 = plVar10[1];
          if (uVar7 == uVar9) {
            bVar3 = *(byte *)(plVar10 + 2);
            sVar1 = (ulong)(bVar3 >> 1);
            if ((bVar3 & 1) != 0) {
              sVar1 = plVar10[3];
            }
            if (sVar1 == __n) {
              __s1 = (void *)plVar10[4];
              if ((bVar3 & 1) == 0) {
                __s1 = (void *)((long)plVar10 + 0x11);
              }
              if ((bVar3 & 1) == 0) {
                if (__n == 0) break;
                uVar9 = 0;
                while (*(char *)((long)plVar10 + uVar9 + 0x11) == *(char *)((long)pvVar2 + uVar9)) {
                  uVar9 = uVar9 + 1;
                  if (bVar3 >> 1 == uVar9) goto LAB_00af6b74;
                }
              }
              else if ((__n == 0) || (iVar6 = memcmp(__s1,pvVar2,__n), iVar6 == 0)) break;
            }
          }
          else {
            if (uVar12 < 2) {
              uVar9 = uVar9 & uVar11 - 1;
            }
            else if (uVar11 <= uVar9) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar9 / uVar11;
              }
              uVar9 = uVar9 - uVar4 * uVar11;
            }
            if (uVar9 != uVar13) goto LAB_00af6b70;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      goto LAB_00af6b74;
    }
  }
LAB_00af6b70:
  plVar10 = (long *)0x0;
LAB_00af6b74:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return (__hash_const_iterator)plVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


