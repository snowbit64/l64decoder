// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveSplitShapesToFilePrepare
// Entry Point: 0097ff84
// Size: 196 bytes
// Signature: undefined __thiscall saveSplitShapesToFilePrepare(MeshSplitManager * this, char * param_1)


/* MeshSplitManager::saveSplitShapesToFilePrepare(char const*) */

void __thiscall MeshSplitManager::saveSplitShapesToFilePrepare(MeshSplitManager *this,char *param_1)

{
  long lVar1;
  undefined8 *this_00;
  uint local_54;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x80) == 0) {
    Mutex::enterCriticalSection();
    saveSplitShapesToMem(this,&local_50,&local_54);
    Mutex::leaveCriticalSection();
    this_00 = (undefined8 *)operator_new(0x68);
                    /* try { // try from 0097fff0 to 0097ffff has its CatchHandler @ 00980048 */
    SaveHelper::SaveHelper((SaveHelper *)this_00,param_1,"SplitShapesSaveHelper");
    this_00[0xb] = local_50;
    *(uint *)(this_00 + 0xc) = local_54;
    *(undefined8 **)(this + 0x80) = this_00;
    *this_00 = &PTR__SplitShapesSaveHelper_00fe0a10;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


