// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadSystemProperties
// Entry Point: 00c5dba0
// Size: 380 bytes
// Signature: undefined loadSystemProperties(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LanguageUtil::loadSystemProperties() */

void LanguageUtil::loadSystemProperties(void)

{
  long lVar1;
  AndroidJNICall *this;
  long lVar2;
  uint local_a0;
  uint local_9c;
  char local_98 [32];
  char acStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  s_systemLanguageType = 0;
  s_systemDateFormat = 1;
  s_systemTimeFormat = 1;
  local_a0 = 0x20;
  local_9c = 0x40;
  this = (AndroidJNICall *)operator_new(0x78);
                    /* try { // try from 00c5dc00 to 00c5dc07 has its CatchHandler @ 00c5dd1c */
  AndroidJNICall::AndroidJNICall(this,0);
  AndroidJNICall::callString(this,"getBCP47LanguageTag",acStack_78,&local_9c);
  AndroidJNICall::callString(this,"getDateTimePattern",local_98,&local_a0);
  AndroidJNICall::~AndroidJNICall(this);
  operator_delete(this);
  if (local_9c != 0) {
    parseBCP47LanguageTag
              (acStack_78,&s_systemLanguageType,(DATE_FORMAT *)&s_systemDateFormat,
               (TIME_FORMAT *)&s_systemTimeFormat);
  }
  if (local_a0 != 0) {
    if (local_98[0] == 'y') {
      s_systemDateFormat = 2;
    }
    else if (local_98[0] == 'd') {
      s_systemDateFormat = 0;
    }
    else if (local_98[0] == 'M') {
      s_systemDateFormat = 1;
    }
    lVar2 = __strchr_chk(local_98,0x48,0x20);
    if (lVar2 == 0) {
      lVar2 = __strchr_chk(local_98,0x68,0x20);
      if (lVar2 != 0) {
        s_systemTimeFormat = 1;
      }
    }
    else {
      s_systemTimeFormat = 0;
    }
  }
  s_systemPropertiesLoaded = 1;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


