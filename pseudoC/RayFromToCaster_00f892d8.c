// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RayFromToCaster
// Entry Point: 00f892d8
// Size: 84 bytes
// Signature: undefined __thiscall RayFromToCaster(RayFromToCaster * this, btVector3 * param_1, btVector3 * param_2, float param_3)


/* btSoftBody::RayFromToCaster::RayFromToCaster(btVector3 const&, btVector3 const&, float) */

void __thiscall
btSoftBody::RayFromToCaster::RayFromToCaster
          (RayFromToCaster *this,btVector3 *param_1,btVector3 *param_2,float param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  *(undefined ***)this = &PTR__ICollide_0101b718;
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 8) = uVar1;
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)param_1;
  fVar3 = *(float *)(param_2 + 8);
  fVar4 = *(float *)(param_1 + 8);
  *(undefined4 *)(this + 0x34) = 0;
  *(ulong *)(this + 0x28) =
       CONCAT44((float)((ulong)uVar1 >> 0x20) - (float)((ulong)uVar2 >> 0x20),
                (float)uVar1 - (float)uVar2);
  *(float *)(this + 0x30) = fVar3 - fVar4;
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)param_2;
  *(float *)(this + 0x38) = param_3;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x20) = uVar2;
  *(undefined8 *)(this + 0x18) = uVar1;
  return;
}


