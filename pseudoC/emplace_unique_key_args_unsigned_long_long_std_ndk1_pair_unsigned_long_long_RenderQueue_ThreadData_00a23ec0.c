// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_key_args<unsigned_long_long,std::__ndk1::pair<unsigned_long_long,RenderQueue::ThreadData*>>
// Entry Point: 00a23ec0
// Size: 508 bytes
// Signature: pair __thiscall __emplace_unique_key_args<unsigned_long_long,std::__ndk1::pair<unsigned_long_long,RenderQueue::ThreadData*>>(__hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,RenderQueue::ThreadData*>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,RenderQueue::ThreadData*>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,RenderQueue::ThreadData*>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,RenderQueue::ThreadData*>>> * this, ulonglong * param_1, pair * param_2)


/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   long long, RenderQueue::ThreadData*>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned long long,
   RenderQueue::ThreadData*>, std::__ndk1::__unordered_map_hasher<unsigned long long,
   std::__ndk1::__hash_value_type<unsigned long long, RenderQueue::ThreadData*>,
   std::__ndk1::hash<unsigned long long>, true>, std::__ndk1::__unordered_map_equal<unsigned long
   long, std::__ndk1::__hash_value_type<unsigned long long, RenderQueue::ThreadData*>,
   std::__ndk1::equal_to<unsigned long long>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned long long,
   RenderQueue::ThreadData*> > >::__emplace_unique_key_args<unsigned long long,
   std::__ndk1::pair<unsigned long long, RenderQueue::ThreadData*> >(unsigned long long const&,
   std::__ndk1::pair<unsigned long long, RenderQueue::ThreadData*>&&) */

pair __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,RenderQueue::ThreadData*>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,RenderQueue::ThreadData*>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,RenderQueue::ThreadData*>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,RenderQueue::ThreadData*>>>
::
__emplace_unique_key_args<unsigned_long_long,std::__ndk1::pair<unsigned_long_long,RenderQueue::ThreadData*>>
          (__hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,RenderQueue::ThreadData*>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,RenderQueue::ThreadData*>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,RenderQueue::ThreadData*>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,RenderQueue::ThreadData*>>>
           *this,ulonglong *param_1,pair *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long **pplVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long **pplVar8;
  long *plVar9;
  long *plVar10;
  long *unaff_x24;
  undefined2 uVar11;
  undefined8 uVar12;
  float fVar13;
  
  plVar9 = *(long **)(this + 8);
  plVar10 = (long *)*param_1;
  if (plVar9 != (long *)0x0) {
    uVar12 = NEON_cnt(plVar9,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar3 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar3 < 2) {
      unaff_x24 = (long *)((long)plVar9 - 1U & (ulong)plVar10);
    }
    else {
      unaff_x24 = plVar10;
      if (plVar9 <= plVar10) {
        uVar6 = 0;
        if (plVar9 != (long *)0x0) {
          uVar6 = (ulong)plVar10 / (ulong)plVar9;
        }
        unaff_x24 = (long *)((long)plVar10 - uVar6 * (long)plVar9);
      }
    }
    pplVar8 = *(long ***)(*(long *)this + (long)unaff_x24 * 8);
    if (pplVar8 != (long **)0x0) {
      do {
        pplVar8 = (long **)*pplVar8;
        if (pplVar8 == (long **)0x0) goto LAB_00a23f80;
        plVar5 = pplVar8[1];
        if (plVar5 != plVar10) {
          if (uVar3 < 2) {
            plVar5 = (long *)((ulong)plVar5 & (long)plVar9 - 1U);
          }
          else if (plVar9 <= plVar5) {
            uVar6 = 0;
            if (plVar9 != (long *)0x0) {
              uVar6 = (ulong)plVar5 / (ulong)plVar9;
            }
            plVar5 = (long *)((long)plVar5 - uVar6 * (long)plVar9);
          }
          if (plVar5 != unaff_x24) goto LAB_00a23f80;
        }
      } while (pplVar8[2] != plVar10);
      goto LAB_00a240a4;
    }
  }
LAB_00a23f80:
  pplVar8 = (long **)operator_new(0x20);
  lVar2 = *(long *)(this + 0x18);
  plVar5 = *(long **)param_2;
  plVar1 = *(long **)(param_2 + 2);
  *pplVar8 = (long *)0x0;
  pplVar8[1] = plVar10;
  fVar13 = *(float *)(this + 0x20);
  pplVar8[2] = plVar5;
  pplVar8[3] = plVar1;
  if ((plVar9 == (long *)0x0) || (fVar13 * (float)ZEXT89(plVar9) < (float)(unkuint9)(lVar2 + 1))) {
    uVar3 = 1;
    if ((long *)0x2 < plVar9) {
      uVar3 = (ulong)(((ulong)plVar9 & (long)plVar9 - 1U) != 0);
    }
    uVar3 = uVar3 | (long)plVar9 << 1;
    uVar6 = (ulong)((float)(unkuint9)(lVar2 + 1) / fVar13);
    if (uVar6 <= uVar3) {
      uVar6 = uVar3;
    }
                    /* try { // try from 00a23fec to 00a23ff3 has its CatchHandler @ 00a240bc */
    rehash(this,uVar6);
    plVar9 = *(long **)(this + 8);
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      unaff_x24 = (long *)((long)plVar9 - 1U & (ulong)plVar10);
    }
    else {
      unaff_x24 = plVar10;
      if (plVar9 <= plVar10) {
        uVar3 = 0;
        if (plVar9 != (long *)0x0) {
          uVar3 = (ulong)plVar10 / (ulong)plVar9;
        }
        unaff_x24 = (long *)((long)plVar10 - uVar3 * (long)plVar9);
      }
    }
  }
  lVar2 = *(long *)this;
  pplVar4 = *(long ***)(lVar2 + (long)unaff_x24 * 8);
  if (pplVar4 == (long **)0x0) {
    plVar10 = (long *)(this + 0x10);
    lVar7 = *plVar10;
    *plVar10 = (long)pplVar8;
    *pplVar8 = (long *)lVar7;
    *(long **)(lVar2 + (long)unaff_x24 * 8) = plVar10;
    if (*pplVar8 != (long *)0x0) {
      plVar10 = *(long **)((long)*pplVar8 + 8);
      if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
        plVar10 = (long *)((ulong)plVar10 & (long)plVar9 - 1U);
      }
      else if (plVar9 <= plVar10) {
        uVar3 = 0;
        if (plVar9 != (long *)0x0) {
          uVar3 = (ulong)plVar10 / (ulong)plVar9;
        }
        plVar10 = (long *)((long)plVar10 - uVar3 * (long)plVar9);
      }
      *(long ***)(*(long *)this + (long)plVar10 * 8) = pplVar8;
    }
  }
  else {
    *pplVar8 = *pplVar4;
    *pplVar4 = (long *)pplVar8;
  }
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
LAB_00a240a4:
  return (pair)pplVar8;
}


