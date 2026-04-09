// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ScriptingTimerListener
// Entry Point: 00795a54
// Size: 224 bytes
// Signature: undefined __thiscall ScriptingTimerListener(ScriptingTimerListener * this, char * param_1, void * param_2, float param_3)


/* ScriptingTimerListener::ScriptingTimerListener(char const*, void*, float) */

void __thiscall
ScriptingTimerListener::ScriptingTimerListener
          (ScriptingTimerListener *this,char *param_1,void *param_2,float param_3)

{
  size_t __n;
  TimerManager *this_00;
  ScriptingTimerListener *__dest;
  ulong uVar1;
  
  *(undefined ***)this = &PTR_timerCallback_00fdb878;
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = this + 0x11;
    this[0x10] = SUB41((int)__n << 1,0);
    if (__n == 0) goto LAB_00795af4;
  }
  else {
    uVar1 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (ScriptingTimerListener *)operator_new(uVar1);
    *(size_t *)(this + 0x18) = __n;
    *(ScriptingTimerListener **)(this + 0x20) = __dest;
    *(ulong *)(this + 0x10) = uVar1 | 1;
  }
  memcpy(__dest,param_1,__n);
LAB_00795af4:
  __dest[__n] = (ScriptingTimerListener)0x0;
  *(void **)(this + 0x28) = param_2;
  *(float *)(this + 8) = param_3;
                    /* try { // try from 00795b00 to 00795b0f has its CatchHandler @ 00795b34 */
  this_00 = (TimerManager *)TimerManager::getInstance();
  TimerManager::addTimer(this_00,param_3,(TimerListener *)this);
  return;
}


