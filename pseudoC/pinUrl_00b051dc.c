// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pinUrl
// Entry Point: 00b051dc
// Size: 748 bytes
// Signature: undefined __thiscall pinUrl(WebResourceManager * this, char * param_1)


/* WebResourceManager::pinUrl(char const*) */

void __thiscall WebResourceManager::pinUrl(WebResourceManager *this,char *param_1)

{
  uint uVar1;
  long lVar2;
  size_t __n;
  long lVar3;
  __tree_iterator _Var4;
  undefined8 *puVar5;
  void *__dest;
  long lVar6;
  ulong uVar7;
  long *this_00;
  ulong __n_00;
  void *pvVar8;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  update();
  puVar5 = (undefined8 *)strlen(param_1);
  if ((undefined8 *)0xffffffffffffffef < puVar5) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (puVar5 < (undefined8 *)0x17) {
    pvVar8 = (void *)((ulong)&local_70 | 1);
    local_70 = (Image *)CONCAT71(local_70._1_7_,(char)((int)puVar5 << 1));
    if (puVar5 == (undefined8 *)0x0) goto LAB_00b05274;
  }
  else {
    pvVar8 = operator_new((ulong)(puVar5 + 2) & 0xfffffffffffffff0);
    local_70 = (Image *)((ulong)(puVar5 + 2) & 0xfffffffffffffff0 | 1);
    local_68 = puVar5;
    local_60 = pvVar8;
  }
  memcpy(pvVar8,param_1,(size_t)puVar5);
LAB_00b05274:
  *(undefined *)((long)pvVar8 + (long)puVar5) = 0;
                    /* try { // try from 00b0527c to 00b05287 has its CatchHandler @ 00b054c8 */
  _Var4 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,WebResourceManager::Image*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,WebResourceManager::Image*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,WebResourceManager::Image*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,WebResourceManager::Image*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,WebResourceManager::Image*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,WebResourceManager::Image*>>>
                      *)(this + 0x88),(basic_string *)&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (this + 0x90 == (WebResourceManager *)(ulong)_Var4) {
    puVar5 = (undefined8 *)operator_new(0x40);
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    local_78 = puVar5;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)puVar5);
    *(undefined *)(puVar5 + 6) = 0;
    *(undefined8 *)((long)puVar5 + 0x34) = 1;
    local_70 = (Image *)param_1;
    local_68 = puVar5;
    std::__ndk1::
    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,WebResourceManager::Image*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,WebResourceManager::Image*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,WebResourceManager::Image*>>>
    ::__emplace_unique_impl<std::__ndk1::pair<char_const*,WebResourceManager::Image*>>
              ((pair *)(this + 0x88));
    std::__ndk1::
    vector<WebResourceManager::Image*,std::__ndk1::allocator<WebResourceManager::Image*>>::insert
              ((vector<WebResourceManager::Image*,std::__ndk1::allocator<WebResourceManager::Image*>>
                *)(this + 0x70),(__wrap_iter)*(undefined8 *)(this + 0x70),(Image **)&local_78);
    Mutex::enterCriticalSection();
    puVar5 = *(undefined8 **)(this + 0x58);
    if (puVar5 == *(undefined8 **)(this + 0x60)) {
      pvVar8 = *(void **)(this + 0x50);
      __n_00 = (long)puVar5 - (long)pvVar8;
      uVar7 = ((long)__n_00 >> 3) + 1;
      if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar7 <= (ulong)((long)__n_00 >> 2)) {
        uVar7 = (long)__n_00 >> 2;
      }
      if (0x7ffffffffffffff7 < __n_00) {
        uVar7 = 0x1fffffffffffffff;
      }
      if (uVar7 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest = operator_new(uVar7 << 3);
      }
      puVar5 = (undefined8 *)((long)__dest + ((long)__n_00 >> 3) * 8);
      *puVar5 = local_78;
      if (0 < (long)__n_00) {
        memcpy(__dest,pvVar8,__n_00);
      }
      *(void **)(this + 0x50) = __dest;
      *(undefined8 **)(this + 0x58) = puVar5 + 1;
      *(void **)(this + 0x60) = (void *)((long)__dest + uVar7 * 8);
      if (pvVar8 != (void *)0x0) {
        operator_delete(pvVar8);
      }
    }
    else {
      *puVar5 = local_78;
      *(undefined8 **)(this + 0x58) = puVar5 + 1;
    }
    lVar6 = *(long *)this;
    lVar2 = *(long *)(this + 8);
    uVar1 = *(uint *)(this + 0x68);
    Mutex::leaveCriticalSection();
    if (((ulong)uVar1 == lVar2 - lVar6 >> 3) && ((ulong)(*(long *)(this + 8) - *(long *)this) < 400)
       ) {
      createThread(this,true);
    }
    Semaphore::post();
  }
  else {
    local_70 = *(Image **)((WebResourceManager *)(ulong)_Var4 + 0x38);
    *(int *)(local_70 + 0x34) = *(int *)(local_70 + 0x34) + 1;
    this_00 = (long *)(this + 0x70);
    lVar6 = *this_00;
    lVar2 = *(long *)(this + 0x78) - lVar6;
    if (lVar2 != 0) {
      uVar7 = 0;
      do {
        if (*(Image **)(lVar6 + uVar7 * 8) == local_70) {
          pvVar8 = (void *)(lVar6 + uVar7 * 8);
          __n = *(long *)(this + 0x78) - (long)(void *)((long)pvVar8 + 8);
          if (__n != 0) {
            memmove(pvVar8,(void *)((long)pvVar8 + 8),__n);
            lVar6 = *this_00;
          }
          *(size_t *)(this + 0x78) = (long)pvVar8 + __n;
          std::__ndk1::
          vector<WebResourceManager::Image*,std::__ndk1::allocator<WebResourceManager::Image*>>::
          insert((vector<WebResourceManager::Image*,std::__ndk1::allocator<WebResourceManager::Image*>>
                  *)this_00,(__wrap_iter)lVar6,(Image **)&local_70);
          break;
        }
        uVar7 = (ulong)((int)uVar7 + 1);
      } while (uVar7 < (ulong)(lVar2 >> 3));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


