// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createThread
// Entry Point: 00e43fdc
// Size: 108 bytes
// Signature: undefined __cdecl createThread(_func_void_void_ptr * param_1, void * param_2)


/* SoLoud::Thread::createThread(void (*)(void*), void*) */

pthread_t * SoLoud::Thread::createThread(_func_void_void_ptr *param_1,void *param_2)

{
  _func_void_void_ptr **__arg;
  pthread_t *__newthread;
  
  __arg = (_func_void_void_ptr **)operator_new(0x10);
  *__arg = param_1;
  __arg[1] = (_func_void_void_ptr *)param_2;
  __newthread = (pthread_t *)operator_new(8);
  pthread_create(__newthread,(pthread_attr_t *)0x0,FUN_00e44048,__arg);
  pthread_setname_np(*__newthread,"soloud");
  return __newthread;
}


