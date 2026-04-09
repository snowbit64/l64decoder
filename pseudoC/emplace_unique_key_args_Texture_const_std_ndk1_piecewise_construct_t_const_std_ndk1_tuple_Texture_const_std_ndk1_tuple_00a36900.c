// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_key_args<Texture_const*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<Texture_const*&&>,std::__ndk1::tuple<>>
// Entry Point: 00a36900
// Size: 576 bytes
// Signature: pair __cdecl __emplace_unique_key_args<Texture_const*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<Texture_const*&&>,std::__ndk1::tuple<>>(Texture * * param_1, piecewise_construct_t * param_2, tuple * param_3, tuple * param_4)


/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<Texture
   const*, TextureUsage>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<Texture const*, TextureUsage>,
   std::__ndk1::__unordered_map_hasher<Texture const*, std::__ndk1::__hash_value_type<Texture
   const*, TextureUsage>, std::__ndk1::hash<Texture const*>, true>,
   std::__ndk1::__unordered_map_equal<Texture const*, std::__ndk1::__hash_value_type<Texture const*,
   TextureUsage>, std::__ndk1::equal_to<Texture const*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<Texture const*, TextureUsage> >
   >::__emplace_unique_key_args<Texture const*, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<Texture const*&&>, std::__ndk1::tuple<> >(Texture const* const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<Texture const*&&>&&,
   std::__ndk1::tuple<>&&) */

pair std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<Texture_const*,TextureUsage>,std::__ndk1::__unordered_map_hasher<Texture_const*,std::__ndk1::__hash_value_type<Texture_const*,TextureUsage>,std::__ndk1::hash<Texture_const*>,true>,std::__ndk1::__unordered_map_equal<Texture_const*,std::__ndk1::__hash_value_type<Texture_const*,TextureUsage>,std::__ndk1::equal_to<Texture_const*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<Texture_const*,TextureUsage>>>
     ::
     __emplace_unique_key_args<Texture_const*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<Texture_const*&&>,std::__ndk1::tuple<>>
               (Texture **param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  Texture *pTVar1;
  Texture **ppTVar2;
  ulong uVar3;
  ulong uVar4;
  Texture *pTVar5;
  Texture **ppTVar6;
  Texture *pTVar7;
  Texture *pTVar8;
  Texture *unaff_x24;
  undefined2 uVar9;
  undefined8 uVar10;
  float fVar11;
  
  pTVar1 = *(Texture **)param_2;
  pTVar7 = param_1[1];
  uVar3 = ((ulong)(uint)((int)pTVar1 << 3) + 8 ^ (ulong)pTVar1 >> 0x20) * -0x622015f714c7d297;
  uVar3 = (uVar3 ^ (ulong)pTVar1 >> 0x20 ^ uVar3 >> 0x2f) * -0x622015f714c7d297;
  pTVar8 = (Texture *)((uVar3 ^ uVar3 >> 0x2f) * -0x622015f714c7d297);
  if (pTVar7 != (Texture *)0x0) {
    uVar10 = NEON_cnt(pTVar7,1);
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar3 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    if (uVar3 < 2) {
      unaff_x24 = (Texture *)((ulong)pTVar8 & (ulong)(pTVar7 + -1));
    }
    else {
      unaff_x24 = pTVar8;
      if (pTVar7 <= pTVar8) {
        uVar4 = 0;
        if (pTVar7 != (Texture *)0x0) {
          uVar4 = (ulong)pTVar8 / (ulong)pTVar7;
        }
        unaff_x24 = pTVar8 + -(uVar4 * (long)pTVar7);
      }
    }
    ppTVar6 = *(Texture ***)(*param_1 + (long)unaff_x24 * 8);
    if (ppTVar6 != (Texture **)0x0) {
      do {
        ppTVar6 = (Texture **)*ppTVar6;
        if (ppTVar6 == (Texture **)0x0) goto LAB_00a369f8;
        pTVar5 = ppTVar6[1];
        if (pTVar5 != pTVar8) {
          if (uVar3 < 2) {
            pTVar5 = (Texture *)((ulong)pTVar5 & (ulong)(pTVar7 + -1));
          }
          else if (pTVar7 <= pTVar5) {
            uVar4 = 0;
            if (pTVar7 != (Texture *)0x0) {
              uVar4 = (ulong)pTVar5 / (ulong)pTVar7;
            }
            pTVar5 = pTVar5 + -(uVar4 * (long)pTVar7);
          }
          if (pTVar5 != unaff_x24) goto LAB_00a369f8;
        }
      } while (ppTVar6[2] != pTVar1);
      goto LAB_00a36b28;
    }
  }
LAB_00a369f8:
  ppTVar6 = (Texture **)operator_new(0x30);
  pTVar5 = param_1[3];
  ppTVar2 = *(Texture ***)param_4;
  *(undefined4 *)(ppTVar6 + 4) = 0;
  fVar11 = *(float *)(param_1 + 4);
  pTVar1 = *ppTVar2;
  *ppTVar6 = (Texture *)0x0;
  ppTVar6[1] = pTVar8;
  ppTVar6[2] = pTVar1;
  if ((pTVar7 == (Texture *)0x0) || (fVar11 * (float)ZEXT89(pTVar7) < (float)ZEXT89(pTVar5 + 1))) {
    if (pTVar7 < (Texture *)0x3) {
      uVar3 = 1;
    }
    else {
      uVar3 = (ulong)(((ulong)pTVar7 & (ulong)(pTVar7 + -1)) != 0);
    }
    uVar3 = uVar3 | (long)pTVar7 << 1;
    uVar4 = (ulong)((float)ZEXT89(pTVar5 + 1) / fVar11);
    if (uVar4 <= uVar3) {
      uVar4 = uVar3;
    }
                    /* try { // try from 00a36a70 to 00a36a77 has its CatchHandler @ 00a36b40 */
    rehash((__hash_table<std::__ndk1::__hash_value_type<Texture_const*,TextureUsage>,std::__ndk1::__unordered_map_hasher<Texture_const*,std::__ndk1::__hash_value_type<Texture_const*,TextureUsage>,std::__ndk1::hash<Texture_const*>,true>,std::__ndk1::__unordered_map_equal<Texture_const*,std::__ndk1::__hash_value_type<Texture_const*,TextureUsage>,std::__ndk1::equal_to<Texture_const*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<Texture_const*,TextureUsage>>>
            *)param_1,uVar4);
    pTVar7 = param_1[1];
    if (((ulong)pTVar7 & (ulong)(pTVar7 + -1)) == 0) {
      unaff_x24 = (Texture *)((ulong)(pTVar7 + -1) & (ulong)pTVar8);
    }
    else {
      unaff_x24 = pTVar8;
      if (pTVar7 <= pTVar8) {
        uVar3 = 0;
        if (pTVar7 != (Texture *)0x0) {
          uVar3 = (ulong)pTVar8 / (ulong)pTVar7;
        }
        unaff_x24 = pTVar8 + -(uVar3 * (long)pTVar7);
      }
    }
  }
  pTVar1 = *param_1;
  ppTVar2 = *(Texture ***)(pTVar1 + (long)unaff_x24 * 8);
  if (ppTVar2 == (Texture **)0x0) {
    ppTVar2 = param_1 + 2;
    pTVar8 = *ppTVar2;
    *ppTVar2 = (Texture *)ppTVar6;
    *ppTVar6 = pTVar8;
    *(Texture ***)(pTVar1 + (long)unaff_x24 * 8) = ppTVar2;
    if (*ppTVar6 != (Texture *)0x0) {
      pTVar1 = *(Texture **)(*ppTVar6 + 8);
      if (((ulong)pTVar7 & (ulong)(pTVar7 + -1)) == 0) {
        pTVar1 = (Texture *)((ulong)pTVar1 & (ulong)(pTVar7 + -1));
      }
      else if (pTVar7 <= pTVar1) {
        uVar3 = 0;
        if (pTVar7 != (Texture *)0x0) {
          uVar3 = (ulong)pTVar1 / (ulong)pTVar7;
        }
        pTVar1 = pTVar1 + -(uVar3 * (long)pTVar7);
      }
      *(Texture ***)(*param_1 + (long)pTVar1 * 8) = ppTVar6;
    }
  }
  else {
    *ppTVar6 = *ppTVar2;
    *ppTVar2 = (Texture *)ppTVar6;
  }
  param_1[3] = param_1[3] + 1;
LAB_00a36b28:
  return (pair)ppTVar6;
}


