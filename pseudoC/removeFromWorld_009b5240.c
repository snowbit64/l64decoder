// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeFromWorld
// Entry Point: 009b5240
// Size: 96 bytes
// Signature: undefined __thiscall removeFromWorld(Bt2RaycastVehicle * this, Bt2World * param_1)


/* Bt2RaycastVehicle::removeFromWorld(Bt2World*) */

void __thiscall Bt2RaycastVehicle::removeFromWorld(Bt2RaycastVehicle *this,Bt2World *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x1cc);
  if (0 < (int)uVar1) {
    uVar3 = 0;
    lVar2 = *(long *)(param_1 + 0x1d8);
    do {
      if (*(Bt2RaycastVehicle **)(lVar2 + uVar3 * 8) == this) {
        if ((int)uVar1 <= (int)uVar3) {
          return;
        }
        uVar1 = uVar1 - 1;
        uVar4 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
        uVar5 = *(undefined8 *)(lVar2 + uVar3 * 8);
        *(uint *)(param_1 + 0x1cc) = uVar1;
        *(undefined8 *)(lVar2 + uVar3 * 8) = *(undefined8 *)(lVar2 + uVar4);
        *(undefined8 *)(*(long *)(param_1 + 0x1d8) + uVar4) = uVar5;
        return;
      }
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  return;
}


