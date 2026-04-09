// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processContext
// Entry Point: 00b8eab0
// Size: 176 bytes
// Signature: undefined processContext(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Preprocessor::processContext() */

undefined8 Preprocessor::processContext(void)

{
  long in_x0;
  undefined8 uVar1;
  long *plVar2;
  char **ppcVar3;
  
  plVar2 = *(long **)(in_x0 + 0x38);
  if ((plVar2 == (long *)0x0) || (*plVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    while ((*(byte *)((long)plVar2 + 0x4c) | *(byte *)(in_x0 + 0x131)) == 0) {
      parseText();
      plVar2 = *(long **)(in_x0 + 0x38);
    }
    if (*(byte *)(in_x0 + 0x131) == 0) {
      uVar1 = 1;
    }
    else {
      ppcVar3 = (char **)plVar2[0xf];
      if (*ppcVar3 != (char *)0x0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(*ppcVar3,0x4e63ec);
      }
      plVar2 = (long *)ppcVar3[1];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x30))(plVar2,"Preprocessor failed, check log",0x1e);
      }
      uVar1 = 0;
      *(undefined *)((long)ppcVar3 + 0x2e) = 0;
    }
  }
  return uVar1;
}


