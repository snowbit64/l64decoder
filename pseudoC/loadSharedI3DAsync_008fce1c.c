// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadSharedI3DAsync
// Entry Point: 008fce1c
// Size: 252 bytes
// Signature: undefined __thiscall loadSharedI3DAsync(I3DAssetPtr * this, char * param_1, bool param_2, bool param_3, MeshSplitFileState * param_4, bool param_5, bool param_6, Loader * param_7)


/* I3DAssetPtr::loadSharedI3DAsync(char const*, bool, bool, MeshSplitFileState const*, bool, bool,
   I3DAssetPtr::Loader*) */

void __thiscall
I3DAssetPtr::loadSharedI3DAsync
          (I3DAssetPtr *this,char *param_1,bool param_2,bool param_3,MeshSplitFileState *param_4,
          bool param_5,bool param_6,Loader *param_7)

{
  undefined4 uVar1;
  I3DManager *pIVar2;
  I3DStreamingManager *this_00;
  undefined8 *puVar3;
  
  if (*(int *)(this + 4) != 0) {
    if (*this == (I3DAssetPtr)0x0) {
      this_00 = (I3DStreamingManager *)I3DStreamingManager::getInstance();
      I3DStreamingManager::cancelI3DLoadTask(this_00,*(uint *)(this + 4),true);
    }
    else {
      pIVar2 = (I3DManager *)I3DManager::getInstance();
      I3DManager::releaseSharedI3D(pIVar2,*(uint *)(this + 4),false);
    }
  }
  *this = (I3DAssetPtr)0x0;
  *(undefined4 *)(this + 4) = 0;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(Loader **)(this + 0x18) = param_7;
  *this = (I3DAssetPtr)0x1;
  pIVar2 = (I3DManager *)I3DManager::getInstance();
  puVar3 = (undefined8 *)operator_new(0x10);
  *puVar3 = &PTR__IStreamingCallback_00fde930;
  puVar3[1] = this;
  uVar1 = I3DManager::addSharedI3DLoadTask
                    (pIVar2,param_1,param_2,param_3,param_4,param_5,(IStreamingCallback *)puVar3,
                     param_6);
  *(undefined4 *)(this + 4) = uVar1;
  return;
}


