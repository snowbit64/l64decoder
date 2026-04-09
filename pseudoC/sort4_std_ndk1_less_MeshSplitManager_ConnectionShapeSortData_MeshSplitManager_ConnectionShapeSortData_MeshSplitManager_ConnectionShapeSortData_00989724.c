// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort4<std::__ndk1::__less<MeshSplitManager::ConnectionShapeSortData,MeshSplitManager::ConnectionShapeSortData>&,MeshSplitManager::ConnectionShapeSortData*>
// Entry Point: 00989724
// Size: 320 bytes
// Signature: uint __cdecl __sort4<std::__ndk1::__less<MeshSplitManager::ConnectionShapeSortData,MeshSplitManager::ConnectionShapeSortData>&,MeshSplitManager::ConnectionShapeSortData*>(ConnectionShapeSortData * param_1, ConnectionShapeSortData * param_2, ConnectionShapeSortData * param_3, ConnectionShapeSortData * param_4, __less * param_5)


/* unsigned int std::__ndk1::__sort4<std::__ndk1::__less<MeshSplitManager::ConnectionShapeSortData,
   MeshSplitManager::ConnectionShapeSortData>&,
   MeshSplitManager::ConnectionShapeSortData*>(MeshSplitManager::ConnectionShapeSortData*,
   MeshSplitManager::ConnectionShapeSortData*, MeshSplitManager::ConnectionShapeSortData*,
   MeshSplitManager::ConnectionShapeSortData*,
   std::__ndk1::__less<MeshSplitManager::ConnectionShapeSortData,
   MeshSplitManager::ConnectionShapeSortData>&) */

uint std::__ndk1::
     __sort4<std::__ndk1::__less<MeshSplitManager::ConnectionShapeSortData,MeshSplitManager::ConnectionShapeSortData>&,MeshSplitManager::ConnectionShapeSortData*>
               (ConnectionShapeSortData *param_1,ConnectionShapeSortData *param_2,
               ConnectionShapeSortData *param_3,ConnectionShapeSortData *param_4,__less *param_5)

{
  float fVar1;
  uint uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *(float *)(param_2 + 4);
  fVar4 = *(float *)(param_3 + 4);
  if (fVar5 <= *(float *)(param_1 + 4)) {
    if (fVar4 <= fVar5) {
      uVar2 = 0;
      goto LAB_009897ec;
    }
    uVar3 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = uVar3;
    if (*(float *)(param_1 + 4) < *(float *)(param_2 + 4)) {
      uVar3 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      uVar2 = 2;
      *(undefined8 *)param_2 = uVar3;
      fVar4 = *(float *)(param_3 + 4);
      goto LAB_009897ec;
    }
    fVar4 = (float)((ulong)uVar3 >> 0x20);
LAB_009897e8:
    uVar2 = 1;
  }
  else {
    uVar3 = *(undefined8 *)param_1;
    fVar1 = (float)((ulong)uVar3 >> 0x20);
    if (fVar4 <= fVar5) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = uVar3;
      fVar4 = *(float *)(param_3 + 4);
      if (fVar4 <= fVar1) goto LAB_009897e8;
      uVar2 = 2;
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
    }
    else {
      uVar2 = 1;
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
    }
    *(undefined8 *)param_3 = uVar3;
    fVar4 = fVar1;
  }
LAB_009897ec:
  if (fVar4 < *(float *)(param_4 + 4)) {
    uVar3 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = *(undefined8 *)param_4;
    *(undefined8 *)param_4 = uVar3;
    if (*(float *)(param_3 + 4) <= *(float *)(param_2 + 4)) {
      return uVar2 + 1;
    }
    uVar3 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = uVar3;
    if (*(float *)(param_2 + 4) <= *(float *)(param_1 + 4)) {
      return uVar2 + 2;
    }
    uVar2 = uVar2 + 3;
    uVar3 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = uVar3;
  }
  return uVar2;
}


