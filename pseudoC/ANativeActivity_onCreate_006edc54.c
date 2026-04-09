// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ANativeActivity_onCreate
// Entry Point: 006edc54
// Size: 504 bytes
// Signature: undefined ANativeActivity_onCreate(void)


void ANativeActivity_onCreate(undefined8 *param_1,void *param_2,size_t param_3)

{
  pthread_mutex_t *__mutex;
  long lVar1;
  int iVar2;
  uint uVar3;
  void *__arg;
  void *__dest;
  int *piVar4;
  char *pcVar5;
  ulong uVar6;
  code **ppcVar7;
  undefined8 local_98;
  pthread_attr_t pStack_90;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  ppcVar7 = (code **)*param_1;
  ppcVar7[0xc] = FUN_006ee094;
  ppcVar7[0xd] = FUN_006eded8;
  ppcVar7[0xe] = FUN_006ede4c;
  ppcVar7[0xf] = FUN_006ee0a0;
  ppcVar7[10] = FUN_006ee134;
  ppcVar7[0xb] = FUN_006ee08c;
  ppcVar7[8] = FUN_006ee1cc;
  ppcVar7[9] = FUN_006ee140;
  ppcVar7[2] = FUN_006ee270;
  ppcVar7[3] = FUN_006ee258;
  *ppcVar7 = FUN_006ee364;
  ppcVar7[1] = FUN_006ee264;
  ppcVar7[4] = FUN_006ee370;
  ppcVar7[5] = FUN_006edf9c;
  ppcVar7[6] = FUN_006ee37c;
  ppcVar7[7] = FUN_006ee12c;
  __arg = calloc(1,0x130);
  __mutex = (pthread_mutex_t *)((long)__arg + 0x68);
  *(undefined8 **)((long)__arg + 0x18) = param_1;
  pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
  pthread_cond_init((pthread_cond_t *)((long)__arg + 0x90),(pthread_condattr_t *)0x0);
  if (param_2 != (void *)0x0) {
    __dest = malloc(param_3);
    *(void **)((long)__arg + 0x28) = __dest;
    *(size_t *)((long)__arg + 0x30) = param_3;
    memcpy(__dest,param_2,param_3);
  }
  iVar2 = pipe((int *)&local_98);
  if (iVar2 == 0) {
    *(undefined8 *)((long)__arg + 0xc0) = local_98;
    pthread_attr_init(&pStack_90);
    pthread_attr_setdetachstate(&pStack_90,1);
    pthread_create((pthread_t *)((long)__arg + 200),&pStack_90,FUN_006ee704,__arg);
    pthread_mutex_lock(__mutex);
    iVar2 = *(int *)((long)__arg + 0x100);
    while (iVar2 == 0) {
      pthread_cond_wait((pthread_cond_t *)((long)__arg + 0x90),__mutex);
      iVar2 = *(int *)((long)__arg + 0x100);
    }
    uVar3 = pthread_mutex_unlock(__mutex);
    uVar6 = (ulong)uVar3;
  }
  else {
    piVar4 = (int *)__errno();
    pcVar5 = strerror(*piVar4);
    uVar6 = __android_log_print(6,"threaded_app","could not create pipe: %s",pcVar5);
    __arg = (void *)0x0;
  }
  param_1[7] = __arg;
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


