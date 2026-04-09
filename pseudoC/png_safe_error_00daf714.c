// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_safe_error
// Entry Point: 00daf714
// Size: 232 bytes
// Signature: undefined png_safe_error(void)


void png_safe_error(long param_1,char *param_2)

{
  long lVar1;
  bool bVar2;
  __jmp_buf_tag *__env;
  long *plVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  plVar3 = *(long **)(param_1 + 0x128);
  if (plVar3 != (long *)0x0) {
    if ((param_2 == (char *)0x0) || (cVar4 = *param_2, cVar4 == '\0')) {
      uVar7 = 0;
    }
    else {
      uVar6 = 0;
      do {
        *(char *)((long)plVar3 + uVar6 + 0x24) = cVar4;
        uVar7 = uVar6 + 1;
        cVar4 = param_2[uVar6 + 1];
        if (cVar4 == '\0') break;
        bVar2 = uVar6 < 0x3e;
        uVar6 = uVar7;
      } while (bVar2);
    }
    *(undefined *)((long)plVar3 + uVar7 + 0x24) = 0;
    *(uint *)(plVar3 + 4) = *(uint *)(plVar3 + 4) | 2;
    if ((*plVar3 != 0) &&
       (__env = *(__jmp_buf_tag **)(*plVar3 + 0x10), __env != (__jmp_buf_tag *)0x0)) {
                    /* WARNING: Subroutine does not return */
      longjmp(__env,1);
    }
    *(undefined4 *)((long)plVar3 + 0x2c) = 0x3a706d6a;
    *(undefined8 *)((long)plVar3 + 0x24) = 0x676e6f6c20646162;
    *(undefined2 *)(plVar3 + 6) = 0x20;
    if ((param_2 == (char *)0x0) || (cVar4 = *param_2, cVar4 == '\0')) {
      lVar5 = 0xd;
    }
    else {
      lVar1 = 0;
      do {
        lVar5 = lVar1;
        *(char *)((long)plVar3 + lVar5 + 0x31) = cVar4;
        cVar4 = param_2[lVar5 + 1];
        if (cVar4 == '\0') break;
        lVar1 = lVar5 + 1;
      } while (lVar5 + 0xdU < 0x3e);
      lVar5 = lVar5 + 0xe;
    }
    *(undefined *)((long)plVar3 + lVar5 + 0x24) = 0;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


