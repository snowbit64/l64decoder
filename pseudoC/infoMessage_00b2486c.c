// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: infoMessage
// Entry Point: 00b2486c
// Size: 344 bytes
// Signature: undefined __thiscall infoMessage(AsyncFileLogSink * this, char * param_1, uint param_2)


/* AsyncFileLogSink::infoMessage(char const*, unsigned int) */

void __thiscall AsyncFileLogSink::infoMessage(AsyncFileLogSink *this,char *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  char acStack_e8 [128];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((param_2 != 0) && (this[0x20] != (AsyncFileLogSink)0x0)) {
    lVar3 = EnvUtil::getTime();
    EnvUtil::formatDateString(lVar3,"%Y-%m-%d %H:%M ",acStack_e8,0x80);
    uVar2 = __strlen_chk(acStack_e8,0x80);
    write(this,acStack_e8,uVar2);
  }
  if (param_2 != 0) {
    uVar2 = 0;
    uVar4 = 0;
    do {
      uVar6 = (ulong)uVar4;
      if (param_1[uVar6] == '\r' || param_1[uVar6] == '\n') {
        if (uVar4 - uVar2 != 0) {
          write(this,param_1 + uVar2,uVar4 - uVar2);
        }
        write(this,"\r\n",2);
        uVar5 = uVar4;
        if (param_1[uVar6] == '\r') {
          uVar2 = (uint)(uVar6 + 1);
          if ((uVar2 < param_2) && (uVar5 = uVar2, param_1[uVar6 + 1] != '\n')) {
            uVar5 = uVar4;
          }
        }
        uVar2 = uVar5 + 1;
        uVar4 = uVar5;
      }
      else if (uVar4 == param_2 - 1) {
        write(this,param_1 + uVar2,param_2 - uVar2);
        uVar4 = param_2 - 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


