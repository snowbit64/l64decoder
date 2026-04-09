// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addSingleResult
// Entry Point: 009c04f4
// Size: 36 bytes
// Signature: undefined __cdecl addSingleResult(btManifoldPoint * param_1, btCollisionObjectWrapper * param_2, int param_3, int param_4, btCollisionObjectWrapper * param_5, int param_6, int param_7)


/* Bt2SceneQueryUtil::SingleResultCallback::addSingleResult(btManifoldPoint&,
   btCollisionObjectWrapper const*, int, int, btCollisionObjectWrapper const*, int, int) */

undefined  [16]
Bt2SceneQueryUtil::SingleResultCallback::addSingleResult
          (btManifoldPoint *param_1,btCollisionObjectWrapper *param_2,int param_3,int param_4,
          btCollisionObjectWrapper *param_5,int param_6,int param_7)

{
  ulong uVar1;
  undefined auVar2 [16];
  
  uVar1 = 0;
  if (*(float *)(param_2 + 0x50) < 0.0) {
    uVar1 = 0xbf800000;
    **(undefined **)(param_1 + 0x10) = 1;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  return auVar2;
}


