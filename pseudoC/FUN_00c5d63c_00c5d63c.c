// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00c5d63c
// Entry Point: 00c5d63c
// Size: 72 bytes
// Signature: undefined FUN_00c5d63c(void)


void FUN_00c5d63c(void)

{
  void *pvVar1;
  long lVar2;
  
  lVar2 = 0x240;
  do {
    pvVar1 = *(void **)(&LanguageUtil::s_timeFormatLoaded + lVar2);
    if (pvVar1 != (void *)0x0) {
      *(void **)(&LanguageUtil::s_systemPropertiesLoaded + lVar2) = pvVar1;
      operator_delete(pvVar1);
    }
    lVar2 = lVar2 + -0x18;
  } while (lVar2 != 0);
  return;
}


