// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sendRequestToWorker
// Entry Point: 008f723c
// Size: 228 bytes
// Signature: undefined __thiscall sendRequestToWorker(TerrainPatchOccluderManager * this, RequestDesc * param_1)


/* TerrainPatchOccluderManager::sendRequestToWorker(TerrainPatchOccluderManager::RequestDesc const&)
    */

void __thiscall
TerrainPatchOccluderManager::sendRequestToWorker
          (TerrainPatchOccluderManager *this,RequestDesc *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  ThreadPoolTaskManager *this_00;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar4 = *(uint *)(param_1 + 8);
  iVar5 = *(int *)(this + 0xf8);
  lVar1 = 0x150;
  if ((ulong)uVar4 != 0) {
    lVar1 = 0x170;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 0x10);
  lVar8 = *(long *)(this + 0x118);
  *(int *)(this + lVar1) = *(int *)(this + lVar1) + 1;
  *(undefined *)
   (lVar8 + (ulong)(uint)(iVar2 + iVar5 * iVar3) * 0x380 + (ulong)uVar4 * 0x80 +
   (ulong)*(uint *)(param_1 + 0x14) * 0x20) = 1;
  puVar6 = (undefined8 *)operator_new(0x88);
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR__Task_00fde908;
                    /* try { // try from 008f72c8 to 008f72d7 has its CatchHandler @ 008f7320 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(puVar6 + 2));
  puVar6[5] = this;
  uVar10 = *(undefined8 *)(param_1 + 8);
  uVar9 = *(undefined8 *)param_1;
  *(undefined *)(puVar6 + 0xc) = 0;
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  this_00 = *(ThreadPoolTaskManager **)(this + 0x178);
  puVar6[7] = uVar10;
  puVar6[6] = uVar9;
  puVar6[8] = uVar7;
  *puVar6 = &PTR__Task_00fde8b8;
  puVar6[0xd] = 0;
  ThreadPoolTaskManager::issueTask(this_00,(Task *)puVar6);
  return;
}


