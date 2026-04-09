// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btCollisionDispatcher
// Entry Point: 00f478ac
// Size: 220 bytes
// Signature: undefined __thiscall btCollisionDispatcher(btCollisionDispatcher * this, btCollisionConfiguration * param_1)


/* btCollisionDispatcher::btCollisionDispatcher(btCollisionConfiguration*) */

void __thiscall
btCollisionDispatcher::btCollisionDispatcher
          (btCollisionDispatcher *this,btCollisionConfiguration *param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  btCollisionDispatcher *pbVar5;
  
  *(undefined4 *)(this + 8) = 2;
  this[0x28] = (btCollisionDispatcher)0x1;
  *(undefined ***)this = &PTR__btCollisionDispatcher_010192a0;
  *(undefined ***)(this + 0x30) = &PTR__Result_01019d38;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(btCollisionConfiguration **)(this + 0x2900) = param_1;
  *(code **)(this + 0x68) = defaultNearCallback;
  uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  lVar2 = *(long *)param_1;
  *(undefined8 *)(this + 0x70) = uVar1;
  uVar1 = (**(code **)(lVar2 + 0x10))(param_1);
  uVar3 = 0;
  pbVar5 = this + 0x80;
  *(undefined8 *)(this + 0x78) = uVar1;
  do {
    uVar4 = 0;
    do {
      uVar1 = (**(code **)(**(long **)(this + 0x2900) + 0x20))
                        (*(long **)(this + 0x2900),uVar3 & 0xffffffff,uVar4 & 0xffffffff);
      *(undefined8 *)(pbVar5 + uVar4 * 8) = uVar1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != 0x24);
    uVar3 = uVar3 + 1;
    pbVar5 = pbVar5 + 0x120;
  } while (uVar3 != 0x24);
  return;
}


