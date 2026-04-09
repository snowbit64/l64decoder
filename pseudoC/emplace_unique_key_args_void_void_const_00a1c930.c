// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_key_args<void*,void*const&>
// Entry Point: 00a1c930
// Size: 568 bytes
// Signature: pair __thiscall __emplace_unique_key_args<void*,void*const&>(__hash_table<void*,std::__ndk1::hash<void*>,std::__ndk1::equal_to<void*>,std::__ndk1::allocator<void*>> * this, void * * param_1, void * * param_2)


/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<void*, void*>*>, bool>
   std::__ndk1::__hash_table<void*, std::__ndk1::hash<void*>, std::__ndk1::equal_to<void*>,
   std::__ndk1::allocator<void*> >::__emplace_unique_key_args<void*, void* const&>(void* const&,
   void* const&) */

pair __thiscall
std::__ndk1::
__hash_table<void*,std::__ndk1::hash<void*>,std::__ndk1::equal_to<void*>,std::__ndk1::allocator<void*>>
::__emplace_unique_key_args<void*,void*const&>
          (__hash_table<void*,std::__ndk1::hash<void*>,std::__ndk1::equal_to<void*>,std::__ndk1::allocator<void*>>
           *this,void **param_1,void **param_2)

{
  long *plVar1;
  long lVar2;
  long **pplVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long **pplVar8;
  long *plVar9;
  long *plVar10;
  long *unaff_x24;
  undefined2 uVar11;
  undefined8 uVar12;
  float fVar13;
  
  plVar1 = (long *)*param_1;
  plVar9 = *(long **)(this + 8);
  uVar4 = ((ulong)(uint)((int)plVar1 << 3) + 8 ^ (ulong)plVar1 >> 0x20) * -0x622015f714c7d297;
  uVar4 = (uVar4 ^ (ulong)plVar1 >> 0x20 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
  plVar10 = (long *)((uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297);
  if (plVar9 != (long *)0x0) {
    uVar12 = NEON_cnt(plVar9,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar4 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar4 < 2) {
      unaff_x24 = (long *)((ulong)plVar10 & (long)plVar9 - 1U);
    }
    else {
      unaff_x24 = plVar10;
      if (plVar9 <= plVar10) {
        uVar5 = 0;
        if (plVar9 != (long *)0x0) {
          uVar5 = (ulong)plVar10 / (ulong)plVar9;
        }
        unaff_x24 = (long *)((long)plVar10 - uVar5 * (long)plVar9);
      }
    }
    pplVar8 = *(long ***)(*(long *)this + (long)unaff_x24 * 8);
    if (pplVar8 != (long **)0x0) {
      do {
        pplVar8 = (long **)*pplVar8;
        if (pplVar8 == (long **)0x0) goto LAB_00a1ca28;
        plVar7 = pplVar8[1];
        if (plVar7 != plVar10) {
          if (uVar4 < 2) {
            plVar7 = (long *)((ulong)plVar7 & (long)plVar9 - 1U);
          }
          else if (plVar9 <= plVar7) {
            uVar5 = 0;
            if (plVar9 != (long *)0x0) {
              uVar5 = (ulong)plVar7 / (ulong)plVar9;
            }
            plVar7 = (long *)((long)plVar7 - uVar5 * (long)plVar9);
          }
          if (plVar7 != unaff_x24) goto LAB_00a1ca28;
        }
      } while (pplVar8[2] != plVar1);
      goto LAB_00a1cb50;
    }
  }
LAB_00a1ca28:
  pplVar8 = (long **)operator_new(0x18);
  lVar2 = *(long *)(this + 0x18);
  plVar1 = (long *)*param_2;
  *pplVar8 = (long *)0x0;
  fVar13 = *(float *)(this + 0x20);
  pplVar8[1] = plVar10;
  pplVar8[2] = plVar1;
  if ((plVar9 == (long *)0x0) || (fVar13 * (float)ZEXT89(plVar9) < (float)(unkuint9)(lVar2 + 1))) {
    if (plVar9 < (long *)0x3) {
      uVar4 = 1;
    }
    else {
      uVar4 = (ulong)(((ulong)plVar9 & (long)plVar9 - 1U) != 0);
    }
    uVar4 = uVar4 | (long)plVar9 << 1;
    uVar5 = (ulong)((float)(unkuint9)(lVar2 + 1) / fVar13);
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
                    /* try { // try from 00a1ca98 to 00a1ca9f has its CatchHandler @ 00a1cb68 */
    rehash(this,uVar5);
    plVar9 = *(long **)(this + 8);
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      unaff_x24 = (long *)((long)plVar9 - 1U & (ulong)plVar10);
    }
    else {
      unaff_x24 = plVar10;
      if (plVar9 <= plVar10) {
        uVar4 = 0;
        if (plVar9 != (long *)0x0) {
          uVar4 = (ulong)plVar10 / (ulong)plVar9;
        }
        unaff_x24 = (long *)((long)plVar10 - uVar4 * (long)plVar9);
      }
    }
  }
  lVar2 = *(long *)this;
  pplVar3 = *(long ***)(lVar2 + (long)unaff_x24 * 8);
  if (pplVar3 == (long **)0x0) {
    plVar1 = (long *)(this + 0x10);
    lVar6 = *plVar1;
    *plVar1 = (long)pplVar8;
    *pplVar8 = (long *)lVar6;
    *(long **)(lVar2 + (long)unaff_x24 * 8) = plVar1;
    if (*pplVar8 != (long *)0x0) {
      plVar1 = *(long **)((long)*pplVar8 + 8);
      if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
        plVar1 = (long *)((ulong)plVar1 & (long)plVar9 - 1U);
      }
      else if (plVar9 <= plVar1) {
        uVar4 = 0;
        if (plVar9 != (long *)0x0) {
          uVar4 = (ulong)plVar1 / (ulong)plVar9;
        }
        plVar1 = (long *)((long)plVar1 - uVar4 * (long)plVar9);
      }
      *(long ***)(*(long *)this + (long)plVar1 * 8) = pplVar8;
    }
  }
  else {
    *pplVar8 = *pplVar3;
    *pplVar3 = (long *)pplVar8;
  }
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
LAB_00a1cb50:
  return (pair)pplVar8;
}


