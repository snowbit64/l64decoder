// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startUserAttribute
// Entry Point: 00944754
// Size: 132 bytes
// Signature: undefined __cdecl startUserAttribute(void * param_1, char * param_2, char * * param_3)


/* I3DUserAttributesFactory::startUserAttribute(void*, char const*, char const**) */

void I3DUserAttributesFactory::startUserAttribute(void *param_1,char *param_2,char **param_3)

{
  bool bVar1;
  uint uVar2;
  char *__nptr;
  long lVar3;
  long lVar4;
  
  **(undefined8 **)((long)param_1 + 0x298) = 0;
  __nptr = (char *)ExpatUtil::getAttr("nodeId",param_3);
  if (__nptr != (char *)0x0) {
    uVar2 = atoi(__nptr);
    lVar4 = *(long *)((long)param_1 + 0x138);
    if (lVar4 != 0) {
      lVar3 = (long)param_1 + 0x138;
      do {
        bVar1 = *(uint *)(lVar4 + 0x20) < uVar2;
        if (!bVar1) {
          lVar3 = lVar4;
        }
        lVar4 = *(long *)(lVar4 + (ulong)bVar1 * 8);
      } while (lVar4 != 0);
      if ((lVar3 != (long)param_1 + 0x138) && (*(uint *)(lVar3 + 0x20) <= uVar2)) {
        **(undefined8 **)((long)param_1 + 0x298) = *(undefined8 *)(lVar3 + 0x28);
      }
    }
  }
  return;
}


