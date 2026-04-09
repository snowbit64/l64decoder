// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeSave
// Entry Point: 00986494
// Size: 144 bytes
// Signature: undefined __thiscall executeSave(SplitShapesSaveHelper * this, char * param_1)


/* MeshSplitManager::SplitShapesSaveHelper::executeSave(char const*) */

bool __thiscall
MeshSplitManager::SplitShapesSaveHelper::executeSave(SplitShapesSaveHelper *this,char *param_1)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  
  plVar3 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,1,
                                    false);
  if (plVar3 == (long *)0x0) {
    bVar1 = false;
  }
  else {
    uVar4 = (**(code **)(*plVar3 + 0x10))();
    if ((uVar4 & 1) == 0) {
      bVar1 = false;
    }
    else {
      iVar2 = (**(code **)(*plVar3 + 0x30))
                        (plVar3,*(undefined8 *)(this + 0x58),*(undefined4 *)(this + 0x60));
      bVar1 = iVar2 == *(int *)(this + 0x60);
    }
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  return bVar1;
}


