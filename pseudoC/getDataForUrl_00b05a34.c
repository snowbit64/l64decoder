// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDataForUrl
// Entry Point: 00b05a34
// Size: 364 bytes
// Signature: undefined __thiscall getDataForUrl(WebResourceManager * this, char * param_1, uint * param_2)


/* WebResourceManager::getDataForUrl(char const*, unsigned int&) */

void __thiscall
WebResourceManager::getDataForUrl(WebResourceManager *this,char *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  __tree_iterator _Var5;
  size_t __n;
  long lVar7;
  long lVar8;
  void *__dest;
  ulong uVar9;
  undefined8 local_70;
  size_t local_68;
  void *local_60;
  long local_58;
  WebResourceManager *pWVar6;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  update();
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00b05ac0;
  }
  else {
    uVar9 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar9);
    local_70 = uVar9 | 1;
    local_68 = __n;
    local_60 = __dest;
LAB_00b05ac0:
    memcpy(__dest,param_1,__n);
  }
  *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 00b05ad8 to 00b05adf has its CatchHandler @ 00b05ba0 */
  _Var5 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,WebResourceManager::Image*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,WebResourceManager::Image*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,WebResourceManager::Image*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,WebResourceManager::Image*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,WebResourceManager::Image*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,WebResourceManager::Image*>>>
                      *)(this + 0x88),(basic_string *)&local_70);
  pWVar6 = (WebResourceManager *)(ulong)_Var5;
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (this + 0x90 != pWVar6) {
    lVar8 = *(long *)(pWVar6 + 0x38);
    Mutex::enterCriticalSection();
    iVar2 = *(int *)(lVar8 + 0x38);
    cVar3 = *(char *)(lVar8 + 0x30);
    Mutex::leaveCriticalSection();
    if ((iVar2 == 2) && (cVar3 != '\0')) {
      lVar8 = *(long *)(pWVar6 + 0x38);
      uVar1 = (uint)(*(byte *)(lVar8 + 0x18) >> 1);
      if ((*(byte *)(lVar8 + 0x18) & 1) != 0) {
        uVar1 = (uint)*(undefined8 *)(lVar8 + 0x20);
      }
      *param_2 = uVar1;
      lVar7 = lVar8 + 0x19;
      if ((*(byte *)(lVar8 + 0x18) & 1) != 0) {
        lVar7 = *(long *)(lVar8 + 0x28);
      }
      goto LAB_00b05b68;
    }
  }
  *param_2 = 0;
  lVar7 = 0;
LAB_00b05b68:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar7);
  }
  return;
}


