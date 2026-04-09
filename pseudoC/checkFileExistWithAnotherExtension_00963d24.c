// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkFileExistWithAnotherExtension
// Entry Point: 00963d24
// Size: 152 bytes
// Signature: undefined __cdecl checkFileExistWithAnotherExtension(char * param_1, char * param_2, char * param_3)


/* TextureUtil::checkFileExistWithAnotherExtension(char const*, char const*, char const*) */

char * TextureUtil::checkFileExistWithAnotherExtension(char *param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  char *__dest;
  ulong uVar2;
  size_t __n;
  
  sVar1 = strlen(param_3);
  __n = (long)param_2 - (long)param_1;
  __dest = (char *)operator_new__(__n + (sVar1 & 0xffffffff) + 1);
  memcpy(__dest,param_1,__n);
  memcpy(__dest + __n,param_3,(ulong)((int)sVar1 + 1));
  uVar2 = FileManager::exist((FileManager *)FileManager::s_singletonFileManager,__dest);
  if ((uVar2 & 1) == 0) {
    operator_delete__(__dest);
    __dest = param_1;
  }
  return __dest;
}


