// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetResolution
// Entry Point: 00d9fb8c
// Size: 344 bytes
// Signature: undefined __thiscall SetResolution(MaskedOcclusionCullingPrivate * this, uint param_1, uint param_2)


/* MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::SetResolution(unsigned int, unsigned
   int) */

void __thiscall
MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::SetResolution
          (MaskedOcclusionCullingPrivate *this,uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (*(long *)(this + 0x138) != 0) {
    (**(code **)(this + 0x10))();
  }
  fVar7 = 2.0 / (float)param_1;
  fVar4 = (float)param_1 * 0.5;
  fVar8 = (float)-param_2 * 0.5;
  iVar1 = (int)(param_1 + 0x1f) >> 5;
  fVar6 = (float)param_2 * 0.5;
  uVar3 = CONCAT44(fVar4,fVar4);
  iVar2 = (int)(param_2 + 3) >> 2;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(uint *)(this + 0x148) = param_1 + 0x1f & 0xffffffe0;
  *(uint *)(this + 0x124) = param_1;
  *(uint *)(this + 0x128) = param_2;
  *(uint *)(this + 0x110) = param_1 - 1;
  *(uint *)(this + 0x114) = param_1 - 1;
  *(uint *)(this + 0x118) = param_2 - 1;
  *(uint *)(this + 0x11c) = param_2 - 1;
  fVar5 = 2.0 / (float)param_2;
  *(ulong *)(this + 0x88) = CONCAT44(fVar4,fVar4);
  *(undefined8 *)(this + 0x80) = uVar3;
  *(ulong *)(this + 0x98) = CONCAT44(fVar6,fVar6);
  *(ulong *)(this + 0x90) = CONCAT44(fVar6,fVar6);
  *(ulong *)(this + 0x68) = CONCAT44(fVar4,fVar4);
  *(undefined8 *)(this + 0x60) = uVar3;
  *(ulong *)(this + 0x78) = CONCAT44(fVar8,fVar8);
  *(ulong *)(this + 0x70) = CONCAT44(fVar8,fVar8);
  *(int *)(this + 300) = iVar1;
  *(int *)(this + 0x130) = iVar2;
  *(ulong *)(this + 0xf8) = CONCAT44(fVar8,fVar8);
  *(undefined8 *)(this + 0xf0) = uVar3;
  *(ulong *)(this + 0x108) = CONCAT44(fVar6,fVar6);
  *(undefined8 *)(this + 0x100) = uVar3;
  *(uint *)(this + 0x14c) = param_2 + 3 & 0xfffffffc;
  *(undefined8 *)(this + 0xb8) = 0x3f800000;
  *(ulong *)(this + 0xb0) = (ulong)(uint)(1.0 - fVar7);
  *(undefined8 *)(this + 200) = 0x3f800000;
  *(ulong *)(this + 0xc0) = (ulong)(uint)(fVar7 + -1.0);
  *(undefined8 *)(this + 0xd8) = 0x3f800000;
  *(ulong *)(this + 0xd0) = (ulong)(uint)(1.0 - fVar5) << 0x20;
  *(undefined8 *)(this + 0xe8) = 0x3f800000;
  *(ulong *)(this + 0xe0) = (ulong)(uint)(fVar5 + -1.0) << 0x20;
  if (0 < iVar2 * iVar1) {
    uVar3 = (**(code **)(this + 8))
                      (0x40,((long)iVar1 * (long)iVar2 * 2 + (long)iVar1 * (long)iVar2) * 0x10);
    *(undefined8 *)(this + 0x138) = uVar3;
  }
  return;
}


