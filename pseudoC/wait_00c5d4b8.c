// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: wait
// Entry Point: 00c5d4b8
// Size: 288 bytes
// Signature: undefined __thiscall wait(Event * this, uint param_1)


/* Event::wait(unsigned int) */

void __thiscall Event::wait(Event *this,uint param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  timespec local_58;
  timeval local_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pthread_mutex_lock((pthread_mutex_t *)this);
  if (param_1 == 0xffffffff) {
    if (this[0x58] == (Event)0x0) {
      do {
        pthread_cond_wait((pthread_cond_t *)(this + 0x28),(pthread_mutex_t *)this);
      } while (this[0x58] == (Event)0x0);
    }
  }
  else if ((param_1 != 0) && (this[0x58] == (Event)0x0)) {
    gettimeofday(&local_48,(__timezone_ptr_t)0x0);
    puVar4 = (undefined *)(local_48.tv_usec + (ulong)(param_1 * 1000));
    if (1000000 < (long)puVar4) {
      puVar1 = puVar4;
      if (1999999 < (long)puVar4) {
        puVar1 = &UNK_001e8480;
      }
      local_48.tv_sec = local_48.tv_sec + (ulong)(puVar4 + ~(ulong)puVar1 + 1000000) / 1000000 + 1;
      puVar4 = puVar4 + ((ulong)(puVar4 + ~(ulong)puVar1 + 1000000) / 1000000) * -1000000 + -1000000
      ;
    }
    local_58.tv_nsec = (long)puVar4 * 1000;
    local_58.tv_sec = local_48.tv_sec;
    pthread_cond_timedwait((pthread_cond_t *)(this + 0x28),(pthread_mutex_t *)this,&local_58);
  }
  if (this[0x59] == (Event)0x0) {
    this[0x58] = (Event)0x0;
  }
  iVar3 = pthread_mutex_unlock((pthread_mutex_t *)this);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
  }
  return;
}


