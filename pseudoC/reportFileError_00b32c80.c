// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reportFileError
// Entry Point: 00b32c80
// Size: 128 bytes
// Signature: undefined __thiscall reportFileError(FileManager * this, char * param_1, FILE_ERROR param_2)


/* FileManager::reportFileError(char const*, FileManager::FILE_ERROR) */

void __thiscall FileManager::reportFileError(FileManager *this,char *param_1,FILE_ERROR param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  
  Mutex::enterCriticalSection();
  lVar2 = *(long *)(this + 0x18);
  if (*(long *)(this + 0x20) != lVar2) {
    uVar3 = 0;
    do {
      puVar1 = *(undefined8 **)(lVar2 + uVar3 * 8);
      (**(code **)*puVar1)(puVar1,param_1,param_2);
      lVar2 = *(long *)(this + 0x18);
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar3 < (ulong)(*(long *)(this + 0x20) - lVar2 >> 3));
  }
  Mutex::leaveCriticalSection();
  return;
}


