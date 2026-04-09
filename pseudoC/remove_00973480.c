// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: remove
// Entry Point: 00973480
// Size: 308 bytes
// Signature: undefined __cdecl remove(__hash_const_iterator param_1)


/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned long long,
   TextureStreamingManager::TextureUsageInternal>, std::__ndk1::__unordered_map_hasher<unsigned long
   long, std::__ndk1::__hash_value_type<unsigned long long,
   TextureStreamingManager::TextureUsageInternal>, std::__ndk1::hash<unsigned long long>, true>,
   std::__ndk1::__unordered_map_equal<unsigned long long, std::__ndk1::__hash_value_type<unsigned
   long long, TextureStreamingManager::TextureUsageInternal>, std::__ndk1::equal_to<unsigned long
   long>, true>, std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned long long,
   TextureStreamingManager::TextureUsageInternal> >
   >::remove(std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   long long, TextureStreamingManager::TextureUsageInternal>, void*>*>) */

void std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>>>
     ::remove(__hash_const_iterator param_1)

{
  ulong uVar1;
  long **pplVar2;
  long *plVar3;
  long **in_x1;
  long **in_x8;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long **pplVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
  plVar3 = (long *)(ulong)param_1;
  plVar6 = (long *)plVar3[1];
  plVar4 = in_x1[1];
  uVar12 = NEON_cnt(plVar6,1);
  uVar11 = NEON_uaddlv(uVar12,1);
  uVar8 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
  if (uVar8 < 2) {
    plVar4 = (long *)((long)plVar6 - 1U & (ulong)plVar4);
  }
  else if (plVar6 <= plVar4) {
    uVar1 = 0;
    if (plVar6 != (long *)0x0) {
      uVar1 = (ulong)plVar4 / (ulong)plVar6;
    }
    plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
  }
  pplVar2 = *(long ***)(*plVar3 + (long)plVar4 * 8);
  do {
    pplVar7 = pplVar2;
    pplVar2 = (long **)*pplVar7;
  } while ((long **)*pplVar7 != in_x1);
  if (pplVar7 != (long **)(plVar3 + 2)) {
    plVar9 = pplVar7[1];
    if (uVar8 < 2) {
      plVar9 = (long *)((ulong)plVar9 & (long)plVar6 - 1U);
    }
    else if (plVar6 <= plVar9) {
      uVar1 = 0;
      if (plVar6 != (long *)0x0) {
        uVar1 = (ulong)plVar9 / (ulong)plVar6;
      }
      plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar6);
    }
    if (plVar9 == plVar4) goto LAB_0097354c;
  }
  if (*in_x1 != (long *)0x0) {
    plVar9 = (long *)(*in_x1)[1];
    if (uVar8 < 2) {
      plVar9 = (long *)((ulong)plVar9 & (long)plVar6 - 1U);
    }
    else if (plVar6 <= plVar9) {
      uVar1 = 0;
      if (plVar6 != (long *)0x0) {
        uVar1 = (ulong)plVar9 / (ulong)plVar6;
      }
      plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar6);
    }
    if (plVar9 == plVar4) goto LAB_0097354c;
  }
  *(undefined8 *)(*plVar3 + (long)plVar4 * 8) = 0;
LAB_0097354c:
  plVar9 = *in_x1;
  if (plVar9 != (long *)0x0) {
    plVar10 = (long *)plVar9[1];
    if (uVar8 < 2) {
      plVar10 = (long *)((ulong)plVar10 & (long)plVar6 - 1U);
    }
    else if (plVar6 <= plVar10) {
      uVar8 = 0;
      if (plVar6 != (long *)0x0) {
        uVar8 = (ulong)plVar10 / (ulong)plVar6;
      }
      plVar10 = (long *)((long)plVar10 - uVar8 * (long)plVar6);
    }
    if (plVar10 != plVar4) {
      *(long ***)(*plVar3 + (long)plVar10 * 8) = pplVar7;
      plVar9 = *in_x1;
    }
  }
  lVar5 = plVar3[3];
  *pplVar7 = plVar9;
  *in_x1 = (long *)0x0;
  *in_x8 = (long *)in_x1;
  in_x8[1] = plVar3 + 2;
  *(undefined *)(in_x8 + 2) = 1;
  plVar3[3] = lVar5 + -1;
  return;
}


