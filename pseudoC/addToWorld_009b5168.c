// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addToWorld
// Entry Point: 009b5168
// Size: 216 bytes
// Signature: undefined __thiscall addToWorld(Bt2RaycastVehicle * this, Bt2World * param_1)


/* Bt2RaycastVehicle::addToWorld(Bt2World*) */

void __thiscall Bt2RaycastVehicle::addToWorld(Bt2RaycastVehicle *this,Bt2World *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *(uint *)(param_1 + 0x1cc);
  if (uVar3 == *(uint *)(param_1 + 0x1d0)) {
    uVar1 = uVar3 << 1;
    if (uVar3 == 0) {
      uVar1 = 1;
    }
    if ((int)uVar3 < (int)uVar1) {
      if (uVar1 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = btAlignedAllocInternal
                          (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3,0x10);
        uVar3 = *(uint *)(param_1 + 0x1cc);
      }
      if (0 < (int)uVar3) {
        lVar4 = 0;
        do {
          *(undefined8 *)(lVar2 + lVar4) = *(undefined8 *)(*(long *)(param_1 + 0x1d8) + lVar4);
          lVar4 = lVar4 + 8;
        } while ((ulong)uVar3 * 8 - lVar4 != 0);
      }
      if ((*(void **)(param_1 + 0x1d8) != (void *)0x0) && (param_1[0x1e0] != (Bt2World)0x0)) {
        btAlignedFreeInternal(*(void **)(param_1 + 0x1d8));
        uVar3 = *(uint *)(param_1 + 0x1cc);
      }
      *(long *)(param_1 + 0x1d8) = lVar2;
      *(uint *)(param_1 + 0x1d0) = uVar1;
      param_1[0x1e0] = (Bt2World)0x1;
    }
  }
  *(Bt2RaycastVehicle **)(*(long *)(param_1 + 0x1d8) + (long)(int)uVar3 * 8) = this;
  *(uint *)(param_1 + 0x1cc) = uVar3 + 1;
  return;
}


