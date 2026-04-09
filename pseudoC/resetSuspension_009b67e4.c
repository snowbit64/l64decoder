// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resetSuspension
// Entry Point: 009b67e4
// Size: 108 bytes
// Signature: undefined __cdecl resetSuspension(Bt2World * param_1)


/* Bt2RaycastVehicle::resetSuspension(Bt2World*) */

void Bt2RaycastVehicle::resetSuspension(Bt2World *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar1 = *(uint *)(param_1 + 0x3c);
  uVar2 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    lVar4 = *(long *)(param_1 + 0x48);
    if (uVar1 == 1) {
      uVar6 = 0;
    }
    else {
      uVar6 = uVar2 & 0xfffffffe;
      uVar7 = uVar6;
      lVar3 = lVar4;
      do {
        *(undefined8 *)(lVar3 + 0x20) = 0;
        uVar7 = uVar7 - 2;
        *(undefined8 *)(lVar3 + 0x1c0) = 0;
        lVar3 = lVar3 + 0x340;
      } while (uVar7 != 0);
      if (uVar6 == uVar2) {
        return;
      }
    }
    lVar3 = uVar2 - uVar6;
    puVar5 = (undefined8 *)(lVar4 + uVar6 * 0x1a0 + 0x20);
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 0x34;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}


