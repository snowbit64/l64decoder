// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addLevel
// Entry Point: 00909ab0
// Size: 168 bytes
// Signature: undefined __cdecl addLevel(FileOutputStream * param_1, uint param_2)


/* I3DSave::addLevel(FileOutputStream&, unsigned int) */

void I3DSave::addLevel(FileOutputStream *param_1,uint param_2)

{
  char *__s;
  uint uVar1;
  FileOutputStream FVar2;
  size_t sVar3;
  long *this;
  
  if (param_2 != 0) {
    do {
      while( true ) {
        FVar2 = param_1[0x10];
        uVar1 = param_2;
        if (0x59 < param_2) {
          uVar1 = 0x5a;
        }
        this = *(long **)(param_1 + 8);
        __s = &UNK_00501a54 + -(ulong)(uVar1 << 1);
        sVar3 = strlen(__s);
        if (FVar2 == (FileOutputStream)0x0) break;
        File::writeDosEOLExpand((File *)this,__s,(uint)sVar3);
        param_2 = param_2 - uVar1;
        if (param_2 == 0) {
          return;
        }
      }
      (**(code **)(*this + 0x30))(this,__s);
      param_2 = param_2 - uVar1;
    } while (param_2 != 0);
  }
  return;
}


