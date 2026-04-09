// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setServerPlatformSessionIds
// Entry Point: 00b3d95c
// Size: 472 bytes
// Signature: undefined __thiscall setServerPlatformSessionIds(MasterServerManager * this, vector * param_1)


/* MasterServerManager::setServerPlatformSessionIds(std::__ndk1::vector<char const*,
   std::__ndk1::allocator<char const*> > const&) */

void __thiscall
MasterServerManager::setServerPlatformSessionIds(MasterServerManager *this,vector *param_1)

{
  long *this_00;
  char **ppcVar1;
  byte bVar2;
  long lVar3;
  void **ppvVar4;
  size_t __n;
  void *pvVar5;
  long lVar6;
  long lVar7;
  char *__s;
  ulong uVar8;
  char **ppcVar9;
  undefined8 local_80;
  size_t local_78;
  void *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (this[0x38] != (MasterServerManager)0x0) {
    this_00 = (long *)(this + 0xe8);
    if (*(long *)(this + 0x100) != 0) {
      ppvVar4 = (void **)*(void **)(this + 0xf8);
      while (ppvVar4 != (void **)0x0) {
        pvVar5 = *ppvVar4;
        if ((*(byte *)(ppvVar4 + 2) & 1) != 0) {
          operator_delete(ppvVar4[4]);
        }
        operator_delete(ppvVar4);
        ppvVar4 = (void **)pvVar5;
      }
      lVar6 = *(long *)(this + 0xf0);
      *(undefined8 *)(this + 0xf8) = 0;
      if (lVar6 != 0) {
        lVar7 = 0;
        do {
          *(undefined8 *)(*this_00 + lVar7 * 8) = 0;
          lVar7 = lVar7 + 1;
        } while (lVar6 != lVar7);
      }
      *(undefined8 *)(this + 0x100) = 0;
    }
    std::__ndk1::
    __hash_table<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::rehash((__hash_table<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              *)this_00,
             (long)((float)(unkuint9)(ulong)(*(long *)(param_1 + 8) - *(long *)param_1 >> 3) /
                   *(float *)(this + 0x108)));
    ppcVar9 = *(char ***)param_1;
    ppcVar1 = *(char ***)(param_1 + 8);
    if (ppcVar9 != ppcVar1) {
      do {
        __s = *ppcVar9;
        __n = strlen(__s);
        if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (__n < 0x17) {
          local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
          pvVar5 = (void *)((ulong)&local_80 | 1);
          if (__n != 0) goto LAB_00b3da70;
        }
        else {
          uVar8 = __n + 0x10 & 0xfffffffffffffff0;
          pvVar5 = operator_new(uVar8);
          local_80 = uVar8 | 1;
          local_78 = __n;
          local_70 = pvVar5;
LAB_00b3da70:
          memcpy(pvVar5,__s,__n);
        }
        *(undefined *)((long)pvVar5 + __n) = 0;
                    /* try { // try from 00b3da84 to 00b3da93 has its CatchHandler @ 00b3db34 */
        std::__ndk1::
        __hash_table<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                  ((__hash_table<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                    *)this_00,(basic_string *)&local_80,(basic_string *)&local_80);
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
        ppcVar9 = ppcVar9 + 1;
      } while (ppcVar9 != ppcVar1);
    }
    bVar2 = *(byte *)(this + 0xd0);
    uVar8 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar8 = *(ulong *)(this + 0xd8);
    }
    if (uVar8 != 0) {
      std::__ndk1::
      __hash_table<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      ::
      __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                ((basic_string *)this_00,(basic_string *)(this + 0xd0));
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


