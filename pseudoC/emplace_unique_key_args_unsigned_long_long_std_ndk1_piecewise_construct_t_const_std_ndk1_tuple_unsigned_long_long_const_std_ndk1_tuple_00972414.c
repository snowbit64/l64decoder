// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_key_args<unsigned_long_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_long_const&>,std::__ndk1::tuple<>>
// Entry Point: 00972414
// Size: 652 bytes
// Signature: pair __cdecl __emplace_unique_key_args<unsigned_long_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_long_const&>,std::__ndk1::tuple<>>(ulonglong * param_1, piecewise_construct_t * param_2, tuple * param_3, tuple * param_4)


/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   long long, TextureStreamingManager::StreamingDesc>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned long long,
   TextureStreamingManager::StreamingDesc>, std::__ndk1::__unordered_map_hasher<unsigned long long,
   std::__ndk1::__hash_value_type<unsigned long long, TextureStreamingManager::StreamingDesc>,
   std::__ndk1::hash<unsigned long long>, true>, std::__ndk1::__unordered_map_equal<unsigned long
   long, std::__ndk1::__hash_value_type<unsigned long long, TextureStreamingManager::StreamingDesc>,
   std::__ndk1::equal_to<unsigned long long>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned long long,
   TextureStreamingManager::StreamingDesc> > >::__emplace_unique_key_args<unsigned long long,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<unsigned long long const&>,
   std::__ndk1::tuple<> >(unsigned long long const&, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<unsigned long long const&>&&, std::__ndk1::tuple<>&&) */

pair std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::StreamingDesc>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::StreamingDesc>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::StreamingDesc>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::StreamingDesc>>>
     ::
     __emplace_unique_key_args<unsigned_long_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_long_const&>,std::__ndk1::tuple<>>
               (ulonglong *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  ulonglong **ppuVar1;
  long lVar2;
  ulonglong **ppuVar3;
  long lVar4;
  ulonglong uVar5;
  ulong uVar6;
  ulonglong **ppuVar7;
  ulonglong *puVar8;
  ulong uVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  ulonglong *unaff_x25;
  undefined2 uVar12;
  undefined8 uVar13;
  float fVar14;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  puVar10 = (ulonglong *)param_1[1];
  puVar11 = *(ulonglong **)param_2;
  if (puVar10 != (ulonglong *)0x0) {
    uVar13 = NEON_cnt(puVar10,1);
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar6 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    if (uVar6 < 2) {
      unaff_x25 = (ulonglong *)((long)puVar10 - 1U & (ulong)puVar11);
    }
    else {
      unaff_x25 = puVar11;
      if (puVar10 <= puVar11) {
        uVar9 = 0;
        if (puVar10 != (ulonglong *)0x0) {
          uVar9 = (ulong)puVar11 / (ulong)puVar10;
        }
        unaff_x25 = (ulonglong *)((long)puVar11 - uVar9 * (long)puVar10);
      }
    }
    ppuVar3 = *(ulonglong ***)(*param_1 + (long)unaff_x25 * 8);
    if (ppuVar3 != (ulonglong **)0x0) {
      do {
        ppuVar3 = (ulonglong **)*ppuVar3;
        if (ppuVar3 == (ulonglong **)0x0) goto LAB_009724e8;
        puVar8 = ppuVar3[1];
        if (puVar8 != puVar11) {
          if (uVar6 < 2) {
            puVar8 = (ulonglong *)((ulong)puVar8 & (long)puVar10 - 1U);
          }
          else if (puVar10 <= puVar8) {
            uVar9 = 0;
            if (puVar10 != (ulonglong *)0x0) {
              uVar9 = (ulong)puVar8 / (ulong)puVar10;
            }
            puVar8 = (ulonglong *)((long)puVar8 - uVar9 * (long)puVar10);
          }
          if (puVar8 != unaff_x25) goto LAB_009724e8;
        }
      } while (ppuVar3[2] != puVar11);
      uVar13 = 0;
      goto LAB_00972670;
    }
  }
LAB_009724e8:
  ppuVar1 = (ulonglong **)(param_1 + 2);
  ppuVar3 = (ulonglong **)operator_new(0xb8);
  fVar14 = *(float *)(param_1 + 4);
  puVar8 = **(ulonglong ***)param_4;
  *ppuVar3 = (ulonglong *)0x0;
  ppuVar3[1] = puVar11;
  ppuVar3[0xc] = (ulonglong *)0x0;
  ppuVar3[0xb] = (ulonglong *)0x0;
  ppuVar3[2] = puVar8;
  uVar5 = param_1[3];
  ppuVar3[0xe] = (ulonglong *)0x0;
  ppuVar3[0xd] = (ulonglong *)0x0;
  ppuVar3[0x10] = (ulonglong *)0x0;
  ppuVar3[0xf] = (ulonglong *)0x0;
  ppuVar3[0x12] = (ulonglong *)0x0;
  ppuVar3[0x11] = (ulonglong *)0x0;
  ppuVar3[0x16] = (ulonglong *)0x0;
  ppuVar3[0x15] = (ulonglong *)0x0;
  ppuVar3[0x14] = (ulonglong *)0x0;
  ppuVar3[0x13] = (ulonglong *)0x0;
  ppuVar3[10] = (ulonglong *)0x0;
  ppuVar3[9] = (ulonglong *)0x0;
  ppuVar3[8] = (ulonglong *)0x0;
  ppuVar3[7] = (ulonglong *)0x0;
  ppuVar3[6] = (ulonglong *)0x0;
  ppuVar3[5] = (ulonglong *)0x0;
  ppuVar3[4] = (ulonglong *)0x0;
  ppuVar3[3] = (ulonglong *)0x0;
  ppuVar3[0xc] = (ulonglong *)0x0;
  ppuVar3[0xd] = (ulonglong *)0x0;
  *(undefined4 *)(ppuVar3 + 0xe) = 0;
  ppuVar3[0x10] = (ulonglong *)0x0;
  ppuVar3[0x11] = (ulonglong *)0x0;
  ppuVar3[0xb] = (ulonglong *)0x100000001;
  ppuVar3[7] = (ulonglong *)0x0;
  ppuVar3[8] = (ulonglong *)0x0;
  ppuVar3[9] = (ulonglong *)0x0;
  if ((puVar10 == (ulonglong *)0x0) ||
     (fVar14 * (float)ZEXT89(puVar10) < (float)(unkuint9)(uVar5 + 1))) {
    if (puVar10 < (ulonglong *)0x3) {
      uVar6 = 1;
    }
    else {
      uVar6 = (ulong)(((ulong)puVar10 & (long)puVar10 - 1U) != 0);
    }
    uVar6 = uVar6 | (long)puVar10 << 1;
    uVar9 = (ulong)((float)(unkuint9)(uVar5 + 1) / fVar14);
    if (uVar9 <= uVar6) {
      uVar9 = uVar6;
    }
                    /* try { // try from 009725b4 to 009725bb has its CatchHandler @ 009726a0 */
    rehash((__hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::StreamingDesc>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::StreamingDesc>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::StreamingDesc>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::StreamingDesc>>>
            *)param_1,uVar9);
    puVar10 = (ulonglong *)param_1[1];
    if (((ulong)puVar10 & (long)puVar10 - 1U) == 0) {
      unaff_x25 = (ulonglong *)((long)puVar10 - 1U & (ulong)puVar11);
    }
    else {
      unaff_x25 = puVar11;
      if (puVar10 <= puVar11) {
        uVar6 = 0;
        if (puVar10 != (ulonglong *)0x0) {
          uVar6 = (ulong)puVar11 / (ulong)puVar10;
        }
        unaff_x25 = (ulonglong *)((long)puVar11 - uVar6 * (long)puVar10);
      }
    }
  }
  uVar5 = *param_1;
  ppuVar7 = *(ulonglong ***)(uVar5 + (long)unaff_x25 * 8);
  if (ppuVar7 == (ulonglong **)0x0) {
    puVar11 = *ppuVar1;
    *ppuVar1 = (ulonglong *)ppuVar3;
    *ppuVar3 = puVar11;
    *(ulonglong ***)(uVar5 + (long)unaff_x25 * 8) = ppuVar1;
    if (*ppuVar3 != (ulonglong *)0x0) {
      puVar11 = (ulonglong *)(*ppuVar3)[1];
      if (((ulong)puVar10 & (long)puVar10 - 1U) == 0) {
        puVar11 = (ulonglong *)((ulong)puVar11 & (long)puVar10 - 1U);
      }
      else if (puVar10 <= puVar11) {
        uVar6 = 0;
        if (puVar10 != (ulonglong *)0x0) {
          uVar6 = (ulong)puVar11 / (ulong)puVar10;
        }
        puVar11 = (ulonglong *)((long)puVar11 - uVar6 * (long)puVar10);
      }
      *(ulonglong ***)(*param_1 + (long)puVar11 * 8) = ppuVar3;
    }
  }
  else {
    *ppuVar3 = *ppuVar7;
    *ppuVar7 = (ulonglong *)ppuVar3;
  }
  uVar13 = 1;
  param_1[3] = param_1[3] + 1;
LAB_00972670:
  if (*(long *)(lVar2 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(ppuVar3,uVar13);
  }
  return (pair)ppuVar3;
}


