// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: preallocateChildAlgorithms
// Entry Point: 00f4d584
// Size: 480 bytes
// Signature: undefined __thiscall preallocateChildAlgorithms(btCompoundCollisionAlgorithm * this, btCollisionObjectWrapper * param_1, btCollisionObjectWrapper * param_2)


/* btCompoundCollisionAlgorithm::preallocateChildAlgorithms(btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*) */

void __thiscall
btCompoundCollisionAlgorithm::preallocateChildAlgorithms
          (btCompoundCollisionAlgorithm *this,btCollisionObjectWrapper *param_1,
          btCollisionObjectWrapper *param_2)

{
  btCollisionObjectWrapper *pbVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  btCollisionObjectWrapper *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar2 = *(uint *)(this + 0x14);
  pbVar1 = param_2;
  if (this[0x30] != (btCompoundCollisionAlgorithm)0x0) {
    pbVar1 = param_1;
    param_1 = param_2;
  }
  lVar9 = *(long *)(param_1 + 8);
  uVar3 = *(uint *)(lVar9 + 0x24);
  if ((int)uVar2 < (int)uVar3) {
    lVar10 = (long)(int)uVar2;
    if (*(int *)(this + 0x18) < (int)uVar3) {
      if (uVar3 == 0) {
        lVar5 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar5 = (*(code *)PTR_FUN_01048e38)((long)(int)uVar3 << 3,0x10);
        uVar2 = *(uint *)(this + 0x14);
      }
      if (0 < (int)uVar2) {
        lVar7 = 0;
        do {
          *(undefined8 *)(lVar5 + lVar7) = *(undefined8 *)(*(long *)(this + 0x20) + lVar7);
          lVar7 = lVar7 + 8;
        } while ((ulong)uVar2 * 8 - lVar7 != 0);
      }
      if ((*(long *)(this + 0x20) != 0) && (this[0x28] != (btCompoundCollisionAlgorithm)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(long *)(this + 0x20) = lVar5;
      *(uint *)(this + 0x18) = uVar3;
      this[0x28] = (btCompoundCollisionAlgorithm)0x1;
    }
    do {
      *(undefined8 *)(*(long *)(this + 0x20) + lVar10 * 8) = 0;
      lVar10 = lVar10 + 1;
    } while ((int)uVar3 != lVar10);
  }
  *(uint *)(this + 0x14) = uVar3;
  if (0 < (int)uVar3) {
    uVar8 = 0;
    lVar10 = 0x40;
    do {
      if (*(long *)(lVar9 + 0x60) == 0) {
        local_80 = *(undefined8 *)(param_1 + 0x10);
        uStack_78 = *(undefined8 *)(param_1 + 0x18);
        uStack_88 = *(undefined8 *)(*(long *)(lVar9 + 0x30) + lVar10);
        uStack_6c = (undefined4)uVar8;
        local_70 = 0xffffffff;
        local_90 = param_1;
        uVar6 = (**(code **)(**(long **)(this + 8) + 0x10))
                          (*(long **)(this + 8),&local_90,pbVar1,*(undefined8 *)(this + 0x38));
        *(undefined8 *)(*(long *)(this + 0x20) + uVar8 * 8) = uVar6;
      }
      else {
        *(undefined8 *)(*(long *)(this + 0x20) + uVar8 * 8) = 0;
      }
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 0x58;
    } while (uVar3 != uVar8);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


