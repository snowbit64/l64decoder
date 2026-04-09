// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateInitialGenerationRequest
// Entry Point: 008f60d0
// Size: 228 bytes
// Signature: undefined updateInitialGenerationRequest(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainPatchOccluderManager::updateInitialGenerationRequest() */

void TerrainPatchOccluderManager::updateInitialGenerationRequest(void)

{
  uint uVar1;
  long lVar2;
  TerrainPatchOccluderManager *in_x0;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 local_60;
  undefined4 local_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (in_x0[0x130] != (TerrainPatchOccluderManager)0x0) {
    plVar3 = *(long **)(in_x0 + 0x180);
    *(undefined2 *)(in_x0 + 0x130) = 0x100;
    if ((plVar3 == (long *)0x0) || ((plVar3[1] - *plVar3 & 0x7fffffff0U) == 0)) {
      initMultipleWorkers();
    }
    if (*(int *)(in_x0 + 0xf8) != 0) {
      uVar4 = 0;
      uVar1 = *(uint *)(*(long *)(in_x0 + 0x68) + 0x268);
      do {
        uVar5 = 0;
        do {
          uVar6 = 0;
          do {
            local_60 = *(undefined8 *)(in_x0 + 0x68);
            local_58 = 0;
            uStack_54 = uVar5;
            local_50 = uVar4;
            uStack_4c = uVar6;
            sendRequestToWorker(in_x0,(RequestDesc *)&local_60);
            uVar6 = uVar6 + 1;
          } while (uVar6 <= uVar1);
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)(in_x0 + 0xf8));
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(in_x0 + 0xf8));
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


