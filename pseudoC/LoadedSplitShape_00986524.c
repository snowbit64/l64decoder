// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LoadedSplitShape
// Entry Point: 00986524
// Size: 188 bytes
// Signature: undefined __thiscall ~LoadedSplitShape(LoadedSplitShape * this)


/* MeshSplitManager::LoadedSplitShape::~LoadedSplitShape() */

void __thiscall MeshSplitManager::LoadedSplitShape::~LoadedSplitShape(LoadedSplitShape *this)

{
  long **pplVar1;
  int iVar2;
  void *pvVar3;
  long *plVar4;
  long **pplVar5;
  
  plVar4 = *(long **)(this + 0x20);
  if ((plVar4 != (long *)0x0) && (iVar2 = FUN_00f27700(0xffffffff,plVar4 + 1), iVar2 < 2)) {
                    /* try { // try from 0098655c to 00986563 has its CatchHandler @ 009865e0 */
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  pplVar1 = *(long ***)(this + 0x30);
  for (pplVar5 = *(long ***)(this + 0x28); pplVar5 != pplVar1; pplVar5 = pplVar5 + 1) {
    plVar4 = *pplVar5;
    iVar2 = FUN_00f27700(0xffffffff,plVar4 + 1);
    if (iVar2 < 2) {
                    /* try { // try from 00986598 to 0098659f has its CatchHandler @ 009865e4 */
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  pvVar3 = *(void **)(this + 0x40);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x48) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x28);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar3;
    operator_delete(pvVar3);
    return;
  }
  return;
}


