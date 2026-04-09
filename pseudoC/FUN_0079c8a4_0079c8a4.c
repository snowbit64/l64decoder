// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079c8a4
// Entry Point: 0079c8a4
// Size: 136 bytes
// Signature: undefined FUN_0079c8a4(void)


void FUN_0079c8a4(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[0xc];
  fVar2 = param_1[0x10];
  fVar3 = param_1[0x14];
  fVar4 = param_1[0x18];
  fVar5 = param_1[0x1c];
  fVar6 = param_1[0x20];
  MeshSplitManager::WorldCompressionParams::init
            ((WorldCompressionParams *)&DAT_02110378,*param_1,param_1[4],param_1[8]);
  MeshSplitManager::WorldCompressionParams::init
            ((WorldCompressionParams *)&DAT_0211038c,fVar1,fVar2,fVar3);
  MeshSplitManager::WorldCompressionParams::init
            ((WorldCompressionParams *)&DAT_021103a0,fVar4,fVar5,fVar6);
  return;
}


