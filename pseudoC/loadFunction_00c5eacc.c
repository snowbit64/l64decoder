// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadFunction
// Entry Point: 00c5eacc
// Size: 108 bytes
// Signature: undefined __cdecl loadFunction(uint param_1, char * param_2)


/* LibraryUtil::loadFunction(unsigned int, char const*) */

long LibraryUtil::loadFunction(uint param_1,char *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (DAT_0211f548 != (undefined8 *)0x0) {
    puVar2 = &DAT_0211f548;
    puVar3 = DAT_0211f548;
    do {
      if (*(uint *)(puVar3 + 4) >= param_1) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[*(uint *)(puVar3 + 4) < param_1];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_0211f548) && (*(uint *)(puVar2 + 4) <= param_1)) &&
       (lVar1 = dlsym(puVar2[5]), lVar1 != 0)) {
      return lVar1;
    }
  }
  return 0;
}


