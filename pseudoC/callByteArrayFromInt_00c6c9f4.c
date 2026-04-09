// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callByteArrayFromInt
// Entry Point: 00c6c9f4
// Size: 488 bytes
// Signature: undefined __thiscall callByteArrayFromInt(AndroidJNICall * this, char * param_1, uchar * param_2, uint * param_3, uint param_4)


/* AndroidJNICall::callByteArrayFromInt(char const*, unsigned char*, unsigned int&, unsigned int) */

bool __thiscall
AndroidJNICall::callByteArrayFromInt
          (AndroidJNICall *this,char *param_1,uchar *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  Logger *this_00;
  long lVar8;
  
  plVar5 = (long *)getEnv();
  uVar1 = *param_3;
  lVar6 = (**(code **)(*plVar5 + 0x108))(plVar5,*(undefined8 *)(this + 0x50),param_1,"([B[II)Z");
  if (lVar6 == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 00c6cb9c to 00c6cba3 has its CatchHandler @ 00c6cbec */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00c6cba8 to 00c6cbab has its CatchHandler @ 00c6cbdc */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "callByteArrayFromInt(): jmethodID for \'%s\' is NULL!\n",param_1);
    bVar2 = false;
  }
  else {
    lVar8 = *(long *)(this + 0x60);
    if (lVar8 == 0) {
      lVar8 = (**(code **)(*plVar5 + 0x580))(plVar5,uVar1);
    }
    uVar7 = (**(code **)(*plVar5 + 0x598))(plVar5,1);
    (**(code **)(*plVar5 + 0x698))(plVar5,uVar7,0,1,param_3);
    cVar3 = _JNIEnv::CallBooleanMethod
                      ((_jobject *)plVar5,*(_jmethodID **)(this + 0x48),lVar6,lVar8,uVar7,
                       (ulong)param_4);
    bVar2 = cVar3 != '\0';
    (**(code **)(*plVar5 + 0x658))(plVar5,uVar7,0,1,param_3);
    if (*param_3 != 0) {
      (**(code **)(*plVar5 + 0x640))(plVar5,lVar8,0,*param_3,param_2);
    }
    if (*(long *)(this + 0x60) == 0) {
      (**(code **)(*plVar5 + 0xb8))(plVar5,lVar8);
    }
    (**(code **)(*plVar5 + 0xb8))(plVar5,uVar7);
  }
  return bVar2;
}


