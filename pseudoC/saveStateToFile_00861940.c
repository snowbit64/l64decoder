// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveStateToFile
// Entry Point: 00861940
// Size: 228 bytes
// Signature: undefined __thiscall saveStateToFile(DensityMapHeightUpdater * this, char * param_1)


/* DensityMapHeightUpdater::saveStateToFile(char const*) */

void __thiscall
DensityMapHeightUpdater::saveStateToFile(DensityMapHeightUpdater *this,char *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined auStack_438 [1024];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,1,
                                    false);
  if (plVar2 != (long *)0x0) {
    FUN_00861a24((double)*(float *)(this + 0xc80),auStack_438);
    uVar3 = __strlen_chk(auStack_438,0x400);
    (**(code **)(*plVar2 + 0x30))(plVar2,auStack_438,uVar3);
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar2 != (long *)0x0);
}


