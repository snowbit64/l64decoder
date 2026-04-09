// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateActivationState
// Entry Point: 00f5622c
// Size: 128 bytes
// Signature: undefined __cdecl updateActivationState(btCollisionWorld * param_1, btDispatcher * param_2)


/* btSimulationIslandManager::updateActivationState(btCollisionWorld*, btDispatcher*) */

void btSimulationIslandManager::updateActivationState
               (btCollisionWorld *param_1,btDispatcher *param_2)

{
  int iVar1;
  btDispatcher *extraout_x1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  uVar2 = (ulong)*(uint *)(param_2 + 0xc);
  if ((int)*(uint *)(param_2 + 0xc) < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    plVar3 = *(long **)(param_2 + 0x18);
    do {
      lVar4 = *plVar3;
      if ((*(byte *)(lVar4 + 0xe0) & 3) == 0) {
        *(int *)(lVar4 + 0xe4) = iVar1;
        *(undefined4 *)(lVar4 + 0x114) = 0x3f800000;
        iVar1 = iVar1 + 1;
      }
      uVar2 = uVar2 - 1;
      plVar3 = plVar3 + 1;
    } while (uVar2 != 0);
  }
  btUnionFind::reset((btUnionFind *)(param_1 + 8),iVar1);
  findUnions((btSimulationIslandManager *)param_1,extraout_x1,(btCollisionWorld *)param_2);
  return;
}


