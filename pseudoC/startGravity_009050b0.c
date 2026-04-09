// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startGravity
// Entry Point: 009050b0
// Size: 144 bytes
// Signature: undefined __cdecl startGravity(void * param_1, char * param_2, char * * param_3)


/* I3DDynamicsPoolFactory::startGravity(void*, char const*, char const**) */

void I3DDynamicsPoolFactory::startGravity(void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  undefined8 local_38;
  float local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)((long)param_1 + 0x290);
  pcVar3 = (char *)ExpatUtil::getAttr("force",param_3);
  if ((pcVar3 != (char *)0x0) &&
     (iVar2 = StringUtil::splitIntoFloats(pcVar3,(float *)&local_38,3,' '), iVar2 == 3)) {
    *(ulong *)(lVar4 + 0x30) =
         CONCAT44((float)((ulong)local_38 >> 0x20) +
                  (float)((ulong)*(undefined8 *)(lVar4 + 0x30) >> 0x20),
                  (float)local_38 + (float)*(undefined8 *)(lVar4 + 0x30));
    *(float *)(lVar4 + 0x38) = local_30 + *(float *)(lVar4 + 0x38);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


