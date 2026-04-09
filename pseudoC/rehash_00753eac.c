// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __rehash
// Entry Point: 00753eac
// Size: 616 bytes
// Signature: undefined __thiscall __rehash(__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>>> * this, ulong param_1)


/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE, char const*,
   LocalizationManager::EnumClassHash, std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,
   std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE const, char const*> > > >,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE, char
   const*, LocalizationManager::EnumClassHash, std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,
   std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE const, char const*> > > >,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE, char
   const*, LocalizationManager::EnumClassHash, std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,
   std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE const, char const*> > > >,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE, char const*,
   LocalizationManager::EnumClassHash, std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,
   std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE const, char const*> > > > >
   >::__rehash(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>>>
::__rehash(__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>>>
           *this,ulong param_1)

{
  long *__n;
  long *__s1;
  byte bVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  void *pvVar8;
  void *pvVar9;
  ulong uVar10;
  long **pplVar11;
  long *plVar12;
  long *plVar13;
  long **pplVar14;
  long **pplVar15;
  long **pplVar16;
  long *plVar17;
  long **pplVar18;
  undefined2 uVar19;
  undefined8 uVar20;
  
  if (param_1 == 0) {
    pvVar8 = *(void **)this;
    *(undefined8 *)this = 0;
    if (pvVar8 != (void *)0x0) {
      operator_delete(pvVar8);
    }
    *(undefined8 *)(this + 8) = 0;
  }
  else {
    if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar8 = operator_new(param_1 << 3);
    pvVar9 = *(void **)this;
    *(void **)this = pvVar8;
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
    uVar10 = 0;
    *(ulong *)(this + 8) = param_1;
    do {
      *(undefined8 *)(*(long *)this + uVar10 * 8) = 0;
      uVar10 = uVar10 + 1;
    } while (param_1 != uVar10);
    pplVar14 = *(long ***)(this + 0x10);
    if (pplVar14 != (long **)0x0) {
      plVar12 = pplVar14[1];
      uVar20 = NEON_cnt(param_1,1);
      uVar19 = NEON_uaddlv(uVar20,1);
      uVar10 = CONCAT62((int6)((ulong)uVar20 >> 0x10),uVar19) & 0xffffffff;
      if (uVar10 < 2) {
        plVar12 = (long *)((ulong)plVar12 & param_1 - 1);
      }
      else if (param_1 <= plVar12) {
        uVar4 = 0;
        if (param_1 != 0) {
          uVar4 = (ulong)plVar12 / param_1;
        }
        plVar12 = (long *)((long)plVar12 - uVar4 * param_1);
      }
      *(__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::unordered_map<LanguageUtil::LANGUAGE_TYPE,char_const*,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<std::__ndk1::pair<LanguageUtil::LANGUAGE_TYPE_const,char_const*>>>>>>
        **)(*(long *)this + (long)plVar12 * 8) = this + 0x10;
      if ((long **)*pplVar14 != (long **)0x0) {
        pplVar15 = (long **)*pplVar14;
        do {
          plVar17 = pplVar15[1];
          if (uVar10 < 2) {
            plVar17 = (long *)((ulong)plVar17 & param_1 - 1);
          }
          else if (param_1 <= plVar17) {
            uVar4 = 0;
            if (param_1 != 0) {
              uVar4 = (ulong)plVar17 / param_1;
            }
            plVar17 = (long *)((long)plVar17 - uVar4 * param_1);
          }
          if (plVar17 != plVar12) {
            if (*(long *)(*(long *)this + (long)plVar17 * 8) == 0) {
              *(long ***)(*(long *)this + (long)plVar17 * 8) = pplVar14;
              plVar12 = plVar17;
            }
            else {
              pplVar11 = (long **)*pplVar15;
              pplVar16 = pplVar15;
              if (pplVar11 == (long **)0x0) {
                pplVar18 = (long **)0x0;
              }
              else {
                bVar2 = *(byte *)(pplVar15 + 2);
                __n = (long *)(ulong)(bVar2 >> 1);
                if ((bVar2 & 1) != 0) {
                  __n = pplVar15[3];
                }
                do {
                  pplVar18 = pplVar11;
                  bVar1 = *(byte *)(pplVar18 + 2);
                  plVar13 = (long *)(ulong)(bVar1 >> 1);
                  if ((bVar1 & 1) != 0) {
                    plVar13 = pplVar18[3];
                  }
                  if (__n != plVar13) goto LAB_007540c0;
                  plVar13 = pplVar18[4];
                  __s1 = (long *)((long)pplVar15 + 0x11);
                  if ((bVar2 & 1) != 0) {
                    __s1 = pplVar15[4];
                  }
                  if ((bVar1 & 1) == 0) {
                    plVar13 = (long *)((long)pplVar18 + 0x11);
                  }
                  plVar5 = (long *)((long)pplVar15 + 0x11);
                  plVar3 = (long *)(ulong)(bVar2 >> 1);
                  plVar6 = __n;
                  if ((bVar2 & 1) == 0) {
                    while (plVar6 != (long *)0x0) {
                      if (*(char *)plVar5 != *(char *)plVar13) goto LAB_007540c0;
                      plVar13 = (long *)((long)plVar13 + 1);
                      plVar3 = (long *)((long)plVar3 - 1);
                      plVar5 = (long *)((long)plVar5 + 1);
                      plVar6 = plVar3;
                    }
                  }
                  else if ((__n != (long *)0x0) &&
                          (iVar7 = memcmp(__s1,plVar13,(size_t)__n), iVar7 != 0)) goto LAB_007540c0;
                  pplVar11 = (long **)*pplVar18;
                  pplVar16 = pplVar18;
                } while ((long **)*pplVar18 != (long **)0x0);
                pplVar18 = (long **)0x0;
              }
LAB_007540c0:
              *pplVar14 = (long *)pplVar18;
              *pplVar16 = **(long ***)(*(long *)this + (long)plVar17 * 8);
              **(long ***)(*(long *)this + (long)plVar17 * 8) = (long *)pplVar15;
              pplVar15 = pplVar14;
            }
          }
          pplVar11 = (long **)*pplVar15;
          pplVar14 = pplVar15;
          pplVar15 = pplVar11;
        } while (pplVar11 != (long **)0x0);
      }
    }
  }
  return;
}


