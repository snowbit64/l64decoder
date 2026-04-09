// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_error
// Entry Point: 00dae6e8
// Size: 56 bytes
// Signature: noreturn undefined png_error(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * png_error(long param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  undefined auVar4 [16];
  
  if ((param_1 != 0) && (*(code **)(param_1 + 0x118) != (code *)0x0)) {
    (**(code **)(param_1 + 0x118))(param_1,param_2);
  }
  auVar4 = FUN_00dae720(param_1,param_2);
  pcVar3 = "undefined";
  if (auVar4._8_8_ != (char *)0x0) {
    pcVar3 = auVar4._8_8_;
  }
  fprintf(_stderr,"libpng error: %s");
  fputc(10,_stderr);
  auVar4 = png_longjmp(auVar4._0_8_,1);
  lVar2 = auVar4._0_8_;
  if ((lVar2 != 0) && (pcVar3 < auVar4._8_8_)) {
    if ((param_4 != (char *)0x0) && (cVar1 = *param_4, cVar1 != '\0')) {
      do {
        if (auVar4._8_8_ + -1 <= pcVar3) break;
        param_4 = param_4 + 1;
        pcVar3[lVar2] = cVar1;
        pcVar3 = pcVar3 + 1;
        cVar1 = *param_4;
      } while (cVar1 != '\0');
    }
    pcVar3[lVar2] = '\0';
  }
  return pcVar3;
}


