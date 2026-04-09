// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createProgramAsync
// Entry Point: 00bf0dcc
// Size: 728 bytes
// Signature: undefined __thiscall createProgramAsync(ShaderManager * this, uint param_1, uchar * param_2, uint param_3, char * param_4, map * param_5, char * param_6)


/* ShaderManager::createProgramAsync(unsigned int, unsigned char const*, unsigned int, char const*,
   std::__ndk1::map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, ShaderStructLayout,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, ShaderStructLayout> > >
   const&, char const*) */

uint __thiscall
ShaderManager::createProgramAsync
          (ShaderManager *this,uint param_1,uchar *param_2,uint param_3,char *param_4,map *param_5,
          char *param_6)

{
  long lVar1;
  uint uVar2;
  CompiledShaderArchive *this_00;
  ulong uVar3;
  IProgramObject **ppIVar4;
  IProgramObject *pIVar5;
  long *plVar6;
  IProgramObject **this_01;
  IProgramObject **local_a0;
  IProgramObject *local_98;
  bool local_90 [4];
  bool local_8c [4];
  bool local_88 [4];
  bool local_84 [4];
  IProgramObject *local_80;
  IProgramObject *local_78;
  IProgramObject *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this_00 = *(CompiledShaderArchive **)this;
  if (this_00 == (CompiledShaderArchive *)0x0) {
    uVar2 = 0;
    goto LAB_00bf106c;
  }
  plVar6 = *(long **)(this + 0x10);
  uVar2 = 0;
  if ((plVar6 == (long *)0x0) || (this[0x24] != (ShaderManager)0x0)) goto LAB_00bf106c;
  if (*(long *)(this + 0x130) == *(long *)(this + 0x128)) {
LAB_00bf0fe8:
    uVar3 = CompiledShaderArchive::getProgram
                      (this_00,param_1,param_2,&local_78,(uint *)&local_98,
                       (ShaderStructLayout **)&local_80,(ulonglong *)&local_70);
    if (((uVar3 & 1) != 0) && (local_70 != (IProgramObject *)0x0)) {
      *(IProgramObject **)(this + 0x1a8) = local_70 + *(long *)(this + 0x1a8);
      *(int *)(this + 0x1b0) = *(int *)(this + 0x1b0) + 1;
    }
    if ((uVar3 & 1) == 0) {
LAB_00bf1034:
      uVar2 = createProgram(this,param_1,param_2,param_3,param_4,param_5,&local_78,(uint *)&local_98
                            ,(ShaderStructLayout **)&local_80,(uint *)&local_70,param_6);
      goto LAB_00bf106c;
    }
  }
  else {
    uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6);
    if ((uVar3 & 1) == 0) {
      this_00 = *(CompiledShaderArchive **)this;
      if (this_00 != (CompiledShaderArchive *)0x0) goto LAB_00bf0fe8;
      goto LAB_00bf1034;
    }
    local_84[0] = false;
    local_70 = (IProgramObject *)0x0;
    uVar3 = CompiledShaderArchive::getOrAddProgramIdEntry
                      (*(CompiledShaderArchive **)this,param_1,param_2,local_84,
                       (__map_iterator *)&local_70);
    uVar2 = 0;
    if ((uVar3 & 1) == 0) goto LAB_00bf106c;
    if (local_84[0] != false) {
      local_88[0] = false;
      local_78 = (IProgramObject *)0x0;
      uVar3 = CompiledShaderArchive::getOrAddShaderIdEntry
                        (*(CompiledShaderArchive **)this,param_1,param_2,0,local_88,
                         (__map_iterator *)&local_78);
      uVar2 = 0;
      if ((uVar3 & 1) != 0) {
        local_8c[0] = false;
        local_80 = (IProgramObject *)0x0;
        uVar3 = CompiledShaderArchive::getOrAddShaderIdEntry
                          (*(CompiledShaderArchive **)this,param_1,param_2,1,local_8c,
                           (__map_iterator *)&local_80);
        uVar2 = 0;
        if ((uVar3 & 1) != 0) {
          local_90[0] = false;
          local_98 = (IProgramObject *)0x0;
          uVar2 = CompiledShaderArchive::getOrAddShaderIdEntry
                            (*(CompiledShaderArchive **)this,param_1,param_2,2,local_90,
                             (__map_iterator *)&local_98);
          if ((uVar2 & 1) != 0) {
            Mutex::enterCriticalSection();
            ppIVar4 = (IProgramObject **)operator_new(0x78);
            ppIVar4[9] = (IProgramObject *)0x0;
            ppIVar4[8] = (IProgramObject *)0x0;
            ppIVar4[7] = (IProgramObject *)0x0;
            ppIVar4[6] = (IProgramObject *)0x0;
            ppIVar4[0xb] = (IProgramObject *)0x0;
            ppIVar4[10] = (IProgramObject *)0x0;
            this_01 = ppIVar4 + 7;
            *this_01 = (IProgramObject *)(ppIVar4 + 8);
            ppIVar4[0xc] = (IProgramObject *)0x0;
            ppIVar4[5] = (IProgramObject *)0x0;
            ppIVar4[4] = (IProgramObject *)0x0;
            ppIVar4[0xd] = (IProgramObject *)0x0;
            ppIVar4[0xe] = (IProgramObject *)0x0;
            *ppIVar4 = local_78;
            ppIVar4[1] = local_80;
            ppIVar4[2] = local_98;
            ppIVar4[3] = local_70;
            local_a0 = ppIVar4;
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((char *)(ppIVar4 + 4),(ulong)param_4);
            if (this_01 != (IProgramObject **)param_5) {
              std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
              ::
              __assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,void*>*,long>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
                          *)this_01,(__tree_const_iterator)*(undefined8 *)param_5,(int)param_5 + 8);
            }
            *(uint *)(ppIVar4 + 10) = param_1;
            pIVar5 = (IProgramObject *)operator_new__((ulong)param_1);
            ppIVar4[0xb] = pIVar5;
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((char *)(ppIVar4 + 0xc));
            memcpy(ppIVar4[0xb],param_2,(ulong)param_1);
            std::__ndk1::
            deque<ShaderManager::AsyncCompileRequest*,std::__ndk1::allocator<ShaderManager::AsyncCompileRequest*>>
            ::push_back((deque<ShaderManager::AsyncCompileRequest*,std::__ndk1::allocator<ShaderManager::AsyncCompileRequest*>>
                         *)(this + 0x140),(AsyncCompileRequest **)&local_a0);
            Mutex::leaveCriticalSection();
            Semaphore::post();
          }
        }
      }
      goto LAB_00bf106c;
    }
  }
  uVar2 = 1;
LAB_00bf106c:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


