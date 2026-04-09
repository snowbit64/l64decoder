// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startCV
// Entry Point: 00941820
// Size: 164 bytes
// Signature: undefined __cdecl startCV(void * param_1, char * param_2, char * * param_3)


/* I3DShapePoolFactory::startCV(void*, char const*, char const**) */

void I3DShapePoolFactory::startCV(void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  float local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pcVar2 = (char *)ExpatUtil::getAttr("c",param_3);
  if (pcVar2 != (char *)0x0) {
    lVar3 = StringUtil::atof(pcVar2,(float *)&local_48);
    lVar3 = StringUtil::atof((char *)(lVar3 + 1),(float *)((ulong)&local_48 | 4));
    StringUtil::atof((char *)(lVar3 + 1),local_40);
    local_58 = local_48;
    local_50 = local_40[0];
    FUN_009418f8(*(long *)((long)param_1 + 0x270) + 0x28,&local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


