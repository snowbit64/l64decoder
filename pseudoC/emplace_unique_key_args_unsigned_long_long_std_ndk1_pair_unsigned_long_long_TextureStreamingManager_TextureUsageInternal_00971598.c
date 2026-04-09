// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_key_args<unsigned_long_long,std::__ndk1::pair<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>>
// Entry Point: 00971598
// Size: 524 bytes
// Signature: pair __thiscall __emplace_unique_key_args<unsigned_long_long,std::__ndk1::pair<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>>(__hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>>> * this, ulonglong * param_1, pair * param_2)


/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   long long, TextureStreamingManager::TextureUsageInternal>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned long long,
   TextureStreamingManager::TextureUsageInternal>, std::__ndk1::__unordered_map_hasher<unsigned long
   long, std::__ndk1::__hash_value_type<unsigned long long,
   TextureStreamingManager::TextureUsageInternal>, std::__ndk1::hash<unsigned long long>, true>,
   std::__ndk1::__unordered_map_equal<unsigned long long, std::__ndk1::__hash_value_type<unsigned
   long long, TextureStreamingManager::TextureUsageInternal>, std::__ndk1::equal_to<unsigned long
   long>, true>, std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned long long,
   TextureStreamingManager::TextureUsageInternal> > >::__emplace_unique_key_args<unsigned long long,
   std::__ndk1::pair<unsigned long long, TextureStreamingManager::TextureUsageInternal> >(unsigned
   long long const&, std::__ndk1::pair<unsigned long long,
   TextureStreamingManager::TextureUsageInternal>&&) */

pair __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>>>
::
__emplace_unique_key_args<unsigned_long_long,std::__ndk1::pair<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>>
          (__hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>>>
           *this,ulonglong *param_1,pair *param_2)

{
  long lVar1;
  ulong uVar2;
  long **pplVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long **pplVar7;
  long *plVar8;
  long *plVar9;
  long *unaff_x24;
  undefined2 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  float fVar14;
  long *plVar15;
  long *plVar16;
  
  plVar8 = *(long **)(this + 8);
  plVar9 = (long *)*param_1;
  if (plVar8 != (long *)0x0) {
    uVar11 = NEON_cnt(plVar8,1);
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar2 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar2 < 2) {
      unaff_x24 = (long *)((long)plVar8 - 1U & (ulong)plVar9);
    }
    else {
      unaff_x24 = plVar9;
      if (plVar8 <= plVar9) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar9 / (ulong)plVar8;
        }
        unaff_x24 = (long *)((long)plVar9 - uVar5 * (long)plVar8);
      }
    }
    pplVar7 = *(long ***)(*(long *)this + (long)unaff_x24 * 8);
    if (pplVar7 != (long **)0x0) {
      do {
        pplVar7 = (long **)*pplVar7;
        if (pplVar7 == (long **)0x0) goto LAB_00971658;
        plVar4 = pplVar7[1];
        if (plVar4 != plVar9) {
          if (uVar2 < 2) {
            plVar4 = (long *)((ulong)plVar4 & (long)plVar8 - 1U);
          }
          else if (plVar8 <= plVar4) {
            uVar5 = 0;
            if (plVar8 != (long *)0x0) {
              uVar5 = (ulong)plVar4 / (ulong)plVar8;
            }
            plVar4 = (long *)((long)plVar4 - uVar5 * (long)plVar8);
          }
          if (plVar4 != unaff_x24) goto LAB_00971658;
        }
      } while (pplVar7[2] != plVar9);
      goto LAB_0097178c;
    }
  }
LAB_00971658:
  pplVar7 = (long **)operator_new(0x38);
  lVar1 = *(long *)(this + 0x18);
  plVar13 = *(long **)(param_2 + 4);
  plVar12 = *(long **)(param_2 + 2);
  *pplVar7 = (long *)0x0;
  plVar16 = *(long **)(param_2 + 8);
  plVar15 = *(long **)(param_2 + 6);
  plVar4 = *(long **)param_2;
  pplVar7[4] = plVar13;
  pplVar7[3] = plVar12;
  pplVar7[6] = plVar16;
  pplVar7[5] = plVar15;
  fVar14 = *(float *)(this + 0x20);
  pplVar7[1] = plVar9;
  pplVar7[2] = plVar4;
  if ((plVar8 == (long *)0x0) || (fVar14 * (float)ZEXT89(plVar8) < (float)(unkuint9)(lVar1 + 1))) {
    uVar2 = 1;
    if ((long *)0x2 < plVar8) {
      uVar2 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar2 = uVar2 | (long)plVar8 << 1;
    uVar5 = (ulong)((float)(unkuint9)(lVar1 + 1) / fVar14);
    if (uVar5 <= uVar2) {
      uVar5 = uVar2;
    }
                    /* try { // try from 009716d4 to 009716db has its CatchHandler @ 009717a4 */
    rehash(this,uVar5);
    plVar8 = *(long **)(this + 8);
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x24 = (long *)((long)plVar8 - 1U & (ulong)plVar9);
    }
    else {
      unaff_x24 = plVar9;
      if (plVar8 <= plVar9) {
        uVar2 = 0;
        if (plVar8 != (long *)0x0) {
          uVar2 = (ulong)plVar9 / (ulong)plVar8;
        }
        unaff_x24 = (long *)((long)plVar9 - uVar2 * (long)plVar8);
      }
    }
  }
  lVar1 = *(long *)this;
  pplVar3 = *(long ***)(lVar1 + (long)unaff_x24 * 8);
  if (pplVar3 == (long **)0x0) {
    plVar9 = (long *)(this + 0x10);
    lVar6 = *plVar9;
    *plVar9 = (long)pplVar7;
    *pplVar7 = (long *)lVar6;
    *(long **)(lVar1 + (long)unaff_x24 * 8) = plVar9;
    if (*pplVar7 != (long *)0x0) {
      plVar9 = *(long **)((long)*pplVar7 + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar9 = (long *)((ulong)plVar9 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar9) {
        uVar2 = 0;
        if (plVar8 != (long *)0x0) {
          uVar2 = (ulong)plVar9 / (ulong)plVar8;
        }
        plVar9 = (long *)((long)plVar9 - uVar2 * (long)plVar8);
      }
      *(long ***)(*(long *)this + (long)plVar9 * 8) = pplVar7;
    }
  }
  else {
    *pplVar7 = *pplVar3;
    *pplVar3 = (long *)pplVar7;
  }
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
LAB_0097178c:
  return (pair)pplVar7;
}


