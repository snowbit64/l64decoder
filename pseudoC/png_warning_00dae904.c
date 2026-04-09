// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_warning
// Entry Point: 00dae904
// Size: 388 bytes
// Signature: undefined png_warning(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong png_warning(long param_1,char *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_1 != 0) {
    if (*param_2 == '#') {
      if (param_2[1] == ' ') {
        lVar3 = 1;
      }
      else if (param_2[2] == ' ') {
        lVar3 = 2;
      }
      else if (param_2[3] == ' ') {
        lVar3 = 3;
      }
      else if (param_2[4] == ' ') {
        lVar3 = 4;
      }
      else if (param_2[5] == ' ') {
        lVar3 = 5;
      }
      else if (param_2[6] == ' ') {
        lVar3 = 6;
      }
      else if (param_2[7] == ' ') {
        lVar3 = 7;
      }
      else if (param_2[8] == ' ') {
        lVar3 = 8;
      }
      else if (param_2[9] == ' ') {
        lVar3 = 9;
      }
      else if (param_2[10] == ' ') {
        lVar3 = 10;
      }
      else if (param_2[0xb] == ' ') {
        lVar3 = 0xb;
      }
      else if (param_2[0xc] == ' ') {
        lVar3 = 0xc;
      }
      else if (param_2[0xd] == ' ') {
        lVar3 = 0xd;
      }
      else {
        lVar3 = 0xe;
        if (param_2[0xe] != ' ') {
          lVar3 = 0xf;
        }
      }
    }
    else {
      lVar3 = 0;
    }
    if (*(code **)(param_1 + 0x120) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00dae954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(param_1 + 0x120))(param_1,param_2 + lVar3);
      return uVar2;
    }
  }
  fprintf(_stderr,"libpng warning: %s");
  uVar1 = fputc(10,_stderr);
  return (ulong)uVar1;
}


