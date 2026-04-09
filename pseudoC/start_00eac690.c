// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: start
// Entry Point: 00eac690
// Size: 300 bytes
// Signature: undefined __thiscall start(SimpleJobThread * this, FindJobs * param_1, IUserTaskRunner * param_2)


/* simplejobsystem::SimpleJobThread::start(simplejobsystem::FindJobs*,
   VHACD::IVHACD::IUserTaskRunner*) */

void __thiscall
simplejobsystem::SimpleJobThread::start
          (SimpleJobThread *this,FindJobs *param_1,IUserTaskRunner *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  pthread_t *__newthread;
  __thread_struct *this_00;
  __thread_struct **__arg;
  long lVar4;
  undefined **local_70;
  SimpleJobThread *pSStack_68;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(IUserTaskRunner **)(this + 0x78) = param_2;
  *(FindJobs **)this = param_1;
  if (param_2 == (IUserTaskRunner *)0x0) {
    if (*(long *)(this + 0x18) == 0) {
      __newthread = (pthread_t *)operator_new(8);
      this_00 = (__thread_struct *)operator_new(8);
      std::__ndk1::__thread_struct::__thread_struct(this_00);
      __arg = (__thread_struct **)operator_new(0x10);
      *__arg = this_00;
      __arg[1] = (__thread_struct *)this;
      iVar2 = pthread_create(__newthread,(pthread_attr_t *)0x0,FUN_00eac944,__arg);
      if (iVar2 != 0) {
        std::__ndk1::__throw_system_error(iVar2,"thread constructor failed");
        goto LAB_00eac7b8;
      }
      *(pthread_t **)(this + 0x18) = __newthread;
    }
  }
  else if (*(long *)(this + 0x10) == 0) {
    *(undefined4 *)(this + 8) = 0;
    local_70 = &PTR_FUN_01014478;
    pSStack_68 = this;
    local_50 = &local_70;
    uVar3 = (**(code **)(**(long **)(this + 0x78) + 0x10))(*(long **)(this + 0x78),&local_70);
    *(undefined8 *)(this + 0x10) = uVar3;
    if (&local_70 == local_50) {
      lVar4 = 4;
    }
    else {
      if (local_50 == (undefined ***)0x0) goto LAB_00eac780;
      lVar4 = 5;
    }
    (**(code **)((long)*local_50 + lVar4 * 8))(local_50);
  }
LAB_00eac780:
  std::__ndk1::condition_variable::notify_all();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_00eac7b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


