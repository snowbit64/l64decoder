// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serialize
// Entry Point: 00f5e938
// Size: 212 bytes
// Signature: undefined __thiscall serialize(btCapsuleShape * this, void * param_1, btSerializer * param_2)


/* btCapsuleShape::serialize(void*, btSerializer*) const */

char * __thiscall
btCapsuleShape::serialize(btCapsuleShape *this,void *param_1,btSerializer *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  
  uVar3 = (**(code **)(*(long *)param_2 + 0x50))(param_2,this);
  lVar4 = (**(code **)(*(long *)param_2 + 0x38))(param_2,uVar3);
  *(long *)param_1 = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)param_2 + 0x60))(param_2,uVar3);
  }
  uVar1 = *(undefined4 *)(this + 8);
  uVar2 = *(undefined4 *)(this + 0x44);
  *(undefined4 *)((long)param_1 + 0x20) = *(undefined4 *)(this + 0x2c);
  uVar5 = *(undefined4 *)(this + 0x30);
  *(undefined4 *)((long)param_1 + 8) = uVar1;
  *(undefined4 *)((long)param_1 + 0x38) = uVar2;
  *(undefined4 *)((long)param_1 + 0x24) = uVar5;
  *(undefined4 *)((long)param_1 + 0x28) = *(undefined4 *)(this + 0x34);
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(this + 0x38);
  *(undefined4 *)((long)param_1 + 0x10) = *(undefined4 *)(this + 0x1c);
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(this + 0x20);
  *(undefined4 *)((long)param_1 + 0x18) = *(undefined4 *)(this + 0x24);
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)(this + 0x28);
  *(undefined4 *)((long)param_1 + 0x30) = *(undefined4 *)(this + 0x3c);
  return "btCapsuleShapeData";
}


