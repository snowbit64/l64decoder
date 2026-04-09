// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBroadphaseAabb
// Entry Point: 00f44464
// Size: 180 bytes
// Signature: undefined __thiscall getBroadphaseAabb(btDbvtBroadphase * this, btVector3 * param_1, btVector3 * param_2)


/* btDbvtBroadphase::getBroadphaseAabb(btVector3&, btVector3&) const */

void __thiscall
btDbvtBroadphase::getBroadphaseAabb(btDbvtBroadphase *this,btVector3 *param_1,btVector3 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  float fVar7;
  uint uVar8;
  
  (**(code **)(*(long *)this + 0x70))();
  puVar2 = *(undefined8 **)(this + 8);
  puVar1 = *(undefined8 **)(this + 0x68);
  if (puVar2 == (undefined8 *)0x0) {
    if (puVar1 == (undefined8 *)0x0) {
      uVar3 = 0;
      uVar4 = 0;
      uVar5 = 0;
      uVar6 = 0;
    }
    else {
      uVar4 = puVar1[1];
      uVar3 = *puVar1;
      uVar6 = puVar1[3];
      uVar5 = puVar1[2];
    }
  }
  else if (puVar1 == (undefined8 *)0x0) {
    uVar4 = puVar2[1];
    uVar3 = *puVar2;
    uVar6 = puVar2[3];
    uVar5 = puVar2[2];
  }
  else {
    uVar3 = NEON_fminnm(*puVar2,*puVar1,4);
    uVar5 = NEON_fmaxnm(puVar2[2],puVar1[2],4);
    uVar8 = NEON_fminnm(*(undefined4 *)(puVar2 + 1),*(undefined4 *)(puVar1 + 1));
    fVar7 = *(float *)(puVar2 + 3);
    if (*(float *)(puVar2 + 3) <= *(float *)(puVar1 + 3)) {
      fVar7 = *(float *)(puVar1 + 3);
    }
    uVar4 = (ulong)uVar8;
    uVar6 = (ulong)(uint)fVar7;
  }
  *(ulong *)(param_1 + 8) = uVar4;
  *(undefined8 *)param_1 = uVar3;
  *(ulong *)(param_2 + 8) = uVar6;
  *(undefined8 *)param_2 = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00f44514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x78))(this);
  return;
}


