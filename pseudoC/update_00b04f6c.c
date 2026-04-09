// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00b04f6c
// Size: 624 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WebResourceManager::update() */

void WebResourceManager::update(void)

{
  long **this;
  size_t sVar1;
  __tree_iterator _Var2;
  long *in_x0;
  void *pvVar3;
  long lVar5;
  long **pplVar6;
  long lVar7;
  long **pplVar8;
  long *plVar9;
  Thread *this_00;
  ulong uVar10;
  uint uVar11;
  basic_string *pbVar12;
  ulong uVar13;
  long *plVar4;
  
  Mutex::enterCriticalSection();
  if ((0x4000000 < *(uint *)((long)in_x0 + 0x6c)) || (*(char *)(in_x0 + 0x14) != '\0')) {
    this = (long **)(in_x0 + 0x11);
    while( true ) {
      uVar10 = in_x0[0xf] - in_x0[0xe];
      if ((int)(uVar10 >> 3) < 1) break;
      uVar10 = (uVar10 >> 3 & 0xffffffff) + 1;
      while( true ) {
        uVar13 = (ulong)((int)uVar10 - 2);
        pbVar12 = *(basic_string **)(in_x0[0xe] + uVar13 * 8);
        if ((pbVar12[0xe] == 2) && (pbVar12[0xd] == 0)) break;
        uVar10 = uVar10 - 1;
        if (uVar10 < 2) goto LAB_00b04fb0;
      }
      _Var2 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,WebResourceManager::Image*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,WebResourceManager::Image*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,WebResourceManager::Image*>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,WebResourceManager::Image*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,WebResourceManager::Image*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,WebResourceManager::Image*>>>
                          *)this,pbVar12);
      plVar4 = (long *)(ulong)_Var2;
      if (in_x0 + 0x12 != plVar4) {
        pplVar8 = (long **)plVar4[1];
        if ((long **)plVar4[1] == (long **)0x0) {
          pplVar8 = (long **)(plVar4 + 2);
          pplVar6 = (long **)*pplVar8;
          if (*pplVar6 != plVar4) {
            do {
              plVar9 = *pplVar8;
              pplVar8 = (long **)(plVar9 + 2);
              pplVar6 = (long **)*pplVar8;
            } while (*pplVar6 != plVar9);
          }
        }
        else {
          do {
            pplVar6 = pplVar8;
            pplVar8 = (long **)*pplVar6;
          } while ((long **)*pplVar6 != (long **)0x0);
        }
        if (*this == plVar4) {
          *this = (long *)pplVar6;
        }
        in_x0[0x13] = in_x0[0x13] + -1;
        std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                  ((__tree_node_base *)in_x0[0x12],(__tree_node_base *)plVar4);
        if ((*(byte *)(plVar4 + 4) & 1) != 0) {
          operator_delete((void *)plVar4[6]);
        }
        operator_delete(plVar4);
      }
      pvVar3 = (void *)(in_x0[0xe] + uVar13 * 8);
      sVar1 = in_x0[0xf] - (long)(void *)((long)pvVar3 + 8);
      if (sVar1 != 0) {
        memmove(pvVar3,(void *)((long)pvVar3 + 8),sVar1);
      }
      in_x0[0xf] = (long)pvVar3 + sVar1;
      uVar11 = (uint)(*(byte *)(pbVar12 + 6) >> 1);
      if ((*(byte *)(pbVar12 + 6) & 1) != 0) {
        uVar11 = pbVar12[8];
      }
      *(uint *)((long)in_x0 + 0x6c) = *(int *)((long)in_x0 + 0x6c) - uVar11;
      if ((*(byte *)(pbVar12 + 6) & 1) != 0) {
        operator_delete(*(void **)(pbVar12 + 10));
      }
      if ((*(byte *)pbVar12 & 1) != 0) {
        operator_delete(*(void **)(pbVar12 + 4));
      }
      operator_delete(pbVar12);
      if ((*(uint *)((long)in_x0 + 0x6c) < 0x4000001) && (*(char *)(in_x0 + 0x14) == '\0')) break;
    }
  }
LAB_00b04fb0:
  Mutex::leaveCriticalSection();
  lVar5 = *in_x0;
  lVar7 = in_x0[1];
  *(undefined *)(in_x0 + 0x14) = 0;
  if (lVar7 != lVar5) {
    uVar10 = 0;
    uVar11 = 0;
    do {
      pvVar3 = *(void **)(lVar5 + uVar10 * 8);
      if (*(char *)((long)pvVar3 + 0x10) != '\0') {
        this_00 = *(Thread **)((long)pvVar3 + 8);
        if (this_00 == (Thread *)0x0) {
LAB_00b05024:
          operator_delete(pvVar3);
          lVar5 = *in_x0;
        }
        else {
          Thread::~Thread(this_00);
          operator_delete(this_00);
          lVar5 = *in_x0;
          pvVar3 = *(void **)(lVar5 + uVar10 * 8);
          if (pvVar3 != (void *)0x0) goto LAB_00b05024;
        }
        pvVar3 = (void *)(lVar5 + uVar10 * 8);
        sVar1 = in_x0[1] - (long)(void *)((long)pvVar3 + 8);
        if (sVar1 != 0) {
          memmove(pvVar3,(void *)((long)pvVar3 + 8),sVar1);
          lVar5 = *in_x0;
        }
        lVar7 = (long)pvVar3 + sVar1;
        uVar11 = uVar11 - 1;
        in_x0[1] = lVar7;
      }
      uVar11 = uVar11 + 1;
      uVar10 = (ulong)uVar11;
    } while (uVar10 < (ulong)(lVar7 - lVar5 >> 3));
  }
  return;
}


