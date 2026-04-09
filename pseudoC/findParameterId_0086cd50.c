// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findParameterId
// Entry Point: 0086cd50
// Size: 308 bytes
// Signature: undefined __thiscall findParameterId(ConditionalAnimationShared * this, basic_string * param_1, uint * param_2)


/* ConditionalAnimationShared::findParameterId(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned int&) const */

undefined8 __thiscall
ConditionalAnimationShared::findParameterId
          (ConditionalAnimationShared *this,basic_string *param_1,uint *param_2)

{
  size_t sVar1;
  size_t __n;
  ConditionalAnimationShared *__s2;
  ConditionalAnimationShared CVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ConditionalAnimationShared **ppCVar6;
  ConditionalAnimationShared *pCVar7;
  ConditionalAnimationShared *pCVar8;
  ConditionalAnimationShared **ppCVar9;
  
  __n = *(size_t *)(param_1 + 2);
  __s2 = *(ConditionalAnimationShared **)(param_1 + 4);
  ppCVar9 = *(ConditionalAnimationShared ***)this;
  if ((*(byte *)param_1 & 1) == 0) {
    __s2 = (ConditionalAnimationShared *)((long)param_1 + 1);
    __n = (ulong)(*(byte *)param_1 >> 1);
  }
  do {
    if (ppCVar9 == (ConditionalAnimationShared **)(this + 8)) {
      return 0;
    }
    CVar2 = *(ConditionalAnimationShared *)(ppCVar9 + 6);
    uVar5 = (ulong)((byte)CVar2 >> 1);
    sVar1 = uVar5;
    if (((byte)CVar2 & 1) != 0) {
      sVar1 = (size_t)ppCVar9[7];
    }
    if (sVar1 == __n) {
      pCVar8 = ppCVar9[8];
      if (((byte)CVar2 & 1) == 0) {
        pCVar8 = (ConditionalAnimationShared *)((long)ppCVar9 + 0x31);
      }
      if (((byte)CVar2 & 1) == 0) {
        if (__n == 0) {
LAB_0086ce5c:
          *param_2 = *(uint *)(ppCVar9 + 4);
          return 1;
        }
        pCVar8 = (ConditionalAnimationShared *)((long)ppCVar9 + 0x31);
        pCVar7 = __s2;
        while (*pCVar8 == *pCVar7) {
          uVar5 = uVar5 - 1;
          pCVar8 = pCVar8 + 1;
          pCVar7 = pCVar7 + 1;
          if (uVar5 == 0) goto LAB_0086ce5c;
        }
      }
      else if ((__n == 0) || (iVar4 = memcmp(pCVar8,__s2,__n), iVar4 == 0)) goto LAB_0086ce5c;
    }
    ppCVar6 = (ConditionalAnimationShared **)ppCVar9[1];
    if ((ConditionalAnimationShared **)ppCVar9[1] == (ConditionalAnimationShared **)0x0) {
      ppCVar6 = ppCVar9 + 2;
      bVar3 = (ConditionalAnimationShared **)*(ConditionalAnimationShared **)*ppCVar6 != ppCVar9;
      ppCVar9 = (ConditionalAnimationShared **)*ppCVar6;
      if (bVar3) {
        do {
          pCVar8 = *ppCVar6;
          ppCVar6 = (ConditionalAnimationShared **)(pCVar8 + 0x10);
          ppCVar9 = (ConditionalAnimationShared **)*ppCVar6;
        } while (*ppCVar9 != pCVar8);
      }
    }
    else {
      do {
        ppCVar9 = ppCVar6;
        ppCVar6 = (ConditionalAnimationShared **)*ppCVar9;
      } while ((ConditionalAnimationShared **)*ppCVar9 != (ConditionalAnimationShared **)0x0);
    }
  } while( true );
}


