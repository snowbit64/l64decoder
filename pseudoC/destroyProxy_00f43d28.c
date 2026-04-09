// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroyProxy
// Entry Point: 00f43d28
// Size: 280 bytes
// Signature: undefined __thiscall destroyProxy(btDbvtBroadphase * this, btBroadphaseProxy * param_1, btDispatcher * param_2)


/* btDbvtBroadphase::destroyProxy(btBroadphaseProxy*, btDispatcher*) */

void __thiscall
btDbvtBroadphase::destroyProxy
          (btDbvtBroadphase *this,btBroadphaseProxy *param_1,btDispatcher *param_2)

{
  btDbvtBroadphase *pbVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  (**(code **)(*(long *)this + 0x70))();
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  pbVar1 = this + 0x68;
  if (*(int *)(param_1 + 0x58) != 2) {
    pbVar1 = this + 8;
  }
  FUN_00f424e4(pbVar1,uVar5);
  if (*(long *)(pbVar1 + 8) != 0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(pbVar1 + 8) = uVar5;
  puVar2 = (undefined8 *)(this + (long)*(int *)(param_1 + 0x58) * 8 + 200);
  if (*(long *)(param_1 + 0x48) != 0) {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x48) + 0x50);
  }
  iVar3 = *(int *)(pbVar1 + 0x14);
  *puVar2 = *(undefined8 *)(param_1 + 0x50);
  lVar4 = *(long *)(param_1 + 0x50);
  *(int *)(pbVar1 + 0x14) = iVar3 + -1;
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(param_1 + 0x48);
  }
  (**(code **)(**(long **)(this + 0xe0) + 0x20))(*(long **)(this + 0xe0),param_1,param_2);
  gNumAlignedFree = gNumAlignedFree + 1;
  (*(code *)PTR_FUN_01048e40)(param_1);
  this[0x11e] = (btDbvtBroadphase)0x1;
                    /* WARNING: Could not recover jumptable at 0x00f43e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x78))(this);
  return;
}


