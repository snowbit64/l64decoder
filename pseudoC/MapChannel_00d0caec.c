// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MapChannel
// Entry Point: 00d0caec
// Size: 388 bytes
// Signature: undefined __thiscall MapChannel(EqualityComparisonFilter * this, basic_string * param_1)


/* CryptoPP::EqualityComparisonFilter::MapChannel(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

undefined4 __thiscall
CryptoPP::EqualityComparisonFilter::MapChannel(EqualityComparisonFilter *this,basic_string *param_1)

{
  size_t __n;
  size_t sVar1;
  EqualityComparisonFilter EVar2;
  byte bVar3;
  int iVar4;
  EqualityComparisonFilter *pEVar5;
  ulong uVar6;
  void *pvVar7;
  EqualityComparisonFilter *pEVar8;
  ulong uVar9;
  
  bVar3 = *(byte *)param_1;
  EVar2 = this[0x30];
  uVar9 = (ulong)(bVar3 >> 1);
  __n = uVar9;
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_1 + 2);
  }
  sVar1 = (ulong)((byte)EVar2 >> 1);
  if (((byte)EVar2 & 1) != 0) {
    sVar1 = *(size_t *)(this + 0x38);
  }
  if (__n == sVar1) {
    pvVar7 = *(void **)(param_1 + 4);
    pEVar8 = *(EqualityComparisonFilter **)(this + 0x40);
    if ((bVar3 & 1) == 0) {
      pvVar7 = (void *)((long)param_1 + 1);
    }
    if (((byte)EVar2 & 1) == 0) {
      pEVar8 = this + 0x31;
    }
    if ((bVar3 & 1) == 0) {
      if (__n == 0) {
        return 0;
      }
      pEVar5 = (EqualityComparisonFilter *)((long)param_1 + 1);
      uVar6 = uVar9;
      while (*pEVar5 == *pEVar8) {
        uVar6 = uVar6 - 1;
        pEVar5 = pEVar5 + 1;
        pEVar8 = pEVar8 + 1;
        if (uVar6 == 0) {
          return 0;
        }
      }
    }
    else {
      if (__n == 0) {
        return 0;
      }
      iVar4 = memcmp(pvVar7,pEVar8,__n);
      if (iVar4 == 0) {
        return 0;
      }
    }
  }
  EVar2 = this[0x48];
  sVar1 = (ulong)((byte)EVar2 >> 1);
  if (((byte)EVar2 & 1) != 0) {
    sVar1 = *(size_t *)(this + 0x50);
  }
  if (__n == sVar1) {
    pvVar7 = *(void **)(param_1 + 4);
    pEVar8 = *(EqualityComparisonFilter **)(this + 0x58);
    if ((bVar3 & 1) == 0) {
      pvVar7 = (void *)((long)param_1 + 1);
    }
    if (((byte)EVar2 & 1) == 0) {
      pEVar8 = this + 0x49;
    }
    if ((bVar3 & 1) == 0) {
      if (__n != 0) {
        pEVar5 = (EqualityComparisonFilter *)((long)param_1 + 1);
        do {
          if (*pEVar5 != *pEVar8) {
            return 2;
          }
          uVar9 = uVar9 - 1;
          pEVar5 = pEVar5 + 1;
          pEVar8 = pEVar8 + 1;
        } while (uVar9 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pvVar7,pEVar8,__n), iVar4 != 0)) {
      return 2;
    }
    return 1;
  }
  return 2;
}


