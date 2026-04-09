// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serialize
// Entry Point: 009ba020
// Size: 124 bytes
// Signature: undefined __thiscall serialize(btCylinderShape * this, void * param_1, btSerializer * param_2)


/* btCylinderShape::serialize(void*, btSerializer*) const */

char * __thiscall
btCylinderShape::serialize(btCylinderShape *this,void *param_1,btSerializer *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  btCollisionShape::serialize((btCollisionShape *)this,param_1,param_2);
  uVar1 = *(undefined4 *)(this + 0x44);
  *(undefined4 *)((long)param_1 + 0x20) = *(undefined4 *)(this + 0x2c);
  uVar2 = *(undefined4 *)(this + 0x30);
  *(undefined4 *)((long)param_1 + 0x38) = uVar1;
  *(undefined4 *)((long)param_1 + 0x24) = uVar2;
  *(undefined4 *)((long)param_1 + 0x28) = *(undefined4 *)(this + 0x34);
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(this + 0x38);
  *(undefined4 *)((long)param_1 + 0x10) = *(undefined4 *)(this + 0x1c);
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(this + 0x20);
  *(undefined4 *)((long)param_1 + 0x18) = *(undefined4 *)(this + 0x24);
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)(this + 0x28);
  *(undefined4 *)((long)param_1 + 0x30) = *(undefined4 *)(this + 0x3c);
  return "btCylinderShapeData";
}


