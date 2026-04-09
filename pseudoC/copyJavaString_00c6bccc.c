// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copyJavaString
// Entry Point: 00c6bccc
// Size: 384 bytes
// Signature: undefined __thiscall copyJavaString(AndroidJNICall * this, _JNIEnv * param_1, char * param_2, uint * param_3, _jstring * param_4)


/* AndroidJNICall::copyJavaString(_JNIEnv*, char*, unsigned int&, _jstring*) */

void __thiscall
AndroidJNICall::copyJavaString
          (AndroidJNICall *this,_JNIEnv *param_1,char *param_2,uint *param_3,_jstring *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char *__s;
  size_t sVar4;
  ulong __n;
  
  uVar1 = *param_3;
  __n = (ulong)uVar1;
  *param_3 = 0;
  if (param_4 != (_jstring *)0x0) {
    __s = (char *)(**(code **)(*(long *)param_1 + 0x548))(param_1,param_4,0);
    if (__s == (char *)0x0) {
      memset(param_2,0,__n);
    }
    else {
      sVar4 = strlen(__s);
      if (__n < sVar4) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0
           )) {
                    /* try { // try from 00c6be14 to 00c6be1f has its CatchHandler @ 00c6be4c */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "callString(): overly long string \'%s\' returned, maximum allowed size %d\n"
                          ,__s,__n);
      }
      sVar4 = strlen(__s);
      uVar2 = uVar1;
      if (sVar4 < __n) {
        sVar4 = strlen(__s);
        uVar2 = (uint)sVar4;
      }
      *param_3 = uVar2;
      strncpy(param_2,__s,__n);
      param_2[uVar1 - 1] = '\0';
    }
    (**(code **)(*(long *)param_1 + 0x550))(param_1,param_4,__s);
                    /* WARNING: Could not recover jumptable at 0x00c6be00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0xb8))(param_1,param_4);
    return;
  }
  memset(param_2,0,__n);
  return;
}


