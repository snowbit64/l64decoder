// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: imageExists
// Entry Point: 00963988
// Size: 152 bytes
// Signature: undefined __cdecl imageExists(char * param_1)


/* TextureUtil::imageExists(char const*) */

undefined8 TextureUtil::imageExists(char *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  ulong uVar4;
  
  pcVar1 = strrchr(param_1,0x2e);
  if (pcVar1 != (char *)0x0) {
    pcVar3 = *(char **)s_specificFileSuffixes;
    if (pcVar3 != (char *)0x0) {
      uVar4 = 1;
      do {
        pcVar3 = (char *)checkFileExistWithAnotherExtension(param_1,pcVar1,pcVar3);
        if (pcVar3 != param_1) {
          if (pcVar3 != (char *)0x0) {
            operator_delete__(pcVar3);
          }
          return 1;
        }
        pcVar3 = *(char **)(s_specificFileSuffixes + uVar4 * 8);
        uVar4 = (ulong)((int)uVar4 + 1);
      } while (pcVar3 != (char *)0x0);
    }
  }
  uVar2 = FileManager::exist((FileManager *)FileManager::s_singletonFileManager,param_1);
  return uVar2;
}


