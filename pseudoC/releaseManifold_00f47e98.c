// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: releaseManifold
// Entry Point: 00f47e98
// Size: 228 bytes
// Signature: undefined __thiscall releaseManifold(btCollisionDispatcher * this, btPersistentManifold * param_1)


/* btCollisionDispatcher::releaseManifold(btPersistentManifold*) */

void __thiscall
btCollisionDispatcher::releaseManifold(btCollisionDispatcher *this,btPersistentManifold *param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  btPersistentManifold *pbVar5;
  long lVar6;
  undefined8 uVar7;
  
  gNumManifold = gNumManifold + -1;
  (**(code **)(*(long *)this + 0x28))();
  iVar1 = *(int *)(param_1 + 0x32c);
  lVar4 = *(long *)(this + 0x20);
  lVar2 = ((long)*(int *)(this + 0x14) + -1) * 8;
  lVar6 = (long)iVar1 * 8;
  *(int *)(this + 0x14) = (int)((long)*(int *)(this + 0x14) + -1);
  uVar7 = *(undefined8 *)(lVar4 + lVar6);
  *(undefined8 *)(lVar4 + lVar6) = *(undefined8 *)(lVar4 + lVar2);
  *(undefined8 *)(*(long *)(this + 0x20) + lVar2) = uVar7;
  piVar3 = *(int **)(this + 0x78);
  pbVar5 = *(btPersistentManifold **)(piVar3 + 6);
  *(int *)(*(long *)(*(long *)(this + 0x20) + lVar6) + 0x32c) = iVar1;
  if ((pbVar5 <= param_1) && (param_1 < pbVar5 + (long)*piVar3 * (long)piVar3[2])) {
    iVar1 = piVar3[2];
    *(undefined8 *)param_1 = *(undefined8 *)(piVar3 + 4);
    *(btPersistentManifold **)(piVar3 + 4) = param_1;
    piVar3[2] = iVar1 + 1;
    return;
  }
  gNumAlignedFree = gNumAlignedFree + 1;
                    /* WARNING: Could not recover jumptable at 0x00f47f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_01048e40)(param_1);
  return;
}


