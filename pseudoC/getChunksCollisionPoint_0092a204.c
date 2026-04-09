// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getChunksCollisionPoint
// Entry Point: 0092a204
// Size: 280 bytes
// Signature: undefined __cdecl getChunksCollisionPoint(DestructionChunk * param_1, Matrix4x4 * param_2, DestructionChunk * param_3, Matrix4x4 * param_4, Vector3 * param_5, float param_6)


/* DestructionUtil::getChunksCollisionPoint(DestructionChunk*, Matrix4x4 const&, DestructionChunk*,
   Matrix4x4 const&, Vector3&, float) */

void DestructionUtil::getChunksCollisionPoint
               (DestructionChunk *param_1,Matrix4x4 *param_2,DestructionChunk *param_3,
               Matrix4x4 *param_4,Vector3 *param_5,float param_6)

{
  long lVar1;
  float local_224;
  GJKDistance aGStack_220 [240];
  undefined8 local_130;
  undefined4 local_128;
  Vector3 aVStack_120 [16];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uStack_108 = *(undefined8 *)(param_2 + 8);
  local_110 = *(undefined8 *)param_2;
  uStack_f8 = *(undefined8 *)(param_2 + 0x18);
  uStack_100 = *(undefined8 *)(param_2 + 0x10);
  local_70 = 0x5d5e0b6b;
  uStack_e8 = *(undefined8 *)(param_2 + 0x28);
  local_f0 = *(undefined8 *)(param_2 + 0x20);
  uStack_d8 = *(undefined8 *)(param_2 + 0x38);
  uStack_e0 = *(undefined8 *)(param_2 + 0x30);
  uStack_c8 = *(undefined8 *)(param_4 + 8);
  local_d0 = *(undefined8 *)param_4;
  uStack_b8 = *(undefined8 *)(param_4 + 0x18);
  uStack_c0 = *(undefined8 *)(param_4 + 0x10);
  uStack_a8 = *(undefined8 *)(param_4 + 0x28);
  local_b0 = *(undefined8 *)(param_4 + 0x20);
  uStack_98 = *(undefined8 *)(param_4 + 0x38);
  uStack_a0 = *(undefined8 *)(param_4 + 0x30);
  local_90 = DestructionChunk::getNumHullVertices();
  local_80 = DestructionChunk::getNumHullVertices();
  local_88 = DestructionChunk::getMarginHullVertices();
  local_78 = DestructionChunk::getMarginHullVertices();
  local_6c = DestructionChunk::getMargin();
  local_68 = DestructionChunk::getMargin();
  GJKDistance::getClosestPoints
            (aGStack_220,(ClosestPointsInput *)&local_110,&local_224,aVStack_120,
             (Vector3 *)&local_130);
  if (local_224 < param_6) {
    *(undefined8 *)param_5 = local_130;
    *(undefined4 *)(param_5 + 8) = local_128;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_224 < param_6);
}


