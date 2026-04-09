// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: find<std::__ndk1::array<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,4ul>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
// Entry Point: 00a110c4
// Size: 544 bytes
// Signature: undefined __cdecl find<std::__ndk1::array<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,4ul>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>(array * param_1, basic_string * param_2)


/* decltype ((((std::declval<std::__ndk1::array<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 4ul> const&>)()).begin)())
   AlgorithmUtil::find<std::__ndk1::array<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 4ul> const,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   >(std::__ndk1::array<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, 4ul> const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

array * AlgorithmUtil::
        find<std::__ndk1::array<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,4ul>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                  (array *param_1,basic_string *param_2)

{
  size_t sVar1;
  size_t __n;
  array aVar2;
  int iVar3;
  ulong uVar4;
  array *paVar5;
  array *paVar6;
  array *paVar7;
  array *__s2;
  
  __n = *(size_t *)(param_2 + 2);
  __s2 = *(array **)(param_2 + 4);
  aVar2 = *param_1;
  if ((*(byte *)param_2 & 1) == 0) {
    __s2 = (array *)((long)param_2 + 1);
    __n = (ulong)(*(byte *)param_2 >> 1);
  }
  uVar4 = (ulong)((byte)aVar2 >> 1);
  sVar1 = uVar4;
  if (((byte)aVar2 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 8);
  }
  if (sVar1 == __n) {
    paVar5 = *(array **)(param_1 + 0x10);
    if (((byte)aVar2 & 1) == 0) {
      paVar5 = param_1 + 1;
    }
    if (((byte)aVar2 & 1) == 0) {
      if (__n == 0) {
        return param_1;
      }
      paVar5 = param_1 + 1;
      paVar6 = __s2;
      while (*paVar5 == *paVar6) {
        uVar4 = uVar4 - 1;
        paVar5 = paVar5 + 1;
        paVar6 = paVar6 + 1;
        if (uVar4 == 0) {
          return param_1;
        }
      }
    }
    else {
      if (__n == 0) {
        return param_1;
      }
      iVar3 = memcmp(paVar5,__s2,__n);
      if (iVar3 == 0) {
        return param_1;
      }
    }
  }
  paVar5 = param_1 + 0x18;
  aVar2 = *paVar5;
  uVar4 = (ulong)((byte)aVar2 >> 1);
  sVar1 = uVar4;
  if (((byte)aVar2 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 0x20);
  }
  if (sVar1 == __n) {
    paVar6 = *(array **)(param_1 + 0x28);
    if (((byte)aVar2 & 1) == 0) {
      paVar6 = param_1 + 0x19;
    }
    if (((byte)aVar2 & 1) == 0) {
      if (__n == 0) {
        return paVar5;
      }
      paVar6 = param_1 + 0x19;
      paVar7 = __s2;
      while (*paVar6 == *paVar7) {
        uVar4 = uVar4 - 1;
        paVar6 = paVar6 + 1;
        paVar7 = paVar7 + 1;
        if (uVar4 == 0) {
          return paVar5;
        }
      }
    }
    else {
      if (__n == 0) {
        return paVar5;
      }
      iVar3 = memcmp(paVar6,__s2,__n);
      if (iVar3 == 0) {
        return paVar5;
      }
    }
  }
  paVar5 = param_1 + 0x30;
  aVar2 = *paVar5;
  uVar4 = (ulong)((byte)aVar2 >> 1);
  sVar1 = uVar4;
  if (((byte)aVar2 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 0x38);
  }
  if (sVar1 == __n) {
    paVar6 = *(array **)(param_1 + 0x40);
    if (((byte)aVar2 & 1) == 0) {
      paVar6 = param_1 + 0x31;
    }
    if (((byte)aVar2 & 1) == 0) {
      if (__n == 0) {
        return paVar5;
      }
      paVar6 = param_1 + 0x31;
      paVar7 = __s2;
      while (*paVar6 == *paVar7) {
        uVar4 = uVar4 - 1;
        paVar6 = paVar6 + 1;
        paVar7 = paVar7 + 1;
        if (uVar4 == 0) {
          return paVar5;
        }
      }
    }
    else {
      if (__n == 0) {
        return paVar5;
      }
      iVar3 = memcmp(paVar6,__s2,__n);
      if (iVar3 == 0) {
        return paVar5;
      }
    }
  }
  paVar5 = param_1 + 0x48;
  aVar2 = *paVar5;
  uVar4 = (ulong)((byte)aVar2 >> 1);
  sVar1 = uVar4;
  if (((byte)aVar2 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 0x50);
  }
  if (sVar1 == __n) {
    paVar6 = *(array **)(param_1 + 0x58);
    if (((byte)aVar2 & 1) == 0) {
      paVar6 = param_1 + 0x49;
    }
    if (((byte)aVar2 & 1) == 0) {
      if (__n == 0) {
        return paVar5;
      }
      paVar6 = param_1 + 0x49;
      while (*paVar6 == *__s2) {
        uVar4 = uVar4 - 1;
        paVar6 = paVar6 + 1;
        __s2 = __s2 + 1;
        if (uVar4 == 0) {
          return paVar5;
        }
      }
    }
    else {
      if (__n == 0) {
        return paVar5;
      }
      iVar3 = memcmp(paVar6,__s2,__n);
      if (iVar3 == 0) {
        return paVar5;
      }
    }
  }
  return param_1 + 0x60;
}


