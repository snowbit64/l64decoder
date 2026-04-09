// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: completeSharedRequest
// Entry Point: 00905ff0
// Size: 120 bytes
// Signature: undefined __thiscall completeSharedRequest(I3DManager * this, StreamI3DRequest * param_1)


/* I3DManager::completeSharedRequest(I3DManager::StreamI3DRequest*) */

void __thiscall I3DManager::completeSharedRequest(I3DManager *this,StreamI3DRequest *param_1)

{
  int iVar1;
  undefined8 uVar2;
  ScenegraphNode **ppSVar3;
  
  ppSVar3 = *(ScenegraphNode ***)(param_1 + 8);
  if ((*ppSVar3 == (ScenegraphNode *)0x0) || (*(long *)(param_1 + 0x20) == 0)) {
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  else {
    uVar2 = CloneUtil::cloneScenegraphNode
                      (*ppSVar3,(bool)param_1[0x10],(bool)param_1[0x11],
                       *(MeshSplitFileState **)(param_1 + 0x18));
    ppSVar3 = *(ScenegraphNode ***)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
  }
  iVar1 = *(int *)((long)ppSVar3 + 0xc);
  *(int *)(param_1 + 0x3c) = iVar1;
  param_1[0x30] = (StreamI3DRequest)0x1;
  if (iVar1 != 0) {
    unrefSharedI3D(this,(SharedI3D *)ppSVar3);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}


