// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onHit
// Entry Point: 00873b3c
// Size: 52 bytes
// Signature: undefined __cdecl onHit(TransformGroup * param_1, Vector3 * param_2, float param_3, Vector3 * param_4, int param_5, TransformGroup * param_6, bool param_7)


/* AnimalCompanionManager::AnimalGroundProbeReport::onHit(TransformGroup*, Vector3 const&, float,
   Vector3 const&, int, TransformGroup*, bool) */

undefined8
AnimalCompanionManager::AnimalGroundProbeReport::onHit
          (TransformGroup *param_1,Vector3 *param_2,float param_3,Vector3 *param_4,int param_5,
          TransformGroup *param_6,bool param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)param_4;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_4 + 8);
  *(undefined8 *)(param_1 + 8) = uVar2;
  uVar1 = *(undefined4 *)((undefined8 *)(ulong)(uint)param_5 + 1);
  uVar2 = *(undefined8 *)(ulong)(uint)param_5;
  *(float *)(param_1 + 0x20) = param_3;
  *(ulong *)(param_1 + 0x28) = (ulong)param_7;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined8 *)(param_1 + 0x14) = uVar2;
  return 0;
}


