// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: start
// Entry Point: 00c655f0
// Size: 248 bytes
// Signature: undefined __thiscall start(Thread * this, _func_void_ptr_void_ptr_bool_ptr * param_1, void * param_2, uint param_3, char * param_4, ThreadPriority param_5, uint param_6)


/* Thread::start(void* (*)(void*, bool volatile&), void*, unsigned int, char const*,
   Thread::ThreadPriority, unsigned int) */

void __thiscall
Thread::start(Thread *this,_func_void_ptr_void_ptr_bool_ptr *param_1,void *param_2,uint param_3,
             char *param_4,ThreadPriority param_5,uint param_6)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  sched_param local_88 [2];
  pthread_attr_t pStack_80;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar1 = 0x100000;
  if (param_6 != 0) {
    uVar1 = param_6 + 0x7ffff & 0xfff80000;
  }
  *(_func_void_ptr_void_ptr_bool_ptr **)this = param_1;
  *(void **)(this + 8) = param_2;
  this[0x10] = (Thread)0x0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x18));
  *(uint *)(this + 0x30) = param_3;
  *(ThreadPriority *)(this + 0x34) = param_5;
  pthread_attr_init(&pStack_80);
  pthread_attr_setstacksize(&pStack_80,(ulong)uVar1);
  if (*(ThreadPriority *)(this + 0x34) != 2) {
    local_88[0].__sched_priority =
         ThreadUtil::convertToNativePriority(*(ThreadPriority *)(this + 0x34));
    pthread_attr_setschedparam(&pStack_80,local_88);
  }
  pthread_create((pthread_t *)(this + 0x38),&pStack_80,ThreadStart,this);
  iVar3 = pthread_attr_destroy(&pStack_80);
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(this + 0x38);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}


