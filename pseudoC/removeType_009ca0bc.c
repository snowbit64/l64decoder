// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeType
// Entry Point: 009ca0bc
// Size: 568 bytes
// Signature: undefined __thiscall removeType(ProceduralPlacementDistanceMatrix * this, basic_string * param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProceduralPlacementDistanceMatrix::removeType(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
ProceduralPlacementDistanceMatrix::removeType
          (ProceduralPlacementDistanceMatrix *this,basic_string *param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  char *pcVar6;
  char *pcVar7;
  ProceduralPlacementDistanceMatrix **ppPVar8;
  ulong uVar9;
  ProceduralPlacementDistanceMatrix *pPVar10;
  void *pvVar11;
  ProceduralPlacementDistanceMatrix **ppPVar12;
  ulong uVar13;
  
  bVar2 = *(byte *)param_1;
  uVar13 = (ulong)(bVar2 >> 1);
  __n = uVar13;
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 2);
  }
  sVar1 = (ulong)(DEFAULT_TEXTURE_TYPENAME >> 1);
  if ((DEFAULT_TEXTURE_TYPENAME & 1) != 0) {
    sVar1 = ram0x02111bd0;
  }
  if (__n == sVar1) {
    pvVar11 = *(void **)(param_1 + 4);
    if ((bVar2 & 1) == 0) {
      pvVar11 = (void *)((long)param_1 + 1);
    }
    puVar5 = DAT_02111bd8;
    if ((DEFAULT_TEXTURE_TYPENAME & 1) == 0) {
      puVar5 = &DAT_02111bc9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n == 0) {
        return;
      }
      pcVar6 = (char *)((long)param_1 + 1);
      uVar9 = uVar13;
      while (*pcVar6 == *(char *)puVar5) {
        uVar9 = uVar9 - 1;
        pcVar6 = pcVar6 + 1;
        puVar5 = (undefined8 *)((long)puVar5 + 1);
        if (uVar9 == 0) {
          return;
        }
      }
    }
    else {
      if (__n == 0) {
        return;
      }
      iVar4 = memcmp(pvVar11,puVar5,__n);
      if (iVar4 == 0) {
        return;
      }
    }
  }
  sVar1 = (ulong)(DEFAULT_FOLIAGE_TYPENAME >> 1);
  if ((DEFAULT_FOLIAGE_TYPENAME & 1) != 0) {
    sVar1 = ram0x02111be8;
  }
  if (__n == sVar1) {
    pvVar11 = *(void **)(param_1 + 4);
    if ((bVar2 & 1) == 0) {
      pvVar11 = (void *)((long)param_1 + 1);
    }
    puVar5 = DAT_02111bf0;
    if ((DEFAULT_FOLIAGE_TYPENAME & 1) == 0) {
      puVar5 = &DAT_02111be1;
    }
    if ((bVar2 & 1) == 0) {
      if (__n == 0) {
        return;
      }
      pcVar6 = (char *)((long)param_1 + 1);
      uVar9 = uVar13;
      while (*pcVar6 == *(char *)puVar5) {
        uVar9 = uVar9 - 1;
        pcVar6 = pcVar6 + 1;
        puVar5 = (undefined8 *)((long)puVar5 + 1);
        if (uVar9 == 0) {
          return;
        }
      }
    }
    else {
      if (__n == 0) {
        return;
      }
      iVar4 = memcmp(pvVar11,puVar5,__n);
      if (iVar4 == 0) {
        return;
      }
    }
  }
  sVar1 = (ulong)(DEFAULT_REFERENCE_TYPENAME >> 1);
  if ((DEFAULT_REFERENCE_TYPENAME & 1) != 0) {
    sVar1 = DAT_02111c00;
  }
  if (__n == sVar1) {
    pvVar11 = *(void **)(param_1 + 4);
    if ((bVar2 & 1) == 0) {
      pvVar11 = (void *)((long)param_1 + 1);
    }
    pcVar6 = DAT_02111c08;
    if ((DEFAULT_REFERENCE_TYPENAME & 1) == 0) {
      pcVar6 = &DAT_02111bf9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n == 0) {
        return;
      }
      pcVar7 = (char *)((long)param_1 + 1);
      while (*pcVar7 == *pcVar6) {
        uVar13 = uVar13 - 1;
        pcVar7 = pcVar7 + 1;
        pcVar6 = pcVar6 + 1;
        if (uVar13 == 0) {
          return;
        }
      }
    }
    else {
      if (__n == 0) {
        return;
      }
      iVar4 = memcmp(pvVar11,pcVar6,__n);
      if (iVar4 == 0) {
        return;
      }
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementDistanceMatrix::DistanceMatrixType*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementDistanceMatrix::DistanceMatrixType*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementDistanceMatrix::DistanceMatrixType*>>>
  ::
  __erase_unique<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementDistanceMatrix::DistanceMatrixType*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementDistanceMatrix::DistanceMatrixType*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementDistanceMatrix::DistanceMatrixType*>>>
              *)this,param_1);
  ppPVar12 = *(ProceduralPlacementDistanceMatrix ***)this;
  while (ppPVar12 != (ProceduralPlacementDistanceMatrix **)(this + 8)) {
    std::__ndk1::
    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
    ::
    __erase_unique<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
              ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
                *)(ppPVar12[7] + 0x18),param_1);
    ppPVar8 = (ProceduralPlacementDistanceMatrix **)ppPVar12[1];
    if ((ProceduralPlacementDistanceMatrix **)ppPVar12[1] ==
        (ProceduralPlacementDistanceMatrix **)0x0) {
      ppPVar8 = ppPVar12 + 2;
      bVar3 = *(ProceduralPlacementDistanceMatrix ***)*ppPVar8 != ppPVar12;
      ppPVar12 = (ProceduralPlacementDistanceMatrix **)*ppPVar8;
      if (bVar3) {
        do {
          pPVar10 = *ppPVar8;
          ppPVar8 = (ProceduralPlacementDistanceMatrix **)(pPVar10 + 0x10);
          ppPVar12 = (ProceduralPlacementDistanceMatrix **)*ppPVar8;
        } while (*ppPVar12 != pPVar10);
      }
    }
    else {
      do {
        ppPVar12 = ppPVar8;
        ppPVar8 = (ProceduralPlacementDistanceMatrix **)*ppPVar12;
      } while ((ProceduralPlacementDistanceMatrix **)*ppPVar12 !=
               (ProceduralPlacementDistanceMatrix **)0x0);
    }
  }
  return;
}


