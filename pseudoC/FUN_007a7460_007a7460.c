// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a7460
// Entry Point: 007a7460
// Size: 384 bytes
// Signature: undefined FUN_007a7460(void)


void FUN_007a7460(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  LODTransformGroup **ppLVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar2 = (uint)*(undefined8 *)(param_1 + 0x10);
  if ((uVar2 >> 0xb & 1) == 0) {
    if ((uVar2 >> 0xe & 1) == 0) {
      if ((uVar2 >> 0xd & 1) != 0) {
        LightSource::updateLODTransformGroup();
        if (*(LODTransformGroup **)(param_1 + 0x160) != (LODTransformGroup *)0x0) {
          ppLVar3 = (LODTransformGroup **)(param_1 + 0x160);
          fVar6 = *(float *)(param_1 + 0x124);
          fVar4 = (float)LODTransformGroup::getDistance
                                   (*(LODTransformGroup **)(param_1 + 0x160),
                                    *(int *)(param_1 + 0x168) + 1);
          uVar2 = *(uint *)(param_1 + 0x168);
          goto joined_r0x007a7538;
        }
      }
    }
    else {
      AudioSource::updateLODTransformGroup();
      if (*(LODTransformGroup **)(param_1 + 0x290) != (LODTransformGroup *)0x0) {
        ppLVar3 = (LODTransformGroup **)(param_1 + 0x290);
        fVar6 = *(float *)(param_1 + 0x124);
        fVar4 = (float)LODTransformGroup::getDistance
                                 (*(LODTransformGroup **)(param_1 + 0x290),
                                  *(int *)(param_1 + 0x28c) + 1);
        uVar2 = *(uint *)(param_1 + 0x28c);
joined_r0x007a7538:
        if ((fVar4 != 0.0) &&
           (uVar2 + 1 <
            (uint)((ulong)(*(long *)(*ppLVar3 + 0x30) - *(long *)(*ppLVar3 + 0x28)) >> 3)))
        goto LAB_007a7558;
        goto LAB_007a7560;
      }
    }
  }
  else {
    GsShape::updateLODTransformGroup();
    if (*(LODTransformGroup **)(param_1 + 0x188) != (LODTransformGroup *)0x0) {
      uVar2 = (uint)*(ushort *)(param_1 + 0x194);
      ppLVar3 = (LODTransformGroup **)(param_1 + 0x188);
      fVar6 = *(float *)(param_1 + 0x124);
      fVar4 = (float)LODTransformGroup::getDistance
                               (*(LODTransformGroup **)(param_1 + 0x188),uVar2 + 1);
      if ((fVar4 != 0.0) &&
         (uVar2 + 1 < (uint)((ulong)(*(long *)(*ppLVar3 + 0x30) - *(long *)(*ppLVar3 + 0x28)) >> 3))
         ) {
LAB_007a7558:
        if (fVar4 <= fVar6) {
          fVar6 = fVar4;
        }
      }
LAB_007a7560:
      if (uVar2 == 0) {
        fVar4 = -3.402823e+38;
      }
      else {
        fVar4 = (float)LODTransformGroup::getDistance(*ppLVar3,uVar2);
      }
      lVar1 = EngineManager::getInstance();
      fVar4 = fVar4 * *(float *)(lVar1 + 0x1c4);
      lVar1 = EngineManager::getInstance();
      fVar5 = *(float *)(lVar1 + 0x1c4);
      goto LAB_007a75b4;
    }
  }
  fVar4 = *(float *)(param_1 + 0x128);
  lVar1 = EngineManager::getInstance();
  fVar6 = *(float *)(param_1 + 0x124);
  fVar4 = fVar4 * *(float *)(lVar1 + 0x1c0);
  lVar1 = EngineManager::getInstance();
  fVar5 = *(float *)(lVar1 + 0x1c0);
LAB_007a75b4:
  *(float *)(param_2 + 0x100) = fVar4;
  *(undefined4 *)(param_2 + 0x108) = 4;
  *(float *)(param_2 + 0x110) = fVar6 * fVar5;
  *(undefined4 *)(param_2 + 0x118) = 4;
  return;
}


