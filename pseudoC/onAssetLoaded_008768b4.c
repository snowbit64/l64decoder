// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onAssetLoaded
// Entry Point: 008768b4
// Size: 112 bytes
// Signature: undefined __thiscall onAssetLoaded(AnimalCompanionManager * this, TransformGroup * param_1, I3DAssetPtr * param_2)


/* non-virtual thunk to AnimalCompanionManager::onAssetLoaded(TransformGroup*, I3DAssetPtr*) */

void __thiscall
AnimalCompanionManager::onAssetLoaded
          (AnimalCompanionManager *this,TransformGroup *param_1,I3DAssetPtr *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((this + 0x10 == (AnimalCompanionManager *)param_2) && (*(int *)(this + 0x15c) != 0)) {
    uVar3 = 0;
    lVar4 = 8;
    do {
      uVar2 = CloneUtil::cloneScenegraphNode
                        (*(ScenegraphNode **)(this + 0x18),true,false,(MeshSplitFileState *)0x0);
      uVar3 = uVar3 + 1;
      uVar1 = *(uint *)(this + 0x15c);
      *(undefined8 *)(*(long *)(this + 0x80) + lVar4) = uVar2;
      lVar4 = lVar4 + 0x58;
    } while (uVar3 < uVar1);
  }
  return;
}


