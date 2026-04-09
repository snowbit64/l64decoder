// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_key_args<unsigned_long_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_long_const&>,std::__ndk1::tuple<>>
// Entry Point: 0097295c
// Size: 512 bytes
// Signature: pair __cdecl __emplace_unique_key_args<unsigned_long_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_long_const&>,std::__ndk1::tuple<>>(ulonglong * param_1, piecewise_construct_t * param_2, tuple * param_3, tuple * param_4)


/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   long long, unsigned long long>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned long long, unsigned long long>,
   std::__ndk1::__unordered_map_hasher<unsigned long long, std::__ndk1::__hash_value_type<unsigned
   long long, unsigned long long>, std::__ndk1::hash<unsigned long long>, true>,
   std::__ndk1::__unordered_map_equal<unsigned long long, std::__ndk1::__hash_value_type<unsigned
   long long, unsigned long long>, std::__ndk1::equal_to<unsigned long long>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned long long, unsigned long long> >
   >::__emplace_unique_key_args<unsigned long long, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<unsigned long long const&>, std::__ndk1::tuple<> >(unsigned long long const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<unsigned long long const&>&&,
   std::__ndk1::tuple<>&&) */

pair std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>>>
     ::
     __emplace_unique_key_args<unsigned_long_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_long_const&>,std::__ndk1::tuple<>>
               (ulonglong *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  ulonglong **ppuVar1;
  ulong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulong uVar5;
  ulonglong **ppuVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong *unaff_x24;
  undefined2 uVar9;
  undefined8 uVar10;
  float fVar11;
  
  puVar7 = (ulonglong *)param_1[1];
  puVar8 = *(ulonglong **)param_2;
  if (puVar7 != (ulonglong *)0x0) {
    uVar10 = NEON_cnt(puVar7,1);
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar2 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    if (uVar2 < 2) {
      unaff_x24 = (ulonglong *)((long)puVar7 - 1U & (ulong)puVar8);
    }
    else {
      unaff_x24 = puVar8;
      if (puVar7 <= puVar8) {
        uVar5 = 0;
        if (puVar7 != (ulonglong *)0x0) {
          uVar5 = (ulong)puVar8 / (ulong)puVar7;
        }
        unaff_x24 = (ulonglong *)((long)puVar8 - uVar5 * (long)puVar7);
      }
    }
    ppuVar6 = *(ulonglong ***)(*param_1 + (long)unaff_x24 * 8);
    if (ppuVar6 != (ulonglong **)0x0) {
      do {
        ppuVar6 = (ulonglong **)*ppuVar6;
        if (ppuVar6 == (ulonglong **)0x0) goto LAB_00972a1c;
        puVar4 = ppuVar6[1];
        if (puVar4 != puVar8) {
          if (uVar2 < 2) {
            puVar4 = (ulonglong *)((ulong)puVar4 & (long)puVar7 - 1U);
          }
          else if (puVar7 <= puVar4) {
            uVar5 = 0;
            if (puVar7 != (ulonglong *)0x0) {
              uVar5 = (ulong)puVar4 / (ulong)puVar7;
            }
            puVar4 = (ulonglong *)((long)puVar4 - uVar5 * (long)puVar7);
          }
          if (puVar4 != unaff_x24) goto LAB_00972a1c;
        }
      } while (ppuVar6[2] != puVar8);
      goto LAB_00972b44;
    }
  }
LAB_00972a1c:
  ppuVar6 = (ulonglong **)operator_new(0x20);
  uVar3 = param_1[3];
  ppuVar1 = *(ulonglong ***)param_4;
  *ppuVar6 = (ulonglong *)0x0;
  ppuVar6[1] = puVar8;
  fVar11 = *(float *)(param_1 + 4);
  ppuVar6[2] = *ppuVar1;
  ppuVar6[3] = (ulonglong *)0x0;
  if ((puVar7 == (ulonglong *)0x0) ||
     (fVar11 * (float)ZEXT89(puVar7) < (float)(unkuint9)(uVar3 + 1))) {
    uVar2 = 1;
    if ((ulonglong *)0x2 < puVar7) {
      uVar2 = (ulong)(((ulong)puVar7 & (long)puVar7 - 1U) != 0);
    }
    uVar2 = uVar2 | (long)puVar7 << 1;
    uVar5 = (ulong)((float)(unkuint9)(uVar3 + 1) / fVar11);
    if (uVar5 <= uVar2) {
      uVar5 = uVar2;
    }
                    /* try { // try from 00972a8c to 00972a93 has its CatchHandler @ 00972b5c */
    rehash((__hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>>>
            *)param_1,uVar5);
    puVar7 = (ulonglong *)param_1[1];
    if (((ulong)puVar7 & (long)puVar7 - 1U) == 0) {
      unaff_x24 = (ulonglong *)((long)puVar7 - 1U & (ulong)puVar8);
    }
    else {
      unaff_x24 = puVar8;
      if (puVar7 <= puVar8) {
        uVar2 = 0;
        if (puVar7 != (ulonglong *)0x0) {
          uVar2 = (ulong)puVar8 / (ulong)puVar7;
        }
        unaff_x24 = (ulonglong *)((long)puVar8 - uVar2 * (long)puVar7);
      }
    }
  }
  uVar3 = *param_1;
  ppuVar1 = *(ulonglong ***)(uVar3 + (long)unaff_x24 * 8);
  if (ppuVar1 == (ulonglong **)0x0) {
    ppuVar1 = (ulonglong **)(param_1 + 2);
    puVar8 = *ppuVar1;
    *ppuVar1 = (ulonglong *)ppuVar6;
    *ppuVar6 = puVar8;
    *(ulonglong ***)(uVar3 + (long)unaff_x24 * 8) = ppuVar1;
    if (*ppuVar6 != (ulonglong *)0x0) {
      puVar8 = (ulonglong *)(*ppuVar6)[1];
      if (((ulong)puVar7 & (long)puVar7 - 1U) == 0) {
        puVar8 = (ulonglong *)((ulong)puVar8 & (long)puVar7 - 1U);
      }
      else if (puVar7 <= puVar8) {
        uVar2 = 0;
        if (puVar7 != (ulonglong *)0x0) {
          uVar2 = (ulong)puVar8 / (ulong)puVar7;
        }
        puVar8 = (ulonglong *)((long)puVar8 - uVar2 * (long)puVar7);
      }
      *(ulonglong ***)(*param_1 + (long)puVar8 * 8) = ppuVar6;
    }
  }
  else {
    *ppuVar6 = *ppuVar1;
    *ppuVar1 = (ulonglong *)ppuVar6;
  }
  param_1[3] = param_1[3] + 1;
LAB_00972b44:
  return (pair)ppuVar6;
}


