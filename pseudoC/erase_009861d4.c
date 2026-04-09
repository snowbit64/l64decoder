// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: erase
// Entry Point: 009861d4
// Size: 332 bytes
// Signature: undefined __thiscall erase(vector<MeshSplitManager::LoadedSplitShape,std::__ndk1::allocator<MeshSplitManager::LoadedSplitShape>> * this, __wrap_iter param_1, __wrap_iter param_2)


/* std::__ndk1::vector<MeshSplitManager::LoadedSplitShape,
   std::__ndk1::allocator<MeshSplitManager::LoadedSplitShape>
   >::erase(std::__ndk1::__wrap_iter<MeshSplitManager::LoadedSplitShape const*>,
   std::__ndk1::__wrap_iter<MeshSplitManager::LoadedSplitShape const*>) */

undefined8 * __thiscall
std::__ndk1::
vector<MeshSplitManager::LoadedSplitShape,std::__ndk1::allocator<MeshSplitManager::LoadedSplitShape>>
::erase(vector<MeshSplitManager::LoadedSplitShape,std::__ndk1::allocator<MeshSplitManager::LoadedSplitShape>>
        *this,__wrap_iter param_1,__wrap_iter param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar3 = (undefined8 *)(ulong)param_1;
  if (puVar3 != (undefined8 *)(ulong)param_2) {
    lVar2 = ((long)(undefined8 *)(ulong)param_2 - (long)puVar3) / 0x58;
    puVar4 = *(undefined8 **)(this + 8);
    puVar6 = puVar3 + lVar2 * 0xb;
    puVar7 = puVar3;
    if (puVar6 != puVar4) {
      do {
        puVar6 = puVar7 + lVar2 * 0xb;
        *puVar7 = *puVar6;
        uVar1 = *(undefined4 *)(puVar6 + 2);
        puVar7[1] = puVar6[1];
        *(undefined4 *)(puVar7 + 2) = uVar1;
        uVar5 = *(undefined8 *)((long)puVar6 + 0x14);
        *(undefined4 *)((long)puVar7 + 0x1c) = *(undefined4 *)((long)puVar6 + 0x1c);
        *(undefined8 *)((long)puVar7 + 0x14) = uVar5;
        uVar5 = puVar7[4];
        puVar7[4] = puVar6[4];
        puVar6[4] = uVar5;
        uVar5 = puVar7[5];
        puVar7[5] = puVar6[5];
        puVar6[5] = uVar5;
        uVar5 = puVar7[6];
        puVar7[6] = puVar6[6];
        puVar6[6] = uVar5;
        uVar5 = puVar7[7];
        puVar7[7] = puVar6[7];
        puVar6[7] = uVar5;
        uVar5 = puVar7[8];
        puVar7[8] = puVar6[8];
        puVar6[8] = uVar5;
        uVar5 = puVar7[9];
        puVar7[9] = puVar6[9];
        puVar6[9] = uVar5;
        uVar5 = puVar7[10];
        puVar7[10] = puVar6[10];
        puVar7 = puVar7 + 0xb;
        puVar6[10] = uVar5;
      } while (puVar7 + lVar2 * 0xb != puVar4);
      puVar6 = *(undefined8 **)(this + 8);
    }
    while (puVar6 != puVar7) {
      puVar6 = puVar6 + -0xb;
      MeshSplitManager::LoadedSplitShape::~LoadedSplitShape((LoadedSplitShape *)puVar6);
    }
    *(undefined8 **)(this + 8) = puVar7;
  }
  return puVar3;
}


