// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveLodNormalMapSys
// Entry Point: 008eaf2c
// Size: 132 bytes
// Signature: undefined __thiscall saveLodNormalMapSys(BaseTerrain * this, char * param_1)


/* BaseTerrain::saveLodNormalMapSys(char const*) */

bool __thiscall BaseTerrain::saveLodNormalMapSys(BaseTerrain *this,char *param_1)

{
  bool bVar1;
  long *plVar2;
  
  if (*(long *)(this + 0xe0) == 0) {
    bVar1 = false;
  }
  else {
    plVar2 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,1,
                                      false);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x30))
                (plVar2,*(undefined8 *)(this + 0xe0),
                 (*(int *)(this + 0x90) + -1) * (*(int *)(this + 0x90) + -1) * 2);
      (**(code **)(*plVar2 + 8))(plVar2);
    }
    bVar1 = plVar2 != (long *)0x0;
  }
  return bVar1;
}


