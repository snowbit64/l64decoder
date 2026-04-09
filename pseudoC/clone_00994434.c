// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 00994434
// Size: 408 bytes
// Signature: undefined __thiscall clone(Bt2PhysicsRBObject * this, TransformGroup * param_1)


/* Bt2PhysicsRBObject::clone(TransformGroup*) */

void __thiscall Bt2PhysicsRBObject::clone(Bt2PhysicsRBObject *this,TransformGroup *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  float fVar7;
  
  puVar5 = (undefined8 *)operator_new(0x90);
  puVar5[5] = param_1;
  puVar5[6] = 0;
  *(undefined4 *)(puVar5 + 1) = 0x80c;
  puVar5[8] = 0;
  puVar5[7] = 0;
  puVar5[10] = 0;
  puVar5[9] = 0;
  *(undefined4 *)((long)puVar5 + 0x84) = 0;
  *puVar5 = &PTR__Bt2PhysicsRBObject_00fe0ee8;
  puVar5[2] = 0;
  puVar5[3] = &PTR__Bt2PhysicsRBObject_00fe0f38;
  *(undefined8 *)((long)puVar5 + 100) = 0xbf8000003f000000;
  *(undefined8 *)((long)puVar5 + 0x5c) = 0x3f00000000000000;
  uVar1 = *(uint *)(this + 8);
  puVar5[0x11] = 0x400000000;
  *(undefined4 *)(puVar5 + 0xb) = 0xff;
  *(undefined8 *)((long)puVar5 + 0x74) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar5 + 0x6c) = 0x3c23d70a00000000;
  uVar6 = uVar1 | 0x80c;
  *(undefined8 *)((long)puVar5 + 0x7c) = 0;
  uVar4 = uVar1;
  if ((uVar1 >> 0xb & 1) == 0) {
    uVar4 = uVar1 | 0x800;
    uVar6 = uVar6 & 0xfffff7ff;
    *(uint *)(puVar5 + 4) = uVar4;
  }
  iVar2 = *(int *)(this + 0x58);
  *(uint *)(puVar5 + 1) = uVar6 & 0xfffffffc;
  if (iVar2 != 0xff) {
    uVar4 = uVar4 | 0x100000;
    *(int *)(puVar5 + 0xb) = iVar2;
  }
  if (*(float *)(this + 0x5c) != 0.0) {
    uVar4 = uVar4 | 0x200000;
    *(float *)((long)puVar5 + 0x5c) = *(float *)(this + 0x5c);
  }
  if (*(float *)(this + 0x60) != 0.5) {
    uVar4 = uVar4 | 0x400000;
    *(float *)(puVar5 + 0xc) = *(float *)(this + 0x60);
  }
  if (*(float *)(this + 100) != 0.5) {
    uVar4 = uVar4 | 0x400000;
    *(float *)((long)puVar5 + 100) = *(float *)(this + 100);
  }
  if (*(float *)(this + 0x68) != -1.0) {
    *(float *)(puVar5 + 0xd) = *(float *)(this + 0x68);
    *(uint *)(puVar5 + 4) = uVar4 | 0x400000;
  }
  if (*(float *)(this + 0x6c) != 0.0) {
    *(float *)((long)puVar5 + 0x6c) = *(float *)(this + 0x6c);
  }
  if (*(float *)(this + 0x70) != 0.01) {
    *(float *)(puVar5 + 0xe) = *(float *)(this + 0x70);
  }
  fVar7 = *(float *)(this + 0x74);
  *(uint *)(puVar5 + 1) = uVar6 & 0xfffdfffc;
  if (fVar7 <= 0.0001) {
    fVar7 = 0.0001;
  }
  *(float *)((long)puVar5 + 0x74) = fVar7;
  if ((uVar1 >> 0x10 & 1) != 0) {
    uVar3 = *(undefined4 *)(this + 0x84);
    *(undefined8 *)((long)puVar5 + 0x7c) = *(undefined8 *)(this + 0x7c);
    *(undefined4 *)((long)puVar5 + 0x84) = uVar3;
    *(uint *)(puVar5 + 1) = uVar6 & 0xfffdfffc | 0x10000;
  }
  uVar3 = *(undefined4 *)(this + 0x8c);
  *(undefined4 *)(puVar5 + 4) = 0;
  *(undefined4 *)((long)puVar5 + 0x8c) = uVar3;
  return;
}


