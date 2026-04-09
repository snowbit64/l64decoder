// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f299dc
// Entry Point: 00f299dc
// Size: 788 bytes
// Signature: undefined FUN_00f299dc(void)


long ** FUN_00f299dc(undefined8 param_1,long *param_2,long **param_3,uint param_4,long param_5)

{
  byte bVar1;
  long **pplVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long **pplVar6;
  long **pplVar7;
  
  pplVar7 = (long **)*param_2;
  switch(param_4 & 0xf) {
  case 0:
  case 4:
  case 0xc:
    pplVar2 = (long **)*pplVar7;
    *param_2 = (long)(pplVar7 + 1);
    break;
  case 1:
    pplVar2 = (long **)FUN_00f29cf0(param_2,param_3);
    break;
  case 2:
    pplVar2 = (long **)(ulong)*(ushort *)pplVar7;
    *param_2 = (long)pplVar7 + 2;
    break;
  case 3:
    pplVar2 = (long **)(ulong)*(uint *)pplVar7;
    *param_2 = (long)pplVar7 + 4;
    break;
  default:
    fprintf((FILE *)0x2249f40,"libunwind: %s - %s\n","getEncodedP","unknown pointer encoding");
    fflush((FILE *)0x2249f40);
                    /* WARNING: Subroutine does not return */
    abort();
  case 9:
    uVar4 = 0;
    uVar3 = 0;
    pplVar2 = pplVar7;
    pplVar6 = pplVar7;
    do {
      if (pplVar6 == param_3) {
        fprintf((FILE *)0x2249f40,"libunwind: %s - %s\n","getSLEB128","truncated sleb128 expression"
               );
        fflush((FILE *)0x2249f40);
                    /* WARNING: Subroutine does not return */
        abort();
      }
      bVar1 = *(byte *)pplVar6;
      pplVar2 = (long **)((long)pplVar2 + 1);
      uVar5 = uVar4 & 0x3f;
      uVar4 = uVar4 + 7;
      uVar3 = ((ulong)bVar1 & 0x7f) << uVar5 | uVar3;
      pplVar6 = (long **)((long)pplVar6 + 1);
    } while ((char)bVar1 < '\0');
    uVar5 = -1L << (uVar4 & 0x3f);
    *param_2 = (long)pplVar2;
    if (((int)uVar4 - 7U < 0x39 & bVar1 >> 6) == 0) {
      uVar5 = 0;
    }
    pplVar2 = (long **)(uVar3 | uVar5);
    break;
  case 10:
    pplVar2 = (long **)(long)*(short *)pplVar7;
    *param_2 = (long)pplVar7 + 2;
    break;
  case 0xb:
    pplVar2 = (long **)(long)*(int *)pplVar7;
    *param_2 = (long)pplVar7 + 4;
  }
  param_4 = param_4 & 0xff;
  switch(param_4 >> 4 & 7) {
  case 0:
    goto code_r0x00f29b28;
  case 1:
    pplVar2 = (long **)((long)pplVar2 + (long)pplVar7);
code_r0x00f29b28:
    if (param_4 >> 7 != 0) {
LAB_00f29b2c:
      pplVar2 = (long **)*pplVar2;
    }
    return pplVar2;
  case 2:
    fprintf((FILE *)0x2249f40,"libunwind: %s - %s\n","getEncodedP",
            "DW_EH_PE_textrel pointer encoding not supported");
    fflush((FILE *)0x2249f40);
                    /* WARNING: Subroutine does not return */
    abort();
  case 3:
    if (param_5 == 0) {
      fprintf((FILE *)0x2249f40,"libunwind: %s - %s\n","getEncodedP",
              "DW_EH_PE_datarel is invalid with a datarelBase of 0");
      fflush((FILE *)0x2249f40);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pplVar2 = (long **)((long)pplVar2 + param_5);
    if (param_4 >> 7 == 0) {
      return pplVar2;
    }
    goto LAB_00f29b2c;
  case 4:
    fprintf((FILE *)0x2249f40,"libunwind: %s - %s\n","getEncodedP",
            "DW_EH_PE_funcrel pointer encoding not supported");
    fflush((FILE *)0x2249f40);
                    /* WARNING: Subroutine does not return */
    abort();
  case 5:
    fprintf((FILE *)0x2249f40,"libunwind: %s - %s\n","getEncodedP",
            "DW_EH_PE_aligned pointer encoding not supported");
    fflush((FILE *)0x2249f40);
                    /* WARNING: Subroutine does not return */
    abort();
  default:
    fprintf((FILE *)0x2249f40,"libunwind: %s - %s\n","getEncodedP","unknown pointer encoding");
    fflush((FILE *)0x2249f40);
                    /* WARNING: Subroutine does not return */
    abort();
  }
}


