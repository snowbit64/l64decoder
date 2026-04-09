// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00dae720
// Entry Point: 00dae720
// Size: 80 bytes
// Signature: undefined FUN_00dae720(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_00dae720(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  undefined auVar4 [16];
  
  pcVar3 = "undefined";
  if (param_2 != (char *)0x0) {
    pcVar3 = param_2;
  }
  fprintf(_stderr,"libpng error: %s");
  fputc(10,_stderr);
  auVar4 = png_longjmp(param_1,1);
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


