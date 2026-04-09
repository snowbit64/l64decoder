// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serialize
// Entry Point: 00f698c8
// Size: 96 bytes
// Signature: undefined __cdecl serialize(void * param_1, btSerializer * param_2)


/* btScaledBvhTriangleMeshShape::serialize(void*, btSerializer*) const */

char * btScaledBvhTriangleMeshShape::serialize(void *param_1,btSerializer *param_2)

{
  undefined4 uVar1;
  
  (**(code **)(**(long **)((long)param_1 + 0x30) + 0x70))();
  *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)((long)param_1 + 0x20);
  uVar1 = *(undefined4 *)((long)param_1 + 0x24);
  *(undefined4 *)(param_2 + 8) = 0x16;
  *(undefined4 *)(param_2 + 0x54) = uVar1;
  *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)((long)param_1 + 0x28);
  *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)((long)param_1 + 0x2c);
  return "btScaledTriangleMeshShapeData";
}


