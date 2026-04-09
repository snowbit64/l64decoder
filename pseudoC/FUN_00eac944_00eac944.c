// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00eac944
// Entry Point: 00eac944
// Size: 96 bytes
// Signature: undefined FUN_00eac944(void)


undefined8 FUN_00eac944(__thread_struct **param_1)

{
  pthread_key_t *ppVar1;
  __thread_struct *p_Var2;
  
  ppVar1 = (pthread_key_t *)std::__ndk1::__thread_local_data();
  p_Var2 = *param_1;
  *param_1 = (__thread_struct *)0x0;
  pthread_setspecific(*ppVar1,p_Var2);
  simplejobsystem::SimpleJobThread::runThread();
  p_Var2 = *param_1;
  *param_1 = (__thread_struct *)0x0;
  if (p_Var2 != (__thread_struct *)0x0) {
    std::__ndk1::__thread_struct::~__thread_struct(p_Var2);
    operator_delete(p_Var2);
  }
  operator_delete(param_1);
  return 0;
}


