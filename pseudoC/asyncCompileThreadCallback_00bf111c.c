// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: asyncCompileThreadCallback
// Entry Point: 00bf111c
// Size: 324 bytes
// Signature: undefined __thiscall asyncCompileThreadCallback(ShaderManager * this, bool * param_1)


/* ShaderManager::asyncCompileThreadCallback(bool volatile&) */

void __thiscall ShaderManager::asyncCompileThreadCallback(ShaderManager *this,bool *param_1)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  
  cVar1 = *param_1;
  do {
    if (cVar1 != '\0') {
      return;
    }
    Semaphore::wait();
    while( true ) {
      if (*param_1 != false) {
        return;
      }
      Mutex::enterCriticalSection();
      if (*(long *)(this + 0x168) == 0) break;
      uVar2 = *(ulong *)(this + 0x160);
      lVar3 = *(long *)((long)*(void ***)(this + 0x148) + (uVar2 >> 6 & 0x3fffffffffffff8));
      *(ulong *)(this + 0x160) = uVar2 + 1;
      *(long *)(this + 0x168) = *(long *)(this + 0x168) + -1;
      pvVar4 = *(void **)(lVar3 + (uVar2 & 0x1ff) * 8);
      if (0x3ff < uVar2 + 1) {
        operator_delete(**(void ***)(this + 0x148));
        *(long *)(this + 0x148) = *(long *)(this + 0x148) + 8;
        *(long *)(this + 0x160) = *(long *)(this + 0x160) + -0x200;
      }
      FUN_00f27700(1,this + 0x170);
      Mutex::leaveCriticalSection();
      asyncCompileProcessRequest((AsyncCompileRequest *)this);
      if (*(void **)((long)pvVar4 + 0x58) != (void *)0x0) {
        operator_delete__(*(void **)((long)pvVar4 + 0x58));
      }
      if ((*(byte *)((long)pvVar4 + 0x60) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar4 + 0x70));
      }
      std::__ndk1::
      __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
      ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
                 *)((long)pvVar4 + 0x38),*(__tree_node **)((long)pvVar4 + 0x40));
      if ((*(byte *)((long)pvVar4 + 0x20) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar4 + 0x30));
      }
      operator_delete(pvVar4);
      FUN_00f27700(0xffffffff,this + 0x170);
      Event::post();
    }
    Mutex::leaveCriticalSection();
    cVar1 = *param_1;
  } while( true );
}


