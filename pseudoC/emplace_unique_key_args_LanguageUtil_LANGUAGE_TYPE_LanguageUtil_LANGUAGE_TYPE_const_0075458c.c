// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_key_args<LanguageUtil::LANGUAGE_TYPE,LanguageUtil::LANGUAGE_TYPE_const&>
// Entry Point: 0075458c
// Size: 512 bytes
// Signature: pair __thiscall __emplace_unique_key_args<LanguageUtil::LANGUAGE_TYPE,LanguageUtil::LANGUAGE_TYPE_const&>(__hash_table<LanguageUtil::LANGUAGE_TYPE,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<LanguageUtil::LANGUAGE_TYPE>> * this, LANGUAGE_TYPE * param_1, LANGUAGE_TYPE * param_2)


/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<LanguageUtil::LANGUAGE_TYPE,
   void*>*>, bool> std::__ndk1::__hash_table<LanguageUtil::LANGUAGE_TYPE,
   LocalizationManager::EnumClassHash, std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,
   std::__ndk1::allocator<LanguageUtil::LANGUAGE_TYPE>
   >::__emplace_unique_key_args<LanguageUtil::LANGUAGE_TYPE, LanguageUtil::LANGUAGE_TYPE
   const&>(LanguageUtil::LANGUAGE_TYPE const&, LanguageUtil::LANGUAGE_TYPE const&) */

pair __thiscall
std::__ndk1::
__hash_table<LanguageUtil::LANGUAGE_TYPE,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<LanguageUtil::LANGUAGE_TYPE>>
::__emplace_unique_key_args<LanguageUtil::LANGUAGE_TYPE,LanguageUtil::LANGUAGE_TYPE_const&>
          (__hash_table<LanguageUtil::LANGUAGE_TYPE,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<LanguageUtil::LANGUAGE_TYPE>>
           *this,LANGUAGE_TYPE *param_1,LANGUAGE_TYPE *param_2)

{
  uint uVar1;
  LANGUAGE_TYPE LVar2;
  long lVar3;
  ulong uVar4;
  long **pplVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long **pplVar9;
  long *plVar10;
  long *plVar11;
  long *unaff_x24;
  undefined2 uVar12;
  undefined8 uVar13;
  float fVar14;
  
  plVar10 = *(long **)(this + 8);
  uVar1 = *param_1;
  plVar11 = (long *)(ulong)uVar1;
  if (plVar10 != (long *)0x0) {
    uVar13 = NEON_cnt(plVar10,1);
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar4 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    if (uVar4 < 2) {
      unaff_x24 = (long *)(ulong)((int)plVar10 - 1U & uVar1);
    }
    else {
      unaff_x24 = plVar11;
      if (plVar10 <= plVar11) {
        uVar7 = 0;
        if (plVar10 != (long *)0x0) {
          uVar7 = (ulong)plVar11 / (ulong)plVar10;
        }
        unaff_x24 = (long *)((long)plVar11 - uVar7 * (long)plVar10);
      }
    }
    pplVar9 = *(long ***)(*(long *)this + (long)unaff_x24 * 8);
    if (pplVar9 != (long **)0x0) {
      do {
        pplVar9 = (long **)*pplVar9;
        if (pplVar9 == (long **)0x0) goto LAB_0075464c;
        plVar6 = pplVar9[1];
        if (plVar6 != plVar11) {
          if (uVar4 < 2) {
            plVar6 = (long *)((ulong)plVar6 & (long)plVar10 - 1U);
          }
          else if (plVar10 <= plVar6) {
            uVar7 = 0;
            if (plVar10 != (long *)0x0) {
              uVar7 = (ulong)plVar6 / (ulong)plVar10;
            }
            plVar6 = (long *)((long)plVar6 - uVar7 * (long)plVar10);
          }
          if (plVar6 != unaff_x24) goto LAB_0075464c;
        }
      } while (*(uint *)(pplVar9 + 2) != uVar1);
      goto LAB_00754774;
    }
  }
LAB_0075464c:
  pplVar9 = (long **)operator_new(0x18);
  lVar3 = *(long *)(this + 0x18);
  LVar2 = *param_2;
  *pplVar9 = (long *)0x0;
  pplVar9[1] = plVar11;
  fVar14 = *(float *)(this + 0x20);
  *(LANGUAGE_TYPE *)(pplVar9 + 2) = LVar2;
  if ((plVar10 == (long *)0x0) || (fVar14 * (float)ZEXT89(plVar10) < (float)(unkuint9)(lVar3 + 1)))
  {
    uVar4 = 1;
    if ((long *)0x2 < plVar10) {
      uVar4 = (ulong)(((ulong)plVar10 & (long)plVar10 - 1U) != 0);
    }
    uVar4 = uVar4 | (long)plVar10 << 1;
    uVar7 = (ulong)((float)(unkuint9)(lVar3 + 1) / fVar14);
    if (uVar7 <= uVar4) {
      uVar7 = uVar4;
    }
                    /* try { // try from 007546b8 to 007546bf has its CatchHandler @ 0075478c */
    rehash(this,uVar7);
    plVar10 = *(long **)(this + 8);
    if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
      unaff_x24 = (long *)(ulong)((int)plVar10 - 1U & uVar1);
    }
    else {
      unaff_x24 = plVar11;
      if (plVar10 <= plVar11) {
        uVar4 = 0;
        if (plVar10 != (long *)0x0) {
          uVar4 = (ulong)plVar11 / (ulong)plVar10;
        }
        unaff_x24 = (long *)((long)plVar11 - uVar4 * (long)plVar10);
      }
    }
  }
  lVar3 = *(long *)this;
  pplVar5 = *(long ***)(lVar3 + (long)unaff_x24 * 8);
  if (pplVar5 == (long **)0x0) {
    plVar11 = (long *)(this + 0x10);
    lVar8 = *plVar11;
    *plVar11 = (long)pplVar9;
    *pplVar9 = (long *)lVar8;
    *(long **)(lVar3 + (long)unaff_x24 * 8) = plVar11;
    if (*pplVar9 != (long *)0x0) {
      plVar11 = *(long **)((long)*pplVar9 + 8);
      if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
        plVar11 = (long *)((ulong)plVar11 & (long)plVar10 - 1U);
      }
      else if (plVar10 <= plVar11) {
        uVar4 = 0;
        if (plVar10 != (long *)0x0) {
          uVar4 = (ulong)plVar11 / (ulong)plVar10;
        }
        plVar11 = (long *)((long)plVar11 - uVar4 * (long)plVar10);
      }
      *(long ***)(*(long *)this + (long)plVar11 * 8) = pplVar9;
    }
  }
  else {
    *pplVar9 = *pplVar5;
    *pplVar5 = (long *)pplVar9;
  }
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
LAB_00754774:
  return (pair)pplVar9;
}


