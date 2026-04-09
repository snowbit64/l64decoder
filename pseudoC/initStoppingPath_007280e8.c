// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initStoppingPath
// Entry Point: 007280e8
// Size: 36 bytes
// Signature: undefined __thiscall initStoppingPath(DynamicObstacle * this, uint param_1, float param_2, float param_3)


/* DynamicObstacle::initStoppingPath(unsigned int, float, float) */

void __thiscall
DynamicObstacle::initStoppingPath(DynamicObstacle *this,uint param_1,float param_2,float param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(long *)(this + 0x20) + (ulong)param_1 * 0x28);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(float *)(puVar1 + 3) = param_2;
  *(float *)((long)puVar1 + 0x1c) = param_3;
  *(undefined *)(puVar1 + 4) = 0;
  return;
}


