// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unpinUrl
// Entry Point: 00b05804
// Size: 516 bytes
// Signature: undefined __thiscall unpinUrl(WebResourceManager * this, char * param_1)


/* WebResourceManager::unpinUrl(char const*) */

void __thiscall WebResourceManager::unpinUrl(WebResourceManager *this,char *param_1)

{
  long lVar1;
  __tree_iterator _Var2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  long lVar6;
  void *pvVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  undefined8 local_70;
  size_t local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  sVar4 = strlen(param_1);
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    pvVar7 = (void *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 == 0) goto LAB_00b05898;
  }
  else {
    uVar9 = sVar4 + 0x10 & 0xfffffffffffffff0;
    pvVar7 = operator_new(uVar9);
    local_70 = uVar9 | 1;
    local_68 = sVar4;
    local_60 = pvVar7;
  }
  memcpy(pvVar7,param_1,sVar4);
LAB_00b05898:
  *(undefined *)((long)pvVar7 + sVar4) = 0;
                    /* try { // try from 00b058a0 to 00b058a7 has its CatchHandler @ 00b05a08 */
  _Var2 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,WebResourceManager::Image*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,WebResourceManager::Image*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,WebResourceManager::Image*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,WebResourceManager::Image*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,WebResourceManager::Image*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,WebResourceManager::Image*>>>
                      *)(this + 0x88),(basic_string *)&local_70);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (this + 0x90 == (WebResourceManager *)(ulong)_Var2) {
    Mutex::enterCriticalSection();
    lVar6 = *(long *)(this + 0x50);
    lVar10 = *(long *)(this + 0x58);
    if (lVar10 != lVar6) {
      uVar9 = 0;
      do {
        pbVar8 = *(byte **)(lVar6 + uVar9 * 8);
        sVar5 = strlen(param_1);
        sVar4 = (ulong)(*pbVar8 >> 1);
        if ((*pbVar8 & 1) != 0) {
          sVar4 = *(size_t *)(pbVar8 + 8);
        }
        if (sVar5 == sVar4) {
                    /* try { // try from 00b05940 to 00b05953 has its CatchHandler @ 00b05a24 */
          iVar3 = std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  compare((ulong)pbVar8,0,(char *)0xffffffffffffffff,(ulong)param_1);
          if (iVar3 == 0) {
            pbVar8 = *(byte **)(*(long *)(this + 0x50) + uVar9 * 8);
            iVar3 = *(int *)(pbVar8 + 0x34);
            *(int *)(pbVar8 + 0x34) = iVar3 + -1;
            if (iVar3 + -1 == 0) {
              if ((pbVar8[0x18] & 1) != 0) {
                operator_delete(*(void **)(pbVar8 + 0x28));
              }
              if ((*pbVar8 & 1) != 0) {
                operator_delete(*(void **)(pbVar8 + 0x10));
              }
              operator_delete(pbVar8);
              pvVar7 = (void *)(*(long *)(this + 0x50) + uVar9 * 8);
              sVar4 = *(long *)(this + 0x58) - (long)(void *)((long)pvVar7 + 8);
              if (sVar4 != 0) {
                memmove(pvVar7,(void *)((long)pvVar7 + 8),sVar4);
              }
              *(size_t *)(this + 0x58) = (long)pvVar7 + sVar4;
            }
            break;
          }
          lVar6 = *(long *)(this + 0x50);
          lVar10 = *(long *)(this + 0x58);
        }
        uVar9 = (ulong)((int)uVar9 + 1);
      } while (uVar9 < (ulong)(lVar10 - lVar6 >> 3));
    }
    Mutex::leaveCriticalSection();
  }
  else {
    lVar6 = *(long *)((WebResourceManager *)(ulong)_Var2 + 0x38);
    *(int *)(lVar6 + 0x34) = *(int *)(lVar6 + 0x34) + -1;
    update();
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


