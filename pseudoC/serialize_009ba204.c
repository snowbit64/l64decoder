// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serialize
// Entry Point: 009ba204
// Size: 116 bytes
// Signature: undefined __thiscall serialize(btConvexInternalShape * this, void * param_1, btSerializer * param_2)


/* btConvexInternalShape::serialize(void*, btSerializer*) const */

char * __thiscall
btConvexInternalShape::serialize(btConvexInternalShape *this,void *param_1,btSerializer *param_2)

{
  btCollisionShape::serialize((btCollisionShape *)this,param_1,param_2);
  *(undefined4 *)((long)param_1 + 0x20) = *(undefined4 *)(this + 0x2c);
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(this + 0x30);
  *(undefined4 *)((long)param_1 + 0x28) = *(undefined4 *)(this + 0x34);
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(this + 0x38);
  *(undefined4 *)((long)param_1 + 0x10) = *(undefined4 *)(this + 0x1c);
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(this + 0x20);
  *(undefined4 *)((long)param_1 + 0x18) = *(undefined4 *)(this + 0x24);
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)(this + 0x28);
  *(undefined4 *)((long)param_1 + 0x30) = *(undefined4 *)(this + 0x3c);
  return "btConvexInternalShapeData";
}


